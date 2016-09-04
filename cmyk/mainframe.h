#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <QFrame>

namespace CMYK {

class MainFrame : public QFrame{

    Q_OBJECT

public:
    MainFrame(QWidget *parent=0);
    virtual ~MainFrame();
};

} //namespace CMYK

#endif // MAINFRAME_H
