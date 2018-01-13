/** Entity library.
    @copyright MIT License
    @author Emilio González Montaña <emilio@ociotec.com>
    @see https://github.com/ociotec/entity */


#ifndef ENTITY_TEST_ENTITY_H
#define ENTITY_TEST_ENTITY_H


#include <gtest/gtest.h>

#include "Entity.h"


namespace entity
{

    class TestEntity : public ::testing::Test
    {

    protected:

        class MyEntity : public Entity
        {
            PROPERTY(int, value, 3)
        public:
            MyEntity();
            virtual ~MyEntity();
        };

        virtual void SetUp();
        virtual void TearDown();

    };

}


#endif
