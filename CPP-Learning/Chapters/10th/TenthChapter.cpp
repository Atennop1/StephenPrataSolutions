#include "TenthChapter.h"

#include <iostream>
#include <ostream>

#include "1st/BackAccount.h"
#include "2nd/Person.h"
#include "3rd/GolfClass.h"
#include "4th/SalesClass.h"
#include "5th/Stack.h"
#include "6th/Move.h"
#include "7th/Plorg.h"
#include "8th/List.h"

//----------------------------------------------------------------------------------------------------
void TenthChapter::RunFirstTask() const
{
    auto account = BackAccount();
    account.Initialize("Atennop", "9374638964", 100);

    account.ShowInformation();
    account.Put(200);
    std::cout << std::endl;
    account.ShowInformation();

    std::cout << std::endl;
    account.Take(350);
    std::cout << std::endl;
    account.ShowInformation();

    account.Take(250);
    std::cout << std::endl;
    account.ShowInformation();
}

//----------------------------------------------------------------------------------------------------
void TenthChapter::RunSecondTask() const
{
    const Person one;
    const Person two("Smythecraft");
    const Person three("Dimwiddy", "Sam");

    one.Show();
    two.Show();
    three.Show();

    std::cout << std::endl;

    one.FormalShow();
    two.FormalShow();
    three.FormalShow();
}

//----------------------------------------------------------------------------------------------------
void TenthChapter::RunThirdTask() const
{
    int n = 0;
    std::cout << "Enter golfers count: ";
    (std::cin >> n).get();
    std::cout << std::endl;

    int count = 0;
    const auto golfers = new GolfClass[n] { };
    for (int i = 0; i < n; i++)
    {
        if (!golfers[i].SetGolf())
        {
            std::cout << std::endl;
            break;
        }

        count++;
        std::cout << std::endl;
    }

    for (int i = 0; i < count; i++)
    {
        std::cout << "Golfer #" << i + 1 << std::endl;
        golfers[i].ShowGolf();
        std::cout << std::endl;
    }

    delete[] golfers;
}

//----------------------------------------------------------------------------------------------------
void TenthChapter::RunFourthTask() const
{
    auto first = sales::SalesClass();
    first.SetSales();

    constexpr double array[5] = { 12.0, 14.0, 34.4 };
    const auto second = sales::SalesClass(array, 5);

    std::cout << std::endl << std::endl;
    first.ShowSales();
    std::cout << std::endl;
    second.ShowSales();
}

//----------------------------------------------------------------------------------------------------
struct Customer
{
    char full_name_[35];
    double payment_;    
};

void AddCustomerToStack(Stack<Customer> &stack)
{
    Customer customer;
    
    std::cout << "Enter customer's name: ";
    std::cin >> customer.full_name_;

    std::cout << "Enter customer's payment: ";
    (std::cin >> customer.payment_).get();

    stack.Push(customer);
}

void DisplayLastCustomer(const Stack<Customer> &stack)
{
    const Customer customer = stack.Peek();
    std::cout << "Last customer's name: " << customer.full_name_ << std::endl;
    std::cout << "Last customer's payment: " << customer.payment_ << std::endl;
}

void TenthChapter::RunFifthTask() const
{
    auto stack = Stack<Customer>(10);
    double deleted_payment = 0;

    int command = 0;
    std::cout << "Welcome to program with custom stack!\n";

    while (true)
    {
        std::cout << "\nAvailable commands:\n1. Add customer to stack\n2. Peek customer from stack\n3. Pop customer from stack\n4. Quit\n";
        std::cout << "Enter command code to execute command: ";
        (std::cin >> command).get();

        switch (command)
        {
        case 1:
            if (stack.IsFull())
            {
                std::cout << "Sorry, can't add customer to stack because stack is full\n";
                break;
            }

            std::cout << std::endl;
            AddCustomerToStack(stack);
            break;

        case 2:
            if (stack.IsEmpty())
            {
                std::cout << "Sorry, can't peek customer from stack because stack is empty\n";
                break;
            }

            std::cout << std::endl;
            DisplayLastCustomer(stack);
            break;

        case 3:
            if (stack.IsEmpty())
            {
                std::cout << "Sorry, can't pop customer from stack because stack is empty\n";
                break;
            }

            deleted_payment += stack.Peek().payment_;
            stack.Pop();

            std::cout << "All deleted payments: " << deleted_payment << std::endl;
            break;

        case 4:
            goto EndLoop;
            
        default:
            std::cout << "Incorrect command code\n";
            break;
        }
    }

    EndLoop:
    std::cout << "Bye!\n";
}

//----------------------------------------------------------------------------------------------------
void TenthChapter::RunSixthTask() const
{
    auto first = Move(12.7, 11.2);
    auto second = Move(7.9, 4.8);

    first.ShowMove();
    std::cout << std::endl;
    second.ShowMove();

    std::cout << std::endl;
    first.Add(second).ShowMove();
    std::cout << std::endl;
    
    first.Reset();
    second.Reset();

    first.ShowMove();
    std::cout << std::endl;
    second.ShowMove();
}

//----------------------------------------------------------------------------------------------------
void TenthChapter::RunSeventhTask() const
{
    auto first = Plorg();
    auto second = Plorg("Anton");

    first.ShowFields();
    std::cout << std::endl;
    second.ShowFields();

    first.SetCI(23);
    second.SetCI(19);

    std::cout << std::endl;
    first.ShowFields();
    std::cout << std::endl;
    second.ShowFields();
}

//----------------------------------------------------------------------------------------------------
void ShowElements(Item &item)
{
    std::cout << "Element: " << item << std::endl;
}

void SquareElements(Item &item)
{
    item *= item;
}

void TenthChapter::RunEighthTask() const
{
    std::cout << std::boolalpha;  
    
    auto list = List(3);
    std::cout << "Is list empty after creation: " << list.IsEmpty() << std::endl;
    std::cout << "Is list full after creation: " << list.IsFull() << std::endl << std::endl;

    list.Add(12);
    list.Add(3);
    list.Add(59);

    std::cout << "Is list empty after adding elements: " << list.IsEmpty() << std::endl;
    std::cout << "Is list full after adding elements: " << list.IsFull() << std::endl << std::endl;

    list.Visit(ShowElements);
    std::cout << std::endl;

    list.Visit(SquareElements);
    list.Visit(ShowElements);
    std::cout << std::endl;
}

//----------------------------------------------------------------------------------------------------
