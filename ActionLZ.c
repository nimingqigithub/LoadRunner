
#include<string.h>
//extern char * strtok(char * string, const char * delimiters ); // Explicit declaration
typedef enum { false, true } bool;
void web_reg_save_param_custom(char *sourceStr, char* outpuStr, char *leftBdry, char *rightBdry){     
 
    char *st1, *st2;
    int result, i = 0;
    i=strlen(leftBdry);

    st1 = (char*) (strstr(sourceStr, leftBdry));  //��ȡ�ָ���֮�������
    if(st1 ==NULL){
    	lr_save_string(lr_eval_string(sourceStr), outpuStr);
    	//return false;
    }
    else{
    	st1 = (char*) (strstr(sourceStr, leftBdry)+i); 
    	lr_save_string(lr_eval_string(st1), outpuStr);
    	//return true;
    }
//    st1 = (char*) strstr(sourceStr, leftBdry); 
//    if (st1 != NULL){ 
//        st1 += i;
//        st2 = (char*) strstr(st1, rightBdry);
//        if (st2 != NULL){
//            result = st2 - st1;
//            *(st1 + result) = '\0';
//            }     
//        }  
// 
//    if ((st1 == NULL) || (st2 == NULL))
//        lr_error_message("Error: No substring found for the specified boundary");
//    else  
     //   lr_save_string(lr_eval_string(st1), outpuStr); 
}


ActionLZ()
{
	
	 int HttpRetCode=0;
	  web_set_max_html_param_len("262144"); // Ĭ����󳤶�Ϊ256
	  web_reg_save_param("ResponseBody", "LB=", "RB=", "Search=Body", LAST);
	  web_save_header(REQUEST, "RequestHeader");// REQUESTΪ���ñ��������������ͷ��Ϣ�����ڷ���URL����ǰע��ʹ�ã�������ͷ��Ϣ�����ַ���RequestHeader��
	  web_save_header(RESPONSE, "ResponseHeader");// ��RESPONSE������Ӧ��ͷ��Ϣ���ַ���ResponseHeader��
	
	  if(1==1){
	web_custom_request("activitiProcessForQuery", 
	                    // "URL=http://192.168.5.200:8084/realestate/restServlet?method=get&urlPath=houseright/findhouseright?size=1000%EF%BF%A5lcdm=2102%EF%BF%A5islike=0%EF%BF%A5bdcdyh=112312312",
		"URL=http://192.168.5.200:8084/realestate/filterServlet?method=get&jsonData=null&urlPath=queryarchivesprove/IntegratedQueryPropertyRight?size=25%EF%BF%A5zjh=339005198808314313%EF%BF%A5islike=0%EF%BF%A5zt=1", 
		"Method=GET", 
		"Resource=0", 
		"RecContentType=application/json", 
		//"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/processManager?userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs&0.8876113475995799", 
		"EncType=application/json; charset=utf-8", 
		LAST);
	
  
	   //�ַ�ת��
		  lr_convert_string_encoding(lr_eval_string("{RequestHeader}"),LR_ENC_UTF8 ,LR_ENC_SYSTEM_LOCALE,"RequestHeaderUTF8");
		  lr_convert_string_encoding(lr_eval_string("{ResponseHeader}"),LR_ENC_UTF8 ,LR_ENC_SYSTEM_LOCALE,"ResponseHeaderUTF8");
		  lr_convert_string_encoding(lr_eval_string("{ResponseBody}"),LR_ENC_UTF8 ,LR_ENC_SYSTEM_LOCALE,"ResponseBodyUTF8");
	  		//�����Ϣ
		  lr_output_message("# ����ͷ��Ϣ��\n %s", lr_eval_string("{RequestHeaderUTF8}"));
		  lr_output_message("# ��Ӧͷ��Ϣ��\n %s", lr_eval_string("{ResponseHeaderUTF8}"));
		  lr_output_message("# ��Ӧ�����壺\n %s", lr_eval_string("{ResponseBodyUTF8}"));
		  lr_output_message("# ����ͷ��Ϣys��\n %s", lr_eval_string("{RequestHeader}"));
		  lr_output_message("# ��Ӧͷ��Ϣys��\n %s", lr_eval_string("{ResponseHeader}"));
		  lr_output_message("# ��Ӧ������ys��\n %s", lr_eval_string("{ResponseBody}"));
	  }
	  else{
	  
	  
			  web_custom_request("activitiProcessForQuery", 
			                     "URL=http://192.168.5.200:8084/realestate/restServlet?method=get&urlPath=houseright/findhouseright?size=1000%EF%BF%A5lcdm=2102%EF%BF%A5islike=0%EF%BF%A5bdcdyh=112312312",
				//"URL=http://192.168.5.200:8084/realestate/filterServlet?method=get&jsonData=null&urlPath=queryarchivesprove/IntegratedQueryPropertyRight?size=25%EF%BF%A5zjh=339005198808314313%EF%BF%A5islike=0%EF%BF%A5zt=1", 
				"Method=GET", 
				"Resource=0", 
				"RecContentType=application/json", 
				//"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a/workflow/taskList/processManager?userId=f2e37658-69d2-11e5-a045-000c297c0f34&transactor=zscs&username=zscs&0.8876113475995799", 
				"EncType=application/json; charset=utf-8", 
				LAST);
		  
		      
			    //�ַ�ת��
			  lr_convert_string_encoding(lr_eval_string("{RequestHeader}"),LR_ENC_UTF8 ,LR_ENC_SYSTEM_LOCALE,"RequestHeaderUTF8");
			  lr_convert_string_encoding(lr_eval_string("{ResponseHeader}"),LR_ENC_UTF8 ,LR_ENC_SYSTEM_LOCALE,"ResponseHeaderUTF8");
			  lr_convert_string_encoding(lr_eval_string("{ResponseBody}"),LR_ENC_UTF8 ,LR_ENC_SYSTEM_LOCALE,"ResponseBodyUTF8");

	    	  web_reg_save_param_custom(lr_eval_string("{ResponseBody}"), "Outputtest", "��","��");  
	    	  lr_output_message("�и���ֵ=%s",lr_eval_string("{Outputtest}")); 

			  
		  		//�����Ϣ
			  lr_output_message("# ����ͷ��Ϣ2��\n %s", lr_eval_string("{RequestHeaderUTF8}"));
			  lr_output_message("# ��Ӧͷ��Ϣ2��\n %s", lr_eval_string("{ResponseHeaderUTF8}"));
			  lr_output_message("# ��Ӧ������2��\n %s", lr_eval_string("{Outputtest}"));
	  }
	    
//	web_custom_request("zscs", 
//		"URL=http://192.168.5.200:8082/GisqPlatformExplorer/platform-rest/funcmgr/getAllFuncGroupAndItem/zscs?disabled=0", 
//		"Method=POST", 
//		"Resource=0", 
//		"RecContentType=application/json", 
//		"Referer=http://192.168.5.200:8082/GisqPlatformExplorer/a?login", 
//		"Snapshot=t75.inf", 
//		"Mode=HTTP", 
//		"EncType=application/json;charset=utf-8", 
//		"Body=[]", 
//		LAST);
  

	 return(0); 
}