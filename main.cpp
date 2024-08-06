#include "struct.hpp"
#include "solution.hpp"
#include "solutionOne.hpp"
#include "solutionTwo.hpp"
#include "solutionThree.hpp"
#include "solutionFour.hpp"

using namespace std;

int main(){

	ListNode* Input= new ListNode(1);
	Input->next=new ListNode(0);
	Input->next->next=new ListNode(1);

	Solution solution;
	int Output=solution.getDecimalValue(Input);
	while(Input!=NULL){
		cout<<Input->val<<"->";
		Input=Input->next;
	}
	cout<<"Binary to Decimal= "<<Output<<endl;

	ListNode* middle=new ListNode(1);
	middle->next=new ListNode(2);
	middle->next->next=new ListNode(3);
	middle->next->next->next=new ListNode(4);
	middle->next->next->next->next=new ListNode(5);

	SolutionOne solution1;
	ListNode* firsOut=solution1.middleNode(middle);
	while(firsOut!=NULL){
		cout<<firsOut->val<<"->";
		firsOut=firsOut->next;
	}

	vector<string> orders={"MyHashSet", "add", "add", "contains", "contains", "add", "contains", "remove", "contains"};
	vector<int> threeInt={0,1,2,1,3,2,2,2,2};
	vector<string> secondOut;
	MyHashSet* obj=nullptr;
	for(int i=0; i<orders.size(); i++){
		if(orders[i]=="MyHashSet"){
			obj=new MyHashSet();
			secondOut.push_back("null");
		}
		if(orders[i]=="add"){
			obj->add(threeInt[i]);
			secondOut.push_back("null");
		}
		if(orders[i]=="remove"){
			obj->remove(threeInt[i]);
			secondOut.push_back("null");
		}
		if(orders[i]=="contains"){
			bool param_1=obj->contains(threeInt[i]);
			secondOut.push_back(param_1 ? "true" : "false");
		}
	}

	cout<<"HashSet Result= "<<endl;
	for(const auto& result: secondOut){
		cout<<result<<" ";
	}
	cout<<endl;

	delete obj;

	vector<string> ordersOne={"MyHashMap", "put", "put", "get", "get", "put", "get", "remove", "get"};
	vector<vector<int>> numbers={{},{1,1},{2,2},{1},{3},{2,1},{2},{2},{2}};
	vector<string> outputOne;

	MyHashMap* objNew=nullptr;
	for(int i=0; i<ordersOne.size(); i++){
		if(ordersOne[i]=="MyHashMap"){
			objNew=new MyHashMap();
			outputOne.push_back("null");
		}
		if(ordersOne[i]=="put"){
			objNew->put(numbers[i][0],numbers[i][1]);
			outputOne.push_back("null");
		}
		if(ordersOne[i]=="get"){
			int atom=objNew->get(numbers[i][0]);
			outputOne.push_back(to_string(atom));
		}
		if(ordersOne[i]=="remove"){
			objNew->remove(numbers[i][0]);
			outputOne.push_back("null");
		}
	}
	cout<<"HashMap result= "<<endl;
	for(const auto& result: outputOne){
		cout<<result<<" ";
	}
	cout<<endl;

	delete objNew;

	SolutionTwo solution2;
	ListNode* headA=new ListNode(1);
	headA->next=new ListNode(9);
	headA->next->next=new ListNode(1);

	ListNode* intersectNode=new ListNode(2);
	headA->next->next->next=intersectNode;
	intersectNode->next=new ListNode(4);

	ListNode* headB=new ListNode(3);
	headB->next=intersectNode;

	ListNode* answer=solution2.getIntersectionNode(headA, headB);
	cout<<endl;
	cout<<"Executing... Cogito Virus... Infected"<<endl;

	while(answer!=NULL){
		cout<<answer->val<<" -> ";
		answer=answer->next;
	}

	cout<<"NULL"<<endl;

	return 0;
}