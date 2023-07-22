
#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int largestRectangleArea(vector<int> &heights)
{
    int size = heights.size();
    vector<int> res(size);
    int max_area = -1;
    for (int i = 0; i < size; i++)
    {
        int area = heights[i];
        int b_left = i;
        int b_right = i;
        while (0 <= b_left - 1 && heights[b_left - 1] >= heights[i])
        {
            b_left--;
        }
        while (b_right + 1 < size && heights[b_right + 1] >= heights[i])
        {
            b_right++;
        }

        b_left = b_left < 0 ? 0 : b_left;
        b_right = b_right > size ? size - 1 : b_right;

        int breadth = b_right - b_left + 1;
        area = breadth * heights[i] > area ? breadth * heights[i] : area;
        if (max_area < area)
        {
            max_area = area;
        }
    }
    return max_area;
}

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    cout<< largestRectangleArea(heights);
}