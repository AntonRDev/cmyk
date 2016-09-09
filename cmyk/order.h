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
    STATUS     status_;
    int        priority_;
    QString    manager_;
    QString    company_;
    QString    name_;

    QDate      create_date_;
    QTime      create_time_;
    QDate      dead_line_date_;
    QTime      dead_line_time_;

    Paper      cover_paper_;
    Paper      block_paper_;
    Lamination cover_lamination_;
    Lamination block_lamination_;

    QString    comments_;

public:
    Order();
    Order(STATUS status, int priority, QString manager, QString company, QString name,
          QDate dl_date, QTime dl_time, Paper cov_paper, Paper bl_paper,
          Lamination cov_lamin, Lamination bl_lamin, QString comments);

    ~Order();

    STATUS getStatus() const {return status_;}
    void setStatus(STATUS s) {status_ = s;}

    int getPriority() const {return priority_;}
    void setPriority(int p) {priority_ = p;}

    const QString & getManager() const {return manager_;}
    void setManager(const QString & m) {manager_ = m;}

    const QString & getCompany() const {return company_;}
    void setCompany(const QString & m) {company_ = m;}

    const QString & getName() const {return name_;}
    void setName(const QString & n) {name_ = n;}

    const QDate & getCreateDate() const {return create_date_;}
    const QTime & getCreateTime() const {return create_time_;}

    const QDate & getDLDate() const {return dead_line_date_;}
    const QTime & getDLTime() const {return dead_line_time_;}
    void setDLDate(const QDate & d) {dead_line_date_ = d;}
    void setDLTime(const QTime & t) {dead_line_time_ = t;}

    const Paper & getCoverPaper() const {return cover_paper_;}
    void setCoverPaper(const Paper & p) {cover_paper_ = p;}
    const Paper & getBlockPaper() const {return block_paper_;}
    void setBlockPaper(const Paper & p) {block_paper_ = p;}

    const Lamination & getCoverLamination() const {return cover_lamination_;}
    void setCoverLamination(const Lamination & l) {cover_lamination_ = l;}
    const Lamination & getBlockLamination() const {return block_lamination_;}
    void setBlockLamination(const Lamination & l) {block_lamination_ = l;}

    const QString & getComments() const {return comments_;}
    void setComments(const QString & c) {comments_ = c;}

};

} //namespace CMYK

#endif // ORDER_H
