

library(arma64bit)
library(Matrix)
library(RcppArmadillo)

devtools::session_info()

set.seed(1231)

# Creating a random matrix using arma::sprandu
x <- sp_runif(nrows = 5,ncols = 5,d = .4)
x

# Copying a graph
y <- matrix(0, 5,5)
diag(y) <- 1:5
y <- methods::as(y, "dgCMatrix")

sp_copy(y)

