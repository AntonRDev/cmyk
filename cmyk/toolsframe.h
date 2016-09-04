#ifndef TOOLSFRAME_H
#define TOOLSFRAME_H
#include <QFrame>

namespace CMYK {

class ToolsFrame : public QFrame{

    Q_OBJECT

public:
    ToolsFrame(QWidget *parent=0);
    virtual ~ToolsFrame();
};

} //namespace CMYK

#endif // TOOLSFRAME_H
