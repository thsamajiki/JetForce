#pragma once

#define WINDOW CoreManager::getInstance()->getWindow()
#define SINGLE(classType) static classType* getInstance() {static classType mInstance; return &mInstance;} 
#define IS_TIC(key)   InputManager::getInstance()->isTic(key)
#define IS_PRESS(key) InputManager::getInstance()->isPress(key)
#define IS_BACK(key)  InputManager::getInstance()->isBack(key)
#define DS TimeManager::getInstance()->getDS()
#define ADD_STAGE_CHANGE(eType, sChangeType) EventManager::getInstance()->addChangeStage(eType, sChangeType)
#define CREATE_OBJ(eType, oType, pObj) EventManager::getInstance()->addCreateObj(eType, oType, pObj)
#define DELETE_OBJ(eType, oType, pObj) EventManager::getInstance()->addDeleteObj(eType, oType, pObj)
#define COLOR_WHITE RGB(255, 255, 255)
#define FIND_TEXTURE(tag) ResourceManager::getInstance()->findTexture(tag)
#define PI 3.14159289f
