/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtQml module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qquickfocusscope_p.h"

QT_BEGIN_NAMESPACE

/*!
    \qmltype FocusScope
    \instantiates QQuickFocusScope
    \inqmlmodule QtQuick 2
    \ingroup qtquick-input

    \brief Explicitly creates a focus scope
    \inherits Item

    Focus scopes assist in keyboard focus handling when building reusable QML
    components.  All the details are covered in the
    \l {Keyboard Focus in Qt Quick}{keyboard focus documentation}.

    \sa {declarative/keyinteraction/focus}{Keyboard focus example}
*/
QQuickFocusScope::QQuickFocusScope(QQuickItem *parent)
: QQuickItem(parent)
{
    setFlag(ItemIsFocusScope);
}

QQuickFocusScope::~QQuickFocusScope()
{
}

QT_END_NAMESPACE
