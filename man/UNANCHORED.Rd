% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/anchor.R
\docType{data}
\name{UNANCHORED}
\alias{ANCHOR_BOTH}
\alias{ANCHOR_START}
\alias{UNANCHORED}
\title{Anchors for pattern}
\format{An object of class \code{numeric} of length 1.}
\usage{
UNANCHORED

ANCHOR_START

ANCHOR_BOTH
}
\description{
Anchors for regular expression pattern string.
}
\details{
UNANCHORED - No anchoring

ANCHOR_START - Anchor at start only

ANCHOR_BOTH - Anchor at start and end
}
\examples{
re2_match("This is an apple.", "(is)",anchor = ANCHOR_BOTH)
re2_match("This is an apple.", "(This)",anchor = ANCHOR_START)
re2_match("This is an apple.", "(is)",anchor = UNANCHORED)
}
\keyword{datasets}

