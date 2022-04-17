/* Code fragment to read multiple files */

static string DIRECTORY= "data/....";

void OpenFiles(string file);

int main(void)
{
        OpenFiles(DIRECTORY);
        return 0;
}

void OpenFiles(string file)
{
        static string data_file=" ";
        ifstream infile (file);
        cout<<endl;

        if (!infile.is_open())
        {
                cout<<"Error: File Not Found - "<<file<<endl;
                return;
        }
        else
        {
                cout<<"Success: File Opened - "<<file<<endl;
        }
        cout<<endl;
        string line;
        int count=1;

        while (getline(infile, line))
        {
                data_file="data/"+line;
                ifstream infile (data_file);

                cout<<count<<"     ";

                if (!infile.is_open())
                {
                        cout<<"Error: File Not Found - "<<data_file<<endl;
                        return;
                }
                else
                {
                        cout<<"Success: File Opened - "<<data_file<<endl;
                }



                //  do some work...



                count++;
                cout<<endl;
        }
}
