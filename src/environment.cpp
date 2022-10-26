#include <iostream>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>

#include "pointCloudReader.cpp"

int main(int argc, char** argv){
    std::cout << "Environment started" << std::endl;

    // pcl::visualization::PCLVisualizer::Ptr viewer(
    //     new pcl::visualization::PCLVisualizer("3d viewer")    
    // );

    // pcl::PointCloud<pcl::PointXYZI>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZI>);


    // if(pcl::io::loadPCDFile<pcl::PointXYZI>(
    //     "../src/sensors/data/pcd/data_1/0000000000.pcd", *cloud)
    //     == -1){
    //     PCL_ERROR ("Couldn't read file test_pcd.pcd \n");
    //     return (-1);
    // }else{

    //     return (0);
    // }

    PointCloudReader<pcl::PointXYZI>* reader = new PointCloudReader<pcl::PointXYZI>();
    reader->readPcdFile("../src/sensors/data/pcd/data_1/0000000000.pcd");
    // reader->readPcdFile("../src/sensors/data/pcd/data_1/0000000000.pcd");

    return 0;
}