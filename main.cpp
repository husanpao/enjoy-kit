#include <iostream>
#include "enjoy/enjoy_all.h"

int main() {

    auto flag = Enjoy::Kit::FileUtil::mkdir("b/c/e/b");
    printf("%d \n", flag);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
