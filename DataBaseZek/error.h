#ifndef ERROR_H
#define ERROR_H



class Error
{
public:
    Error();
    virtual void isError()=0;
};

class ErrorNoThisElement: public Error
{

public:
    void isError();
};
class ErrorOpenFile: public Error
{
public:
    void isError();
};
class ErrorFunction:public Error
{
public:
    void isError();

};

#endif // ERROR_H
