#include "histogram.h"
#include <cassert>
#include "svg.h"


void
test_positive() {
    double min = 0;
    double max = 0;
    find_minmax({1, 2, 3}, min, max);
    assert(min == 1);
    assert(max == 3);
}


void
test_negative() {
    double min = 0;
    double max = 0;
    find_minmax({-1, -2, -3}, min, max);
    assert(min == -3);
    assert(max == -1);
}

void
test_identical() {
    double min = 0;
    double max = 0;
    find_minmax({1, 1, 1}, min, max);
    assert(min == 1);
    assert(max == 1);
}

void
test_one() {
    double min = 0;
    double max = 0;
    find_minmax({1}, min, max);
    assert(min == 1);
    assert(max == 1);
}

void
test_empty() {
    double min = 0;
    double max = 0;
    find_minmax({}, min, max);
    assert(min == min);
    assert(max == max);
}


void test_var()
{
    size_t IMAGE_HEIGHT = var({800},{2});
    assert(IMAGE_HEIGHT == 400);
}
void test_var2()
{
    size_t IMAGE_HEIGHT = var(700,2);
    assert(IMAGE_HEIGHT == 700);
}
void test_var3()
{
    size_t IMAGE_HEIGHT = var(0,2);
    assert(IMAGE_HEIGHT == 0);
}






int main()
{
    /*
     test_positive();
     test_negative();
     test_identical();
     test_one();
     test_empty();

     */

     test_var();
test_var2();


}
