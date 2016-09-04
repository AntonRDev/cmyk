#ifndef WORKFRAME_H
#define WORKFRAME_H

#include <QFrame>

namespace CMYK{

class WorkFrame : public QFrame{

    Q_OBJECT

public:
    WorkFrame(QWidget *parent=0);
    virtual ~WorkFrame();
};

} //namespace CMYK

#endif // WORKFRAME_H
