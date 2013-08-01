#include "namespace.h"
#include "melbourne.hpp"
#include "grammar.hpp"
#include "symbols.hpp"

#ifdef __cplusplus
extern "C" {
#endif

VALUE MELBOURNE_STRING_TO_AST(VALUE self, VALUE source, VALUE name, VALUE line) {
  StringValue(source);
  StringValue(name);
  VALUE result = MELBOURNE::string_to_ast(self, name, source, line);

  return result;
}

VALUE MELBOURNE_FILE_TO_AST(VALUE self, VALUE fname, VALUE start) {
  StringValue(fname);

  int fd = open(RSTRING_PTR(fname), O_RDONLY);
  if(fd != -1) {
    VALUE result = MELBOURNE::file_to_ast(self,
        RSTRING_PTR(fname), fd, FIX2INT(start));
    close(fd);

    return result;
  } else {
    rb_raise(rb_eLoadError, "no such file to load -- %s", RSTRING_PTR(fname));
    return Qnil;
  }
}

void Init_melbourne(void) {
  VALUE rb_cMelbourne, rb_mToolSet, rb_mTScurrent;

  MELBOURNE::init_symbols();

#ifndef RUBINIUS
  VALUE rb_mRubinius = rb_const_get(rb_cObject, rb_intern("Rubinius"));
#endif

  rb_mToolSet = rb_const_get(rb_mRubinius, rb_intern("ToolSet"));
  rb_mTScurrent = rb_funcall(rb_mToolSet, rb_intern("current"), 0);
  rb_cMelbourne = rb_define_class_under(rb_mTScurrent, "Melbourne", rb_cObject);
  rb_define_method(rb_cMelbourne, "string_to_ast",
      RUBY_METHOD_FUNC(MELBOURNE_STRING_TO_AST), 3);
  rb_define_method(rb_cMelbourne, "file_to_ast",
      RUBY_METHOD_FUNC(MELBOURNE_FILE_TO_AST), 2);
}

#ifdef __cplusplus
}  /* extern "C" { */
#endif
