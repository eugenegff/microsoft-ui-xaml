// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "InfoBadge.h"

namespace winrt::Microsoft::UI::Xaml::Controls
{
    CppWinRTActivatableClassWithDPFactory(InfoBadge)
}

#include "InfoBadge.g.cpp"

GlobalDependencyProperty InfoBadgeProperties::s_IconSourceProperty{ nullptr };
GlobalDependencyProperty InfoBadgeProperties::s_IsOpenProperty{ nullptr };
GlobalDependencyProperty InfoBadgeProperties::s_TemplateSettingsProperty{ nullptr };
GlobalDependencyProperty InfoBadgeProperties::s_ValueProperty{ nullptr };

InfoBadgeProperties::InfoBadgeProperties()
{
    EnsureProperties();
}

void InfoBadgeProperties::EnsureProperties()
{
    if (!s_IconSourceProperty)
    {
        s_IconSourceProperty =
            InitializeDependencyProperty(
                L"IconSource",
                winrt::name_of<winrt::IconSource>(),
                winrt::name_of<winrt::InfoBadge>(),
                false /* isAttached */,
                ValueHelper<winrt::IconSource>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnIconSourcePropertyChanged));
    }
    if (!s_IsOpenProperty)
    {
        s_IsOpenProperty =
            InitializeDependencyProperty(
                L"IsOpen",
                winrt::name_of<bool>(),
                winrt::name_of<winrt::InfoBadge>(),
                false /* isAttached */,
                ValueHelper<bool>::BoxValueIfNecessary(false),
                winrt::PropertyChangedCallback(&OnIsOpenPropertyChanged));
    }
    if (!s_TemplateSettingsProperty)
    {
        s_TemplateSettingsProperty =
            InitializeDependencyProperty(
                L"TemplateSettings",
                winrt::name_of<winrt::InfoBadgeTemplateSettings>(),
                winrt::name_of<winrt::InfoBadge>(),
                false /* isAttached */,
                ValueHelper<winrt::InfoBadgeTemplateSettings>::BoxedDefaultValue(),
                winrt::PropertyChangedCallback(&OnTemplateSettingsPropertyChanged));
    }
    if (!s_ValueProperty)
    {
        s_ValueProperty =
            InitializeDependencyProperty(
                L"Value",
                winrt::name_of<int>(),
                winrt::name_of<winrt::InfoBadge>(),
                false /* isAttached */,
                ValueHelper<int>::BoxValueIfNecessary(-1),
                winrt::PropertyChangedCallback(&OnValuePropertyChanged));
    }
}

void InfoBadgeProperties::ClearProperties()
{
    s_IconSourceProperty = nullptr;
    s_IsOpenProperty = nullptr;
    s_TemplateSettingsProperty = nullptr;
    s_ValueProperty = nullptr;
}

void InfoBadgeProperties::OnIconSourcePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::InfoBadge>();
    winrt::get_self<InfoBadge>(owner)->OnPropertyChanged(args);
}

void InfoBadgeProperties::OnIsOpenPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::InfoBadge>();
    winrt::get_self<InfoBadge>(owner)->OnPropertyChanged(args);
}

void InfoBadgeProperties::OnTemplateSettingsPropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::InfoBadge>();
    winrt::get_self<InfoBadge>(owner)->OnPropertyChanged(args);
}

void InfoBadgeProperties::OnValuePropertyChanged(
    winrt::DependencyObject const& sender,
    winrt::DependencyPropertyChangedEventArgs const& args)
{
    auto owner = sender.as<winrt::InfoBadge>();
    winrt::get_self<InfoBadge>(owner)->OnPropertyChanged(args);
}

void InfoBadgeProperties::IconSource(winrt::IconSource const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBadge*>(this)->SetValue(s_IconSourceProperty, ValueHelper<winrt::IconSource>::BoxValueIfNecessary(value));
    }
}

winrt::IconSource InfoBadgeProperties::IconSource()
{
    return ValueHelper<winrt::IconSource>::CastOrUnbox(static_cast<InfoBadge*>(this)->GetValue(s_IconSourceProperty));
}

void InfoBadgeProperties::IsOpen(bool value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBadge*>(this)->SetValue(s_IsOpenProperty, ValueHelper<bool>::BoxValueIfNecessary(value));
    }
}

bool InfoBadgeProperties::IsOpen()
{
    return ValueHelper<bool>::CastOrUnbox(static_cast<InfoBadge*>(this)->GetValue(s_IsOpenProperty));
}

void InfoBadgeProperties::TemplateSettings(winrt::InfoBadgeTemplateSettings const& value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBadge*>(this)->SetValue(s_TemplateSettingsProperty, ValueHelper<winrt::InfoBadgeTemplateSettings>::BoxValueIfNecessary(value));
    }
}

winrt::InfoBadgeTemplateSettings InfoBadgeProperties::TemplateSettings()
{
    return ValueHelper<winrt::InfoBadgeTemplateSettings>::CastOrUnbox(static_cast<InfoBadge*>(this)->GetValue(s_TemplateSettingsProperty));
}

void InfoBadgeProperties::Value(int value)
{
    [[gsl::suppress(con)]]
    {
    static_cast<InfoBadge*>(this)->SetValue(s_ValueProperty, ValueHelper<int>::BoxValueIfNecessary(value));
    }
}

int InfoBadgeProperties::Value()
{
    return ValueHelper<int>::CastOrUnbox(static_cast<InfoBadge*>(this)->GetValue(s_ValueProperty));
}
