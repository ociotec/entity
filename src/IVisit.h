/** Entity library.
    @copyright MIT License
    @author Emilio González Montaña <emilio@ociotec.com>
    @see https://github.com/ociotec/entity */


#ifndef ENTITY_I_VISIT_H
#define ENTITY_I_VISIT_H


class QMetaProperty;


namespace entity
{

    /** Interface for objects that allow visiting its Qt properties. */
    class IVisit
    {

    public:

        virtual ~IVisit() { }

        typedef std::function<bool(const QMetaProperty &property)> VISIT_LAMBDA;
        virtual bool visit(VISIT_LAMBDA lambda) const = 0;

    };

}


#endif
