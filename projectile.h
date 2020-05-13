
//////////////////////////////////////////////////////////////////////////////////
// HEADER FILE WITH SIGNATURES
// Module Name: Projectile launcerh 
// Author(s):  Billy Koech
// Description: A script to compute the trajectory of a projectile
//
//
//////////////////////////////////////////////////////////////////////////////////

//libraries and modules
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#include <math.h>

//signatures
std::vector< std::vector<float> > getTraj(float v0x, float v0y, float x0, float y0, int interval);