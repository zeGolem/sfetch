# This file is for the gui option
# DO NOT DELETE THIS FILE

if (whiptail --title "Install sfetch" --yesno "Would you like to install sfetch?" 8 78); then
	make install
	whiptail --title "Install sfetch" --msgbox "sfetch Successfully Installed!" 8 78
    else
        echo "exited"
fi
