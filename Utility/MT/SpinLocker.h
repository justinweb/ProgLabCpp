/* 
 * File:   SpinLocker.h
 * Author: Justin
 *
 * Created on 2016年1月23日, 下午 9:33
 */

#ifndef SPINLOCKER_H
#define	SPINLOCKER_H

#include "../../Common.h"

PROGLAB_BEGIN_NAMESPACE_3(ProgLab,Utility,MT)
//namespace ProgLab { namespace Utility { namespace MT{

class SpinLocker {
public:
    SpinLocker();
    SpinLocker(const SpinLocker& orig);
    virtual ~SpinLocker();
private:

};

PROGLAB_END_NAMESPACE_3
//}}}

#endif	/* SPINLOCKER_H */

