/** Entity library.
    @copyright MIT License
    @author Emilio González Montaña <emilio@ociotec.com>
    @see https://github.com/ociotec/entity */


#include <gmock/gmock.h>
#include <QDebug>

#include "TestEntity.h"


using ::testing::_;
using ::testing::Return;


namespace entity
{

    void TestEntity::SetUp()
    {
    }

    void TestEntity::TearDown()
    {
    }

    TEST_F(TestEntity, Constructor)
    {
        MyEntity entity;
        entity.value(3);
        qDebug().noquote() << entity.value();
        qDebug().noquote() << "Value:" << entity;
    }


    TestEntity::MyEntity::MyEntity()
    {
    }

    TestEntity::MyEntity::~MyEntity()
    {
    }

}
