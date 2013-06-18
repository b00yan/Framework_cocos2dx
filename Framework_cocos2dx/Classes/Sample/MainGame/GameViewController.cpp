//
//  GameViewController.cpp
//  Framework_cocos2dx
//
//  Created by ou-h on 13/06/17.
//  Copyright 2013年 __MyCompanyName__. All rights reserved.
//

#include "GameViewController.h"
#include "GameModel.h"
#include "GameView.h"

using namespace cocos2d;

GameViewController::GameViewController()
{
}

GameViewController::~GameViewController()
{
    CC_SAFE_DELETE(m_pModel);
    CC_SAFE_DELETE(m_pView);
}


bool GameViewController::init()
{
    m_pModel = GameModel::create();
    m_pModel->retain();
    
    m_pView = GameView::create(m_pModel, this);
    m_pView->retain();
    addChild(m_pView);
    
    m_gameView = (GameView *)m_pView;

    // schedule update.
    scheduleUpdate();
    
    return true;
}

#pragma mark - delegate methods

bool GameViewController::touchesBeganWithPoint(cocos2d::CCPoint point, cocos2d::CCEvent *pEvent)
{
//    float duration = 1.6f;
//    m_gameView->scrollBy(duration, callfunc_selector(GameViewController::onScrollFinished));
    m_gameView->setGameState(KTE_GAMESTATE_SCROLL);
    return false;
}
void GameViewController::touchesMoveWithPoint(cocos2d::CCPoint point, cocos2d::CCEvent *pEvent)
{
    
}
void GameViewController::touchesEndWithPoint(cocos2d::CCPoint point, cocos2d::CCEvent *pEvent)
{
    
}
void GameViewController::touchesCancelledWithPoint(cocos2d::CCPoint point, cocos2d::CCEvent *pEvent)
{
    
}
void GameViewController::onNodeTouched(cocos2d::CCNode *pNode)
{
    
}

void GameViewController::onScrollFinished()
{
    
}

void GameViewController::update(float delta)
{
    m_gameView->update(delta);
}
