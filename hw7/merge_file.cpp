#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<sstream>


using namespace std;

int main()
{
    int n;
    cout<<"Please put in the number of files need to merge"<<endl;
    cin>>n;
    vector<string> source_files;
    for(int i=1;i<=n;i++)
    {
        stringstream stream;
          stream<<i;
          string num;
          stream>>num;
          string result="h"+num+".cpp";
          source_files.push_back(result);
    }
    string output_filename="202400202058.txt";
    ofstream output_file(output_filename);
    if(!output_file.is_open())
    {
        cerr<<"error: can not create a file"<<output_filename<<endl;

    }
    for(const string& filename: source_files)
    {
        ifstream input_file(filename);
        if(!input_file.is_open())
        {
            cerr<<"error: can not open file"<<filename;
            continue;
        }
        cout<<"Processing------------"<<endl;
        output_file<<"======================="<<endl;
        output_file<<filename<<"\n";
        output_file<<"======================="<<endl;
        output_file<<"\n\n";
        output_file<<input_file.rdbuf();
        output_file<<"\n\n";

        cout<<"Done"<<endl;
    }
    return 0;

}
