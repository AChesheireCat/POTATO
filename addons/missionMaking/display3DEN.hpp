class ctrlMenuStrip;
class ctrlControlsGroupNoScrollbars;
class ctrlCheckboxToolbar;
class Separator1;

class display3DEN
{
    class Controls
    {
        class Toolbar : ctrlControlsGroupNoScrollbars{
            class Controls {
                class Separator3: Separator1
                {
                    colorBackground[]={0,0,0,0.5};
                    x="33.5 *     (    5 * (pixelW * pixelGrid *     0.50))";
                    y="1 * (pixelH * pixelGrid *     0.50)";
                    w="pixelW";
                    h="(    5 * (pixelH * pixelGrid *     0.50))";
                };
                class BWMF_Toolbar_Controls : ctrlControlsGroupNoScrollbars {
                    idc=-1;
                    x="34.5 * (5 * (pixelW * pixelGrid *     0.50))";
                    y="1 * (pixelH * pixelGrid *     0.50)";
                    w="5 *     (    5 * (pixelW * pixelGrid *     0.50))";
                    h="(    5 * (pixelH * pixelGrid *     0.50))";
                    class Controls
                    {
                        class Garrison: ctrlCheckboxToolbar
                        {
                            idc=-1;
                            onCheckedChanged=QUOTE(GVAR(Garrison) = !GVAR(Garrison));
                            onLoad="uiNamespace setVariable [""bwmf_common_GarrisonControl"",_this select 0]; bwmf_common_Garrison = false";
                            x="0 *     (    5 * (pixelW * pixelGrid *     0.50))";
                            y=0;
                            h="(    5 * (pixelH * pixelGrid *     0.50))";
                            w="(    5 * (pixelW * pixelGrid *     0.50))";
                            tooltip="BWMF: Toggle garrison on dragging units";
                            textureChecked="\x\POTATO\addons\core\potato_icon_ca.paa";
                            textureUnchecked="\x\POTATO\addons\core\potato_icon_ca_inactive.paa";
                            textureFocusedChecked="\x\POTATO\addons\core\potato_icon_ca.paa";
                            textureFocusedUnchecked="\x\POTATO\addons\core\potato_icon_ca_inactive.paa";
                            textureHoverChecked="\x\POTATO\addons\core\potato_icon_ca.paa";
                            textureHoverUnchecked="\x\POTATO\addons\core\potato_icon_ca_inactive.paa";
                            texturePressedChecked="\x\POTATO\addons\core\potato_icon_ca.paa";
                            texturePressedUnchecked="\x\POTATO\addons\core\potato_icon_ca_inactive.paa";
                            textureDisabledChecked="\x\POTATO\addons\core\potato_icon_ca.paa";
                            textureDisabledUnchecked="\x\POTATO\addons\core\potato_icon_ca_inactive.paa";
                        };
                    };
                };
            };
        };
    };
};