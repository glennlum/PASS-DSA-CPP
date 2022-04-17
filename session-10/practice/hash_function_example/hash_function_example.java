//  hash_function_example.java

import java.util.Scanner;

public class hash_function_example
{

public static void main(String[] args)
{
								Scanner input = new Scanner(System.in);

								while(true)       //infinite loop
								{
																String firstName;
																String lastName;
																System.out.println("- Hash Code Generator - ");
																System.out.println();
																System.out.println("Enter a first name: ");
																firstName=input.nextLine();
																System.out.println("Enter a last name: ");
																lastName=input.nextLine();
																Person p = new Person (firstName,lastName);
																System.out.println();
																System.out.println("------------------------------------");
																System.out.println(p+" "+"hashes to: "+ hash_function(p));
																System.out.println("------------------------------------");
																System.out.println();
								}
}

public static int hash_function (Person p)
{
								return p.hashCode();
}

}
