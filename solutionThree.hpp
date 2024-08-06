#ifndef SOLUTION_THREE_HPP
#define SOLUTION_THREE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include "struct.hpp"

using namespace std;

class MyHashMap{
	vector<int> output;
public:
	MyHashMap(){
		output.resize(1000001,-1);
	}

	void put(int key, int val){
		output[key]=val;
	}

	int get(int key){
		if(output[key]!=-1){
			return output[key];
		}else{
			return -1;
		}
	} 

	void remove(int key){
		output[key]= -1;
	}
};

#endif