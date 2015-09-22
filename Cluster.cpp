//Narayan Ramjali

#include "Point.h"
#include "Cluster.h"
#include <vector>
using namespace std;


class cluster{
public:
    int nop;
    vector<Clustering::Point*> my_vec;
    cluster(){
        nop = 0;
    }
    cluster* operator+(Clustering::Point* p){
        nop++;
        my_vec.push_back(p);
        
        cluster *c = new cluster();
        c->nop = nop;
        c->my_vec = my_vec;
        return c;
    }
    
    void operator-(Clustering::Point* p){
        nop--;
      //  my_vec.pop_back(p);
        
        cluster *c = new cluster();
        c->nop = nop;
        c->my_vec = my_vec;
     //   return c;
    }
    
    bool operator==(cluster* c){
        if (c->nop == nop){
            for (int i = 0; i < nop; i++){
                if (my_vec[i] != c->my_vec[i])
                    return false;
            }
            return true;
        }
        return false;
    }
    
    bool operator!=(cluster* c){
        if (c->nop == nop){
            for (int i = 0; i < nop; i++){
                if (my_vec[i] == c->my_vec[i])
                    return false;
            }
            return true;
        }
        return true;
    }
};

