#include <your_lib/your_lib.h>

#include <cstdlib>
#include <cmath>
#include <iostream>

int main()
{
    std::cout << "Executable example using the library!" << std::endl;

    your_lib::summationClass sumClass;
    your_lib::differenceClass diffClass;

    double tol = 1e-10;
    double op1 = 15.0;
    double op2 = 10.0;

    if( fabs(sumClass.doSomething(op1, op2) - (op1 + op2)) > tol )
    {
        std::cerr << "[ERR] sumClass.doSomething(" << op1 << "," << op2
                  << ") is equal to " << sumClass.doSomething(op1, op2)
                  << " instead of the expected " << op1 + op2 << std::endl;
        return EXIT_FAILURE;
    }

    if( fabs(diffClass.doSomething(op1, op2) - (op1 - op2)) > tol )
    {
        std::cerr << "[ERR] sumClass.doSomething(" << op1 << "," << op2
                  << ") is equal to " << diffClass.doSomething(op1, op2)
                  << " instead of the expected " << op1 - op2 << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
