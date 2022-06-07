#include<iostream>
#include<algorithm>
using namespace std;

//template<class T>
class Comparator{//we pass an object of this class as third arg to sort function...
public:
	int operator ()(int x1,int x2){
	/*
	negative tells that x1 comes before x2
	positive tells x2 comes before x1
	0 tells they are equal anc will be placed as per algorithm
	*/
	return x1-x2; //-1, 0, 1    //return x1<x2; ascending order   //return x1>x2;   descending order
	}
};

//template<class T>
bool funComparator(int x1,int x2){//return type is bool
	return x1<=x2;
}

void show(int a[],int array_size){
	for(int i=0;i<array_size;i++){
			cout<<a[i]<<" ";
	}
}

int main(){
	int a[]={1,5,8,9,6,7,3,4,2,0};
	int asize=sizeof(a)/sizeof(int);
	cout<<"The array before sorting is : ";show(a,asize);
	cout<<endl<<"The array after sorting is(asc) :";sort(a,a+asize);show(a,asize);
	cout<<endl<<"The array after sorting is(desc) :";sort(a,a+asize,greater<int>());show(a,asize);
	cout<<endl<<"The array after sorting is(asc but our comparator class) :";sort(a,a+asize,Comparator());show(a,asize);
	cout<<endl<<"The array after sorting is(asc but our comparator function) :";sort(a,a+asize,funComparator);show(a,asize);

	return 0;
}
