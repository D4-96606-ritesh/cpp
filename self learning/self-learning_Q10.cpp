#include<iostream>
using namespace std;
class Matrix{
    int row;
    int  col;
    double **data;
    public:
    Matrix(int row, int col):row(row),col(col){
         data = new double*[row];
        for(int i = 0 ; i<row;i++)
        {
            for(int j = 0; j<col; j++)
            {
                data[i] = new double[col];
            }
        }
    }
    void populateMatrix(){
        cout<<endl<<"Enter values in matrix : "<<endl;
        for(int i = 0; i<row; i++)
        {
            for(int j = 0 ; j < col; j++)
            {
                 cin>>data[i][j];
            }
            
        }
    }
    void display(){
        cout<<endl<<"values in matrix : "<<endl;
        for(int i = 0; i<row; i++)
        {
            for(int j = 0 ; j < col; j++)
            {
                 cout<<data[i][j]<<" ";
            }
            cout<<endl;
            
        }
    }
    friend Matrix operator+(Matrix &m1, Matrix &m2);
    friend Matrix operator-(Matrix &m1,Matrix &m2);
    friend Matrix operator*(Matrix &m1,Matrix &m2);
    ~Matrix(){
        for(int i = 0; i < row; i++)
        delete [] data[i];
        delete [] data;
        data = NULL;
    }
};
Matrix operator+(Matrix &m1, Matrix &m2){
    Matrix m3(m1.row,m1.col);
    cout<<"matrix  3 crated";
     for(int i = 0; i<m1.row; i++)
        {
            for(int j = 0 ; j < m1.col; j++)
            {
                 m3.data[i][j] = m1.data[i][j] + m2.data[i][j];
                 cout<<endl<<m3.data[i][j];
            }
            cout<<endl;
            cout<<"row complete "<<i;
        }
        return m3;
}
Matrix operator-(Matrix &m1, Matrix &m2)
{
    Matrix m3(m1.row,m1.col);
    for(int i = 0 ; i < m1.row; i++)
    {
        for(int j = 0; j < m1.col; j++)
        {
            m3.data[i][j] = m1.data[i][j] - m2.data[i][j];
        }
    }
    return m3;
}
Matrix operator*(Matrix &m1, Matrix &m2){
    Matrix m3(m1.row,m2.col);
    for(int i =0 ; i < m1.row; i++)
    {
        for(int j = 0 ;j < m2.col; j++){
            m3.data[i][j] = m1.data[i][j] * m2.data[i][j];
        }
    }
    return m3;
}
int main(){
    Matrix m1(3,3),m2(3,3);
    m1.populateMatrix();
      m1.display();
    m2.populateMatrix();

    m2.display();
    Matrix m3 = m1 + m2;
    m3.display();
    Matrix m4 = m1 - m2;
    m4.display();
    Matrix m5 = m1 * m2;
    m5.display();
}