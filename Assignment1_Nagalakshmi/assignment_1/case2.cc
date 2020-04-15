[200~/*finding the square and adding the squares of 'n' numbers.
	 filename:case2.cc
	 date:10-4-2020
	 Author:Nagalakshmi
	 */
#include <iostream>
using namespace std;

int main(int argc,char* argv[])
{
	        if(argc==2)
			        {
					                cout<<"To calculate the sum of the squares of a given expression"<<endl;
							                cout<<" to check the output "<<endl;
									        }
		        else
				        {
						                int i_number = 0, i_sum = 0;
								                cout << "Enter a number: ";
										                cin >> i_number;         //input given by the user

												                while(i_number >0)     //check the given number is greater than zero
															                {

																		                        i_sum += i_number * i_number; //square the given number and add it to the series
																					                        i_number--;                 //decrement the number
																								                }

														                cout << "\nsum: " << i_sum << endl;      //finally here display's the output

																                return 0;
					}
}

