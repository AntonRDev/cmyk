#include "order.h"

namespace CMYK{

Order::Order(){

}

Order::Order(STATUS status, int priority, QString manager, QString company, QString name,
      QDate dl_date, QTime dl_time, Paper cov_paper, Paper bl_paper,
      Lamination cov_lamin, Lamination bl_lamin, QString comments)
    : status_(status),
      priority_(priority),
      manager_(manager),
      company_(company),
      name_(name),
      create_date_(QDate::currentDate()),
      create_time_(QTime::currentTime()),
      dead_line_date_(dl_date),
      dead_line_time_(dl_time),
      cover_paper_(cov_paper),
      block_paper_(bl_paper),
      cover_lamination_(cov_lamin),
      block_lamination_(bl_lamin),
      comments_(comments) {}


} //namespace CMYK
