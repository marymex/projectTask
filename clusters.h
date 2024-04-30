#ifndef CLUSTERS_H
#define CLUSTERS_H

#include <vector>
#include <cmath>
#include <map>
#include <set>

namespace mycluster
{

class point
{
private:
    std::vector<double> data;
    bool isMedian;
    int cluster;
    double a; // cohesion
    double b; // separation
    double siluette;

public:
    point(std::vector<double>& data)
    {
        // Implement this constructor
    }

    void setMedian(bool isMedian)
    {
        // fix me
    }

    void setCluster(int cluster)
    {
        // fix me
    }

    void setSiluette(double siluette)
    {
         // fix me
    }

    void setA(double a)
    {
         // fix me
    }

    void setB(double b)
    {
        // fix me
    }

    bool getMedian()
    {
        // fix me
    }

    int getCluster()
    {
       // fix me
    }

    double getSiluette()
    {
       // fix me
    }

    double getA()
    {
         // fix me
    }

    double getB()
    {
        // fix me
    }

    double& operator[](int i)
    {
         // fix me this function returns data[i]
    }

    double operator[](int i) const
    {
        // fix me this function returns data[i]
    }

    int size() const
    {
         // implement this function
        // it returns the side of data
    }
};


void normalize_column(int ind, std::vector<point>& points);
double dist2(const point &a, const point &b);
double dist(const point &a, const point &b);


struct cluster
{
public:
    int id;
    double siluette;

    bool operator<(const cluster& other);

};

double cost(std::vector<point>& points, std::vector<int>& m_ind, bool ischange = false);
void clusteringPAM(std::vector<point>& points);
void interpreting(std::vector<point>& points, std::vector<cluster>& clusters) ;

}

#endif // CLUSTERS_H

