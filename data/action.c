Action()
{

	web_add_cookie("_ga=GA1.4.1946899752.1509948725; DOMAIN=192.168.5.200");

	web_url("login;JSESSIONID=ad6951b80219452ab479bb064b98ff4d", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/a/login;JSESSIONID=ad6951b80219452ab479bb064b98ff4d", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("success.txt", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t61.inf", 
		LAST);

	web_url("success.txt_2", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t62.inf", 
		LAST);

	web_url("success.txt_3", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t63.inf", 
		LAST);

	web_url("success.txt_4", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t64.inf", 
		LAST);

	web_url("success.txt_5", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t65.inf", 
		LAST);

	web_url("success.txt_6", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t66.inf", 
		LAST);

	web_url("success.txt_7", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("success.txt_8", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t68.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_cookie("23-Nov-2017 04:21:31 GMT; DOMAIN=192.168.5.200");

	lr_think_time(51);

	web_submit_data("login", 
		"Action=http://192.168.5.200:8082/GisqPlatformExplorer/a/login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/login;JSESSIONID=ad6951b80219452ab479bb064b98ff4d", 
		"Snapshot=t69.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=username", "Value=zscs", ENDITEM, 
		"Name=password", "Value=1234", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("success.txt_9", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t70.inf", 
		LAST);

	web_url("success.txt_10", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t71.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_add_cookie("JSESSIONID=F0EA3EDAB63E19CF52889B851C596CFE; DOMAIN=192.168.5.200");

	lr_think_time(12);

	web_custom_request("myproject", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/a/myproject", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a?login", 
		"Snapshot=t72.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=utf-8", 
		LAST);

	web_concurrent_start(NULL);

	web_url("Tips", 
		"URL=http://192.168.5.200:8034/GisqRealEstate-Explorer/Tips?login&businesskey=&bsm=&callback=tipsResult&_=1511497312412", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a?login", 
		"Snapshot=t73.inf", 
		LAST);

	web_url("Tips_2", 
		"URL=http://192.168.5.200:8034/GisqRealEstate-Explorer/Tips?login&username=zscs&flag=circle&callback=tipsResultCircle&_=1511497312410", 
		"Resource=1", 
		"RecContentType=text/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a?login", 
		"Snapshot=t74.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_custom_request("zscs", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/platform-rest/funcmgr/getAllFuncGroupAndItem/zscs?disabled=0", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a?login", 
		"Snapshot=t75.inf", 
		"Mode=HTTP", 
		"EncType=application/json;charset=utf-8", 
		"Body=[]", 
		LAST);

	web_concurrent_start(NULL);

	web_url("success.txt_11", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t76.inf", 
		LAST);

	web_url("success.txt_12", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("getRoleId", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/getRoleId", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a?login", 
		"Snapshot=t78.inf", 
		LAST);

	web_custom_request("judgeTips", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/a/sysconfig/tip/judgeTips", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a?login", 
		"Snapshot=t79.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(15);

	web_url("processManager", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/processManager?userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs&0.8876113475995799", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a?login", 
		"Snapshot=t80.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("suspendTimeoutListForQuery", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/suspendTimeoutListForQuery", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a?login", 
		"Snapshot=t81.inf", 
		LAST);

	web_custom_request("taskCount", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/a/indexFile/taskCount?missionType=active%7Copened", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/processManager?userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs&0.8876113475995799", 
		"Snapshot=t82.inf", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	web_custom_request("activitiProcessForQuery", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/activitiProcessForQuery?latest=true&isRole=true", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/processManager?userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs&0.8876113475995799", 
		"Snapshot=t83.inf", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	web_url("success.txt_13", 
		"URL=http://detectportal.firefox.com/success.txt", 
		"Resource=1", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t84.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(12);

	web_url("index", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs&0.0698173447128757", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a?login", 
		"Snapshot=t85.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(9);

	web_url("index_2", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a?login", 
		"Snapshot=t86.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_custom_request("modelcategories", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/modelcategories?guid=parentId", 
		"Method=GET", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/processManager?userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs&0.8876113475995799", 
		"Snapshot=t87.inf", 
		"EncType=application/json; charset=utf-8", 
		LAST);

	web_url("globalize.culture.zh-CN.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/globalization/globalize.culture.zh-CN.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t88.inf", 
		LAST);

	web_url("jqx.energyblue.min.css", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/styles/jqx.energyblue.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("globalize.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/globalization/globalize.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t90.inf", 
		LAST);

	web_url("jqxbuttons.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxbuttons.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t91.inf", 
		LAST);

	web_url("jqxcore.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxcore.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t92.inf", 
		LAST);

	web_url("jqx.base.min.css", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/styles/jqx.base.min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t93.inf", 
		LAST);

	web_url("jqxscrollbar.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxscrollbar.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t94.inf", 
		LAST);

	web_url("jqxlistbox.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxlistbox.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t95.inf", 
		LAST);

	web_url("jqxdata.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxdata.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t96.inf", 
		LAST);

	web_url("jqxdatatable.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxdatatable.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t97.inf", 
		LAST);

	web_url("jqxtreegrid.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxtreegrid.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t98.inf", 
		LAST);

	web_url("jqxtreegrid.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxtreegrid.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t99.inf", 
		LAST);

	web_url("jqxdropdownlist.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxdropdownlist.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t100.inf", 
		LAST);

	web_url("jqxtooltip.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxtooltip.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t101.inf", 
		LAST);

	web_url("jqxcheckbox.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxcheckbox.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t102.inf", 
		LAST);

	web_url("jqxcheckbox.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxcheckbox.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t103.inf", 
		LAST);

	web_url("jqxgrid.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxgrid.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t104.inf", 
		LAST);

	web_url("jqxgrid.sort.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxgrid.sort.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t105.inf", 
		LAST);

	web_url("jqxgrid.filter.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxgrid.filter.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("jqxgrid.selection.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxgrid.selection.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("jqxpanel.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxpanel.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t108.inf", 
		LAST);

	web_url("jqxgrid.pager.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxgrid.pager.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("jqxgrid.columnsresize.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxgrid.columnsresize.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("jqxgrid.columnsreorder.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxgrid.columnsreorder.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t111.inf", 
		LAST);

	web_url("custom.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/custom.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("jqxtoolbar.min.js", 
		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/static/assets/global/plugins/jqwidgets/jqxtoolbar.min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/index/?missionType=opened&queryType=involvedUser&userId=zscs&Random=0.9806313645412816&userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs", 
		"Snapshot=t113.inf", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}