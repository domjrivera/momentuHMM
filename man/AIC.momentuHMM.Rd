% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/AIC_momentuHMM.R
\name{AIC.momentuHMM}
\alias{AIC.momentuHMM}
\title{AIC}
\usage{
\method{AIC}{momentuHMM}(object, ..., k = 2, n = NULL)
}
\arguments{
\item{object}{A \code{momentuHMM} object.}

\item{...}{Optional additional \code{momentuHMM} objects, to compare AICs of the different models. These can be passed as a list using the \code{!!!} operator (see \code{\link[=quasiquotation]{rlang}} and example in \code{\link{AICweights}}).}

\item{k}{Penalty per parameter. Default: 2 ; for classical AIC.}

\item{n}{Optional sample size. If specified, the small sample correction AIC is used (i.e., \code{AICc = AIC + kp(p+1)/(n-p-1)} where p is the number of parameters).}
}
\value{
The AIC of the model(s) provided. If several models are provided, the AICs are output
in ascending order.
}
\description{
Akaike information criterion of momentuHMM model(s).
}
\examples{
# m is a momentuHMM object (as returned by fitHMM), automatically loaded with the package
m <- example$m
AIC(m)

\dontrun{
# HMM specifications
nbStates <- 2
stepDist <- "gamma"
angleDist <- "vm"
mu0 <- c(20,70)
sigma0 <- c(10,30)
kappa0 <- c(1,1)
stepPar0 <- c(mu0,sigma0)
anglePar0 <- c(-pi/2,pi/2,kappa0)
formula <- ~cov1+cov2
                
# example$m is a momentuHMM object (as returned by fitHMM), automatically loaded with the package
mod1 <- fitHMM(example$m$data,nbStates=nbStates,dist=list(step=stepDist,angle=angleDist),
                Par0=list(step=stepPar0,angle=anglePar0),
                formula=~1,estAngleMean=list(angle=TRUE))

Par0 <- getPar0(mod1,formula=formula)                 
mod2 <- fitHMM(example$m$data,nbStates=nbStates,dist=list(step=stepDist,angle=angleDist),
                Par0=Par0$Par,beta0=Par0$beta,
                formula=formula,estAngleMean=list(angle=TRUE))
                
AIC(mod1,mod2)

Par0nA <- getPar0(mod1,estAngleMean=list(angle=FALSE))                 
mod3 <- fitHMM(example$m$data,nbStates=nbStates,dist=list(step=stepDist,angle=angleDist),
                Par0=Par0nA$Par,beta0=Par0nA$beta,
                formula=~1)
 
AIC(mod1,mod2,mod3)

# add'l models provided as a list using the !!! operator                              
AIC(mod1, !!!list(mod2,mod3))
}

}
