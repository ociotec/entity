/** Entity library.
    @copyright MIT License
    @author Emilio González Montaña <emilio@ociotec.com>
    @see https://github.com/ociotec/entity */


#ifndef ENTITY_ENTITY_H
#define ENTITY_ENTITY_H


#include <QDebug>
#include <QObject>

#include "IVisit.h"


namespace entity
{

    #define PROPERTY(type, name, defaultValue) \
        public: \
            Q_PROPERTY(type name READ name() WRITE name(type)) \
            type name() const \
            { \
                return _##name; \
            } \
            void name(type name) \
            { \
                _##name = name; \
            } \
            static inline const char *name##FieldName() \
            { \
                return #name; \
            } \
        private: \
            type _##name = defaultValue;

    /** Base class for any kind of entity. */
    class Entity : public QObject, public IVisit
    {

        Q_OBJECT

    public:

        Entity(QObject *parent = nullptr);
        virtual ~Entity();

        virtual bool visit(VISIT_LAMBDA lambda) const override;

    };

    QDebug operator <<(QDebug debug, const Entity &entity);

}


#endif
