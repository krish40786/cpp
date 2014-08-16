#include "difference_of_squares.h"
#include <algorithm>

using namespace std;

namespace squares
{

int square_of_sums(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum*sum;
}

int sum_of_squares(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i*i;
    }
    return sum;
}

int difference(int n)
{
    return square_of_sums(n) - sum_of_squares(n);
}

}
