#include <bits/stdc++.h>
using namespace std;
int main() {
    string record;
    while (cin >> record) {
        int sca = 0,scb=0,shots=0,i=0,q;
        bool adv= false;
        bool tie = true;
        for ( i = 0; i < 5; i++)
        {
            if (record[2*i] == '1')
                sca += 1;
            if (sca != scb)
             {
                int rea = 5 - i - 1;
                int reb = 5 - i;
                if ((sca < scb && sca + rea < scb) || (scb < sca && scb + reb< sca))
                {
                    adv = true;
                    shots = 2 * i + 1;
                    break;
                }
            }
            if (record[2 * i + 1] == '1')
                scb += 1;
            if (sca != scb)
             {
                int rea = 5 - i - 1;
                int reb = 5 - i - 1;
                if ((sca < scb && sca + rea < scb) || (scb < sca && scb + reb < sca))
                 {
                    adv = true;
                    shots = 2 * i + 2;
                    break;
                }
            }
        }
        if (adv) {
           cout<<((sca>scb)? "TEAM-A " : "TEAM-B " );
           cout<<shots<<"\n";
            continue;
        }
        if (sca == scb)
         {
            for (q = 0; q < 5; q++)
            {
                if (record[2 *q + 10] == '1')
                    sca += 1;
                if (record[2 *q + 11] == '1')
                    scb += 1;
                if (sca!= scb)
                 {
                    cout<<((sca>scb)? "TEAM-A " : "TEAM-B " );
                    cout<<2*q + 12<<"\n";
                    tie = false;
                    break;
                }
            }
        }
        if (tie)
            cout << "TIE\n";
    }
    return 0;
} 
