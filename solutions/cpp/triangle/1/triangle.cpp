#include "triangle.h"
#include <stdexcept>
namespace triangle {

// TODO: add your solution here
    flavor kind(double a, double b, double c){
        //check if valid
        if(a+b <= c || a+c <= b || b + c <= a){
            throw std::domain_error("error as this is not a triangle ");
        }

        if (a == b && b == c){
            return triangle::flavor::equilateral;
        } else if (a!=b && b!=c && a!=c ){
            return triangle::flavor::scalene;
        } else{
            return triangle::flavor::isosceles;
        }
        

        

    }
}  // namespace triangle
