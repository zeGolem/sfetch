# This file is for the gui option
# DO NOT DELETE THIS FILE

if (whiptail --title "Install Simplefetch" --yesno "Would you like to install simplefetch?" 8 78); then
	make install
	whiptail --title "Install Simplefetch" --msgbox "Simplefetch Successfully Installed!" 8 78
    else
        echo "exited"
fi
