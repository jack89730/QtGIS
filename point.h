#ifndef POINT_H
#define POINT_H
#include <QString>
#include <QTextStream>

class Point
{
public:
    Point();
    double x,y;
    bool LoadPoint(QTextStream* textStream,Point* pt);
    void DrawPoint();
};

#endif // POINT_H
