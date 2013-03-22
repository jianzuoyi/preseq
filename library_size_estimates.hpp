/*    Copyright (C) 2012 University of Southern California and
 *                       Andrew D. Smith and Timothy Daley
 *
 *    Authors: Andrew D. Smith and Timothy Daley
 *
 *    This program is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LIBRARY_SIZE_ESTIMATES_HPP
#define LIBRARY_SIZE_ESTIMATES_HPP

#include <vector>
#include <numeric>

#include "newtons_method.hpp"
#include "gaussian_quadrature.hpp"

double
chao87_lowerbound_unobserved(const std::vector<double> &counts_hist);

double 
cl92_estimate_unobserved(const std::vector<double> &counts_hist);

/*
double
harris_lowerbound_librarysize(const std::vector<double> &counts_hist,
			      const double tolerance,
			      const size_t max_iter,
			      const size_t depth);
*/


double
harris_3moments(const bool VERBOSE,
		const std::vector<double> &counts_hist);


double
harris_by_newton(const bool VERBOSE,
		 const std::vector<double> &counts_hist,
		 const double tolerance,
		 const size_t max_iter,
		 const size_t depth);

double
golub_welsh_libsize(const bool VERBOSE,
		    const std::vector<double> &counts_hist,
		    const double tolerance,
		    const size_t max_iter,
		    size_t n_points);

double
laguerre_modified_libsize(const bool VERBOSE,
			  const std::vector<double> &counts_hist,
			  const double mu,
			  const double tolerance,
			  const size_t max_iter,
			  size_t n_points);

double
chebyshev_libsize(const bool VERBOSE,
		  const std::vector<double> &counts_hist,
		  const double tolerance,
		  const size_t max_iter,
		  size_t n_points);


/*double
upperbound_librarysize(const bool VERBOSE,
		       const std::vector<double> &counts_hist, 
		       size_t max_terms);
*/
#endif
