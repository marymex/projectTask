#include <cmath>
#include <iostream>
#include "clusters.h"
#include <fstream>
#include <sstream>
#include <map>



void readpoints(std::ifstream& in, std::vector<mycluster::point>& points)
{
    // implement a function that takes in an ifstream variable and a vector of points
    // the ifstream in variable is an opened .csv table
    // the function should read data from the table, fill in the vector of points and normalize the vector of points by column.
    // in each column the data should be a double number from the range [0, 1]

    return ;
}



void write_clusters(std::string outfilename, std::vector<mycluster::point>& points)
{
    // implement a function that takes in the name of the output .txt file and a vector of points.
    // the function should output data from the vector to the .txt file in the following format "point ID", "cluster"
    // the first line of the output file should be "id cluster" as the title.
    //  for example:
    //  id cluster
    //  1 3
    //  2 4
    //  3 1
    //  4 4

    return ;
}

void write_siluettes(std::string outfilename, std::vector<mycluster::cluster>& clusters)
{
    //  implement a function that takes in the name of the output .txt file and a vector of clusters.
    //  the function should output data from the vector to the .txt file in the following format "cluster index", "silhouette"
    //  the first line of the output file should be "number of clusters: 7, siluette coefficients values:" as the title.
    //  for example:
    //  number of clusters: 6, siluette coefficients values:
    //  cluster1 0.697248
    //  cluster2 1.5
    //  cluster3 1.1521
    //  cluster4 0.507674
    //  cluster5 1.5
    //  cluster6 1.5
    return ;
}



