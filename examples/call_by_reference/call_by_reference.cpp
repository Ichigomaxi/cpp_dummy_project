#include <iostream>
#include <vector>
#include <string>

void call_by_reference_function(int* pvalue)
{
    *pvalue += 1;
}

int main()
{
    int value = 0;
    int* p_value = &value;

    std::cout << "initial value: " << value << std::endl;

    for(int i=0; i < 10; i++)
    {
        call_by_reference_function(p_value);
        std::cout << "Inside Loop value: " << value << std::endl;
    }
    
return 0;
}