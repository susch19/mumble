// Copyright 2022-2023 The Mumble Developers. All rights reserved.
// Use of this source code is governed by a BSD-style license
// that can be found in the LICENSE file at the root of the
// Mumble source tree or at <https://www.mumble.info/LICENSE>.

#ifndef MUMBLE_MUMBLE_LISTENERLOCALVOLUMESLIDER_H_
#define MUMBLE_MUMBLE_LISTENERLOCALVOLUMESLIDER_H_

#include "VolumeSliderWidgetAction.h"

class Channel;

class ListenerVolumeSlider : public VolumeSliderWidgetAction {
	Q_OBJECT

public:
	ListenerVolumeSlider(QWidget *parent = nullptr);

	/// Must be called before adding this object as an action
	void setListenedChannel(const Channel &channel);

private:
	/// The channel of the listener proxy this dialog is operating on
	const Channel *m_channel;

private slots:
	void on_VolumeSlider_valueChanged(int value) override;
	void on_VolumeSlider_sliderReleased() override;
};

#endif
