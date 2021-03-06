## This file is part of the 're2r' package for R.
## Copyright (C) 2016, Qin Wenfeng
## All rights reserved.
##
## Redistribution and use in source and binary forms, with or without
## modification, are permitted provided that the following conditions are met:
##
## 1. Redistributions of source code must retain the above copyright notice,
## this list of conditions and the following disclaimer.
##
## 2. Redistributions in binary form must reproduce the above copyright notice,
## this list of conditions and the following disclaimer in the documentation
## and/or other materials provided with the distribution.
##
## 3. Neither the name of the copyright holder nor the names of its
## contributors may be used to endorse or promote products derived from
## this software without specific prior written permission.
##
## THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
## "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
## BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
## FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
## HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
## SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
## PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
## OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
## WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
## OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
## EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#' Split up a string into pieces.
#'
#' Split up a string into pieces. Vectorised over string and pattern.
#'
#' @inheritParams re2_locate
#' @param n number of pieces to return. Default (Inf) for
#' \code{\link{re2_split}} uses all possible split positions.
#' For \code{\link{re2_split_fixed}}, if n is greater than
#'  the number of pieces, the result will be padded with
#'  empty strings.
#' @examples
#' re2_split("yabba dabba doo", " ")
#' re2_split_fixed(c("yabba dabba doo", "a bc"), " ", 2)
#' @return For \code{\link{re2_split_fixed}}, a character matrix with n columns.
#'
#' For \code{\link{re2_split}}, a list of character vectors.
#' @export
re2_split = function(string, pattern, n = Inf, parallel = FALSE, grain_size = 100000, ...) {
    if (is.character(pattern) || mode(pattern) == "logical") {
        pattern = re2(pattern, ...)
    }
    cpp_split(stri_enc_toutf8(string), pattern, n, FALSE,parallel,grain_size)
}

#' @rdname re2_split
#' @export
re2_split_fixed = function(string, pattern, n, parallel = FALSE, grain_size = 100000,  ...) {
    if (is.character(pattern) || mode(pattern) == "logical") {
        pattern = re2(pattern, ...)
    }
    cpp_split(stri_enc_toutf8(string), pattern, n, TRUE, parallel,grain_size)
}
