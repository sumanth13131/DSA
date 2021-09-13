#include<vector>
using namespace std;

vector<int> sortBalls(vector<int> balls){
    //sort the balls in place in a single pass (O(N) time, O(1) space)
    int i = 0;
    int j = 0;
    int k = balls.size()-1;
    
    while(i<=j and j<=k){
        if(balls[j] == 0){
            swap(balls[i++],balls[j++]);
        }
        else if(balls[j] == 2){
            swap(balls[j],balls[k--]);
        }
        else{
            j++;
        }
    }
    return balls;
}
