class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        //p truck;
        int pickp=0;
        int travelp=0;
        int lasthousep=0;
        //m truck;
        int pickm=0;
        int travelm=0;
        int lasthousem=0;
        //g truck;
        int pickg=0;
        int travelg=0;
        int lasthouseg=0;

        for(int i=0;i<garbage.size();i++){
            string currhouse=garbage[i];
            for(int j=0;j<currhouse.length();j++){
                char garbagetype=currhouse[j];

                if(garbagetype=='P'){
                    pickp++;
                    lasthousep=i;
                }
                if(garbagetype=='M'){
                    pickm++;
                    lasthousem=i;
                }
                if(garbagetype=='G'){
                    pickg++;
                    lasthouseg=i;
                }
            }
        }
        for(int i=0;i<lasthousep;i++){
            travelp=travelp+travel[i];
        }
        for(int i=0;i<lasthouseg;i++){
            travelg=travelg+travel[i];
        }
        for(int i=0;i<lasthousem;i++){
            travelm=travelm+travel[i];
        }

        int totalpickingtime= pickp+pickm+pickg;
        int totaltraveltime= travelp+travelm+travelg;
        int totaltime= totalpickingtime+totaltraveltime;
        return totaltime;
    }
};