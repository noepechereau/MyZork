#ifndef ROOMS_H
#define ROOMS_H

#include <QMainWindow>
#include <QPixmap>
#include <vector>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class rooms
{   
    public:
       int _name ;
       vector<int> _neighboors ;
       rooms(int name, vector<int> vec);
};

#endif // ROOMS_H
