#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main()
{
    std::vector<std::string> source_files={
        //hw51
        "hw51.h",
        "hw5.cpp",
        //hw52
        "hw52.cpp",
        //hw53
        "hw53.h",
        "hw531.cpp",
        //hw54
        "hw54.cpp"
    };
    std::string output_filename="Homework_submission.txt";
    std::ofstream output_file(output_filename);
    if(!output_file.is_open())
    {
        std::cerr<<"error:can not create output_file  "<<output_filename<<std::endl;
        return 1;
    }
    for(const std::string& filename:source_files)
    {
        std::ifstream input_file(filename);
        if(!input_file.is_open())
        {
            std::cerr<<"warning: skip the file  "<<filename<<std::endl;
            continue;

        }
        std::cout<<"processing......"<<std::endl;
        output_file<<"=======================================\n";
        output_file<<filename<<"\n";
        output_file<<"=======================================\n";
        output_file<<input_file.rdbuf();

        output_file<<"\n\n";

        std::cout<<"Done"<<std::endl;
    }
    return 0;

}
