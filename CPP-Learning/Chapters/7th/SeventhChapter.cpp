#include "SeventhChapter.h"

#include <array>
#include <iostream>

//----------------------------------------------------------------------------------------------------
float CalculateHarmonicMean(float first, float second)
{
    return 2.0f * first * second / (first + second);
}

void SeventhChapter::RunFirstTask() const
{
    float first = 0;
    float second = 0;

    std::cout << "Enter two numbers: ";
    while (std::cin >> first >> second && first != 0.0f && second != 0.0f)
    {
        std::cout << "Harmonic mean of these numbers: " << CalculateHarmonicMean(first, second) << std::endl;
        std::cout << "Enter two numbers: ";
    }

    std::cout << "Bye!\n";
}

//----------------------------------------------------------------------------------------------------
std::array<float, 10> RequestArray()
{
    float temp_number;
    auto numbers = std::array<float, 10> { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, };
    std::cout << "Enter 10 numbers (q to quit)" << std::endl;

    std::cout << "First: ";
    for (float &number : numbers)
    {
        if (!(std::cin >> temp_number) || temp_number < 0)
            break;

        number = temp_number;
        std::cout << "Next: ";
    }

    return numbers;
}

float CalculateAverage(const std::array<float, 10>& numbers)
{
    float sum = 0;
    int count = 0;
    
    for (const float number : numbers)
    {
        if (number < 0)
            break;
        
        sum += number;
        count++;
    }

    return sum / count;
}

void DisplayResults(const std::array<float, 10>& numbers, float average_value)
{
    std::cout << "\nHere is your numbers: ";
    
    for (const float number : numbers)
        if (number >= 0)
            std::cout << number << " ";

    std::cout << std::endl << "Their average value: " << average_value;
}

void SeventhChapter::RunSecondTask() const
{
    const std::array<float, 10> numbers = RequestArray();
    const float average = CalculateAverage(numbers);
    DisplayResults(numbers, average);
}

//----------------------------------------------------------------------------------------------------
struct Box
{
    char maker_[40];
    float height_;
    float width_;
    float length_;
    float volume_;
};

// ReSharper disable once CppPassValueParameterByConstReference
void FunctionA(Box box)
{
    std::cout << "Box maker: " << box.maker_ << std::endl;
    std::cout << "Box height: " << box.height_ << std::endl;
    std::cout << "Box width: " << box.width_ << std::endl;
    std::cout << "Box length: " << box.length_ << std::endl;
    std::cout << "Box volume: " << box.volume_ << std::endl << std::endl;
}

void FunctionB(Box &box)
{
    box.volume_ = box.height_ * box.width_ * box.length_;
}

void SeventhChapter::RunThirdTask() const
{
    Box box = { "Pavel Durov", 14.3f, 7.4f, 11.7f, 0.0f };
    FunctionA(box);
    
    FunctionB(box);
    FunctionA(box);
}

//----------------------------------------------------------------------------------------------------
long double CalculateProbability(unsigned int numbers, unsigned int picks)
{
    long double result = 1.0;
    long double n;
    unsigned int p;
    
    for (n = numbers, p = picks; p > 0; n--, p--)
        result *= n / p;

    return result;
}

void SeventhChapter::RunFourthTask() const
{
    unsigned int total;
    unsigned int choices;
    unsigned int mega_total;

    std::cout << "Enter the total number of choices on the game card and the number of picks allowed: ";

    while (std::cin >> total >> choices && choices <= total)
    {
        std::cout << "Enter the number of cards for megachoice: ";
        if (!(std::cin >> mega_total))
            break;

        std::cout << "You have one chance in " << CalculateProbability(total, choices) * CalculateProbability(mega_total, 1) << " of winning\n";
        std::cout << "\nNext two numbers (q to quit): ";
    }

    std::cout << "Bye!\n";
}

//----------------------------------------------------------------------------------------------------
int CalculateFactorial(int n)
{
    if (n == 1 || n == 0)
        return 1;

    return n * CalculateFactorial(n - 1);
}

void SeventhChapter::RunFifthTask() const
{
    int temp_n;
    std::cout << "Enter the number whose factorial you want to calculate: ";

    while (std::cin >> temp_n && temp_n >= 0)
    {
        std::cout << temp_n << "! is " << CalculateFactorial(temp_n) << std::endl;
        std::cout << "\nNext number (q or negative number to quit): ";
    }

    std::cout << "Bye!\n";
}

//----------------------------------------------------------------------------------------------------
int FillArray(double *array, int n)
{
    int i = 0;
    std::cout << "Enter number with number 1: ";
    
    while (std::cin >> array[i])
    {
        i++;
        
        if (i >= n)
            break;
        
        std::cout << "Enter number with number " << i + 1 << ": ";
    }

    return i;
}

void ShowArray(const double *array, int n)
{
    std::cout << "\nNumbers in an array: ";
    
    for (int i = 0; i < n; i++)
        std::cout << array[i] << " ";

    std::cout << std::endl;
}

void ReverseArray(double *array, int n)
{
    const int swaps_count = n / 2;

    for (int i = 0; i < swaps_count; i++)
    {
        const double temp_value = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp_value;
    }
}

void SeventhChapter::RunSixthTask() const
{
    int n = 0;
    std::cout << "Enter array length: ";
    std::cin >> n;

    const auto array = new double[n];
    n = FillArray(array, n);
    ShowArray(array, n);

    std::cout << "Reversing...\n";
    ReverseArray(array + 1, n - 2);
    ShowArray(array, n);

    std::cout << "Bye!\n";
    delete[] array;
}

//----------------------------------------------------------------------------------------------------
double* FillArray7(double *begin, const int limit)
{
    int i;
    double temp_value;
    
    for (i = 0; i < limit; i++)
    {
        std::cout << "Enter value #" << i + 1 << ": ";
        std::cin >> temp_value;

        if (std::cin)
        {
            if (temp_value < 0)
                break;

            begin[i] = temp_value;
            continue;
        }

        std::cin.clear();
        while (std::cin.get() != '\n') { }
        break;
    }

    return begin + i;
}

void ShowArray7(const double *begin, const double *end)
{
    for (const double *element = begin; element != end; element++)
        std::cout << "Property #" << std::distance(begin, element) + 1 << ": $" << *element << std::endl;
}

void Revalue(double* begin, const double *end, double revaluation_factor)
{
    for (double *element = begin; element != end; element++)
        *element *= revaluation_factor;
}

void SeventhChapter::RunSeventhTask() const
{
    double properties[5];
    double *end = FillArray7(properties, 5);
    ShowArray7(properties, end);
    
    if (std::distance(properties, end) > 0)
    {
        double factor = 0.0;
        std::cout << "Enter revaluation factor: ";
    
        while (!(std::cin >> factor))
        {
            std::cin.clear();
            while (std::cin.get() != '\n') { }
            std::cout << "Bad input; input process terminated.\n";
        }

        Revalue(properties, end, factor);
        ShowArray7(properties, end);
    }
    
    std::cout << "Done.\n";
}

//----------------------------------------------------------------------------------------------------
constexpr int kSeasons = 4;
const char* kSeasonsNames[4] = { "Spring", "Summer", "Fall" , "Winter" };

void FillA(double expenses[])
{
    for (int i = 0; i < kSeasons; i++)
    {
        std::cout << "Enter " << kSeasonsNames[i] << " expenses: ";
        std::cin >> expenses[i];
    }
}

void ShowA(const double expenses[])
{
    double total = 0.0;
    std::cout << "EXPENSES\n";
    
    for (int i = 0; i < kSeasons; i++)
    {
        std::cout << kSeasonsNames[i] << ": $" << expenses[i] << std::endl;
        total += expenses[i];
    }

    std::cout << "Total Expenses: $" << total << std::endl;
}

void TaskA()
{
    double *expenses[kSeasons];
    FillA((double*)expenses);
    ShowA((double*)expenses);
}

struct CustomArray
{
    double elements_[kSeasons];
};

void FillB(CustomArray &expenses)
{
    for (int i = 0; i < kSeasons; i++)
    {
        std::cout << "Enter " << kSeasonsNames[i] << " expenses: ";
        std::cin >> expenses.elements_[i];
    }
}

void ShowB(const CustomArray& expenses)
{
    double total = 0.0;
    std::cout << "EXPENSES\n";
    
    for (int i = 0; i < kSeasons; i++)
    {
        std::cout << kSeasonsNames[i] << ": $" << expenses.elements_[i] << std::endl;
        total += expenses.elements_[i];
    }

    std::cout << "Total Expenses: $" << total << std::endl;
}

void TaskB()
{
    CustomArray expenses = { { 0.0, 0.0, 0.0, 0.0 } };
    
    FillB(expenses);
    ShowB(expenses);
}

void SeventhChapter::RunEighthTask() const
{
    TaskA();
    std::cout << std::endl;
    TaskB();
}

//----------------------------------------------------------------------------------------------------
constexpr int kStringLength = 30;

struct Student
{
    char full_name_[kStringLength];
    char hobby_[kStringLength];
    int oop_level_;
};

int GetInfo(Student students[], int n)
{
    int i;
    
    for (i = 0; i < n; i++)
    {
        std::cout << "Enter #" << i + 1 << " student full name: ";
        if (!std::cin.get(students[i].full_name_, kStringLength))
            break;

        std::cout << "Enter #" << i + 1 << " student hobby: ";
        std::cin >> students[i].hobby_;
        
        std::cout << "Enter #" << i + 1 << " student OOP level: ";
        std::cin >> students[i].oop_level_;
        std::cin.get();
        std::cout << std::endl;
    }

    return i;
}

void Display1(const Student& student)
{
    std::cout << "Student full name: " << student.full_name_ << std::endl;
    std::cout << "Student hobby: " << student.hobby_ << std::endl;
    std::cout << "Student OOP level: " << student.oop_level_ << std::endl;
}

void Display2(const Student *student)
{
    std::cout << "Student full name: " << student->full_name_ << std::endl;
    std::cout << "Student hobby: " << student->hobby_ << std::endl;
    std::cout << "Student OOP level: " << student->oop_level_ << std::endl;
}

void Display3(Student students[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << std::endl;
        Display1(students[i]);
    }
}

void SeventhChapter::RunNinthTask() const
{
    int class_size;
    std::cout << "Enter class size: ";
    
    std::cin >> class_size;
    while (std::cin.get() != '\n') { }

    std::cout << std::endl;
    const auto students = new Student[class_size];
    const int entered = GetInfo(students, class_size);

    for (int i = 0; i < entered; i++)
    {
        std::cout << std::endl;
        Display1(students[i]);
        Display2(&students[i]);
    }

    std::cout << std::endl;
    Display3(students, entered);
    delete[] students;
    std::cout << std::endl << std::endl << "Done\n";
}

//----------------------------------------------------------------------------------------------------
double Calculate(const double first, const double second, double action(double, double))
{
    return action(first, second);
}

double Add(const double first, const double second)
{
    return first + second;
}

double Subtract(const double first, const double second)
{
    return first - second;
}

double Multiply(const double first, const double second)
{
    return first * second;
}

double Divide(const double first, const double second)
{
    return first / second;
}

void SeventhChapter::RunTenthTask() const
{
    double (*actions[4])(double, double) = { Add, Subtract, Multiply, Divide };
    double first;
    double second;

    std::cout << "Enter numbers pair: ";
    while (std::cin >> first >> second)
    {
        for (int i = 0; i < 4; i++)
            std::cout << "#" << i + 1 << " function result: " << actions[i](first, second) << std::endl;

        std::cout << "\nEnter another numbers pair (q to quit): ";
    }
}

//----------------------------------------------------------------------------------------------------
