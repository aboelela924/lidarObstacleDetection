#pragma once

#include <pcl/io/pcd_io.h>
#include <vector>
#include <string>
#include <iostream>

template<typename T>
class PointCloudReader
{
private:
    /* data */
public:
    PointCloudReader(/* args */);
    ~PointCloudReader();
    typename pcl::PointCloud<T>::Ptr readPcdFile(std::string filePath);
    typename std::vector<boost::filesystem::path> streamPcd(std::string dataPath);
};

template<typename T>
PointCloudReader<T>::PointCloudReader(/* args */)
{
}

template<typename T>
PointCloudReader<T>::~PointCloudReader()
{
}
