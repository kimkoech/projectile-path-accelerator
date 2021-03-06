//////////////////////////////////////////////////////////////////////////////////
// 
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
#include <iostream>
#include "projectile.h"
#include <cmath>
#include <math.h>

// Generate trajectory
std::vector< std::vector<float> > getTraj(float v0x, float v0y, float x0, float y0, int interval){
	//constants
	const float G = -9.8;
	bool debug = 1;

	//std::cout << G;

	//Compute time of flight
	float t1 = (-v0y + sqrt(std::pow(v0y,2) - (4*0.5*G*y0))) / (2*0.5*G);
	if (debug) std::cout << "t1: " << t1 << "\n";
	float t2 = (-v0y - sqrt(std::pow(v0y,2) - (4*0.5*G*y0))) / (2*0.5*G);
	if (debug) std::cout<< "t2: " << t2 << "\n";
	float t = std::max(t1,t2);
	

	//Compute x and y for each time step
	std::vector<float> x;
	std::vector<float> y;
	for(int i = 0; i<interval; i++){
		float _time = i * t/interval;

		//position x and y
		x.push_back((v0x * _time) - x0);
		y.push_back(0.5*G*(std::pow(_time, 2)) + v0y*t + y0);

	}

	std::vector< std::vector<float> > results;
	results.push_back(x);
	results.push_back(y);
	return results;


}

