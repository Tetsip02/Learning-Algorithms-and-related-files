//GDA settings file
std::string data = "FisherIris.dat";
//in FisherIris.dat the first four columns contain the data (one feature per
//column and one data poin per row). The fifth column contains the labels.
//First 50 rows belong to Setosa class
//Rows 51 to 100 belong to versicolor class
//Last 50 rows belong to Virginica class

//Plotting only available for two features

//Set the boolean value of the part of the data that should be used for training to true

bool Setosa = true;
bool Versicolor = true;
bool Virginica = false;

bool SepalLength = true;
bool SepalWidth = true;
bool PetalLength = false;
bool PetalWidth = false;

const double PI=3.14159265358979323;
const double threshold=0.5;


//If you have new data that you want to fit, change the boolean below to true and uncomment the line below. The algorithm will output a file LDAHypothesis.out, containing the predictions.
bool newDat = false;
std::string newData;
//newData = "[name-of-data-file]";

//LDA or QDA?
bool LDA = true;
