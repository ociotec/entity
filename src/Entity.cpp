/** Entity library.
    @copyright MIT License
    @author Emilio González Montaña <emilio@ociotec.com>
    @see https://github.com/ociotec/entity */


#include <QMetaProperty>

#include "Entity.h"


namespace entity
{

    Entity::Entity(QObject *parent) :
        QObject(parent)
    {
    }

    Entity::~Entity()
    {
    }

    bool Entity::visit(VISIT_LAMBDA lambda) const
    {
        bool ok = true;
        for (int i = 0; ok and (i < metaObject()->propertyCount()); i++)
        {
            ok = lambda(metaObject()->property(i));
        }
        return ok;
    }

    QDebug operator <<(QDebug debug, const Entity &entity)
    {
        QDebugStateSaver debugStateSaver(debug);
        QStringList properties;
        entity.visit([&properties, &entity](const QMetaProperty &property) -> bool
        {
            properties << QStringLiteral("%1: %2").arg(property.name())
                          .arg(entity.property(property.name()).toString());
            return true;
        });
        debug.noquote().nospace() << properties;
        return debug;
    }

}
