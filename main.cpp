/*
TestPointers
(c) 2016
original authors: David I. Schwartz
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*	This tutorial illustrate the ways of initializing, declaring 
*	and assigning a pointer;
*	It covers the concept of pointer, operator &, Lvalue and Rvalue
*/

#include <iostream>
using namespace std;

int main() {
	            // http://msdn.microsoft.com/en-us/library/f90831hc(v=vs.110).aspx
	int i = 10; // i gets the value 10, store 10 in i
	            // i is an L-value
	            // 10 is an R-value

	// where's the objects?
	// need to know what happens when we do new...
	// need to know what happens with memory addresses...
	// need to know POINTERS

	int* p;				  // p is a POINTER to an integer
	// cout << p << endl; // need to give p a value

	p = &i;     // p stores the ADDRESS of i

	printf("%s%i\n", "&i: ", &i);
	printf("%s%i\n", "p:  ", p);

	// get the value from i...
	printf("%s%i\n", "*p: ",*p);
	// *p on the RIGHT side means
	// go to the object pointed by p
	//    and return the value stored there
	// dereference p

	int tmp = *p; // *p on the RIGHT side (the same as above) and place it to tmp 
	cout << tmp << endl;

	int val = 20;
	int* q = &val;
	cout << *q << endl;

	*p = *q;
	// *q gives 20
	// go to the var pointed by p
	//    and store *q (20)

	cout << i << endl;
	cout << val << endl;







	//getchar();
	//system("pause");
}