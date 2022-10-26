#include "pointCloudReader.h"

template<typename T>
typename pcl::PointCloud<T>::Ptr PointCloudReader<T>::readPcdFile(std::string filePath){

    typename pcl::PointCloud<T>::Ptr cloud(new pcl::PointCloud<T>);
    if(pcl::io::loadPCDFile<pcl::PointXYZI>(filePath, *cloud)== -1){
        std::cout << "Failed to read pcd file. Empty cloud will be returned" << std::endl;
    }else{
        std::cout << "Pcd file read successfully. Pcd size: " << cloud->points.size() << std::endl;
    }
    return cloud;
}
