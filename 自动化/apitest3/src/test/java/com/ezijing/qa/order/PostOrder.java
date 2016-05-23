package com.ezijing.qa.order;

import static org.junit.Assert.assertEquals;

import java.util.HashMap;

import org.apache.log4j.Level;
import org.apache.log4j.Logger;
import org.testng.annotations.AfterMethod;
import org.testng.annotations.AfterTest;
import org.testng.annotations.BeforeMethod;
import org.testng.annotations.BeforeTest;
import org.testng.annotations.Test;

import com.alibaba.fastjson.JSONObject;
import com.ezijing.qa.bl.OrderBl;
import com.ezijing.qa.bl.PlayerBl;
import com.ezijing.qa.common.TestBase;
import com.ezijing.qa.util.BaseApiUtil;
import com.ezijing.qa.util.PoiUtils;

public class PostOrder extends TestBase{
	
	static Logger logger = Logger.getLogger(PostPurchase.class);
	HashMap<String, String> params = new HashMap<String, String>();
	HashMap<String,String> headers = new HashMap<String, String>();
	OrderBl orderbo = new OrderBl();
	String token = "";
	
	@BeforeMethod
	  public void beforeTest() {
		BaseApiUtil.initLog4j(logger, Level.INFO);
		token = BaseApiUtil.SSOLogin(USERNAME, PASSWORD);
		headers.put("token", token);
	  }

	@Test
	  public void orderNormal() {
		
		logger.info("Test Case is : orderNormal");
		params = PoiUtils.getTestData(EXCEL_WEB_FILE, "Order", "PostOrder");
		JSONObject json = orderbo.order(headers, params);
		assertEquals(json.getIntValue("errorCode"), 200);
	  }
		
	@AfterMethod
	  public void afterTest() throws InterruptedException {
		BaseApiUtil.SSOLogout(token);
		Thread.sleep(THINKTIME);
	  }

}
