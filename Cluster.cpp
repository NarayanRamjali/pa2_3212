//Narayan Ramjali

//
// Created by Narayan Ramjali on 9/29/15.
//
#include "Point.h"
#include "Cluster.h"
namespace Clustering {

    Cluster::Cluster(const Cluster &cluster) {

        *this = cluster;
    }

    Cluster &Cluster::operator=(const Cluster &cluster) {

        return *this;
    }

    Cluster::~Cluster() {

    }

    void Cluster::add(PointPtr const &ptr) {
        LNodePtr newNode = new LNode;
        newNode->p = ptr;
        newNode->next = nullptr;
    }

    PointPtr const &Cluster::remove(PointPtr const &ptr) {

        /*  if (this == &ptr) {
              return *this;
          } else {
              delete[] values;

              dim = ptr.dim;
              values = new double[dim];
              for (int i = 0; i < dim; i++)
                  values[i] = ptr.values[i];
          }
          */
        // return *this;


        // return <#initializer#>;
    }

    std::ostream &operator<<(std::ostream &ostream, const Cluster &cluster) {
        // return <#initializer#>;
    }

    std::istream &operator>>(std::istream &istream, Cluster &cluster) {
        //  return <#initializer#>;
    }

    Cluster &Cluster::operator+=(const Cluster &rhs) {
        //  return <#initializer#>;
    }

    Cluster &Cluster::operator+=(const Point &rhs) {

        return *this;
        // return <#initializer#>;
    }

    Cluster &Cluster::operator-=(const Point &rhs) {
        //  return <#initializer#>;
    }

    Cluster &Cluster::operator-=(const Cluster &rhs) {
        // return <#initializer#>;
    }


    const Cluster operator+(const Cluster &lhs, const Cluster &rhs) {
        Cluster newCluster = Cluster();


        return newCluster;
        //  return Clustering::Cluster();
    }

    const Cluster operator-(const Cluster &lhs, const Cluster &rhs) {
        Cluster newCluster = Cluster();


        return newCluster;

        //  return Clustering::Cluster();
    }

    const Cluster operator+(const Cluster &lhs, PointPtr const &rhs) {
        Cluster newCluster = Cluster();


        return newCluster;

        // return Clustering::Cluster();
    }

    const Cluster operator-(const Cluster &lhs, PointPtr const &rhs) {
        Cluster newCluster = Cluster();


        return newCluster;

        // return Clustering::Cluster();
    }

}


