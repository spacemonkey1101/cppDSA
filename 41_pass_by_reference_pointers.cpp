#include <iostream>

using namespace std;

void watchVideo(int  * views)
{
    //watch video should increment view count by 1
    *views += 1;
}

int main()
{
    int views = 100;
    cout << "Views before watching video " << views << endl;

    watchVideo(&views);
    cout << "Views after watching video " << views << endl;
}