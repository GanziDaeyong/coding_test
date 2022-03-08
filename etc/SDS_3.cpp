#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 100000
using namespace std;
int map[100000] = {0,};
int flag[100000] = {0,};


int eachTClen;
int goal;

void initMap(){

    for (int i=0; i<=eachTClen; i++) {
        map[i]=0;
    }
    eachTClen = 0;
    goal = 0;
}


int step15(int curr){

    if (curr == goal) return -2;

    int timeTaken = 0;
    int lastStopped = 0;
    int lastCamp = curr;
    // int FIN =0;
    

    while(true) {

        int over = 0;
        int twoRenewed = 0;
        int threeRenewed = 0;


        for (int i=1; i<=6; i++) {
            if (curr+i==goal){
                over = 1;
                lastCamp = goal;
                // FIN = 1;
                break;
            }
            if (timeTaken + i > 15) {
                over = 1;
                break;
            }
            if (map[curr+i]==2) {
                lastStopped = curr + i;
                twoRenewed = 1;
            }
            else if (map[curr+i]==3) {
                lastCamp = curr + i;
                threeRenewed = 1;
            }
        }
        
        if (over==1) break;
        timeTaken += (lastStopped - curr);

        // cout<<"curr["<<curr<<"]"<<" lastStopped["<<lastStopped<<"] TimeTaken["<<timeTaken<<"]\n";
        // return 0;

        if (twoRenewed == 0 && threeRenewed==0 ) return -1;
        else if (twoRenewed == 1) {
            flag[lastStopped] = 1;
            curr = lastStopped;
            timeTaken+=1;
            // cout<<lastStopped<<"<-!";
        }
        else if (twoRenewed==0 && threeRenewed==1) {
            break;
        }
    }

    for (int i=0; i<16; i++){
        if (lastCamp+i>=goal) break;
        flag[lastCamp+i] = 0;
    }
    flag[lastCamp] = 3;
    return lastCamp;
}


int solve(){

    // for (int i=0; i<=33; i++) {
    //     cout<<flag[i]<<" ";
    // }


    int camp = step15(0); 
    // cout<<camp;
    // return 0; // temp
    if (camp==-1) return -1;

    while (camp != -2) {
        int temp = step15(camp);
        if (temp==camp || camp==-1) {
            // "CAT";
            return -1;

        }
        camp = temp;
    }

    int cntTwo = 0;

    int redundant = 0;
    // for (int i=0; i<=goal; i++){
    //     if (flag[i]==1) cntTwo++;
    // }
    // cout<<"\n";
    for (int i=0; i<=goal; i++){
        cout<<flag[i]<<" ";
    }
    cout<<"\n";
    for (int i=goal; i>=1; i--) {
        if (flag[i]==1) cntTwo++;
        if (flag[i]==3) {
            int tempcnt = 0;
            int threecnt = 0;
            for (int j=i-1; j>=i-6; j--) {
                // if (map[j]==0 || flag[j]==3) break;
                if (map[j]==0) break;
                if (flag[j]==1) {
                    tempcnt++;
                }
                if (flag[j]==3) {
                    threecnt++;
                    break;
                }
            }
            if (threecnt!=0 && tempcnt!=0) {
                redundant += (tempcnt);
            }
            else if (tempcnt>=2) {
                redundant += (tempcnt-1);
            }
            
        }
    }
    int ans = goal+cntTwo-redundant;
    return ans;
}



int main(){

    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc; cin>>tc;
    for (int i=0; i<tc; i++) {
        cin>>eachTClen;
        for (int j=0; j<eachTClen; j++) {
            int type; cin>>type;
            if (type==3) { goal = j;}
            map[j]=type;
        }
        int res=solve();
        cout<<"#"<<i+1<<" "<<res<<"\n";
        initMap();
    }


    return 0;
}