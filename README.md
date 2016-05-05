
[![Build Status](https://travis-ci.org/gvegayon/arma64bit.svg?branch=64bit-on-header)](https://travis-ci.org/gvegayon/arma64bit) [![Build status](https://ci.appveyor.com/api/projects/status/peavy3c38yx38l09/branch/64bit-on-header?svg=true)](https://ci.appveyor.com/project/gvegayon/arma64bit/branch/64bit-on-header)

arma64bit
=========

This toy package has been created in order to test the stability of using `64int_t` with **RcppArmadillo**. By passing the flag `-DARMA_64BIT_WORD` and `CXX_STD = CXX11` in `Makevars` it is possible to use big matrices (mora than 4 billion elements) within **R**.

This erroed branch has been generated to test the behavior of the package when compiling with `#define ARMA_64BIT_WORD` on the header and not in `Makevars` as in the master branch.

Author
======

George G. Vega Yon

g *.* vegayon gmail
