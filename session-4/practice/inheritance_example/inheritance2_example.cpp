//  inheritcance2_example.cpp

#include <iostream>
#include "Animal.h"
#include "Dog.h"

/* Slightly challenging (optional practice) */

int main(void)
{
        cout<<endl;
        cout<<"-Animal Pointer to Animal Obj-"<<endl;
        Animal anim;   //Creates an animal obj
        Animal* a_ptr; //Creates pointer to Animal object
        a_ptr = &anim;
        a_ptr->eat();

//--------------------------------------------------

        cout<<endl;
        cout<<"-Dog Pointer to Dog Obj-"<<endl;
        Dog dog;       //Creates a dog obj
        Dog * d_ptr;   //Creates pointer to Dog object
        d_ptr = &dog;
        d_ptr->eat();
        d_ptr->bark();

        /*
           Did you notice anything special in the output?
           Observe that the Animal constructor is called during
           the creation of the Dog object.

           Hence can deduce that an instance of Dog is also
           an instance of Animal.
         */

        //--------------------------------------------------

        cout<<endl;
        cout<<"-Implicit Upcasting Example-"<<endl;
        //Uses a Animal-type pointer to point to a Dog object
        //This forces the Dog object to behave like an Animal object

        a_ptr = &dog;   //implicit UPCASTING
        a_ptr->eat();
        //a2_ptr->bark();   //error generated!

        /*
           Why are the methods of Animal type called and not Dog Type?
           In C++ static binding occurs during compile time. This means
           that the compiler will automatically bind Animal-type pointer
           to an Animal object during compile-time. It does not check
           which object is assigned to the pointer during run-time.
         */

        //--------------------------------------------------

        cout<<endl;
        cout<<"-Explicit Upcasting Example-"<<endl;
        //Casts an Dog-type pointer to a Animal-type pointer
        //This forces the Dog object to behave like an Animal object

        a_ptr=(Animal *)d_ptr; // explicit UPCASTING
        a_ptr->eat();
        //a3_ptr->bark();        //error generated!

        /*
           Once again, static binding occurs during compile time binding
           an Animal-type pointer to an Animal object during compile-time.
         */

        //--------------------------------------------------

        /* Debug */
        /*
           cout<<endl;
           cout<<"- Implicit Downcasting Example -"<<endl;
           //Uses a Dog-type pointer to point to an Animal object
           //This forces an Animal object to behave like a Dog object

           d_ptr = &anim;        //implicit DOWNCASTING (error!)
           d_ptr->eat();
           d_ptr->bark();
         */

        /*
           Uncomment the code to see what happens...

           This code shows that it is not possible to force an
           Animal object to behave like a Dog. Your IDE will probably
           let you know that the types are incompatible.

           Recall that initialising an Animal does not create an instance of a Dog.
           An Animal instance is not a dog instance.
         */

        //--------------------------------------------------

        cout<<endl;
        cout<<"-Explicit Downcasting Example-"<<endl;
        //Casts an Animal-type pointer to a Dog-type pointer
        //This forces an Animal object to behave like a Dog object

        a_ptr=&anim; //reset
        d_ptr = (Dog *)a_ptr;
        d_ptr->eat();
        d_ptr->bark();

        /*
           It seems, we can still force an Animal object to behave like a Dog through
           the use of casting. (i.e. Casting an Animal-type pointer to a Dog-type pointer).

           The static binding policy of C++ applies here as well. The Dog-type pointer
           binds to a Dog object during compile-time effectively allowing us to use
           the bark() method even though the object is an Animal.

           This is more of a C++ hack than it is sensible code.
         */

        //--------------------------------------------------

        cout<<endl;
        cout<<"-Call Deconstructors-"<<endl;

        // Dog obj calls 2 deconstrcutors (note the order in which they are called)
        // What does this tell you about the creation and destruction of child classes?

        return 0;
}
