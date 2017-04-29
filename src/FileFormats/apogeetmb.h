/*
 * OPL Bank Editor by Wohlstand, a free tool for music bank editing
 * Copyright (c) 2016 Vitaly Novichkov <admin@wohlnet.ru>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BUILDENGINETMB_H
#define BUILDENGINETMB_H

#include "ffmt_base.h"

/**
 * @brief Reader and Writer of the Apogee Sound System TMB Bank format
 */
class ApogeeTMB : public FmBankFormatBase
{
public:
    ApogeeTMB();
    ~ApogeeTMB() = default;

    bool detect(const QString &filePath, char* magic);
    int  loadFile(QString filePath, FmBank &bank);
    int  saveFile(QString filePath, FmBank &bank);
    int  formatCaps();
    QString formatName();
    QString formatExtensionMask();
    Formats formatId();
};

#endif // BUILDENGINETMB_H
