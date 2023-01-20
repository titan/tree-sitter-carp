((symbol) @constant
 (#match? @constant "^[A-Z][A-Z\\d_]+$'"))

(comment) @comment
(char) @string
(string) @string
(rawstring) @string
(pattern) @string
(bool) @constant.builtin
(byte) @constant.numeric
(integer) @constant.numeric
(long) @constant.numeric
(float) @constant.numeric
(floatnoperiod) @constant.numeric
(double) @constant.numeric

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket

((symbol) @keyword.conditional
 (#match? @keyword.conditional "^(if|match|match-ref|cond|unless)$"))

((symbol) @keyword
 (#match? @keyword
  "^(doc|sig|hidden|private|register|register-type|implements|do|and|or|else|let|let-do|ref|the|aset!|set!|quote|unquote|quote-splicing|quasiquote|unquote-splicing|with|address|def|defn|defn-do|deftype|defmacro|defmodule|defdynamic|defndynamic|definterface|deftemplate|Fn|λ)$"))

((symbol) @keyword.function
 (#match? @keyword.function "^(fn)$"))

((symbol) @keyword.control.import
 (#match? @keyword.control.import "^(load|use|system-include|local-include)$"))

((symbol) @keyword.control.repeat
 (#match? @keyword.control.repeat "^(while|while-do|for|foreach|when|break)$"))

(list
  .
  (symbol) @_k
  .
  (symbol) @function.macro
  (#match? @_k "^(def|deftype|defmacro|defmodule|defdynamic|defndynamic|definterface|deftemplate)$"))

(list
  .
  (symbol) @operator
  (#match? @operator "^([+*/<>=-]|(<=)|(>=)|(=>))$"))

(list
  .
  (symbol) @_k
  .
  (symbol) @attribute
  (#match? @_k
    "^(doc|sig|hidden|private|register|register-type|implements|definterface)$"))

(list
  .
  (symbol) @_k
  .
  (symbol) @attribute
  (#match? @_k
    "^(defn|defn-do|defn-)$"))

(list
  .
  (symbol) @_k
  .
  (symbol) @namespace
  (#match? @_k
    "^(defmodule)$"))

(list
  .
  (symbol) @_k
  .
  (symbol) @type
  (#match? @_k
    "^(the)$"))

(list
  .
  (symbol) @_k
  .
  (array
    (_) @type)
  .
  (_) @type
  (#match? @_k
    "^(Fn|λ)$")
    )

