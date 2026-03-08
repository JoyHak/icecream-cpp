#include "icecream.hpp"

int main(int argc, char* argv[])
{
    auto const a = int{7};
    IC(a);
    IC("Building finished");

    return 0;
}