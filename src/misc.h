#include <RcppArmadillo.h>

#ifndef ARMA64BIT_MISC_
#define ARMA64BIT_MISC_
using namespace Rcpp;
arma::sp_mat sp_runif(int nrows, int ncols, double d);

arma::sp_mat sp_copy(arma::sp_mat & mat);
#endif
