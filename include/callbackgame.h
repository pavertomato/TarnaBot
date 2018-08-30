#ifndef CALLBACKGAME_H
#define CALLBACKGAME_H

#include "TelegramObject"

namespace Telegram
{
    /*!
     * \brief The CallbackGame class is a placeholder, currently holds no information.
     */
    class CallbackGame : public TelegramObject
    {
    public:
        CallbackGame();
        /*!
         * \param jsonObject The JSON object to construct the object with.
         *
         * Creates a CallbackGame object using a JSON object.
         */
        CallbackGame(QJsonObject jsonObject);
    };
}
#endif // CALLBACKGAME_H
