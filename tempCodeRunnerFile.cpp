#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int totalCount = 0;
    int num;
    string talk[num];
    int count = 0;
    vector<int> a;
    cin >> num;
    for(int i = 0; i<num; i++)
    {
        cin >> talk[i];
    }
    
    for(int i = 0; i<num; i++)
    {
        if(talk[i] == "ENTER")
        {
            count++;
            a.push_back(i);
        }
        
    }
    a.push_back(num);
    cout << talk[0];
    for (const auto& value : a) {
        std::cout << value << " "; // 출력: 1 2 3 4 5
    }
    if(count == 1)
    {
        set<string>b;
        for(int i = 1; i<num; i++)
        {
            b.insert(talk[i]);
        }
        totalCount += b.size();
    }
    else
    {
        for(int i = 0; i<a.size(); i++)
        {
            set<string>b;
            for(int j = a[i]+1; j<a[i+1]; j++)
            {
                b.insert(talk[i]);
            }
            printf("b사이즈는 %d", b.size());
            totalCount += b.size();
        }
    }
    
    
    cout << totalCount;
    
    
    
    
}