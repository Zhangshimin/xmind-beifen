Action()
{

	web_add_cookie("NTKF_T2D_CLIENTID=guestTEMPEC99-E76E-976E-4E63-A77D99E41CD3; DOMAIN=kpi3-test.ntalker.com");

	web_url("account_management", 
		"URL=http://kpi3-test.ntalker.com/index.php/settingelse/account_management?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&disp=account&rnd=1458810998920", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/application/static/default/js/My97DatePicker/skin/WdatePicker.css", "Referer=http://kpi3-test.ntalker.com/index.php/settingelse/account_management?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&disp=account&rnd=1458810998920", ENDITEM, 
		"Url=/application/static/setting/images/t_bj_38.jpg", "Referer=http://kpi3-test.ntalker.com/index.php/settingelse/account_management?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&disp=account&rnd=1458810998920", ENDITEM, 
		"Url=/application/static/setting/images/dot.png", "Referer=http://kpi3-test.ntalker.com/index.php/settingelse/account_management?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&disp=account&rnd=1458810998920", ENDITEM, 
		"Url=/application/static/setting/images/bg.png", "Referer=http://kpi3-test.ntalker.com/index.php/settingelse/account_management?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&disp=account&rnd=1458810998920", ENDITEM, 
		"Url=/application/static/setting/images/zcs.png", "Referer=http://kpi3-test.ntalker.com/index.php/settingelse/account_management?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&disp=account&rnd=1458810998920", ENDITEM, 
		"Url=/application/static/setting/images/bj.png", "Referer=http://kpi3-test.ntalker.com/index.php/settingelse/account_management?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&disp=account&rnd=1458810998920", ENDITEM, 
		"Url=/application/static/setting/images/jq.png", "Referer=http://kpi3-test.ntalker.com/index.php/settingelse/account_management?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&disp=account&rnd=1458810998920", ENDITEM, 
		LAST);

	web_url("add_or_edit", 
		"URL=http://kpi3-test.ntalker.com/index.php/settingelse/add_or_edit?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&type=add&disp=account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/application/static/setting/images/dnormal.png", "Referer=http://kpi3-test.ntalker.com/index.php/settingelse/add_or_edit?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&type=add&disp=account", ENDITEM, 
		"Url=/application/static/setting/images/tm.png", "Referer=http://kpi3-test.ntalker.com/index.php/settingelse/add_or_edit?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&type=add&disp=account", ENDITEM, 
		"Url=http://fpdownload2.macromedia.com/pub/shockwave/cabs/flash/swflash.cab", "Referer=", ENDITEM, 
		"Url=/application/static/setting/images/djg.png", "Referer=http://kpi3-test.ntalker.com/index.php/settingelse/add_or_edit?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&type=add&disp=account", ENDITEM, 
		LAST);

	web_custom_request("add_account", 
		"URL=http://kpi3-test.ntalker.com/index.php/settingelse/add_account?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://kpi3-test.ntalker.com/index.php/settingelse/add_or_edit?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&type=add&disp=account", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"Body=usertype=0&pri=admin&gid=11054&accountName=xiaonengceshi000&user_id=&externalName=%E5%B0%8F%E8%83%BD%E6%B5%8B%E8%AF%95000&nickName=%E5%B0%8F%E8%83%BD%E6%B5%8B%E8%AF%95000&pass=111111&pass2=111111&is_robot_welcome=0&welcome=&remLen1=&no_reply=&remLen=&maxreception=8&dealkfid=all&mobile=&email=&hand_day_num=5&hand_all_num=5&accountName=xiaonengceshi000&usericon=http://kpi3-test.ntalker.com/application/static/setting/images/head.jpg", 
		LAST);

	web_url("account_management_2", 
		"URL=http://kpi3-test.ntalker.com/index.php/settingelse/account_management?userid=kf_1111_ISME9754_T2D_ntalker_lizhipeng&token=5a0b1a6d6215136d4d415d4d8cef378f&disp=account", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}