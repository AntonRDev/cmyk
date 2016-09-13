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

    STATUS get_status() const {return status_;}
    void set_status(STATUS s) {status_ = s;}

    int get_priority() const {return priority_;}
    void set_priority(int p) {priority_ = p;}

    const QString & get_manager() const {return manager_;}
    void set_manager(const QString & m) {manager_ = m;}

    const QString & get_company() const {return company_;}
    void set_company(const QString & m) {company_ = m;}

    const QString & get_name() const {return name_;}
    void set_name(const QString & n) {name_ = n;}

    const QDate & get_create_date() const {return create_date_;}
    const QTime & get_create_time() const {return create_time_;}

    const QDate & get_dl_date() const {return dead_line_date_;}
    const QTime & get_dl_time() const {return dead_line_time_;}
    void set_dl_date(const QDate & d) {dead_line_date_ = d;}
    void set_dl_time(const QTime & t) {dead_line_time_ = t;}

    const Paper & get_cover_paper() const {return cover_paper_;}
    void set_cover_paper(const Paper & p) {cover_paper_ = p;}
    const Paper & get_block_paper() const {return block_paper_;}
    void set_block_paper(const Paper & p) {block_paper_ = p;}

    const Lamination & get_cover_lamination() const {return cover_lamination_;}
    void set_cover_lamination(const Lamination & l) {cover_lamination_ = l;}
    const Lamination & get_block_lamination() const {return block_lamination_;}
    void set_block_lamination(const Lamination & l) {block_lamination_ = l;}

    const QString & get_comments() const {return comments_;}
    void set_comments(const QString & c) {comments_ = c;}

};

} //namespace CMYK

#endif // ORDER_H
