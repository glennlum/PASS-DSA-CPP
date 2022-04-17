//  vector_test.cpp

 #include <stdio.h>
 #include <iostream>
 #include "Vector.h"
 #include "Person.h"

using namespace std;

int main(void)
{
        cout<<endl;
        cout<<"Test 1 - Empty Array"<<endl;
        Vector<int> v1;
        cout<<"print:      "; v1.print();
        cout<< "at(0):      "<<v1.at(0) <<endl;
        cout<< "size:       "<<v1.size() <<endl;
        cout<< "capacity:   "<<v1.vCapacity() <<endl;
        cout<< "isEmpty:    "<<v1.isEmpty() <<endl;
        cout<< "isFull:     "<<v1.isFull()<<endl;
        cout<<endl;

        cout<<"Test 2 - One-Element Array"<<endl;
        Vector<double> v2;
        v2.push_back(5.75);
        cout<<"print:      "; v2.print();
        cout<< "at(0):      "<<v2.at(0) <<endl;
        cout<< "size:       "<<v2.size() <<endl;
        cout<< "capacity:   "<<v2.vCapacity() <<endl;
        cout<< "isEmpty:    "<<v2.isEmpty() <<endl;
        cout<< "isFull:     "<<v2.isFull()<<endl;
        cout<<endl;

        cout<<"Test 3 - Three-Element Array"<<endl;
        Vector<string> v3;
        v3.push_back("Bob");
        v3.push_back("Martin");
        v3.push_back("Amy");
        cout<<"print:      "; v3.print();
        cout<< "at(0):      "<<v3.at(0) <<endl;
        cout<< "size:       "<<v3.size() <<endl;
        cout<< "capacity:   "<<v3.vCapacity() <<endl;
        cout<< "isEmpty:    "<<v3.isEmpty() <<endl;
        cout<< "isFull:     "<<v3.isFull()<<endl;
        cout<<endl;

        cout<<"Test 4 - Person Array"<<endl;
        Vector<Person> v4;
        Person p1("Jeff",10);
        Person p2("Moe",12);
        Person p3("Bobo",4);
        v4.push_back(p1);
        v4.push_back(p2);
        v4.push_back(p3);
        cout<<"print:      "; v4.print();
        cout<< "at(0):      "<<v4.at(0) <<endl;
        cout<< "size:       "<<v4.size() <<endl;
        cout<< "capacity:   "<<v4.vCapacity() <<endl;
        cout<< "isEmpty:    "<<v4.isEmpty() <<endl;
        cout<< "isFull:     "<<v4.isFull()<<endl;

        return 0;
}
