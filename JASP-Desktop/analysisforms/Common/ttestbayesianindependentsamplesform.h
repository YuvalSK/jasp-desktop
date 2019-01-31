//
// Copyright (C) 2013-2018 University of Amsterdam
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public
// License along with this program.  If not, see
// <http://www.gnu.org/licenses/>.
//

#ifndef TTESTBAYESIANINDEPENDENTSAMPLESFORM_H
#define TTESTBAYESIANINDEPENDENTSAMPLESFORM_H

#include <QWidget>
#include "../analysisform.h"

namespace Ui {
class TTestBayesianIndependentSamplesForm;
}

class TTestBayesianIndependentSamplesForm : public AnalysisForm
{
	Q_OBJECT

public:
	explicit TTestBayesianIndependentSamplesForm(QWidget *parent = 0);
	~TTestBayesianIndependentSamplesForm();

private slots:
    void on_StudentStatistic_clicked(bool checked);

    void on_WilcoxonStatistic_clicked(bool checked);

private:
	Ui::TTestBayesianIndependentSamplesForm *ui;
};

#endif // TTESTBAYESIANINDEPENDENTSAMPLESFORM_H