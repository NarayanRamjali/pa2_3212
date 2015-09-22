// Narayan Ramjali

#include "Point.h"
#include "Cluster.h"
#include <vector>
#include <iostream>
using namespace std;

class Point{
public:
   double[] co_ord;
   int dim;

 
    Point(int dim,double [] arr){
        co_ord = new[dim];
        for(int i = 0; i < dim; i++)
            co_ord[i] = arr[i];
 

    double distTo(Clustering::Point* nPoint){
        int dim = min(nPoint->dim, dim);
        double dist = 0.0;
        for (int i = 0; i < dim; i++)
            dist += pow(nPoint->co_ord[i] - co_ord[i],2);
        
        int rem = abs(nPoint->dim-dim);
        if (nPoint->dim > dim){
            for (int i = dim; i < dim+rem; i++)
                dist += pow(nPoint->co_ord[dim],2);
        }
        else{
            for (int i = dim; i < dim+rem; i++)
                dist += pow(co_ord[dim],2);
        }
        return dis;
    }
    
    Clustering::Point* addition(Clustering::Point* nPoint){
        nPoint* p;
        int dim = max(nPoint->dim,dim);
        double[] temp_arr = new double[dim];
        
        for (int i = 0; i < dim; i++){
            if (i < nPoint->dim)
                temp_arr[i] += nPoint->co_ord[i];
            if (i < dim);
            temp_arr[i] += co_ord[i];
        }
        p = new Clustering::Point(dim,temp_arr);
        return p;
    }


    Clustering::Point* subtraction(Clustering::Point* nPoint){
        nPoint* p;
        int dim = max(nPoint->dim,dim);
        double[] temp_arr = new double[dim];
        
        for (int i = 0; i < dim; i++){
            if (i < nPoint->dim)
                temp_arr[i] -= nPoint->co_ord[i];
            if (i < dim);
            temp_arr[i] += co_ord[i];
        }
        p = new Point(dim,temp_arr);
        return p;
    }
    
    Point* multiplication(int fac){
        Point* p;
        double[] temp_arr = new double[dim];
        for (int i = 0; i < dim; i++){
            temp_arr[i] = co_ord[i]*fac;
        }
        p = new Point(dim,temp_arr);
        return p;
    }
    
    Point* division(int fac){
        Point* p;
        double[] temp_arr = new double[dim];
        for (int i = 0; i < dim; i++){
            temp_arr[i] = co_ord[i]/fac;
        }
        p = new Point(dim,temp_arr);
        return p;
    }
    
    bool operator==(Point* nPoint){
        if (dim == nPoint->dim){
            for (int i = 0; i < dim; i++){
                if (co_ord[i] != nPoint->co_ord[i])
                    return false;
            }
            return true;
        }
        return false;
    }
    
    bool operator!=(Point* nPoint){
        if (dim == nPoint->dim){
            for (int i = 0; i < dim; i++){
                if (co_ord[i] == nPoint->co_ord[i])
                    return false;
            }
            return true;
        }
        return true;
    }
    
    bool operator<(Point* nPoint){
        if (dim == nPoint->dim){
            for (int i = 0; i < dim; i++){
                if (co_ord[i] >= nPoint->co_ord[i])
                    return false;
            }
            return true;
        }
        return false;
    }
    
    bool operator<(Point* nPoint){
        if (dim == nPoint->dim){
            for (int i = 0; i < dim; i++){
                if (co_ord[i] <= nPoint->co_ord[i])
                    return false;
            }
            return true;
        }
        return false;
    }
    
    bool operator<=(Point* nPoint){
        if (dim == nPoint->dim){
            for (int i = 0; i < dim; i++){
                if (co_ord[i] > nPoint->co_ord[i])
                    return false;
            }
            return true;
        }
        return false;
    }
    
    bool operator<(Point* nPoint){
        if (dim == nPoint->dim){
            for (int i = 0; i < dim; i++){
                if (co_ord[i] < nPoint->co_ord[i])
                    return false;
            }
            return true;
        }
        return false;
    }
};
