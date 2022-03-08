#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 10001

using namespace std;
vector<int> cards;

void initialize() {cards.clear();}

int chooseIdxB(int idxA){

    int type = cards[idxA]%2;
    int idxB=-1;
    int last=-1;

    for (int i=0; i<idxA; i++) {
        if (cards[i]==MAX) continue;
        if (cards[i]%2==type) {
            idxB=i;
            break;
        }
        else {
            last = i;
        }
    }
    if (idxB==-1){
        idxB=last;
    }
    return idxB;
}


int Play(){

    int idxA = cards.size()-1;
    int idxB = 0;
    int scoreA = 0;
    int TIMES = 0;

    while(true){
        
        TIMES++;

        while(true) {
            if (cards[idxA]==MAX) {
                idxA--;
            }
            else break;
        }

        idxB = chooseIdxB(idxA);

        if (cards[idxB]%2==cards[idxA]%2) {
            scoreA+=cards[idxA];
            cards[idxA]=MAX;
            cards[idxB]=MAX;
            
        } else {
            scoreA+=cards[idxB];
            cards[idxA]=MAX;
            cards[idxB]=MAX;
        }
        idxA--;
        if (TIMES==(cards.size()/2)){
            break;
        }
    }

    return scoreA;
}

int main() {

    int tc; cin>>tc;
    for (int i=0; i<tc; i++) {
        int cardnum; cin>>cardnum;
        cards.reserve(cardnum);
        for (int j=0; j<cardnum; j++) {
            int eachcard; cin>>eachcard;
            cards.push_back(eachcard);
        }
        sort(cards.begin(), cards.end());
        cout<<"#"<<i+1<<" "<<Play()<<"\n";
        initialize();
    }

    return 0;
}