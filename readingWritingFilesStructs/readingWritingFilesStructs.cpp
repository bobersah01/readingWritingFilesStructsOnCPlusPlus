//READING WRITING OPERATIONS ON FILES, STRUCT OPERATIONS, DYNAMIC MEMORY ALLOCATION

/*#include <iostream>
#include <fstream>
#include <string>
#include <new>
using namespace std;*/
/*int main()
{
    ofstream file;
    int nuser;
    file.open("example.txt");
    cin >> nuser;
    for (int i = 0; i < nuser; i++)
    {
        file  << "Writing this to a file." << endl;
    }
    file.close();
    cout << "Writing operation was successfully performed." << endl;
    return 0;
}*/
/*int main()
{
    //ofstream file ("example.bin", ios::out|ios::bin|ios::app);
    //file.open("example.bin");
    file << "Writing this to the file" << endl;
    file.close();
    return  0;
}*/
/*int main()
{
    ofstream fileName;
    fileName.open("example.txt", ios::out|ios::app);
    if (fileName.is_open())
    {
        fileName << "Writing something" << endl;
        fileName.close();
    }
    else
    {
        cout << "File can not be opened" << endl;
    }
    return 0;
}*/
/*
int main()
{
    string name = "example.txt";
    ofstream txtFile (name);
    //file.open("example.txt");
    if (txtFile.is_open())
    {
        txtFile << "This is a line.\n";
        txtFile << "This is another line.\n";
        txtFile.close();
    }
    else
    {
        cout << "File is not be opened." << endl;
        return 0;
    }
}*/
/*
int main ()
{
    ofstream file ("example.txt, ios::out|ios::app");
    //file.open("example.txt",ios::out);
    file << "Writing this to the file 5" << endl;
    file.close();
    return 0;
}*/
/*
int main()
{
    string fileName = "exampleTwo.txt";
    ofstream file(fileName);
    if(file.is_open())
    {
        file << "Writing c++ best two three four five." << endl;
        file << "My name is Omer þahin þahin þahin." << endl;
        file.close();
        cout << "File successfully opened." << endl;
    }
    else
        cout << "File could not be opened" << endl;
    return 0;
}*/
//reading operations must be done
/*
int main()
{
    string fileName = "exampleTwo.txt";
    string line;
    ifstream file(fileName);
    if (file.is_open())
    {
        while(getline(file,line))
        {
            cout  << line << endl;
        }
        file.close();
    }
    else
        cout << "File could not be opened" << endl;
}*/

/*bad() = mantýk olarak, eðer yazdýrma veya okuma iþlemi baþarýlý tamamlanmýyorsa, true döndürür.
örneðin açýlmayan bir dosya için yazma iþlemi.*/
/*
int main ()
{
    //get fonksiyonu kullanılacağı için mantık olarak reading operasyonu kullanılacak.
    //ifstreamden yararlanıyorum.

    streampos begin, end; //dosyanın başlangıçtaki konumlarını depolarlar.
    ifstream file ("example.bin", ios::binary); //exampleTwo.txt veya example.txt

    begin = file.tellg();
    file.seekg(0, ios::end);
    end = file.tellg();
    file.close();

    cout << "Size is: " << (end - begin) << "bytes." << endl;
    return 0;
}*/
/*
int main ()
{
    string fileName = "exampleTwo.txt";
    ofstream file(fileName);
    if (file.is_open())
    {
        file << "Writing this to the lines." << endl;
        file.close();
        cout << "Writing operation is successfully performed." << endl;
    }
    return 0;
}*/

/*int main()
{
    string fileName = "exampleTwo.txt";
    ifstream file(fileName, ios::ate);
    streampos sizeofFile = file.tellg();
    file.close();
    cout << "The size of the file: " << sizeofFile << "bytes." <<endl;
}*/
/*
int main()
{
    string fileName = "exampleTwo.txt";
    ofstream file(fileName);

    if (file.is_open())
    {
        file << "It is a very good day. Very good" << endl;
        file.close();
        cout << "File is open." << endl;
    }
    return 0;
}*/
/*
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    ofstream file("example.bin", ios::binary);
    if (file.is_open())
    {
        for (int i = 0; i< 10; i++)
            file << arr[i] << " ";
        file.close();
    }
    return 0;
}*/
/*
int main()
{
    cout <<"Int: " << sizeof(int) << endl;
    cout <<"Character: " << sizeof(char) << endl;
    cout <<"Double: " << sizeof(double) << endl;
    cout <<"Float: " << sizeof(float) << endl;
}*/
/*int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    string fileName = "example.txt";
    ofstream file(fileName);
    if(file.is_open())
    {
        for (int i = 0; i < 10; i++)
            file.write((char*)&arr[i],sizeof(int));
        file.close();
    }
    return 0;
}*/

/*int main()
{
    string fileName = "exampleThree.txt";
    ifstream file(fileName, ios::ate);

    if(file.is_open())
    {
        streampos fileSize = file.tellg();
        char* mBlock = new (nothrow) char[fileSize]; //(nothrow)
        file.seekg(0, ios::beg);
        file.read(mBlock, fileSize);
        file.close();
        char* p = mBlock;

        //int arraySize = fileSize / sizeof(int);

        for (int i = 0; i < 10; i++)
        //while(fileSize > 0)
        {
            int n = *((int*) p);
            cout << n << "\t";
            p += sizeof(int);
            fileSize -= sizeof(int);
        }
        delete[] mBlock;
    }
    return 0;
}*/

/*struct movie
{
    string title;
    int year;
};

void printMovies(movie m)
{
    cout << m.title;
    cout << " (" << m.year << ")" << endl;
}

int main()
{
    movie mine, yours;
    mine.title = "The Lord Of The Rings";
    mine.year = 1993;

    cout << "Enter 'yours' title: " << endl;
    getline(cin, yours.title);
    cout << "Enter 'yours' year: " << endl;
    cin >> yours.year;

    cout << "My favorite movie: \n";
    printMovies(mine);
    cout << "Yours' favorite movie: \n";
    printMovies(yours);
}*/
/*
struct movie
{
    string title;
    int year;
};

void printMovies(movie m)
{
    cout << m.title;
    cout << "(" << m.year << ")" << endl;
}

int main()
{
    const int sizeOfMovies = 3;
    movie movies[sizeOfMovies];

    for (int i = 0; i < sizeOfMovies; i++)
    {
        cout << "Enter title: ";
        getline(cin, movies[i].title);

        cout << "Enter year: ";
        cin >> movies[i].year;
    }

    cout << "\nYou have entered these movies:\n";
    for (int i = 0; i < sizeOfMovies; i++)
    {
        printMovies(movies[i]);
    }

    return 0;
}*/
/*
struct movie
{
    string title;
    int year;
};

int main()
{
    movie film;
    movie* ptrFilm = &film;
    cout << "Enter title: ";
    getline(cin, film.title);
    cout << "Enter year: ";
    cin >> film.year;
    cout << "You have entered these movies:\n";
    cout << "- " << ptrFilm->title;
    cout << " (" << ptrFilm->year << ")\n";
    return 0;
}*/


/*
#include <iostream>
#include <new>
#include <string>
#include <fstream>
using namespace std;

struct timing
{
    unsigned short h;
    unsigned short m;
};

struct movie
{
    string title;
    string director;
    float rating;
    unsigned int budget;
    timing duration;
    unsigned short year;
};

movie askForMovie(bool isFirst)
{
    movie mov;
    if (isFirst)
        cout << "Please enter to inserting movies." << endl;
    cin.ignore();

    cout << "Title: ";
    getline(cin, mov.title);
    cout << "Director: ";
    getline(cin, mov.director);
    cout << "Year: ";
    cin >> mov.year;
    cout << "Rating: ";
    cin >> mov.rating;
    cout << "Duration (hours): ";
    cin >> mov.duration.h;
    cout << "Duration (minutes): ";
    cin >> mov.duration.m;
    cout << "Budget: ";
    cin >> mov.budget;

    return mov;
}

void createMovieDatabase(const string& fileName, int numberOfMovies)
{
    ofstream file(fileName, ios::binary | ios::app);
    if (file.is_open())
    {
        for (int i = 0; i < numberOfMovies; i++)
        {
            movie mov = askForMovie();
            file.write((char*)&mov, sizeof(movie));
        }
        file.close();
    }
    else
        cout << "File " << fileName << " can not be opened." << endl;
}*/