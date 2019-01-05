//
//  TYInfraredModel.h
//  TuyaSmartPublic
//
//  Created by ywp on 2018/1/31.
//  Copyright © 2018年 Tuya. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 考虑到用户会连续多次操作，为了区分每一次操作对应的下载数据，每次下载成功的数据内会传过来一个taskid， notiification.userInfo[@"taskid"];  会取到值为0～N，分别会匹配每一次下载的数据。具体操作如下:
 //notiification.userInfo[@“errorCode”]=-1，表示数据下载失败。
 
 //notiification.userInfo[@"taskid"]=0,   根据定位到省 ，市，区，获取areid
 参数：provinceName=省，cityName=市，districtName=区;
 例如：provinceName＝山东省，cityName＝青岛市，districtName＝崂山区
 -(void)getAreaIdWithProvince:(NSString *)provinceName City:(NSString *)cityName District:(NSString *)districtName;
 
 //notiification.userInfo[@"taskid"]=1,   根据areaid获取运营商列表
 参数areaid，
 例如：areaid＝370202；
 -(void)getOperatersWithAreaid:(NSNumber*)areaid;
 
 //notiification.userInfo[@"taskid"]=2,    获取选中的运营商（spid）下，含有的所有的机顶盒的遥控器
 参数：spid＝spId，（根据得到的运营商列表的spId）
 例如spid=22
 -(void)getAllRemoteIdsWithAreaid:(NSNumber*)areaid spid:(NSNumber*)spid did:(NSNumber *)did bid:(NSNumber *)bid;
 
 //notiification.userInfo[@"taskid"]=3,    获取遥控器的红外码（rid）进行测试
 参数：remoteIds=(要获得一个或多个remoteid)，
 例如：remoteIds=2607,4126
 -(void)getIRDataByIdWithRemoteIds:(NSString *)remoteIds;
 
 //notiification.userInfo[@"taskid"]=4,     过滤红外码（该接口已废弃）
 参数：functionid= 1，   remoteid=(不好用的按键对应的遥控器ID),   remoteids=(待过滤的遥控器红外码ID集合，逗号分隔)
 例如：functionid＝1，remoteid＝4162，remoteids＝2997，4162，2607
 -(void)getFilterIRDataWithFunctionid:(NSNumber *)functionid remoteid:(NSNumber *)remoteid remoteids:(NSString * )remoteids;
 
 //notiification.userInfo[@"taskid"]=5,    获取这个运营商（spid）下，所有的品牌（每个品牌都带有他的所有遥控器码）
 参数 ：spid=spId（运营商）
 -(void)getIPTVWithSpid:(NSNumber *)spid;
 
 //notiification.userInfo[@"taskid"]=6,    输入文字之后调用接口开始搜索，传入areaid，获取所有的品牌（每个品牌都带有所有他的遥控器吗）
 参数：nameString=品牌名，
 例如：nameString=@"华",areaid=307202
 -(void)searchSTBWithNameString:(NSString * )nameString areaid:(NSNumber*)areaid;
 
 //notiification.userInfo[@"taskid"]=7,    获取电视（或者其他，通过typeid区分）品牌列表   电视/盒子/DVD/功放/投影仪
 参数：did=deviceType;  （请参照IRConstants.h，deviceTypeId）
 例如：did＝2；
 -(void)getBrandListFromNetWithDid:(NSNumber * )did;
 
 //notiification.userInfo[@"taskid"]=8,    获得这个品牌（brandid）下，含所有的遥控器
 参数：did＝deviceType,  bid＝brandid;
 例如：did＝2，bid＝2
 -(void)getAllRemoteIdsWithDid:(NSNumber *)did bid:(NSNumber *)bid;
 
 //notiification.userInfo[@"taskid"]=9,获得空调的红外码库数据
 参数：例如：remoteId=10502
 -(void)getAirConditonIRDataWithRemoteId:(NSNumber *)remoteId;
 
 //notiification.userInfo[@"taskid"]=10,获得lineup列表
 参数：例如:areaId=110108，spId=262;
 -(void)getLineUpsListWithAreaId:(NSNumber * )areaId spId:(NSNumber *)spid
 
 //notiification.userInfo[@“taskid”]=11,获得lineup数据（第一次获取lineupid 的数据，下载成功后会将数据保存到数据库，以后再用数据可以调用：-(NSDictionary *)getLineupDataFromDataBaseWithLineup:(NSNumber * )lid）；
 参数：lid =lineupId ，例如：lid=15607
 -(void)downloadLineupDataAndSaveWithLid:(NSNumber * )lid;
 
 注：//从数据库获取Lineup数据
 -(NSDictionary *)getLineupDataFromDataBaseWithLineup:(NSNumber * )lid;
 
 注：//从数据库删除Lineup数据，调用该方法删除lineup的数据
 -(void)deleteLineupDataFromDateBaseWithLineup:(NSNumber * )lid;
 
 
 //notiification.userInfo[@“taskid”]=12,搜索山东新闻联播播出时间
 参数：resourceid＝resId（该参数从 获取电视墙接口获取），typeid＝频道类型；例如：resourceid＝UCQz，typeid＝12
 -(void)searchProgramWithResourceId:(NSString * )resourceid typeId:(NSNumber *)typeId;
 
 //notiification.userInfo[@"taskid"]=13,搜索山东卫视
 参数：stime＝开始时间，etime＝结束时间，cid＝频道ID，isHd=是否高清；例如：stime＝20151021180611，etime＝20151022180611，cid＝537，isHd=0  (0:非高清，1:高清),
 -(void)getProgramGuideWithStime:(NSString * )stime etime:(NSString * )etime cid:(NSNumber *)cid isHd:(NSNumber * )isHd;
 
 //notiification.userInfo[@"taskid"]=14,CCTV1 今天播放的节目
 参数：day=周几，cid＝频道ID；例如：day＝2，cid＝29（节目表单最多能取一个周内的，例如当天是周日（day=7），可以取到下周六的节目（day=13））
 -(void)getProgramGuideWithDay:(NSNumber *)day cid:(NSNumber *)cid;
 
 //notiification.userInfo[@"taskid"]=15,获取cid = 1 的节目
 参数：cid＝频道ID，lid＝lineupid，time＝时间；例如：cid＝1，lid＝15607，time＝0（0代表当前时间）
 -(void)getProgramsByCatIDWithCid:(NSNumber * )cid lid:(NSNumber *)lid time:(NSString *)time;
 
 
 
 //notiification.userInfo[@“taskid”]=16,获取电视墙数据
 参数：lid＝lineupid，time＝时间，例如：lid＝15607，time＝0（0代表当前时间）
 -(void)getTVWallDataWithLid:(NSNumber * )lid time:(NSString * )time;
 
 //notiification.userInfo[@“taskid”]=17,搜索指定频道，指定节目的一周以内的播出时间
 参数：resourceid：resId，typeId：typeId，cid：频道ID，ctry：ctry
 -(void)searchProgramWithResourceId:(NSString *)resourceid typeId:(NSNumber *)typeId cid:(NSNumber *)cid ctry:(NSString *)ctry;
 
 //notiification.userInfo[@“taskid”]=18,节目详情
 参数：typeId：typeId，resourceId：resId
 -(void)getDetailMessageOfProgramWithTypeid:(NSNumber *)typeId resourceId:(NSString *)resourceId
 
 
 //notiification.userInfo[@“taskid”]=19,对码接口
 参数：remoteId：remoteId，deviceTypeId：deviceTypeId(设备类型)
 -(void)testIRDataByIdWithRemoteId:(NSString *)remoteId deviceTypeId:(NSNumber *)deviceTypeId;
 
 
 //notiification.userInfo[@“taskid”]=20,取码接口
 参数：remoteId：remoteId，deviceTypeId：deviceTypeId(设备类型)
 -(void)downloadIRDataByIdWithRemoteId:(NSString *)remoteId deviceTypeId:(NSNumber *)deviceTypeId;
 
 /notiification.userInfo[@“taskid”]=21,获取某种设备的品牌列表
 参数：countryId：国家代码，deviceTypeId：设备类型
 -(void)getBrandListFromNetWithCountryId:(NSString *)countryId deviceTypeId:(NSNumber * ) deviceTypeId;
 
 
 /notiification.userInfo[@“taskid”]=22,获取某种设备的品牌列表
 参数：countryId：国家代码，remoteId：rid（可以是多个），deviceTypeId:设备类型
 -(void)downloadIRDataByIdWithCountryId:(NSString *)countryId remoteId:(NSString *)remoteId deviceTypeId:(NSNumber *) deviceTypeId
 
 /notiification.userInfo[@“taskid”]=23,根据不同语言获取国家列表及国家代码
 参数：lanCode： 语言代码，目前支持主流的是一种语言
 -(void)getCountryListWithLancode:(NSString *)lanCode
 
 **/

#define AREA_WITH_PROVINCE 0
#define OPERATER_WITH_AREAID 1
#define ALL_REMOTE_ID_WITH_AREAID 2
#define IRDATA_BY_ID_WITH_REMOTEIDS 3
#define FILTER_IRDATA_WITH_FUNCTIONID 4
#define IPTV_WITH_SPID 5
#define SEARCH_STB_WITH_NAME 6
#define BRANDLIST_FROM_NET_DID 7
#define ALL_REMOTE_WITH_DID 8
#define AIRCONDITION_IRDATA_WITH_REMOTEID 9
#define LINEUPS_LIST_WITH_AREID 10
/**
 //notiification.userInfo[@“taskid”]=11,获得lineup数据（第一次获取lineupid 的数据，下载成功后会将数据保存到数据库，以后再用数据可以调用：-(NSDictionary *)getLineupDataFromDataBaseWithLineup:(NSNumber * )lid）；
 参数：lid =lineupId ，例如：lid=15607
 -(void)downloadLineupDataAndSaveWithLid:(NSNumber * )lid;
 
 注：//从数据库获取Lineup数据
 -(NSDictionary *)getLineupDataFromDataBaseWithLineup:(NSNumber * )lid;
 
 注：//从数据库删除Lineup数据，调用该方法删除lineup的数据
 -(void)deleteLineupDataFromDateBaseWithLineup:(NSNumber * )lid;
 **/
#define LINEUPS_WITH_LID 11
#define SEARCH_PROGRAM_WITH_RESOURCEID 12
#define PROGRAM_GUIDE_TIME 13
#define PROGRAM_GUIDE_WITH_DAY 14
#define PROGRAM_GUIDE_WITH_CID_LID 15
#define TVWALL_WITH_LID 16
#define SEARCH_PROGRAM_WITH_RESOURCEID_TIME 17
#define DETAIL_MESSAGE_WITH_TYPEID 18
#define TEST_IRDATA_BY_REMOTEID 19
#define DOWNLOAD_IRDATA_BY_REMOTEID 20
#define BRANDLIST_WITH_COUNTRYID_TYPEID 21
#define DOWNLOAD_IRDATA_BY_COUNTRYID 22
#define COUNTRYLIST_WITH_LANCODE 23
#define MATCHUP_LINE 25
#define NOSTATE_WITH_ID 26


typedef void (^RemoteControlResponseSenderBlock)(NSArray *response);

typedef void (^RemoteControlResponseErrorBlock)(NSError *error);


@interface TYInfraredModel : NSObject

@property (nonatomic, strong) RemoteControlResponseSenderBlock success;
@property (nonatomic, strong) RemoteControlResponseErrorBlock failure;

- (void)clear;

@end
