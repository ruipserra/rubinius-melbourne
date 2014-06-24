#ifndef MEL_MISSING_HPP
#define MEL_MISSING_HPP

extern "C" {

#ifndef rb_long2int
#if SIZEOF_INT < SIZEOF_LONG
  int rb_long2int(long n) {
    int i = (int)n;
    if((long)i != n) {
      rb_raise(rb_eRangeError, "long value is outside of range of int");
    }
    return i;
  }
#else
#define rb_long2int(n)  ((int)n)
#endif
#endif

#ifndef rb_rational_new
VALUE rb_rational_new(VALUE a, VALUE b) {
  VALUE cls = rb_const_get(rb_cObject, rb_intern("Rational"));
  return rb_funcall(cls, rb_intern("new"), 2, a, b);
}
#endif

} /* extern "C" */

#endif
