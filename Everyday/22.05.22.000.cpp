#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define MYNULL1 0
#define MYNULL2 ((void*) 0)


//void func(int arr[])
//{
//	//for (auto i : arr)
//	//{
//	//	cout << i << endl;
//	//}
//}
//
//
//int main()
//{
//	int arr[] = { 1, 5, 9, 6,3 };
//	//func(arr);
//	for (auto i : arr)
//	{
//		cout << i << endl;
//	}
//	return 0;
//}

//#define MYNULL1 0
//#define MYNULL2 ((void*)0)
//
//int main()
//{
//	int* p1 = MYNULL1;
//	int* p2 = MYNULL2;
//	char* p3 = MYNULL1;
//	char* p4 = MYNULL2;
//
//	int* p5 = NULL;
//	int* p6 = NULL;
//
//}
//
//
////
////void func(int);
////void func(void*);
////
////int main()
////{
////    //int* p = NULL;
////    func(NULL);
////    return 0;
////}
////
////void func(int)
////{
////    cout << "int" << endl;
////}   
////
////void func(void*)
////{
////    cout << "void*" << endl;
////}
//
//void func(int)
//{
//    cout << "int" << endl;
//}   
//
//void func(void*)
//{
//    cout << "void*" << endl;
//}



//void func2(int a)
//{
//	printf("int\n");
//}
//void func2(long a)
//{
//	printf("longint\n");
//}
////void func2(int a)
////{
////	printf("int\n");
////}
//int main()
//{
//	//void* pp = 0;
//	//func1(pp);
//
//	int a = 1;
//	func2(a);
//	func2(a);
//	return 0;
//}


//void func999(int*)
//{
//	cout << "int*" << endl;
//}
//int main()
//{
//	void* p = 0;
//	func999(p);
//	return 0;
//}


//void func(int)
//{
//    cout << "1";
//}
//void func(int*)
//{
//    cout << "2";
//
//}
//int main()
//{
//    int* p = nullptr;
//    std::nullptr_t
//    func(NULL);  //最终会调用void func(int)
//    return 0;
//}

//void func(int);
//void func(void*);
//void func(int*);
//void func(char*);
//
//int main()
//{
//    int* p = 0;
//    int* p = MYNULL2;
//    
//    return 0;
//}
//
//void func(int)
//{
//	cout << 1;
//}
//void func(char)
//{
//	cout << 2;
//}
// 


//int main()
//{
//    int* p1 = 2132;
//    char* p2 = 0;
//
//    //p1 = p2;
//
//    //void* p3 = 0;
//    //
//    //p3 = p2;
//    //p1 = p3;
//}

class A {
public:
	int a;
	int b;
	int c;
	A(int _a) :a(_a){
		c = a + 1;
		a = 0;
	};
};

int main()
{
	A aaa(3, 5);
	cout << aaa.c << endl;
	cout << aaa.c << endl;

}