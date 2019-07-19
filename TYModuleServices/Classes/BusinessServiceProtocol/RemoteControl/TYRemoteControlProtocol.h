//
//  TYRemoteControlProtocol.h
//  TYRemoteControlModule
//
//  Created by TuyaInc on 2018/11/16.
//

#ifndef TYRemoteControlProtocol_h
#define TYRemoteControlProtocol_h




#import <Foundation/Foundation.h>

@protocol TYRemoteControlProtocol <NSObject>

@optional


#pragma mark - KKACManager
-(void)setAC_RemoteId:(NSString *)remoteId;


/**
 *  处理红外码库数据
 */
-(void)airConditionModeDataHandle;


/**
 *  非首次登陆时，将上次使用后保存的空调的所有模式及模式下的状态值传值
 *
 *  @param modesta  模式
 *  @param powersta 开关
 *  @param temp     温度
 *  @param windp    风量
 *  @param winds    风向
 *  @param isShow   是否为显示在面板的那一组值
 */
-(void)readAirConditionStateAndValueWihtModestate:(int)modesta powerState:(int)powersta temperature:(int)temp windPower:(int)windp windState:(int)winds isShowState:(BOOL)isShow;//非首次使用传状态值


/**
 *  判断温度是否可控
 *
 *  @return YES:可控，NO:不可控
 */
-(BOOL)canControlTemp;//当前模式下温度是否可控


/**
 *  判断风量是否可控
 *
 *  @return YES:可控，NO:不可控
 */
-(BOOL)canControlWindPower;//当前模式下风量是否可控


/**
 *  判断风向是否可控
 *
 *  @return YES:可控，NO:不可控
 */
-(BOOL)canControlWindState;//风向按钮是否可以点击


/**
 *  判断按钮是否可以被点击
 *
 *  @param tag 传入风向类的button的tag值
 *  @param tag 传入温度类的button的tag值
 *  @param tag 传入风向类的button的tag值
 *  @param tag 传入风量类的button的tag值
 *
 *  @return YES：表示可以点击，NO：表示不可以被点击
 */
-(BOOL)canModeStateButtonClickWithTag:(NSInteger)tag;//模式button
-(BOOL)canTemperatureButtonClickWithTag:(NSInteger)tag;//温度button
-(BOOL)canWindStateButtonClickWithTag:(NSInteger)tag;//风向button
-(BOOL)canWindPowerButtonClickWithTag:(NSInteger)tag;//风量button


/**
 *  取到当前模式
 *
 *  @return 1501：制冷，1502：制热，1503：自动，1504：送风，1505：除湿
 */
-(int)getModeState;//得到当前模式


/**
 *  取到当前模式下的风量
 *
 *  @return -1：表示风量不可控，0：自动风量，1：低风量，2：中风量，3：高风量
 */
-(int)getWindPower;//得到当前模式的风量


/**
 *  取到当前的风向
 *
 *  @return -1：表示风向不可控，0：扫风，>0：固定风向
 */
-(int)getWindState;//得到当前风向


/**
 *  取到当前温度
 *
 *  @return int类型的值
 */
-(int)getTemperature;//得到当前模式的温度


/**
 *  取到当前的开关状态
 *
 *  @return 0：打开状态，1：关闭状态
 */
-(int)getPowerState;//得到开关状态


/**
 *  点击按钮，切换值
 *
 *  @param modest 模式（在接口：-(NSArray *)getAllModeState;取到所需传入的参数）
 *  @param modest 风量（在接口：-(NSArray *)getAllWindPower;取到所需传入的参数）
 *  @param modest 温度（温度为16~30，在接口：-(NSArray *)getLackOfTemperatureArray;取到限制设定的温度值）
 *  @param modest 开关（AC_POWER_ON：打开，AC_POWER_OFF：关闭）
 *  @param modest 风向（在接口：-(NSArray *)getAllWindState;取到所需传入的参数）
 */
-(void)changeModeStateWithModeState:(int)modest;//模式
-(void)changeWindPowerWithWindpower:(int)windp;//风量
-(void)changeTemperatureWithTemperature:(int)temp;//温度
-(void)changePowerStateWithPowerstate:(int)powersta;//开关
-(void)changeWindStateWithWindState:(int)windsta;//风向


/**
 *  取到空调所有支持的模式
 *
 *  @return 1501：制冷，1502：制热，1503：自动，1504：送风，1505：除湿
 */
-(NSArray *)getAllModeState;//得到空调所拥有的所有模式


/**
 *  取到当前模式下的所有的风量
 *
 *  @return nil：表示风量不可控，0：自动风量，1：低风量，2：中风量，3：高风量
 */
-(NSArray *)getAllWindPower;//得到当前模式下所有的风量


/**
 *  取到空调支持的所有的风向
 *
 *  @return nil：表示风向不可控，0：扫风，>0：固定风向
 */
-(NSArray *)getAllWindState;//得到空调的所有的风向


/**
 *  取到当前模式下限制设定的温度值集
 *
 *  @return 得到限制设定的温度集合，在改变温度时，要避免传入限制设定的温度值；没有限制设定的温度值返回：nil
 */
-(NSArray *)getLackOfTemperatureArray;//得到当前模式下所缺少的温度


/**
 *  取到遥控器参数
 *
 *  @return 将取到的遥控器参数直接发出
 */
-(NSArray *)getParams;


/**
 *  取到按键参数
 *
 *  @return 将取到的值发送出去
 */
-(NSArray *)getAirConditionInfrared;//得到空调红外码


/**
 *  取到空调支持的所有模式，及模式下的状态值
 *
 *  @return 根据自身需求去处理这些值
 */
-(NSArray *)getAirConditionAllModeAndValue;//得到所有的模式及模式下的状态值


/**
 *  该接口用来做测试用，直接对应的状态值，然后取得红外码
 *
 *  @param powersta   开关
 *  @param modesta    模式
 *  @param windSta    风向
 *  @param windPow    风量
 *  @param temperat   温度
 *  @param functionid 按键id（IRConstants.h对每种类型的functionid有明确的标注）
 *
 *  @return 将取到的值直接发送出去
 */
-(NSArray * )getAirConditionInfraredWithPower:(int)powersta modeState:(int)modesta windState:(int)windSta windPower:(int)windPow temperature:(int)temperat functionid:(int)functionid;





#pragma mark - KooKongSDK





/**
 *  验证权限
 *
 *  @param apikey     key
 *  @param uuidString （非数量限制客户，传nil即可，数量限制客户，传设备的id，该id是自己定义的，一个id代表一个设备）
 */
-(void)checkUserAuthority:(NSString * )apikey uuidString:(NSString *)uuidString __deprecated_msg("Use -[checkUserAuthority: deviceId:] instead");

/**
 *  验证权限
 *
 *  @param apikey     key
 *  @param deviceId （跟安卓保持一致）
 （非数量限制客户，传nil即可；数量限制客户，传设备的id，该id是自己定义的，一个id代表一个设备）
 */
-(void)checkUserAuthority:(NSString * )apikey deviceId:(NSString *)deviceId;

/**
 *  1.根据定位到省 ，市，区，获取areaid
 *
 *  @param provinceName 省名称（山东省）
 *  @param cityName     市名称（青岛市）
 *  @param districtName 区名称（崂山区）
 */
-(void)getAreaIdWithProvince:(NSString *)provinceName City:(NSString *)cityName District:(NSString *)districtName;


/**
 *  2.根据areaid获取运营商列表
 *
 *  @param areaid 根据省，市，区获得的areaid
 */
-(void)getOperatersWithAreaid:(NSNumber*)areaid;


/**
 *  3.获取选中的运营商（spid）下，含有的所有的机顶盒的遥控器
 *  devicetypeid:   设备类型1：STB  2：TV  3：BOX  4：DVD   5：AC
 *  @param areaid 根据省，市，区获得的areaid
 *  @param spid   获取的运营商的spid
 *  @param did    devicetypeid
 *  @param bid    brandid
 */
-(void)getAllRemoteIdsWithAreaid:(NSNumber*)areaid spid:(NSNumber*)spid did:(NSNumber *)did bid:(NSNumber *)bid;


/**
 *  4.获取遥控器的红外码（rid）进行测试
 *
 *  @param remoteIds remoteid（可以是多个，分别用，隔开）
 */
-(void)getIRDataByIdWithRemoteIds:(NSString *)remoteIds;


/**
 *  6.获取这个运营商（spid）下，所有的品牌（每个品牌都带有他的所有遥控器码）
 *
 *  @param spid 获取到的运营商的spid
 */
-(void)getIPTVWithSpid:(NSNumber *)spid;

/**
 *  7.获取所有的品牌（每个品牌都带有所有他的遥控器码）
 *
 *  @param nameString 品牌名称
 *  @param areaid     根据省市区获取的areaid
 */
-(void)searchSTBWithNameString:(NSString * )nameString areaid:(NSNumber*)areaid;

/**
 *  8.获取电视（或者其他，通过typeid区分）品牌列表
 *  deviceTypeId:   设备类型1：STB  2：TV  3：BOX  4：DVD   5：AC
 *  @param did devicetype
 */
-(void)getBrandListFromNetWithDid:(NSNumber * )did;

/**
 *  9.获得这个品牌（brandid）下，含所有的遥控器
 *
 *  @param did deviceTypeId
 *  @param bid brandid(获取所有的品牌，取到brandid)
 */
-(void)getAllRemoteIdsWithDid:(NSNumber *)did bid:(NSNumber *)bid;

/**
 *  10.获得红外数据数据
 *
 *  @param remoteId 调用接口3，得到空调的remoteid
 */

-(void)getAirConditionIRDataWithRemoteId:(NSNumber*)remoteId;

/**
 *  11.Lineup列表
 *
 *  @param areaId 根据省，市，区获取的areaid
 *  @param spid   获取到的运营商spid
 */
-(void)getLineUpsListWithAreaId:(NSNumber * )areaId spId:(NSNumber *)spid;

/**
 *  12.从网络获取Lineup数据
 *
 *  @param lid  Lineup列表中的lineupid
 */
-(void)downloadLineupDataAndSaveWithLid:(NSNumber * )lid rid:(NSNumber*)rid;


/**
 *  15.搜索山东新闻联播播出时间
 *
 *  @param resourceid resid（从获取电视墙接口取该参数）
 *  @param typeId     typeId（从获取电视墙数据接口取该参数）
 */
-(void)searchProgramWithResourceId:(NSString * )resourceid typeId:(NSNumber *)typeId;

/**
 *  搜索指定频道，指定节目的一周以内的播出时间。
 *
 *  @param resourceid resId（从电视墙接口获取）
 *  @param typeId     typeId（从电视墙接口获取）
 *  @param cid        频道ID（从电视墙接口获取）
 *  @param ctry       ctry（从电视墙接口获取）
 */
-(void)searchProgramWithResourceId:(NSString *)resourceid typeId:(NSNumber *)typeId cid:(NSNumber *)cid ctry:(NSString *)ctry;


/**
 *  16.搜索山东卫视
 *
 *  @param stime 开始时间
 *  @param etime 结束时间
 *  @param cid   频道id（根据lineup数据得到cid）
 *  @param isHd  是否是高清（1:高清；0:标清） */
-(void)getProgramGuideWithStime:(NSString * )stime etime:(NSString * )etime cid:(NSNumber *)cid isHd:(NSNumber * )isHd;

/**
 *  17.CCTV1 今天播放的节目
 *
 *  @param day 星期几（1:表示星期一）
 *  @param cid 频道id（根据lineup数据得到的cid）
 */
-(void)getProgramGuideWithDay:(NSNumber *)day cid:(NSNumber *)cid;

/**
 *  18.获取cid = 1 的节目
 *
 *  @param cid  频道id（根据lineup数据得到的cid）
 *  @param lid  lineupid（调用接口：获取lingup列表）
 *  @param time 0（传0，表示当前时间）
 */
-(void)getProgramsByCatIDWithCid:(NSNumber * )cid lid:(NSNumber *)lid time:(NSString *)time;

/**
 *  19.电视墙数据
 *
 *  @param lid  lineupid(调用接口：获取lingup列表)
 *  @param time 0(表示当前时间)
 */
-(void)getTVWallDataWithLid:(NSNumber * )lid time:(NSString * )time;


/**
 *  20.节目详情数据
 *
 *  @param typeId     typeId>0（从电视墙接口获取）
 *  @param resourceId resourceId!=NULL（从获取电视墙接口取该参数）
 *  typeId=0&&resourceId=@"";没有节目详情
 */
-(void)getDetailMessageOfProgramWithTypeid:(NSNumber *)typeId resourceId:(NSString *)resourceId;

/**
 *  ***获取遥控器的红外码（rid），进行对码
 *
 *  @param remoteId     remoteid
 *  @param deviceTypeId 设备类型id
 */
-(void)testIRDataByIdWithRemoteId:(NSString *)remoteId deviceTypeId:(NSNumber *)deviceTypeId;

/**
 *  ***对码成功后调用该接口，取完整的码取
 *
 *  @param remoteId     remoteid
 *  @param deviceTypeId 设备类型id
 */
-(void)downloadIRDataByIdWithRemoteId:(NSString *)remoteId deviceTypeId:(NSNumber *)deviceTypeId;


#pragma mark-------------------全球版码库相关接口--------------------
/**
 *  获取某种类型的设备的品牌列表（全球版）
 *
 *  @param countryId    国家代码
 *  @param deviceTypeId 设备类型Id（did）
 */
-(void)getBrandListFromNetWithCountryId:(NSString *)countryId deviceTypeId:(NSNumber * )deviceTypeId;

/**
 *  获得这个品牌（brandid）下，所有的遥控器(全球版)
 *
 *  @param did deviceTypeId
 *  @param bid brandid(获取所有的品牌，取到brandid)
 */
-(void)getAllRemoteIdsWithDid:(NSNumber *)did bid:(NSNumber *)bid countryId:(NSString *)countryId;


/**
 *  获取码库数据（全球版）
 *
 *  @param lanCode    语言代码
 */
-(void)getCountryListWithLancode:(NSString *)lanCode;


/**
 24.单键对码
 
 @param deviceTypeId 设备类型
 @param deviceSwitch 开关状态
 @param mr 所有的remoteid及测试过的键的结果
 */
-(void)singleKeyTestWith:(NSNumber *)deviceTypeId deviceSwitch:(NSNumber *)deviceSwitch mr:(NSString *)mr;

/**
 25.频道表匹配
 
 @param areaId 地区id
 @param spId 运营商id
 @param mr 所有选择的频道集合
 */
-(void)lineUpMatchWith:(NSNumber *)areaId spId:(NSNumber *)spId mr:(NSString *)mr;



/**
 26.获取空调的全解码
 
 @param remoteIds remoteIds
 */
-(void)getNoStateIRDataByIdWith:(NSString *)remoteIds;









@end



#endif /* TYRemoteControlProtocol_h */
