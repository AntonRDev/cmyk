#include "order.h"

namespace CMYK{

Order::Order(){

}

Order::Order(int m_priority, QString m_manager, QString m_company, QString m_name,
      QDate dlDate, QTime dlTime, Paper covPaper, Paper blPaper,
      Lamination covLamin, Lamination blLamin, QString m_comments, STATUS st)
    : status(st),
      priority(m_priority),
      manager(m_manager),
      company(m_company),
      name(m_name),
      createDate(QDate::currentDate()),
      createTime(QTime::currentTime()),
      deadLineDate(dlDate),
      deadLineTime(dlTime),
      coverPaper(covPaper),
      blockPaper(blPaper),
      coverLamination(covLamin),
      blockLamination(blLamin),
      comments(m_comments) {}


} //namespace CMYK
