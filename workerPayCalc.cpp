/*
 * Filename: workerPayCalc.cpp
 * Name: Huthsady Legend Boun
 * Professor: Grace A. Comp
 * Class: Comp Sci II
 * Date: 30 March 2025
 * Description: Allows a programmer to keep track of his employees by way of classes and inheritance.
*/


#include <iostream>
#include <string>


class Employee
{
public:
	Employee(std::string x, int y, std::string z)                // Constructor
  {
    employeeName = x;
    employeeNumber = y;
    employeeHireDate = z;
  }

  std::string getEmployeeName()               // Getters
  {
    return employeeName;
  }
  int getEmployeeNumber()
  {
    return employeeNumber;
  }
  std::string getEmployeeHiredate()
  {
    return employeeHireDate;
  }

private:
  std::string employeeName;
  int employeeNumber;
  std::string employeeHireDate;
};

class ProductionWorker : public Employee
{
public:
	ProductionWorker(std::string a, int b, std::string c
	    , int x, double y) 
	  : Employee(a, b, c)               // Constructor
	{
		shift = x;
		wageRate = y;
	} 

	int getShift()              // Getters
	{
	  return shift;
	}
	double getWageRate()
	{
	  return wageRate;
	}
private:
  int shift;              // 1 = Day | 2 = Night
  double wageRate;
};

class TeamLeader : public ProductionWorker
{
public:
  TeamLeader(std::string a, int b, std::string c
      , int x, double y,
      int bonus, int needHours, int completeHours)
    : ProductionWorker(a, b, c, x, y)
  {
    monthlyBonus = bonus;
    requiredTrainHours = needHours;
    trainHoursCompleted = completeHours;
  }

int getMonthlyBonus()               // Getters
{
  return monthlyBonus;
}
int getRequiredTrainHours()
{
  return requiredTrainHours;
}
int getTrainHoursCompleted()
{
  return trainHoursCompleted;
}
private:
  int monthlyBonus;
  int requiredTrainHours;
  int trainHoursCompleted;
};

int main()
{
  ProductionWorker janine("Janine Teagues", 05, "January 5 2025", 1, 20.25);
  std::cout << "Employee Name: " << janine.getEmployeeName() << "\n";
  std::cout << "Employee ID#: " << janine.getEmployeeNumber() << "\n";
  std::cout << "Employee Shift: " << janine.getShift() << "\n";
  std::cout << "Employee Wage: $" <<  janine.getWageRate() << "/hour\n";
  std::cout << "Employee Hire Date: " << janine.getEmployeeHiredate() << "\n\n\n";



  TeamLeader harry("Harry", 20, "Jan 5th", 1, 20.25, 10, 10, 10);
  std::cout << "Employee Name: " << harry.getEmployeeName() << "\n";
  std::cout << "Employee ID#: " << harry.getEmployeeNumber() << "\n";
  std::cout << "Employee Shift: " << harry.getShift() << "\n";
  std::cout << "Employee Wage: $" << harry.getWageRate() << "/hour\n";
  std::cout << "Employee Hire Date: " << harry.getEmployeeHiredate() << "\n";
  std::cout << "Employee Training Hours Total Required: " << harry.getRequiredTrainHours() << "\n";
  std::cout << "Employee Training Hours Completed: " << harry.getTrainHoursCompleted() << "\n";
  std::cout << "Employee Training Hours Incomplete: " 
    << harry.getRequiredTrainHours() - harry.getTrainHoursCompleted() << "\n";
}
