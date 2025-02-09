#pragma once


#ifndef PhoneBook_hpp
#define PhoneBook_hpp
#include <iostream>
#include <string>
using namespace std;


class PhoneBook
{
public:
	PhoneBook()
	{
		/*fullName = '0';
		mobilePhone = '0';
		workPhone = '0';
		homePhone ='0';
		additionalInformation = '0';*/

	}
	;
	PhoneBook(string fullName_, string mobilePhone_)
	{
		fullName = fullName_;
		mobilePhone = mobilePhone_;
		score+= 1;
		//PhoneBook arr[score] = this->;
	}
	
	void SetFullName(string fullName_)
	{
		fullName = fullName_;
	}
	void SetHomePhone(string homePhone_)
	{
		homePhone = homePhone_;
	}
	void SetWorkPhone(string workPhone_)
	{
		workPhone = workPhone_;
	}
	void SetMobilePhone(string mobilePhone_)
	{
		mobilePhone = mobilePhone_;
	}
	void SetAdditionalInformation(string additionalInformation_)
	{
		fullName = additionalInformation_;
	}
	
	string GetFullName()
	{
		Print();
		return fullName;
	}
	void Print()
	{
		cout << fullName << '\n' << homePhone << '\n' << workPhone << '\n' << mobilePhone << '\n' << additionalInformation << endl << endl;
	}
private:
	string fullName{' '};
	string homePhone{' '};
	string workPhone{' '};
	string mobilePhone{' '};
	string additionalInformation{' '};
	static int score; //cчетчик количества абонентов
	PhoneBook arr[10000]
	{
		for (int i = 0; i < 10000; i++)
		{
			arr[i] = 0;
		}
	};
		

};
int PhoneBook::score = 0;



#endif // !PhoneBook_hpp