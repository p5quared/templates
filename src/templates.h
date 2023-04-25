//
// Created by Peter Vaiciulis on 4/4/23.
//
#include <vector>


/* Testing Info:
 *
 * Name: templates
 * Tags: [easy], [medium], [hard], "<function-name>" (e.g. "sum" or [easy])
 * ex: ./templates "greatest"
 */

/* The goal of these exercises is to practice using templates.
 *
 * Templates are a powerful tool that allows us to write generic code that can be used with different types.
 *
 * Pay attention to the required name and parameters of each function.
 * For any, you are allowed to use as many template parameters as you please.
 * */


/*******EASY********/
// Implement a function that returns the sum of two values.
// the function MUST be called sum, and take two parameters.



/*******EASY********/
// Implement a function that returns the greater of two values.
// the function MUST be called greatest, and take two parameters.



/********MEDIUM********/
// Implement a function that returns the sum of all values in a vector.
// the function MUST be called sum_vector, and it MUST be a template function.



/********HARD********/
// Implement a function that returns the dot product of two vectors (math/physics vectors, not std::vector).
// (https://en.wikipedia.org/wiki/Dot_product)
// The function MUST be called dot_product, and take ONLY two parameters, two arrays representing the vectors.
// implement WITHOUT passing a size parameter to the function, (this should work for any size array).


/*   For most of these tests, you should just use your own testing/intuition to verify.
 *   For the HARD problem, I have made a couple example inputs for you to look at and/or use:
 *
 
        int a[] = {1, 2, 3, 4, 5};
        int b[] = {1, 2, 3, 4, 5};
        dotProduct(a, b) == 55
        
        double a[] = {1.0, 2.0, 3.0, 4.0, 5.0};
        double b[] = {1.0, 2.0, 3.0, 4.0, 5.0};
        dotProduct(a, b) == 55.0;
        
        float a[] = {1.0f, 2.0f, 3.0f, -4.0f, 5.0f};
        float b[] = {1.0f, -2.0f, 3.0f, 4.0f, -5.0f};
        dotProduct(a, b) == -35.0f;
 * */
