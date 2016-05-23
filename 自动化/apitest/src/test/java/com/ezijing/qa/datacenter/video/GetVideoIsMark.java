package com.ezijing.qa.datacenter.video;

import static org.junit.Assert.assertEquals;

import java.util.HashMap;

import org.apache.log4j.Level;
import org.apache.log4j.Logger;
import org.testng.annotations.AfterClass;
import org.testng.annotations.Test;
import org.testng.annotations.BeforeClass;

import com.alibaba.fastjson.JSONObject;
import com.ezijing.qa.common.TestBase;
import com.ezijing.qa.util.BaseApiUtil;
import com.ezijing.qa.vo.RequestVo;

public class GetVideoIsMark extends TestBase{
  
	static Logger logger = Logger.getLogger(GetVideoIsMark.class);
	HashMap<String, String> params = new HashMap<String, String>();
	HashMap<String, String> headers = new HashMap<String, String>();
	RequestVo requestvo = new RequestVo();
	String token = "";
	private String requestUrl = api_url+cloudfix+data_version;
	
	@BeforeClass
	public void beforeTest() {
		BaseApiUtil.initLog4j(logger, Level.INFO);
		token = BaseApiUtil.SSOLogin(USERNAME, PASSWORD);
		headers.put("token", token);
	}

	@Test
	public void testVideomarkNormal() {
		
		logger.info("Test Case is : videoAjaxMarkNormal");
		
		params.clear();
		params.put("user_id", "77");
		params.put("video_id", "5006");
		
		requestvo.setRequestVo(headers,params,requestUrl + videofix
				+ ismarkfix);

		JSONObject json = BaseApiUtil.getResponse(requestvo);
		assertEquals(json.getIntValue("errorCode"), 200);
	}

	@Test
	public void testVideomarkNovideoid() {
		logger.info("Test Case is : videoAjaxMarkNormal");
		params.clear();
		params.put("user_id", "77");
		// params.put("video_id", "5006");

		requestvo.setRequestVo(headers,params,requestUrl + videofix
				+ ismarkfix);

		JSONObject json = BaseApiUtil.getResponse(requestvo);
		assertEquals(json.getIntValue("errorCode"), 400);
	}

	@AfterClass
	public void afterTest() throws InterruptedException {
		
		BaseApiUtil.SSOLogout(token);
		Thread.sleep(THINKTIME);
	}

}
