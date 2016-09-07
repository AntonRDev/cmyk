#ifndef ORDER_H
#define ORDER_H
#include <QString>
#include <QDate>
#include <QTime>
#include "paper.h"
#include "lamination.h"

namespace CMYK{

class Order{

public:
    enum STATUS{COMPLETE, HOLD, WAITING, INPROGRESS};

private:
    STATUS     status;
    int        priority;
    QString    manager;
    QString    company;
    QString    name;

    QDate      createDate;
    QTime      createTime;
    QDate      deadLineDate;
    QTime      deadLineTime;

    Paper      coverPaper;
    Paper      blockPaper;
    Lamination coverLamination;
    Lamination blockLamination;

    QString    comments;

public:
    Order();
    Order(int prior, QString manag, QString comp, QString nme,
          QDate dlDate, QTime dlTime, Paper covPaper, Paper blPaper,
          Lamination covLamin, Lamination blLamin, QString comm, STATUS st=WAITING);

    ~Order();

    STATUS getStatus() const {return status;}
    void setStatus(STATUS s) {status = s;}

    int getPriority() const {return priority;}
    void setPriority(int p) {priority = p;}

    const QString & getManager() const {return manager;}
    void setManager(const QString & m) {manager = m;}

    const QString & getCompany() const {return company;}
    void setCompany(const QString & m) {company = m;}

    const QString & getName() const {return name;}
    void setName(const QString & n) {name = n;}

    const QDate & getCreateDate() const {return createDate;}
    const QTime & getCreateTime() const {return createTime;}

    const QDate & getDLDate() const {return deadLineDate;}
    const QTime & getDLTime() const {return deadLineTime;}
    void setDLDate(const QDate & d) {deadLineDate = d;}
    void setDLTime(const QTime & t) {deadLineTime = t;}

    const Paper & getCoverPaper() const {return coverPaper;}
    void setCoverPaper(const Paper & p) {coverPaper = p;}
    const Paper & getBlockPaper() const {return blockPaper;}
    void setBlockPaper(const Paper & p) {blockPaper = p;}

    const Lamination & getCoverLamination() const {return coverLamination;}
    void setCoverLamination(const Lamination & l) {coverLamination = l;}
    const Lamination & getBlockLamination() const {return blockLamination;}
    void setBlockLamination(const Lamination & l) {blockLamination = l;}

    const QString & getComments() const {return comments;}
    void setComments(const QString & c) {comments = c;}

};

} //namespace CMYK

#endif // ORDER_H
