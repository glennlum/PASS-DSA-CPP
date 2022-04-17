//  Person.java

public class Person
{
String firstName;
String lastName;

public Person(String firstName, String lastName)
{
								super();
								this.firstName = firstName;
								this.lastName = lastName;
}

@Override
public String toString()
{
								return firstName+" "+lastName;
}

@Override
public int hashCode()
{
								final int prime = 31;
								int result = 1;
								result = prime * result + ((firstName == null) ? 0 : firstName.hashCode());
								result = prime * result + ((lastName == null) ? 0 : lastName.hashCode());
								return result;
}
}
