// [[Rcpp::depends(RcppArmadillo)]]
#define ARMA_64BIT_WORD
#include <RcppArmadillo.h>
using namespace Rcpp;

//' Generate random uniform matrix using armadillo
//' @param nrows Integer scalar. Number of rows.
//' @param ncols Integer scalar. Number of columns.
//' @param d Numeric scalar. Density.
//' @export
// [[Rcpp::export]]
arma::sp_mat sp_runif(int nrows, int ncols, double d) {
  return arma::sprandu<arma::sp_mat>(nrows, ncols, d);
}

//' Copy a matrix using armadillo's iterators
//' @param mat dgCMatrix. Matrix to copy.
//' @export
// [[Rcpp::export]]
arma::sp_mat sp_copy(arma::sp_mat & mat) {
  // New mat
  arma::sp_mat newmat(mat.n_rows, mat.n_cols);

  // More efficient implementation
  arma::sp_mat::const_iterator begin = mat.begin();
  arma::sp_mat::const_iterator end   = mat.end();

  for (arma::sp_mat::const_iterator it = begin; it != end; ++it) {
    newmat.at(it.row(), it.col()) = *it;
  }

  return newmat;
}


/***R
library(Matrix)
set.seed(1231)
m      <- sp_runif(10,10,.1)
m_copy <- copysp(m)
*/
