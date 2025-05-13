
/******************************************************************************
Copyright 2019 The Regents of the University of California.
All Rights Reserved.

Permission to copy, modify and distribute any part of this Software for
educational, research and non-profit purposes, without fee, and without
a written agreement is hereby granted, provided that the above copyright
notice, this paragraph and the following three paragraphs appear in all
copies.

Those desiring to incorporate this Software into commercial products or
use for commercial purposes should contact the:
Office of Innovation & Commercialization
University of California, San Diego
9500 Gilman Drive, Mail Code 0910
La Jolla, CA 92093-0910
Ph: (858) 534-5815
FAX: (858) 534-7345
E-MAIL: invent@ucsd.edu

IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING
LOST PROFITS, ARISING OUT OF THE USE OF THIS SOFTWARE, EVEN IF THE UNIVERSITY
OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

THE SOFTWARE PROVIDED HEREIN IS ON AN "AS IS" BASIS, AND THE UNIVERSITY OF
CALIFORNIA HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
ENHANCEMENTS, OR MODIFICATIONS. THE UNIVERSITY OF CALIFORNIA MAKES NO
REPRESENTATIONS AND EXTENDS NO WARRANTIES OF ANY KIND, EITHER IMPLIED OR
EXPRESS, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, OR THAT THE USE OF THE
SOFTWARE WILL NOT INFRINGE ANY PATENT, TRADEMARK OR OTHER RIGHTS.
******************************************************************************/



#ifndef POLY_2B_MBNRG_A1B1C3D1_A1B1C3D1_DEG3_H
#define POLY_2B_MBNRG_A1B1C3D1_A1B1C3D1_DEG3_H

/**
 * @file poly_2b_A1B1C3D1_A1B1C3D1_deg3_v1.h
 * @brief Contains the structure of the polynomial for symmetry A1B1C3D1_A1B1C3D1
 */

/**
 * @namespace mbnrg_A1B1C3D1_A1B1C3D1_deg3
 * @brief Encloses the structure of the polynomial for symmetry A1B1C3D1_A1B1C3D1
 */

namespace mbnrg_A1B1C3D1_A1B1C3D1_deg3 {

struct poly_A1B1C3D1_A1B1C3D1_deg3_v1 {
    // Degree of the polynomial
    static const unsigned degree = 3;

    // Number of variables
    static const unsigned n_vars = 66;

    // Number of terms
    static const unsigned size = 3563;

    /**
     * @brief Evaluates the polynomial of degree 3 for A1B1C3D1_A1B1C3D1 symmetry.
     *
     * Given the linear parameters and the value of the polynomial variables, 
     * evaluates the polynomial for the A1B1C3D1_A1B1C3D1 symmetry.
     * @param[in] x Double array of length 66 with the variable values
     * @param[in] a Double array of 3563 elements with the linear parameters of the polynomial
     * @return Value of the polynomial
     */
    double eval(const double x[66],
              const double a[3563]);

    /**
     * @brief Evaluates the polynomial of degree 3 for A1B1C3D1_A1B1C3D1 symmetry.
     *
     * Given the linear parameters and the value of the polynomial variables, 
     * evaluates the polynomial for the A1B1C3D1_A1B1C3D1 symmetry.
     * It uses the direct, non optimized polynomial
     * @param[in] x Double array of length 66 with the variable values
     * @param[in] a Double array of 3563 elements with the linear parameters of the polynomial
     * @return Value of the polynomial
     */
    double eval_direct(const double x[66],
                     const double a[3563]);

    /**
     * @brief Evaluates the polynomial of degree 3 for A1B1C3D1_A1B1C3D1 symmetry.
     *
     * Given the linear parameters and the value of the polynomial variables, 
     * evaluates the polynomial for the A1B1C3D1_A1B1C3D1 symmetry.
     * @param[in] x Double array of length 66 with the variable values
     * @param[in] a Double array of 3563 elements with the linear parameters of the polynomial
     * @param[out] g Double array of length 66 that will store the gradients dP/dxi
     * @return Value of the polynomial
     */
    double eval(const double x[66],
              const double a[3563],
                    double g[66]);
    
    /**
     * @brief Evaluates the polynomial of degree 3 for A1B1C3D1_A1B1C3D1 symmetry.
     *
     * Given the linear parameters and the value of the polynomial variables, 
     * evaluates the polynomial for the A1B1C3D1_A1B1C3D1 symmetry.
     * It uses the direct, non optimized polynomial
     * @param[in] x Double array of length 66 with the variable values
     * @param[in] a Double array of 3563 elements with the linear parameters of the polynomial
     * @param[out] g Double array of length 66 that will store the gradients dP/dxi
     * @return Value of the polynomial
     */
    double eval_direct(const double x[66],
                     const double a[3563],
                           double g[66]);
};

} // namespace mbnrg_A1B1C3D1_A1B1C3D1_deg3

#endif // POLY_2B_MBNRG_A1B1C3D1_A1B1C3D1_DEG3_H



//Polynomial input used to generate these files:

//  add_molecule['A1B1C3D1']
//  add_molecule['A1B1C3D1']
//  
//  add_variable['A', '1', 'a', 'A', '2', 'b', 'x-inter-A+A-0']
//  add_variable['A', '1', 'a', 'B', '1', 'a', 'x-intra-A+B-1']
//  add_variable['A', '1', 'a', 'B', '2', 'b', 'x-inter-A+B-0']
//  add_variable['A', '1', 'a', 'C', '1', 'a', 'x-intra-A+C-1']
//  add_variable['A', '1', 'a', 'C', '2', 'a', 'x-intra-A+C-1']
//  add_variable['A', '1', 'a', 'C', '3', 'a', 'x-intra-A+C-1']
//  add_variable['A', '1', 'a', 'C', '4', 'b', 'x-inter-A+C-0']
//  add_variable['A', '1', 'a', 'C', '5', 'b', 'x-inter-A+C-0']
//  add_variable['A', '1', 'a', 'C', '6', 'b', 'x-inter-A+C-0']
//  add_variable['A', '1', 'a', 'D', '1', 'a', 'x-intra-A+D-1']
//  add_variable['A', '1', 'a', 'D', '2', 'b', 'x-inter-A+D-0']
//  add_variable['A', '2', 'b', 'B', '1', 'a', 'x-inter-A+B-0']
//  add_variable['A', '2', 'b', 'B', '2', 'b', 'x-intra-A+B-1']
//  add_variable['A', '2', 'b', 'C', '1', 'a', 'x-inter-A+C-0']
//  add_variable['A', '2', 'b', 'C', '2', 'a', 'x-inter-A+C-0']
//  add_variable['A', '2', 'b', 'C', '3', 'a', 'x-inter-A+C-0']
//  add_variable['A', '2', 'b', 'C', '4', 'b', 'x-intra-A+C-1']
//  add_variable['A', '2', 'b', 'C', '5', 'b', 'x-intra-A+C-1']
//  add_variable['A', '2', 'b', 'C', '6', 'b', 'x-intra-A+C-1']
//  add_variable['A', '2', 'b', 'D', '1', 'a', 'x-inter-A+D-0']
//  add_variable['A', '2', 'b', 'D', '2', 'b', 'x-intra-A+D-1']
//  add_variable['B', '1', 'a', 'B', '2', 'b', 'x-inter-B+B-0']
//  add_variable['B', '1', 'a', 'C', '1', 'a', 'x-intra-B+C-1']
//  add_variable['B', '1', 'a', 'C', '2', 'a', 'x-intra-B+C-1']
//  add_variable['B', '1', 'a', 'C', '3', 'a', 'x-intra-B+C-1']
//  add_variable['B', '1', 'a', 'C', '4', 'b', 'x-inter-B+C-0']
//  add_variable['B', '1', 'a', 'C', '5', 'b', 'x-inter-B+C-0']
//  add_variable['B', '1', 'a', 'C', '6', 'b', 'x-inter-B+C-0']
//  add_variable['B', '1', 'a', 'D', '1', 'a', 'x-intra-B+D-1']
//  add_variable['B', '1', 'a', 'D', '2', 'b', 'x-inter-B+D-0']
//  add_variable['B', '2', 'b', 'C', '1', 'a', 'x-inter-B+C-0']
//  add_variable['B', '2', 'b', 'C', '2', 'a', 'x-inter-B+C-0']
//  add_variable['B', '2', 'b', 'C', '3', 'a', 'x-inter-B+C-0']
//  add_variable['B', '2', 'b', 'C', '4', 'b', 'x-intra-B+C-1']
//  add_variable['B', '2', 'b', 'C', '5', 'b', 'x-intra-B+C-1']
//  add_variable['B', '2', 'b', 'C', '6', 'b', 'x-intra-B+C-1']
//  add_variable['B', '2', 'b', 'D', '1', 'a', 'x-inter-B+D-0']
//  add_variable['B', '2', 'b', 'D', '2', 'b', 'x-intra-B+D-1']
//  add_variable['C', '1', 'a', 'C', '2', 'a', 'x-intra-C+C-1']
//  add_variable['C', '1', 'a', 'C', '3', 'a', 'x-intra-C+C-1']
//  add_variable['C', '1', 'a', 'C', '4', 'b', 'x-inter-C+C-0']
//  add_variable['C', '1', 'a', 'C', '5', 'b', 'x-inter-C+C-0']
//  add_variable['C', '1', 'a', 'C', '6', 'b', 'x-inter-C+C-0']
//  add_variable['C', '1', 'a', 'D', '1', 'a', 'x-intra-C+D-1']
//  add_variable['C', '1', 'a', 'D', '2', 'b', 'x-inter-C+D-0']
//  add_variable['C', '2', 'a', 'C', '3', 'a', 'x-intra-C+C-1']
//  add_variable['C', '2', 'a', 'C', '4', 'b', 'x-inter-C+C-0']
//  add_variable['C', '2', 'a', 'C', '5', 'b', 'x-inter-C+C-0']
//  add_variable['C', '2', 'a', 'C', '6', 'b', 'x-inter-C+C-0']
//  add_variable['C', '2', 'a', 'D', '1', 'a', 'x-intra-C+D-1']
//  add_variable['C', '2', 'a', 'D', '2', 'b', 'x-inter-C+D-0']
//  add_variable['C', '3', 'a', 'C', '4', 'b', 'x-inter-C+C-0']
//  add_variable['C', '3', 'a', 'C', '5', 'b', 'x-inter-C+C-0']
//  add_variable['C', '3', 'a', 'C', '6', 'b', 'x-inter-C+C-0']
//  add_variable['C', '3', 'a', 'D', '1', 'a', 'x-intra-C+D-1']
//  add_variable['C', '3', 'a', 'D', '2', 'b', 'x-inter-C+D-0']
//  add_variable['C', '4', 'b', 'C', '5', 'b', 'x-intra-C+C-1']
//  add_variable['C', '4', 'b', 'C', '6', 'b', 'x-intra-C+C-1']
//  add_variable['C', '4', 'b', 'D', '1', 'a', 'x-inter-C+D-0']
//  add_variable['C', '4', 'b', 'D', '2', 'b', 'x-intra-C+D-1']
//  add_variable['C', '5', 'b', 'C', '6', 'b', 'x-intra-C+C-1']
//  add_variable['C', '5', 'b', 'D', '1', 'a', 'x-inter-C+D-0']
//  add_variable['C', '5', 'b', 'D', '2', 'b', 'x-intra-C+D-1']
//  add_variable['C', '6', 'b', 'D', '1', 'a', 'x-inter-C+D-0']
//  add_variable['C', '6', 'b', 'D', '2', 'b', 'x-intra-C+D-1']
//  add_variable['D', '1', 'a', 'D', '2', 'b', 'x-inter-D+D-0']
//  
//  add_filter['sum-degree', 'x-inter-*+*-*', '0']