#include <iostream>
using namespace std;

int s1, s2, s3, sum;

int main() {
  cout << "Enter the lengths of the 3 sides of a triangle: ";
  cin >> s1 >> s2 >> s3;
  if ((s1 > s2) && (s1 > s3)) {
    sum = s2 * s2 + s3 * s3;
    if (sum == s1 * s1) {
      cout << "Right-angled triangle, longest side is " << s1;
      cout << "  Shorter sides are " << s2 << ", " << s3;
    } else {
      cout << "Triangle is not right-angled.";
    }
  } else if ((s2 > s1) && (s2 > s3)) {
    sum = s1 * s1 + s3 * s3;
    if (sum == s2 * s2) {
      cout << "Right-angled triangle, longest side is " << s2;
      cout << "  Shorter sides are " << s1 << ", " << s3;
    } else {
      cout << "Triangle is not right-angled.";
    }
  } else if ((s3 > s1) && (s3 > s2)) {
    sum = s1 * s1 + s2 * s2;
    if (sum == s3 * s3) {
      cout << "Right-angled triangle, longest side is " << s3;
      cout << "  Shorter sides are " << s1 << ", " << s2;
    } else {
      cout << "Triangle is not right-angled.";
    }
  }
}
