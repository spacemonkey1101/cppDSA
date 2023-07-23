
#include <iostream>
#include <stack>
#include <vector>

using namespace std;
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> s;
    s.push(-1);
    vector<int> res(n);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty())
        {
            if(s.top() == -1){
                res[i] = s.top();
                s.push(i);
                break;
            }
            else if (arr[s.top()] < arr[i])
            {
                res[i] = s.top();
                s.push(i);
                break;
            }
            s.pop();
        }
    }
    return res;
}

vector<int> prevSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    stack<int> s;
    s.push(-1);
    vector<int> res(n);
    for (int i = 0; i < n; i++)
    {
        while (!s.empty())
        {
            if(s.top() == -1){
                res[i] = s.top();
                s.push(i);
                break;
            }
            else if (arr[s.top()] < arr[i])
            {
                res[i] = s.top();
                s.push(i);
                break;
            }
            s.pop();
        }
    }
    return res;
}

int largestRectangle(vector<int> &heights)
{
    // Write your code here.
    int size = heights.size();
    vector<int> nextSmaller(size);
    nextSmaller = nextSmallerElement(heights, size);
    vector<int> prevSmaller(size);
    prevSmaller = prevSmallerElement(heights, size);

    int maxArea = 0;
    for (int i = 0; i < size; i++)
    {
        nextSmaller[i] = nextSmaller[i] == -1 ? size : nextSmaller[i];
        int area = heights[i] * (nextSmaller[i] - prevSmaller[i] - 1);

        if (maxArea < area)
        {
            maxArea = area;
        }
    }
    return maxArea;
}

int main()
{
    vector<int> heights = {2, 1, 5, 6, 2, 3};
    vector<int> res = prevSmallerElement(heights, heights.size());
 
    vector<int> res1 = nextSmallerElement(heights, heights.size());
    for(int i = 0; i < heights.size(); i++){
        res1[i] = res1[i] == -1 ? heights.size() : res1[i];
        cout<<res1[i]<<"-"<<res[i]<<"- 1"<<"="<<res1[i]-res[i] -1<<endl;
    }
    cout<<"Largest Area is "<<largestRectangle(heights);
}