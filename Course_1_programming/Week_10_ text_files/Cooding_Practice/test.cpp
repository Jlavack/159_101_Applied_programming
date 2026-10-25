
fstream datafile;          // define a file object
int phonenumber;
string filename, name;

int main() {
  // 1. open the file
  filename = "C:\\Users\\johnl\\Documents\\159101_Applied_programming\\Code\\Classes\\Week_10_text_files\\names.txt";
  datafile.open(filename.c_str(), fstream::out);

  // 2. enter the data using a trailing value of ?? for the name
  cout << "Enter the name and end with ?? ";
  getline (cin, name);  // names may have spaces
  while (name != "??") {
    cout << "Enter phone number: ";
    cin >> phonenumber;

    getchar();            // clear the input buffer
    datafile << name << ";" << phonenumber << endl;
    cout << "Enter the name and end with ?? "; //restart the while loop
    getline (cin, name);  // names may have spaces
  }
  cout << "You have created the file called " << filename << endl;
  // 4. Close the file
  datafile.close();
}
