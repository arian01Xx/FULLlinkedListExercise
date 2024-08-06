#ifndef SOLUTION_TWO_HPP
#define SOLUTION_TWO_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include "struct.hpp"

using namespace std;

class MyHashSet{
	vector<bool> mp;
public:

	MyHashSet(){
		mp.resize(1000001, false);
	}

	void add(int key){
		mp[key]=true;
	}

	void remove(int key){
		mp[key]=false;
	}

	bool contains(int key){
		return mp[key];
	}
};

#endif