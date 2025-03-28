% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/classes.R
\name{get_caclust}
\alias{get_caclust}
\alias{get_caclust,caclust-method}
\alias{get_caclust,SingleCellExperiment-method}
\title{Get caclust object from SingleCellExperiment object.}
\usage{
get_caclust(obj, ...)

\S4method{get_caclust}{caclust}(obj, ...)

\S4method{get_caclust}{SingleCellExperiment}(obj, ..., caclust_meta_name = "caclust")
}
\arguments{
\item{obj}{SingleCellExperiment object}

\item{...}{further arguments}

\item{caclust_meta_name}{Name under which the caclust object is stored in the metadata of the SingleCellExperiment object.}
}
\value{
caclust object
}
\description{
Get caclust object from SingleCellExperiment object.
}
