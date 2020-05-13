//////////////////////////////////////////////////////////////////////////////////
// 
// Module Name: Test bench for Projectile launcher
// Author(s):  Billy Koech
// Description: Passes values to projectile module
//
//
//////////////////////////////////////////////////////////////////////////////////

//Include projectiles and libraries
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
#include <math.h>
#include <time.h>
#include "projectile.h"
#include <chrono>



int main(){

	std::cout << "Computed Path: \n";
	//std::cout << std::pow(3,4);
	//std::cout << "\n";

	//std::vector<float> results = getTraj(1.0,1.0,1.0,1.0,20);

	//for(int j = 0; j < results.size(); j++){
		//std::cout << results[j] << ",";
	//}
	clock_t start_clock, end_clock;
	start_clock = clock();

	std::vector< std::vector<float> > results = getTraj(1.0,1.0,1.0,1.0,1000);

	end_clock = clock();

	double cpu_time = ( (double) (end_clock - start_clock) ) / CLOCKS_PER_SEC;

	

	std::cout << "Duration: " << cpu_time << "seconds \n";

	for(int i = 0 ; i < results.size(); i++){
		std::cout << "New Vector: \n";
		for(int j = 0; j<results[i].size(); j++){
			std::cout << results[i][j] << ",";
		}
		std::cout << "\n";
		
	}


}