//
//  FWActionEffect.h
//  Framework_Cocos2dx
//
//  Created by ou-h on 13/06/05.
//  Copyright 2013年 Erawppa Co., Ltd.. All rights reserved.
//

#ifndef __FWActionEffect__OBJECT_H__
#define __FWActionEffect__OBJECT_H__

typedef enum
{
    FWE_MOVEDIRECT_NONE = 0,
    FWE_MOVEDIRECT_UP,
    FWE_MOVEDIRECT_DOWN,
    FWE_MOVEDIRECT_LEFT,
    FWE_MOVEDIRECT_RIGHT
}FWE_MOVEDIRECT;

#include "cocos2d.h"
#include "FWActionBase.h"

class FWActionEffect : public FWActionBase
{
public:
    FWActionEffect();
    
    ~FWActionEffect();
    
    static FWActionEffect *      create(const char *         fileName,
                                           int                  frameCount,
                                           cocos2d::CCPoint     scale,
                                           cocos2d::CCRect      rect,
                                           cocos2d::ccColor3B   color,
                                           float                lastingTime,
                                           float                interval,
                                           float                delay,
                                           FWE_MOVEDIRECT       moveDirection = FWE_MOVEDIRECT_NONE);
    
    bool                            init(const char *         fileName,
                                         int                  frameCount,
                                         cocos2d::CCPoint     scale,
                                         cocos2d::CCRect      rect,
                                         cocos2d::ccColor3B   color,
                                         float                lastingTime,
                                         float                interval,
                                         float                delay,
                                         FWE_MOVEDIRECT       moveDirection);
    
    void                            onCreateEffects(float interval);
    
protected:
    const char *                    m_pccFileName;
    int                             m_iFrameCount;
    cocos2d::CCPoint                m_poScale;
    cocos2d::CCRect                 m_rRect;
    cocos2d::ccColor3B              m_cColor;
    float                           m_fLastingTime;
    float                           m_fInterval;
    float                           m_fDelay;       // The delay time of two frames.
    float                           m_fTotalTime;
    int                             m_iOpacity;
    FWE_MOVEDIRECT                  m_eMoveDirection;
    
};

#endif // __FWActionEffect__OBJECT_H__