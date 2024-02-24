#include <iostream>
#include "5thTaskFiles/Stack.h"

namespace TenthChapter
{
    struct Customer
    {
        char full_name_[35];
        double payment_;
    };

    void AddCustomerToStack(Stack<Customer> &stack)
    {
        Customer customer { };

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

    void RunFifthTask()
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
}