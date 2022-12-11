const PREC = {
    IDENTIFIER: 0,
    INTEGER: 2,
    BIT_STRING: 2,
    REAL: 3,
};

const immd = (x) => token.immediate(x);

const EXPONENT = /[eE][+-]?[0-9_]+/;

module.exports = grammar({

  name: 'vhdl',

  extras: $ => [
    $.comment,
    /\s/,
  ],

  inline: $ => [
  ],

  rules: {

    design_file: $ => repeat(
      $._sequential_stmt,
    ),

    // Sequential statements
    _sequential_stmt: $ => choice(
      $.assert_stmt,
      $.report_stmt,
    ),

    assert_stmt: $ => seq(
      optional($._label), 'assert', $._condition, ';'
    ),

    report_stmt: $ => seq(
      optional($._label), 'report', $._condition, ';'
    ),


    _label: $ => seq(alias($.identifier, $.label), immd(':')),

    // Names
    _name: $ => choice(
      $.identifier,
    ),

    // TODO: latin-1 chars
    identifier: $ => token(choice(
      seq(/[a-zA-Z][_a-zA-Z0-9]*/),
      seq(/\\.*?\\/), // extended identifier
    )),

    // Expression
    _expr: $ => choice(
      $._name,
      $._literal
    ),

    _condition: $ => field('condition', $._expr),

    // Lexical elements
    _literal: $ => choice(
      $._number,
      $.character,
      $.string,
      $.bit_string,
      $.null,
    ),

    _number: $ => choice(
      $._abstract_literal,
      $.physical,
    ),

    // maybe inline
    _abstract_literal: $ => choice(
      $.integer,
      $.real,
    ),

    integer: $ => token(choice(
      seq(/[0-9_]+/     ,optional(EXPONENT)),
      seq(/[0-9_]+#.*?#/,optional(EXPONENT)), // based integer
    )),

    real: $ => token(prec(1,choice(
      seq(/[0-9_]+\.[0-9_]+/ ,optional(EXPONENT)),
      seq(/[0-9_]+#.*?\..*?#/,optional(EXPONENT)), // based real
    ))),

    // NOTE: physical without abstract literal is ambiguos with names
    physical: $ => seq(
      field('abstract', $._abstract_literal),
      field('unit', $._name),
    ),

    // NOTE: Format effector have lenght greater than one
    character: $ => token(/'.*?'/),

    string: $ => token(/".*?"/),

    bit_string: $ => token(
      /[0-9_]*[usUS]?[boxdBOXD]".*?"/
    ),

    null: $ => token('null'),

    comment: $ => choice(
      token(/--.*/),
      // from https://re2c.org/examples/c/real_world/example_cxx98.html
      token(seq('/*', /([^\*]|(\*[^\/]))*/, '*/'))
    ),

  }

});
