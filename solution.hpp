#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include "struct.hpp"

using namespace std;

class Solution{
public:
	int getDecimalValue(ListNode* head){
		int num=0;
		while(head!=NULL){
			num=num*2+head->val;
			head=head->next;
		}
		return num;
	}
};

#endif