#include <iostream>
#include <chrono>

long fibonacci(unsigned n)
{
    if (n < 2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
long fact_it(unsigned n){
    long fact = 1;
    for (int i = 2; i<=2; i++){
        fact *= i;
    }
    return fact;
}

//int main()
//{
//    auto start = std::chrono::steady_clock::now();
//    std::cout << "f(42) = " << fibonacci(30) << '\n';
//    auto finish = std::chrono::steady_clock::now();
//    std::chrono::duration<double> elapsed_seconds = finish-start;
//    std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
//}

// Get time stamp in nanoseconds.
uint64_t nanos()
{
    uint64_t ns = std::chrono::duration_cast<std::chrono::nanoseconds>(
            std::chrono::high_resolution_clock::now().time_since_epoch())
            .count();
    return ns;
}

//int main()
//{
//    auto start = std::chrono::high_resolution_clock::now();
////    fibonacci(40);
//    fact_it(10000);
//    auto elapsed = std::chrono::high_resolution_clock::now() - start;
//
//    long long microseconds = std::chrono::duration_cast<std::chrono::microseconds>(
//            elapsed).count();
//    std::cout<< "microseconds: " << microseconds;
//}



int main()
{
    auto start = nanos();
    fibonacci(40);
//    fact_it(1000000);
    auto elapsed = nanos() - start;

//    long long nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(elapsed).count();
    std::cout<< "nanoseconds: " << elapsed;
}
