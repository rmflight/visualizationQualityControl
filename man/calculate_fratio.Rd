% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/sd_rsd_summaries.R
\name{calculate_fratio}
\alias{calculate_fratio}
\title{calculate F-ratio}
\usage{
calculate_fratio(data, data_classes)
}
\arguments{
\item{data}{the data matrix, with samples (rows) and features (columns)}

\item{data_classes}{what are the classes of the rows}
}
\value{
vector
}
\description{
given a data matrix of samples (rows) and features (columns), and a vector of classes (character or factor),
calculate an F-ratio for each feature.
}
