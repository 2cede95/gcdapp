#include <iostream>

void singleDivision(int a, int b, int c, int d){
    int divisor{a/b};
    int remainder{a%b};
    std::cout << b << " x " << divisor << " + " << remainder << " = " << a << '\n';
        if (remainder > 0){
            singleDivision(b, remainder, c, d);
}
        else{
        std::cout << "gcd(" << c << ", " << d << ") = " << b;
}   
}

int main(){
    int a{};
    int b{};
    std::cin >> a;
    std::cin >> b;
    int c{a};
    int d{b};
    singleDivision(a, b, c, d);
    return 0;
}