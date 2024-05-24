/*
This file is part of Telegram Desktop,
the official desktop application for the Telegram messaging service.

For license and copyright information please follow this link:
https://github.com/telegramdesktop/tdesktop/blob/master/LEGAL
*/
#pragma once

#include "ui/layers/generic_box.h"

void EditFactcheckBox(
	not_null<Ui::GenericBox*> box,
	TextWithEntities current,
	int limit,
	Fn<void(TextWithEntities)> save);
