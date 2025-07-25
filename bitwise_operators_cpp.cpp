#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 7;
    
	int bitwise_and = a&b;
	int bitwise_or = a|b;
	int bitwise_xor = a^b;
	int bitwise_not = ~a;
	int left_shift = a<<1;
	int right_shift = a>>1;
    
	cout<<"AND: " <<bitwise_and<<endl;
	cout<<"OR: "<<bitwise_or<<endl;
	cout<<"XOR: "<<bitwise_xor<<endl;
	cout<<"NOT a: "<<bitwise_not<<endl;
	cout<<"Left Shift a: "<<left_shift<<endl;
	cout<<"Right Shift a: "<<right_shift<<endl;
    

	return 0;
}

/*
Output:
AND: 2
OR: 15
XOR: 13
NOT a: -11
Left Shift a: 20
Right Shift a: 5
*/
