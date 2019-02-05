// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BKS_QT_BKSADDRESSVALIDATOR_H
#define BKS_QT_BKSADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BKSAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BKSAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** BKS address widget validator, checks for a valid BKS address.
 */
class BKSAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BKSAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // BKS_QT_BKSADDRESSVALIDATOR_H
