#ifndef SOLUTION_ONE_HPP
#define SOLUTION_ONE_HPP

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include "struct.hpp"

using namespace std;

class SolutionOne{
public:
	ListNode* middleNode(ListNode* head){
		ListNode* slow=head;
		ListNode* fast=head;
		while(fast!=NULL && fast->next!=NULL){
			slow=slow->next;
			fast=fast->next->next;
		}
		return slow;
	}
};

#endif