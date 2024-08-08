#include <iostream>
#include <vector>

using namespace std;
long long ruble;
vector<int>must(3,0);
vector<int>have(3,0);
vector<int>price(3,0);

bool check(long long mid)
{
    long long need=0;
    for(int i=0;i<3;i++){
        if(mid*must[i]>have[i]){
            need+=(mid*must[i]-have[i])*price[i];
        }
        if(need>ruble) return false;
    }
    return true;
}

int main()
{
    string ingredient;
    cin>>ingredient;
    for(int i=0;i<ingredient.length();i++)
    {
        if(ingredient[i]=='B') must[0]++;
        else if(ingredient[i]=='S') must[1]++;
        else
        {
            must[2]++;
        }
    }
    cin>>have[0]>>have[1]>>have[2];
    cin>>price[0]>>price[1]>>price[2];
    cin>>ruble;
    long long low=1, high=1e12,mid=0,ans=low;
    while(low<=high)
    {
        mid = low + (high - low) / 2;
        if(check(mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    cout<<ans<<endl;

    return 0;
}
