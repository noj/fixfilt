#pragma once

#include "fix.hpp"

namespace FIX43
{
  inline auto load_schema () -> fix::Schema
  {
    fix::Schema schema;
    schema[344] = fix::FieldDef{344, "TradSesCloseTime"};
    schema[345] = fix::FieldDef{345, "TradSesEndTime"};
    schema[346] = fix::FieldDef{346, "NumberOfOrders"};
    schema[347] = fix::FieldDef{347,
                                "MessageEncoding",
                                {{"UTF-8", "UTF_8"},
                                 {"ISO-2022-JP", "ISO_2022_JP"},
                                 {"EUC-JP", "EUC_JP"},
                                 {"SHIFT_JIS", "SHIFT_JIS"}}};
    schema[340] = fix::FieldDef{340,
                                "TradSesStatus",
                                {{"5", "PRE_CLOSE"},
                                 {"6", "REQUEST_REJECTED"},
                                 {"4", "PRE_OPEN"},
                                 {"3", "CLOSED"},
                                 {"2", "OPEN"},
                                 {"1", "HALTED"},
                                 {"0", "UNKNOWN"}}};
    schema[341] = fix::FieldDef{341, "TradSesStartTime"};
    schema[342] = fix::FieldDef{342, "TradSesOpenTime"};
    schema[343] = fix::FieldDef{343, "TradSesPreCloseTime"};
    schema[348] = fix::FieldDef{348, "EncodedIssuerLen"};
    schema[349] = fix::FieldDef{349, "EncodedIssuer"};
    schema[595] = fix::FieldDef{595, "UnderlyingInstrRegistry"};
    schema[606] = fix::FieldDef{606, "LegSecurityAltIDSource"};
    schema[594] = fix::FieldDef{594, "UnderlyingLocaleOfIssue"};
    schema[619] = fix::FieldDef{619, "EncodedLegIssuer"};
    schema[298] = fix::FieldDef{298,
                                "QuoteCancelType",
                                {{"4", "CANCEL_ALL_QUOTES"},
                                 {"2", "CANCEL_FOR_SECURITY_TYPE"},
                                 {"1", "CANCEL_FOR_SYMBOL"},
                                 {"3", "CANCEL_FOR_UNDERLYING_SYMBOL"}}};
    schema[299] = fix::FieldDef{299, "QuoteEntryID"};
    schema[296] = fix::FieldDef{296, "NoQuoteSets"};
    schema[297] = fix::FieldDef{297,
                                "QuoteStatus",
                                {{"6", "REMOVED_FROM_MARKET"},
                                 {"1", "CANCELED_FOR_SYMBOL"},
                                 {"10", "PENDING"},
                                 {"9", "QUOTE_NOT_FOUND"},
                                 {"8", "QUERY"},
                                 {"7", "EXPIRED"},
                                 {"5", "REJECTED"},
                                 {"4", "CANCELED_ALL"},
                                 {"3", "CANCELED_FOR_UNDERLYING"},
                                 {"2", "CANCELED_FOR_SECURITY_TYPE"},
                                 {"0", "ACCEPTED"}}};
    schema[294] = fix::FieldDef{294, "DefOfferSize"};
    schema[295] = fix::FieldDef{295, "NoQuoteEntries"};
    schema[292] = fix::FieldDef{292,
                                "CorporateAction",
                                {{"B", "EX_DISTRIBUTION"},
                                 {"E", "EX_INTEREST"},
                                 {"C", "EX_RIGHTS"},
                                 {"A", "EX_DIVIDEND"},
                                 {"D", "NEW"}}};
    schema[293] = fix::FieldDef{293, "DefBidSize"};
    schema[290] = fix::FieldDef{290, "MDEntryPositionNo"};
    schema[291] = fix::FieldDef{
      291, "FinancialStatus", {{"1", "BANKRUPT"}, {"2", "PENDING_DELISTING"}}};
    schema[591] = fix::FieldDef{
      591,
      "PreallocMethod",
      {{"0", "PRO_RATA"}, {"1", "DO_NOT_PRO_RATA_DISCUSS_FIRST"}}};
    schema[590] = fix::FieldDef{
      590,
      "BookingUnit",
      {{"1", "AGGREGATE_PARTIAL_EXECUTIONS_ON_THIS_ORDER_AND_BOOK_ONE_TRADE_"
             "PER_ORDER"},
       {"2", "AGGREGATE_EXECUTIONS_FOR_THIS_SYMBOL_SIDE_AND_SETTLEMENT_DATE"},
       {"0", "EACH_PARTIAL_EXECUTION_IS_A_BOOKABLE_UNIT"}}};
    schema[593] = fix::FieldDef{593, "UnderlyingStateOrProvinceOfIssue"};
    schema[592] = fix::FieldDef{592, "UnderlyingCountryOfIssue"};
    schema[199] = fix::FieldDef{199, "NoIOIQualifiers"};
    schema[198] = fix::FieldDef{198, "SecondaryOrderID"};
    schema[597] = fix::FieldDef{597, "LegStateOrProvinceOfIssue"};
    schema[596] = fix::FieldDef{596, "LegCountryOfIssue"};
    schema[195] = fix::FieldDef{195, "LastForwardPoints"};
    schema[194] = fix::FieldDef{194, "LastSpotRate"};
    schema[197] = fix::FieldDef{
      197, "AllocLinkType", {{"0", "F_X_NETTING"}, {"1", "F_X_SWAP"}}};
    schema[196] = fix::FieldDef{196, "AllocLinkID"};
    schema[191] = fix::FieldDef{191, "OfferForwardPoints"};
    schema[190] = fix::FieldDef{190, "OfferSpotRate"};
    schema[193] = fix::FieldDef{193, "FutSettDate2"};
    schema[192] = fix::FieldDef{192, "OrderQty2"};
    schema[270] = fix::FieldDef{270, "MDEntryPx"};
    schema[271] = fix::FieldDef{271, "MDEntrySize"};
    schema[272] = fix::FieldDef{272, "MDEntryDate"};
    schema[273] = fix::FieldDef{273, "MDEntryTime"};
    schema[274] = fix::FieldDef{274,
                                "TickDirection",
                                {{"0", "PLUS_TICK"},
                                 {"1", "ZERO_PLUS_TICK"},
                                 {"2", "MINUS_TICK"},
                                 {"3", "ZERO_MINUS_TICK"}}};
    schema[275] = fix::FieldDef{275, "MDMkt"};
    schema[276] = fix::FieldDef{276,
                                "QuoteCondition",
                                {{"E", "LOCKED"},
                                 {"I", "NON_FIRM"},
                                 {"H", "FAST_TRADING"},
                                 {"F", "CROSSED"},
                                 {"D", "CONSOLIDATED_BEST"},
                                 {"C", "EXCHANGE_BEST"},
                                 {"B", "CLOSED"},
                                 {"A", "OPEN"},
                                 {"G", "DEPTH"}}};
    schema[277] = fix::FieldDef{277,
                                "TradeCondition",
                                {{"J", "NEXT_DAY_TRADE"},
                                 {"K", "OPENED"},
                                 {"L", "SELLER"},
                                 {"B", "AVERAGE_PRICE_TRADE"},
                                 {"M", "SOLD"},
                                 {"H", "RULE_155_TRADE"},
                                 {"N", "STOPPED_STOCK"},
                                 {"P", "IMBALANCE_MORE_BUYERS"},
                                 {"Q", "IMBALANCE_MORE_SELLERS"},
                                 {"R", "OPENING_PRICE"},
                                 {"I", "SOLD_LAST"},
                                 {"A", "CASH"},
                                 {"C", "CASH_TRADE"},
                                 {"E", "OPENING"},
                                 {"F", "INTRADAY_TRADE_DETAIL"},
                                 {"G", "RULE_127_TRADE"},
                                 {"D", "NEXT_DAY"}}};
    schema[278] = fix::FieldDef{278, "MDEntryID"};
    schema[279] = fix::FieldDef{
      279, "MDUpdateAction", {{"0", "NEW"}, {"1", "CHANGE"}, {"2", "DELETE"}}};
    schema[524] = fix::FieldDef{524, "NestedPartyID"};
    schema[525] = fix::FieldDef{525, "NestedPartyIDSource"};
    schema[526] = fix::FieldDef{526, "SecondaryClOrdID"};
    schema[527] = fix::FieldDef{527, "SecondaryExecID"};
    schema[520] = fix::FieldDef{520, "ContAmtValue"};
    schema[521] = fix::FieldDef{521, "ContAmtCurr"};
    schema[522] = fix::FieldDef{522,
                                "OwnerType",
                                {{"5", "COMPANY_TRUSTEE"},
                                 {"13", "NOMINEE"},
                                 {"12", "CORPORATE_BODY"},
                                 {"11", "NON_PROFIT_ORGANIZATION"},
                                 {"10", "NETWORKING_SUB_ACCOUNT"},
                                 {"9", "FIDUCIARIES"},
                                 {"8", "TRUSTS"},
                                 {"6", "PENSION_PLAN"},
                                 {"4", "INDIVIDUAL_TRUSTEE"},
                                 {"2", "PUBLIC_COMPANY"},
                                 {"3", "PRIVATE_COMPANY"},
                                 {"1", "INDIVIDUAL_INVESTOR"},
                                 {"7", "CUSTODIAN_UNDER_GIFTS_TO_MINORS_ACT"}}};
    schema[523] = fix::FieldDef{523, "PartySubID"};
    schema[599] = fix::FieldDef{599, "LegInstrRegistry"};
    schema[528] = fix::FieldDef{528,
                                "OrderCapacity",
                                {{"R", "RISKLESS_PRINCIPAL"},
                                 {"I", "INDIVIDUAL"},
                                 {"P", "PRINCIPAL"},
                                 {"W", "AGENT_FOR_OTHER_MEMBER"},
                                 {"A", "AGENCY"},
                                 {"G", "PROPRIETARY"}}};
    schema[529] = fix::FieldDef{
      529,
      "OrderRestrictions",
      {{"7", "FOREIGN_ENTITY"},
       {"A", "RISKLESS_ARBITRAGE"},
       {"1", "PROGRAM_TRADE"},
       {"8", "EXTERNAL_MARKET_PARTICIPANT"},
       {"6", "ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_UNDERLYING_SECURITY_"
             "OF_A_DERIVATIVE_SECURITY"},
       {"5", "ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_SECURITY"},
       {"3", "NON_INDEX_ARBITRAGE"},
       {"2", "INDEX_ARBITRAGE"},
       {"4", "COMPETING_MARKET_MAKER"},
       {"9", "EXTERNAL_INTER_CONNECTED_MARKET_LINKAGE"}}};
    schema[449] = fix::FieldDef{449, "TotalVolumeTradedDate"};
    schema[448] = fix::FieldDef{448, "PartyID"};
    schema[443] = fix::FieldDef{443, "StrikeTime"};
    schema[442] =
      fix::FieldDef{442,
                    "MultiLegReportingType",
                    {{"1", "SINGLE_SECURITY"},
                     {"2", "INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY"},
                     {"3", "MULTI_LEG_SECURITY"}}};
    schema[441] = fix::FieldDef{441, "LiquidityNumSecurities"};
    schema[447] = fix::FieldDef{
      447,
      "PartyIDSource",
      {{"5", "CHINESE_B_SHARE"},
       {"8", "US_EMPLOYER_IDENTIFICATION_NUMBER"},
       {"A", "AUSTRALIAN_TAX_FILE_NUMBER"},
       {"9", "AUSTRALIAN_BUSINESS_NUMBER"},
       {"E", "ISO_COUNTRY_CODE"},
       {"B", "BIC"},
       {"7", "US_SOCIAL_SECURITY_NUMBER"},
       {"D", "PROPRIETARY_CUSTOM_CODE"},
       {"F", "SETTLEMENT_ENTITY_LOCATION"},
       {"1", "KOREAN_INVESTOR_ID"},
       {"2", "TAIWANESE_QUALIFIED_FOREIGN_INVESTOR_ID_QFII"},
       {"3", "TAIWANESE_TRADING_ACCOUNT"},
       {"4", "MALAYSIAN_CENTRAL_DEPOSITORY"},
       {"6", "UK_NATIONAL_INSURANCE_OR_PENSION_NUMBER"},
       {"C", "GENERALLY_ACCEPTED_MARKET_PARTICIPANT_IDENTIFIER"}}};
    schema[446] = fix::FieldDef{446, "EncodedListStatusText"};
    schema[445] = fix::FieldDef{445, "EncodedListStatusTextLen"};
    schema[444] = fix::FieldDef{444, "ListStatusText"};
    schema[108] = fix::FieldDef{108, "HeartBtInt"};
    schema[102] = fix::FieldDef{
      102,
      "CxlRejReason",
      {{"1", "UNKNOWN_ORDER"},
       {"0", "TOO_LATE_TO_CANCEL"},
       {"6", "DUPLICATE_CLORDID_RECEIVED"},
       {"5", "ORIGORDMODTIME_DID_NOT_MATCH_LAST_TRANSACTTIME_OF_ORDER"},
       {"4", "UNABLE_TO_PROCESS_ORDER_MASS_CANCEL_REQUEST"},
       {"3", "ORDER_ALREADY_IN_PENDING_CANCEL_OR_PENDING_REPLACE_STATUS"},
       {"2", "BROKER"}}};
    schema[103] =
      fix::FieldDef{103,
                    "OrdRejReason",
                    {{"2", "EXCHANGE_CLOSED"},
                     {"1", "UNKNOWN_SYMBOL"},
                     {"3", "ORDER_EXCEEDS_LIMIT"},
                     {"4", "TOO_LATE_TO_ENTER"},
                     {"5", "UNKNOWN_ORDER"},
                     {"7", "DUPLICATE_OF_A_VERBALLY_COMMUNICATED_ORDER"},
                     {"9", "TRADE_ALONG_REQUIRED"},
                     {"10", "INVALID_INVESTOR_ID"},
                     {"6", "DUPLICATE_ORDER"},
                     {"11", "UNSUPPORTED_ORDER_CHARACTERISTIC"},
                     {"12", "SURVEILLENCE_OPTION"},
                     {"0", "BROKER"},
                     {"8", "STALE_ORDER"}}};
    schema[100] = fix::FieldDef{100, "ExDestination"};
    schema[106] = fix::FieldDef{106, "Issuer"};
    schema[107] = fix::FieldDef{107, "SecurityDesc"};
    schema[104] = fix::FieldDef{104,
                                "IOIQualifier",
                                {{"O", "AT_THE_OPEN"},
                                 {"X", "CROSSING_OPPORTUNITY"},
                                 {"W", "INDICATION"},
                                 {"V", "VERSUS"},
                                 {"T", "THROUGH_THE_DAY"},
                                 {"S", "PORTFOLIO_SHOWN"},
                                 {"R", "READY_TO_TRADE"},
                                 {"A", "ALL_OR_NONE"},
                                 {"P", "TAKING_A_POSITION"},
                                 {"M", "MORE_BEHIND"},
                                 {"L", "LIMIT"},
                                 {"I", "IN_TOUCH_WITH"},
                                 {"D", "VWAP"},
                                 {"C", "AT_THE_CLOSE"},
                                 {"B", "MARKET_ON_CLOSE"},
                                 {"Q", "AT_THE_MARKET"},
                                 {"Y", "AT_THE_MIDPOINT"},
                                 {"Z", "PRE_OPEN"}}};
    schema[39] = fix::FieldDef{39,
                               "OrdStatus",
                               {{"0", "NEW"},
                                {"1", "PARTIALLY_FILLED"},
                                {"5", "REPLACED"},
                                {"2", "FILLED"},
                                {"6", "PENDING_CANCEL"},
                                {"7", "STOPPED"},
                                {"8", "REJECTED"},
                                {"9", "SUSPENDED"},
                                {"A", "PENDING_NEW"},
                                {"B", "CALCULATED"},
                                {"C", "EXPIRED"},
                                {"D", "ACCEPTED_FOR_BIDDING"},
                                {"E", "PENDING_REPLACE"},
                                {"3", "DONE_FOR_DAY"},
                                {"4", "CANCELED"}}};
    schema[38] = fix::FieldDef{38, "OrderQty"};
    schema[33] = fix::FieldDef{33, "LinesOfText"};
    schema[32] = fix::FieldDef{32, "LastQty"};
    schema[31] = fix::FieldDef{31, "LastPx"};
    schema[30] = fix::FieldDef{30, "LastMkt"};
    schema[37] = fix::FieldDef{37, "OrderID"};
    schema[36] = fix::FieldDef{36, "NewSeqNo"};
    schema[35] = fix::FieldDef{35,
                               "MsgType",
                               {{"0", "HEARTBEAT"},
                                {"1", "TEST_REQUEST"},
                                {"2", "RESEND_REQUEST"},
                                {"3", "REJECT"},
                                {"4", "SEQUENCE_RESET"},
                                {"5", "LOGOUT"},
                                {"6", "INDICATION_OF_INTEREST"},
                                {"7", "ADVERTISEMENT"},
                                {"8", "EXECUTION_REPORT"},
                                {"9", "ORDER_CANCEL_REJECT"},
                                {"a", "QUOTE_STATUS_REQUEST"},
                                {"A", "LOGON"},
                                {"AA", "DERIVATIVE_SECURITY_LIST"},
                                {"AB", "NEW_ORDER_AB"},
                                {"AC", "MULTILEG_ORDER_CANCEL_REPLACE"},
                                {"AD", "TRADE_CAPTURE_REPORT_REQUEST"},
                                {"AE", "TRADE_CAPTURE_REPORT"},
                                {"AF", "ORDER_MASS_STATUS_REQUEST"},
                                {"AG", "QUOTE_REQUEST_REJECT"},
                                {"AH", "RFQ_REQUEST"},
                                {"AI", "QUOTE_STATUS_REPORT"},
                                {"b", "MASS_QUOTE_ACKNOWLEDGEMENT"},
                                {"B", "NEWS"},
                                {"c", "SECURITY_DEFINITION_REQUEST"},
                                {"C", "EMAIL"},
                                {"d", "SECURITY_DEFINITION"},
                                {"D", "ORDER_SINGLE"},
                                {"e", "SECURITY_STATUS_REQUEST"},
                                {"E", "ORDER_LIST"},
                                {"f", "SECURITY_STATUS"},
                                {"F", "ORDER_CANCEL_REQUEST"},
                                {"G", "ORDER_CANCEL_REPLACE_REQUEST"},
                                {"g", "TRADING_SESSION_STATUS_REQUEST"},
                                {"h", "TRADING_SESSION_STATUS"},
                                {"H", "ORDER_STATUS_REQUEST"},
                                {"i", "MASS_QUOTE"},
                                {"j", "BUSINESS_MESSAGE_REJECT"},
                                {"J", "ALLOCATION"},
                                {"K", "LIST_CANCEL_REQUEST"},
                                {"k", "BID_REQUEST"},
                                {"l", "BID_RESPONSE"},
                                {"L", "LIST_EXECUTE"},
                                {"m", "LIST_STRIKE_PRICE"},
                                {"M", "LIST_STATUS_REQUEST"},
                                {"N", "LIST_STATUS"},
                                {"n", "XML_MESSAGE"},
                                {"o", "REGISTRATION_INSTRUCTIONS"},
                                {"P", "ALLOCATION_ACK"},
                                {"p", "REGISTRATION_INSTRUCTIONS_RESPONSE"},
                                {"q", "ORDER_MASS_CANCEL_REQUEST"},
                                {"Q", "DONT_KNOW_TRADE"},
                                {"r", "ORDER_MASS_CANCEL_REPORT"},
                                {"R", "QUOTE_REQUEST"},
                                {"s", "NEW_ORDER_s"},
                                {"S", "QUOTE"},
                                {"t", "CROSS_ORDER_CANCEL_REPLACE_REQUEST"},
                                {"T", "SETTLEMENT_INSTRUCTIONS"},
                                {"u", "CROSS_ORDER_CANCEL_REQUEST"},
                                {"v", "SECURITY_TYPE_REQUEST"},
                                {"V", "MARKET_DATA_REQUEST"},
                                {"w", "SECURITY_TYPES"},
                                {"W", "MARKET_DATA_SNAPSHOT_FULL_REFRESH"},
                                {"x", "SECURITY_LIST_REQUEST"},
                                {"X", "MARKET_DATA_INCREMENTAL_REFRESH"},
                                {"y", "SECURITY_LIST"},
                                {"Y", "MARKET_DATA_REQUEST_REJECT"},
                                {"z", "DERIVATIVE_SECURITY_LIST_REQUEST"},
                                {"Z", "QUOTE_CANCEL"}}};
    schema[34] = fix::FieldDef{34, "MsgSeqNum"};
    schema[641] = fix::FieldDef{641, "LastForwardPoints2"};
    schema[640] = fix::FieldDef{640, "Price2"};
    schema[643] = fix::FieldDef{643, "OfferForwardPoints2"};
    schema[642] = fix::FieldDef{642, "BidForwardPoints2"};
    schema[645] = fix::FieldDef{645, "MktBidPx"};
    schema[644] = fix::FieldDef{644, "RFQReqID"};
    schema[438] = fix::FieldDef{438, "ContraTradeTime"};
    schema[646] = fix::FieldDef{646, "MktOfferPx"};
    schema[436] = fix::FieldDef{436, "UnderlyingContractMultiplier"};
    schema[437] = fix::FieldDef{437, "ContraTradeQty"};
    schema[434] = fix::FieldDef{
      434,
      "CxlRejResponseTo",
      {{"2", "ORDER_CANCEL_REPLACE_REQUEST"}, {"1", "ORDER_CANCEL_REQUEST"}}};
    schema[435] = fix::FieldDef{435, "UnderlyingCouponRate"};
    schema[432] = fix::FieldDef{432, "ExpireDate"};
    schema[433] = fix::FieldDef{
      433,
      "ListExecInstType",
      {{"5", "EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_WITHDRAW"},
       {"4", "EXCHANGE_SWITCH_CIV_ORDER_BUY_DRIVEN_CASH_TOP_UP"},
       {"2", "WAIT_FOR_EXECUTE_INSTRUCTION"},
       {"1", "IMMEDIATE"},
       {"3", "EXCHANGE_SWITCH_CIV_ORDER_SELL_DRIVEN"}}};
    schema[430] =
      fix::FieldDef{430, "NetGrossInd", {{"1", "NET"}, {"2", "GROSS"}}};
    schema[431] = fix::FieldDef{431,
                                "ListOrderStatus",
                                {{"4", "CANCELING"},
                                 {"3", "EXECUTING"},
                                 {"7", "REJECT"},
                                 {"6", "ALL_DONE"},
                                 {"5", "ALERT"},
                                 {"2", "RECEIVEDFOREXECUTION"},
                                 {"1", "INBIDDINGPROCESS"}}};
    schema[339] = fix::FieldDef{
      339,
      "TradSesMode",
      {{"3", "PRODUCTION"}, {"1", "TESTING"}, {"2", "SIMULATED"}}};
    schema[338] = fix::FieldDef{
      338,
      "TradSesMethod",
      {{"3", "TWO_PARTY"}, {"1", "ELECTRONIC"}, {"2", "OPEN_OUTCRY"}}};
    schema[335] = fix::FieldDef{335, "TradSesReqID"};
    schema[334] =
      fix::FieldDef{334,
                    "Adjustment",
                    {{"1", "CANCEL"}, {"2", "ERROR"}, {"3", "CORRECTION"}}};
    schema[337] = fix::FieldDef{337, "ContraTrader"};
    schema[336] = fix::FieldDef{336, "TradingSessionID"};
    schema[331] = fix::FieldDef{331, "SellVolume"};
    schema[330] = fix::FieldDef{330, "BuyVolume"};
    schema[333] = fix::FieldDef{333, "LowPx"};
    schema[332] = fix::FieldDef{332, "HighPx"};
    schema[6] = fix::FieldDef{6, "AvgPx"};
    schema[99] = fix::FieldDef{99, "StopPx"};
    schema[98] = fix::FieldDef{98,
                               "EncryptMethod",
                               {{"2", "DES"},
                                {"6", "PEM_DES_MD5"},
                                {"5", "PGP_DES_MD5"},
                                {"3", "PKCS_DES"},
                                {"0", "NONE"},
                                {"1", "PKCS"},
                                {"4", "PGP_DES"}}};
    schema[91] = fix::FieldDef{91, "SecureData"};
    schema[90] = fix::FieldDef{90, "SecureDataLen"};
    schema[93] = fix::FieldDef{93, "SignatureLength"};
    schema[95] = fix::FieldDef{95, "RawDataLength"};
    schema[94] = fix::FieldDef{
      94, "EmailType", {{"0", "NEW"}, {"1", "REPLY"}, {"2", "ADMIN_REPLY"}}};
    schema[97] = fix::FieldDef{97, "PossResend", {{"N", "NO"}, {"Y", "YES"}}};
    schema[96] = fix::FieldDef{96, "RawData"};
    schema[559] = fix::FieldDef{559,
                                "SecurityListRequestType",
                                {{"1", "SECURITYTYPE_AND_OR_CFICODE"},
                                 {"2", "PRODUCT"},
                                 {"3", "TRADINGSESSIONID"},
                                 {"4", "ALL_SECURITIES"},
                                 {"0", "SYMBOL"}}};
    schema[558] = fix::FieldDef{558, "NoSecurityTypes"};
    schema[555] = fix::FieldDef{555, "NoLegs"};
    schema[554] = fix::FieldDef{554, "Password"};
    schema[557] = fix::FieldDef{557, "TotalNumSecurityTypes"};
    schema[556] = fix::FieldDef{556, "LegCurrency"};
    schema[551] = fix::FieldDef{551, "OrigCrossID"};
    schema[550] = fix::FieldDef{550,
                                "CrossPrioritization",
                                {{"2", "SELLSIDE_PRIORITIZED"},
                                 {"0", "NONE"},
                                 {"1", "BUYSIDE_PRIORITIZED"}}};
    schema[553] = fix::FieldDef{553, "Username"};
    schema[552] =
      fix::FieldDef{552, "NoSides", {{"1", "ONE_SIDE"}, {"2", "BOTH_SIDES"}}};
    schema[238] = fix::FieldDef{238, "Concession"};
    schema[239] = fix::FieldDef{239, "RepoCollateralSecurityType"};
    schema[234] = fix::FieldDef{234, "StipulationValue"};
    schema[235] = fix::FieldDef{
      235,
      "YieldType",
      {{"TRUE", "TRUE_YIELD_THE_YIELD_CALCULATED_WITH_COUPON_DATES_MOVED_FROM_"
                "A_WEEKEND_OR_HOLIDAY_TO_THE_NEXT_VALID_SETTLEMENT_DATE"},
       {"PREVCLOSE", "PREVIOUS_CLOSE_YIELD_THE_YIELD_OF_A_BOND_BASED_ON_THE_"
                     "CLOSING_PRICE_1_DAY_AGO"},
       {"LONGEST", "YIELD_TO_LONGEST_AVERAGE"},
       {"LONGAVGLIFE", "YIELD_TO_LONGEST_AVERAGE_LIFE_THE_YIELD_ASSUMING_ONLY_"
                       "MANDATORY_SINKS_ARE_TAKEN_THIS_RESULTS_IN_A_LOWER_"
                       "PAYDOWN_OF_DEBT_THE_YIELD_IS_THEN_CALCULATED_TO_THE_"
                       "FINAL_PAYMENT_DATE"},
       {"MATURITY",
        "YIELD_TO_MATURITY_THE_YIELD_OF_A_BOND_TO_ITS_MATURITY_DATE"},
       {"MARK", "MARK_TO_MARKET_YIELD_AN_ADJUSTMENT_IN_THE_VALUATION_OF_A_"
                "SECURITIES_PORTFOLIO_TO_REFLECT_THE_CURRENT_MARKET_VALUES_OF_"
                "THE_RESPECTIVE_SECURITIES_IN_THE_PORTFOLIO"},
       {"OPENAVG", "OPEN_AVERAGE_YIELD_THE_AVERAGE_YIELD_OF_THE_RESPECTIVE_"
                   "SECURITIES_IN_THE_PORTFOLIO"},
       {"PUT", "YIELD_TO_NEXT_PUT_THE_YIELD_TO_THE_DATE_AT_WHICH_THE_BOND_"
               "HOLDER_CAN_NEXT_PUT_THE_BOND_TO_THE_ISSUER"},
       {"PROCEEDS", "PROCEEDS_YIELD_THE_CD_EQUIVALENT_YIELD_WHEN_THE_REMAINING_"
                    "TIME_TO_MATURITY_IS_LESS_THAN_TWO_YEARS"},
       {"SEMIANNUAL", "SEMI_ANNUAL_YIELD_THE_YIELD_OF_A_BOND_WHOSE_COUPON_"
                      "PAYMENTS_ARE_REINVESTED_SEMI_ANNUALLY"},
       {"SHORTAVGLIFE", "YIELD_TO_SHORTEST_AVERAGE_LIFE_SAME_AS_AVGLIFE_ABOVE"},
       {"SHORTEST", "YIELD_TO_SHORTEST_AVERAGE"},
       {"SIMPLE", "SIMPLE_YIELD_THE_YIELD_OF_A_BOND_ASSUMING_NO_REINVESTMENT_"
                  "OF_COUPON_PAYMENTS"},
       {"TENDER", "YIELD_TO_TENDER_DATE_THE_YIELD_ON_A_MUNICIPAL_BOND_TO_ITS_"
                  "MANDATORY_TENDER_DATE"},
       {"VALUE1/32", "YIELD_VALUE_OF_1_32_THE_AMOUNT_THAT_THE_YIELD_WILL_"
                     "CHANGE_FOR_A_1_32ND_CHANGE_IN_PRICE"},
       {"WORST", "YIELD_TO_WORST_CONVENTION_THE_LOWEST_YIELD_TO_ALL_POSSIBLE_"
                 "REDEMPTION_DATE_SCENARIOS"},
       {"TAXEQUIV", "TAX_EQUIVALENT_YIELD_THE_AFTER_TAX_YIELD_GROSSED_UP_BY_"
                    "THE_MAXIMUM_FEDERAL_TAX_RATE_OF_396_FOR_COMPARISON_TO_"
                    "TAXABLE_YIELDS"},
       {"ANNUAL", "ANNUAL_YIELD_THE_ANNUAL_INTEREST_OR_DIVIDEND_INCOME_AN_"
                  "INVESTMENT_EARNS_EXPRESSED_AS_A_PERCENTAGE_OF_THE_"
                  "INVESTMENTS_TOTAL_VALUE"},
       {"LASTYEAR", "CLOSING_YIELD_MOST_RECENT_YEAR_THE_YIELD_OF_A_BOND_BASED_"
                    "ON_THE_CLOSING_PRICE_AS_OF_THE_MOST_RECENT_YEARS_END"},
       {"NEXTREFUND", "YIELD_TO_NEXT_REFUND"},
       {"AFTERTAX", "AFTER_TAX_YIELD"},
       {"ATISSUE", "YIELD_AT_ISSUE"},
       {"AVGLIFE", "YIELD_TO_AVERAGE_LIFE_THE_YIELD_ASSUMING_THAT_ALL_SINKS"},
       {"AVGMATURITY", "YIELD_TO_AVERAGE_MATURITY_THE_YIELD_ACHIEVED_BY_"
                       "SUBSTITUTING_A_BONDS_AVERAGE_MATURITY_FOR_THE_ISSUES_"
                       "FINAL_MATURITY_DATE"},
       {"BOOK", "BOOK_YIELD_THE_YIELD_OF_A_SECURITY_CALCULATED_BY_USING_ITS_"
                "BOOK_VALUE_INSTEAD_OF_THE_CURRENT_MARKET_PRICE_THIS_TERM_IS_"
                "TYPICALLY_USED_IN_THE_US_DOMESTIC_MARKET"},
       {"CALL", "YIELD_TO_NEXT_CALL_THE_YIELD_OF_A_BOND_TO_THE_NEXT_POSSIBLE_"
                "CALL_DATE"},
       {"CHANGE", "YIELD_CHANGE_SINCE_CLOSE_THE_CHANGE_IN_THE_YIELD_SINCE_THE_"
                  "PREVIOUS_DAYS_CLOSING_YIELD"},
       {"COMPOUND", "COMPOUND_YIELD_THE_YIELD_OF_CERTAIN_JAPANESE_BONDS_BASED_"
                    "ON_ITS_PRICE_CERTAIN_JAPANESE_BONDS_HAVE_IRREGULAR_FIRST_"
                    "OR_LAST_COUPONS_AND_THE_YIELD_IS_CALCULATED_COMPOUND_FOR_"
                    "THESE_IRREGULAR_PERIODS"},
       {"CURRENT", "CURRENT_YIELD_ANNUAL_INTEREST_ON_A_BOND_DIVIDED_BY_THE_"
                   "MARKET_VALUE_THE_ACTUAL_INCOME_RATE_OF_RETURN_AS_OPPOSED_"
                   "TO_THE_COUPON_RATE_EXPRESSED_AS_A_PERCENTAGE"},
       {"GROSS", "TRUE_GROSS_YIELD_YIELD_CALCULATED_USING_THE_PRICE_INCLUDING_"
                 "ACCRUED_INTEREST_WHERE_COUPON_DATES_ARE_MOVED_FROM_HOLIDAYS_"
                 "AND_WEEKENDS_TO_THE_NEXT_TRADING_DAY"},
       {"GOVTEQUIV", "GOVERNMENT_EQUIVALENT_YIELD_ASK_YIELD_BASED_ON_SEMI_"
                     "ANNUAL_COUPONS_COMPOUNDING_IN_ALL_PERIODS_AND_ACTUAL_"
                     "ACTUAL_CALENDAR"},
       {"INFLATION", "YIELD_WITH_INFLATION_ASSUMPTION_BASED_ON_PRICE_THE_"
                     "RETURN_AN_INVESTOR_WOULD_REQUIRE_ON_A_NORMAL_BOND_THAT_"
                     "WOULD_MAKE_THE_REAL_RETURN_EQUAL_TO_THAT_OF_THE_"
                     "INFLATION_INDEXED_BOND_ASSUMING_A_CONSTANT_INFLATION_"
                     "RATE"},
       {"INVERSEFLOATER", "INVERSE_FLOATER_BOND_YIELD_INVERSE_FLOATER_SEMI_"
                          "ANNUAL_BOND_EQUIVALENT_RATE"},
       {"LASTQUARTER", "CLOSING_YIELD_MOST_RECENT_QUARTER_THE_YIELD_OF_A_BOND_"
                       "BASED_ON_THE_CLOSING_PRICE_AS_OF_THE_MOST_RECENT_"
                       "QUARTERS_END"},
       {"LASTCLOSE", "MOST_RECENT_CLOSING_YIELD_THE_LAST_AVAILABLE_YIELD_"
                     "STORED_IN_HISTORY_COMPUTED_USING_PRICE"},
       {"LASTMONTH", "CLOSING_YIELD_MOST_RECENT_MONTH_THE_YIELD_OF_A_BOND_"
                     "BASED_ON_THE_CLOSING_PRICE_AS_OF_THE_MOST_RECENT_MONTHS_"
                     "END"},
       {"CLOSE",
        "CLOSING_YIELD_THE_YIELD_OF_A_BOND_BASED_ON_THE_CLOSING_PRICE"}}};
    schema[236] = fix::FieldDef{236, "Yield"};
    schema[237] = fix::FieldDef{237, "TotalTakedown"};
    schema[230] = fix::FieldDef{230, "ExDate"};
    schema[231] = fix::FieldDef{231, "ContractMultiplier"};
    schema[232] = fix::FieldDef{232, "NoStipulations"};
    schema[233] =
      fix::FieldDef{233,
                    "StipulationType",
                    {{"ABS", "ABSOLUTE_PREPAYMENT_SPEED"},
                     {"WALA", "WEIGHTED_AVERAGE_LOAN_AGE"},
                     {"WAM", "WEIGHTED_AVERAGE_MATURITY"},
                     {"CPR", "CONSTANT_PREPAYMENT_RATE"},
                     {"HEP", "FINAL_CPR_OF_HOME_EQUITY_PREPAYMENT_CURVE"},
                     {"WAL", "WEIGHTED_AVERAGE_LIFE"},
                     {"MHP", "OF_MANUFACTURED_HOUSING_PREPAYMENT_CURVE"},
                     {"SMM", "SINGLE_MONTHLY_MORTALITY"},
                     {"MPR", "MONTHLY_PREPAYMENT_RATE"},
                     {"PSA", "OF_BMA_PREPAYMENT_CURVE"},
                     {"PPC", "OF_PROSPECTUS_PREPAYMENT_CURVE"},
                     {"CPP", "CONSTANT_PREPAYMENT_PENALTY"},
                     {"LOTVAR", "LOT_VARIANCE"},
                     {"CPY", "CONSTANT_PREPAYMENT_YIELD"},
                     {"WAC", "WEIGHTED_AVERAGE_COUPON"},
                     {"ISSUE", "YEAR_OF_ISSUE"},
                     {"MAT", "MATURITY_YEAR"},
                     {"PIECES", "NUMBER_OF_PIECES"},
                     {"PMAX", "POOLS_MAXIMUM"},
                     {"PPM", "POOLS_PER_MILLION"},
                     {"PPL", "POOLS_PER_LOT"},
                     {"PPT", "POOLS_PER_TRADE"},
                     {"PROD", "PRODUCTION_YEAR"},
                     {"TRDVAR", "TRADE_VARIANCE"},
                     {"GEOG", "GEOGRAPHICS"}}};
    schema[1] = fix::FieldDef{1, "Account"};
    schema[614] = fix::FieldDef{614, "LegContractMultiplier"};
    schema[146] = fix::FieldDef{146, "NoRelatedSym"};
    schema[147] = fix::FieldDef{147, "Subject"};
    schema[144] = fix::FieldDef{144, "OnBehalfOfLocationID"};
    schema[145] = fix::FieldDef{145, "DeliverToLocationID"};
    schema[142] = fix::FieldDef{142, "SenderLocationID"};
    schema[143] = fix::FieldDef{143, "TargetLocationID"};
    schema[140] = fix::FieldDef{140, "PrevClosePx"};
    schema[141] =
      fix::FieldDef{141, "ResetSeqNumFlag", {{"Y", "YES"}, {"N", "NO"}}};
    schema[612] = fix::FieldDef{612, "LegStrikePrice"};
    schema[613] = fix::FieldDef{613, "LegOptAttribute"};
    schema[610] = fix::FieldDef{610, "LegMaturityMonthYear"};
    schema[611] = fix::FieldDef{611, "LegMaturityDate"};
    schema[616] = fix::FieldDef{616, "LegSecurityExchange"};
    schema[617] = fix::FieldDef{617, "LegIssuer"};
    schema[148] = fix::FieldDef{148, "Headline"};
    schema[149] = fix::FieldDef{149, "URLLink"};
    schema[623] = fix::FieldDef{623, "LegRatioQty"};
    schema[622] = fix::FieldDef{622, "EncodedLegSecurityDesc"};
    schema[133] = fix::FieldDef{133, "OfferPx"};
    schema[132] = fix::FieldDef{132, "BidPx"};
    schema[131] = fix::FieldDef{131, "QuoteReqID"};
    schema[130] =
      fix::FieldDef{130, "IOINaturalFlag", {{"Y", "YES"}, {"N", "NO"}}};
    schema[137] = fix::FieldDef{137, "MiscFeeAmt"};
    schema[136] = fix::FieldDef{136, "NoMiscFees"};
    schema[135] = fix::FieldDef{135, "OfferSize"};
    schema[134] = fix::FieldDef{134, "BidSize"};
    schema[494] = fix::FieldDef{494, "Designation"};
    schema[495] =
      fix::FieldDef{495,
                    "TaxAdvantageType",
                    {{"19", "PROFIT_SHARING_PLAN"},
                     {"11", "EMPLOYER"},
                     {"12", "EMPLOYER_CURRENT_YEAR"},
                     {"13", "NON_FUND_PROTOTYPE_IRA"},
                     {"14", "NON_FUND_QUALIFIED_PLAN"},
                     {"15", "DEFINED_CONTRIBUTION_PLAN"},
                     {"10", "EMPLOYEE_CURRENT_YEAR"},
                     {"17", "INDIVIDUAL_RETIREMENT_ACCOUNT_ROLLOVER"},
                     {"5", "MINI_INSURANCE_ISA"},
                     {"16", "INDIVIDUAL_RETIREMENT_ACCOUNT"},
                     {"9", "EMPLOYEE"},
                     {"8", "ASSET_TRANSFER"},
                     {"21", "SELF_DIRECTED_IRA"},
                     {"6", "CURRENT_YEAR_PAYMENT"},
                     {"20", "401K"},
                     {"4", "MINI_STOCKS_AND_SHARES_ISA"},
                     {"3", "MINI_CASH_ISA"},
                     {"2", "TESSA"},
                     {"1", "MAXI_ISA"},
                     {"0", "NONE_NOT_APPLICABLE"},
                     {"7", "PRIOR_YEAR_PAYMENT"},
                     {"23", "457"},
                     {"24", "ROTH_IRA_24"},
                     {"25", "ROTH_IRA_25"},
                     {"26", "ROTH_CONVERSION_IRA_26"},
                     {"27", "ROTH_CONVERSION_IRA_27"},
                     {"28", "EDUCATION_IRA_28"},
                     {"29", "EDUCATION_IRA_29"},
                     {"18", "KEOGH"},
                     {"22", "403"}}};
    schema[139] = fix::FieldDef{139,
                                "MiscFeeType",
                                {{"3", "LOCAL_COMMISSION"},
                                 {"4", "EXCHANGE_FEES"},
                                 {"5", "STAMP"},
                                 {"6", "LEVY"},
                                 {"7", "OTHER"},
                                 {"8", "MARKUP"},
                                 {"9", "CONSUMPTION_TAX"},
                                 {"1", "REGULATORY"},
                                 {"2", "TAX"}}};
    schema[138] = fix::FieldDef{138, "MiscFeeCurr"};
    schema[490] = fix::FieldDef{490, "CardExpDate"};
    schema[491] = fix::FieldDef{491, "CardIssNo"};
    schema[492] = fix::FieldDef{492,
                                "PaymentMethod",
                                {{"14", "BPAY"},
                                 {"13", "ACH_CREDIT"},
                                 {"12", "ACH_DEBIT"},
                                 {"11", "CREDIT_CARD"},
                                 {"10", "DIRECT_CREDIT"},
                                 {"9", "DIRECT_DEBIT"},
                                 {"8", "DEBIT_CARD"},
                                 {"7", "FEDWIRE"},
                                 {"15", "HIGH_VALUE_CLEARING_SYSTEM"},
                                 {"3", "EUROCLEAR"},
                                 {"6", "TELEGRAPHIC_TRANSFER"},
                                 {"4", "CLEARSTREAM"},
                                 {"1", "CREST"},
                                 {"2", "NSCC"},
                                 {"5", "CHEQUE"}}};
    schema[493] = fix::FieldDef{493, "RegistAcctType"};
    schema[25] = fix::FieldDef{
      25, "IOIQltyInd", {{"M", "MEDIUM"}, {"H", "HIGH"}, {"L", "LOW"}}};
    schema[26] = fix::FieldDef{26, "IOIRefID"};
    schema[27] = fix::FieldDef{
      27, "IOIQty", {{"L", "LARGE"}, {"M", "MEDIUM"}, {"S", "SMALL"}}};
    schema[21] = fix::FieldDef{
      21,
      "HandlInst",
      {{"1", "AUTOMATED_EXECUTION_ORDER_PRIVATE_NO_BROKER_INTERVENTION"},
       {"2", "AUTOMATED_EXECUTION_ORDER_PUBLIC_BROKER_INTERVENTION_OK"},
       {"3", "MANUAL_ORDER_BEST_EXECUTION"}}};
    schema[22] = fix::FieldDef{22,
                               "SecurityIDSource",
                               {{"E", "SICOVAM"},
                                {"2", "SEDOL"},
                                {"1", "CUSIP"},
                                {"3", "QUIK"},
                                {"F", "BELGIAN"},
                                {"D", "VALOREN"},
                                {"C", "DUTCH"},
                                {"B", "WERTPAPIER"},
                                {"A", "BLOOMBERG_SYMBOL"},
                                {"9", "CONSOLIDATED_TAPE_ASSOCIATION"},
                                {"8", "EXCHANGE_SYMBOL"},
                                {"7", "ISO_COUNTRY_CODE"},
                                {"6", "ISO_CURRENCY_CODE"},
                                {"5", "RIC_CODE"},
                                {"4", "ISIN_NUMBER"},
                                {"G", "COMMON"}}};
    schema[23] = fix::FieldDef{23, "IOIid"};
    schema[28] = fix::FieldDef{
      28, "IOITransType", {{"C", "CANCEL"}, {"N", "NEW"}, {"R", "REPLACE"}}};
    schema[29] = fix::FieldDef{29,
                               "LastCapacity",
                               {{"4", "PRINCIPAL"},
                                {"3", "CROSS_AS_PRINCIPAL"},
                                {"1", "AGENT"},
                                {"2", "CROSS_AS_AGENT"}}};
    schema[407] = fix::FieldDef{407, "OutsideIndexPct"};
    schema[406] = fix::FieldDef{406, "FairValue"};
    schema[405] = fix::FieldDef{405, "EFPTrackingError"};
    schema[404] = fix::FieldDef{404, "LiquidityValue"};
    schema[403] = fix::FieldDef{403, "LiquidityPctHigh"};
    schema[402] = fix::FieldDef{402, "LiquidityPctLow"};
    schema[401] = fix::FieldDef{
      401, "SideValueInd", {{"1", "SIDEVALUE1"}, {"2", "SIDEVALUE_2"}}};
    schema[400] = fix::FieldDef{400, "BidDescriptor"};
    schema[629] = fix::FieldDef{629, "HopSendingTime"};
    schema[409] = fix::FieldDef{409,
                                "LiquidityIndType",
                                {{"3", "NORMAL_MARKET_SIZE"},
                                 {"4", "OTHER"},
                                 {"2", "20_DAY_MOVING_AVERAGE"},
                                 {"1", "5DAY_MOVING_AVERAGE"}}};
    schema[408] = fix::FieldDef{408, "ValueOfFutures"};
    schema[628] = fix::FieldDef{628, "HopCompID"};
    schema[379] = fix::FieldDef{379, "BusinessRejectRefID"};
    schema[378] = fix::FieldDef{378,
                                "ExecRestatementReason",
                                {{"7", "CANCEL_ON_SYSTEM_FAILURE"},
                                 {"0", "GT_CORPORATE_ACTION"},
                                 {"8", "MARKET"},
                                 {"6", "CANCEL_ON_TRADING_HALT"},
                                 {"5", "PARTIAL_DECLINE_OF_ORDERQTY"},
                                 {"4", "BROKER_OPTION"},
                                 {"3", "REPRICING_OF_ORDER"},
                                 {"1", "GT_RENEWAL"},
                                 {"2", "VERBAL_CHANGE"}}};
    schema[371] = fix::FieldDef{371, "RefTagID"};
    schema[370] = fix::FieldDef{370, "OnBehalfOfSendingTime"};
    schema[373] =
      fix::FieldDef{373,
                    "SessionRejectReason",
                    {{"12", "XML_VALIDATION_ERROR"},
                     {"17", "NON_DATA_VALUE_INCLUDES_FIELD_DELIMITER"},
                     {"16", "INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP"},
                     {"15", "REPEATING_GROUP_FIELDS_OUT_OF_ORDER"},
                     {"14", "TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER"},
                     {"11", "INVALID_MSGTYPE"},
                     {"0", "INVALID_TAG_NUMBER"},
                     {"9", "COMPID_PROBLEM"},
                     {"8", "SIGNATURE_PROBLEM"},
                     {"7", "DECRYPTION_PROBLEM"},
                     {"6", "INCORRECT_DATA_FORMAT_FOR_VALUE"},
                     {"5", "VALUE_IS_INCORRECT"},
                     {"4", "TAG_SPECIFIED_WITHOUT_A_VALUE"},
                     {"3", "UNDEFINED_TAG"},
                     {"10", "SENDINGTIME_ACCURACY_PROBLEM"},
                     {"13", "TAG_APPEARS_MORE_THAN_ONCE"},
                     {"2", "TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE"},
                     {"1", "REQUIRED_TAG_MISSING"}}};
    schema[372] = fix::FieldDef{372, "RefMsgType"};
    schema[375] = fix::FieldDef{375, "ContraBroker"};
    schema[374] = fix::FieldDef{
      374, "BidRequestTransType", {{"N", "NEW"}, {"C", "CANCEL"}}};
    schema[377] =
      fix::FieldDef{377, "SolicitedFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[376] = fix::FieldDef{376, "ComplianceID"};
    schema[618] = fix::FieldDef{618, "EncodedLegIssuerLen"};
    schema[393] = fix::FieldDef{393, "TotalNumSecurities"};
    schema[392] = fix::FieldDef{392, "ListName"};
    schema[88] = fix::FieldDef{88,
                               "AllocRejCode",
                               {{"0", "UNKNOWN_ACCOUNT"},
                                {"6", "UNKNOWN_LISTID"},
                                {"3", "UNKNOWN_EXECUTING_BROKER_MNEMONIC"},
                                {"5", "UNKNOWN_ORDERID"},
                                {"7", "OTHER"},
                                {"4", "COMMISSION_DIFFERENCE"},
                                {"1", "INCORRECT_QUANTITY"},
                                {"2", "INCORRECT_AVERAGE_PRICE"}}};
    schema[89] = fix::FieldDef{89, "Signature"};
    schema[397] = fix::FieldDef{397, "SideValue2"};
    schema[396] = fix::FieldDef{396, "SideValue1"};
    schema[395] = fix::FieldDef{395, "NumTickets"};
    schema[394] = fix::FieldDef{394,
                                "BidType",
                                {{"1", "NON_DISCLOSED_STYLE"},
                                 {"2", "DISCLOSED_STYLE"},
                                 {"3", "NO_BIDDING_PROCESS"}}};
    schema[82] = fix::FieldDef{82, "NoRpts"};
    schema[83] = fix::FieldDef{83, "RptSeq"};
    schema[80] = fix::FieldDef{80, "AllocQty"};
    schema[81] = fix::FieldDef{81,
                               "ProcessCode",
                               {{"6", "PLAN_SPONSOR"},
                                {"0", "REGULAR"},
                                {"1", "SOFT_DOLLAR"},
                                {"2", "STEP_IN"},
                                {"3", "STEP_OUT"},
                                {"4", "SOFT_DOLLAR_STEP_IN"},
                                {"5", "SOFT_DOLLAR_STEP_OUT"}}};
    schema[87] = fix::FieldDef{87,
                               "AllocStatus",
                               {{"1", "REJECTED"},
                                {"2", "PARTIAL_ACCEPT"},
                                {"3", "RECEIVED"},
                                {"0", "ACCEPTED"}}};
    schema[84] = fix::FieldDef{84, "CxlQty"};
    schema[7] = fix::FieldDef{7, "BeginSeqNo"};
    schema[601] = fix::FieldDef{601, "LegSymbolSfx"};
    schema[607] = fix::FieldDef{607, "LegProduct"};
    schema[586] = fix::FieldDef{586, "OrigOrdModTime"};
    schema[587] = fix::FieldDef{587, "LegSettlmntTyp"};
    schema[584] = fix::FieldDef{584, "MassStatusReqID"};
    schema[585] =
      fix::FieldDef{585,
                    "MassStatusReqType",
                    {{"1", "STATUS_FOR_ORDERS_FOR_A_SECURITY"},
                     {"2", "STATUS_FOR_ORDERS_FOR_AN_UNDERLYING_SECURITY"},
                     {"3", "STATUS_FOR_ORDERS_FOR_A_PRODUCT"},
                     {"4", "STATUS_FOR_ORDERS_FOR_A_CFICODE"},
                     {"5", "STATUS_FOR_ORDERS_FOR_A_SECURITYTYPE"},
                     {"6", "STATUS_FOR_ORDERS_FOR_A_TRADING_SESSION"},
                     {"8", "STATUS_FOR_ORDERS_FOR_A_PARTYID"},
                     {"7", "STATUS_FOR_ALL_ORDERS"}}};
    schema[582] = fix::FieldDef{582, "CustOrderCapacity"};
    schema[583] = fix::FieldDef{583, "ClOrdLinkID"};
    schema[580] = fix::FieldDef{580, "NoDates"};
    schema[581] =
      fix::FieldDef{581,
                    "AccountType",
                    {{"3", "HOUSE_TRADER"},
                     {"7", "ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED"},
                     {"6", "ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_"
                           "AND_IS_CROSS_MARGINED"},
                     {"4", "FLOOR_TRADER"},
                     {"2", "ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS"},
                     {"1", "ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_BOOKS"},
                     {"8", "JOINT_BACKOFFICE_ACCOUNT"}}};
    schema[588] = fix::FieldDef{588, "LegFutSettDate"};
    schema[589] = fix::FieldDef{
      589,
      "DayBookingInst",
      {{"0", "CAN_TRIGGER_BOOKING_WITHOUT_REFERENCE_TO_THE_ORDER_INITIATOR"},
       {"1", "SPEAK_WITH_ORDER_INITIATOR_BEFORE_BOOKING"}}};
    schema[245] = fix::FieldDef{245, "UnderlyingRepurchaseRate"};
    schema[244] = fix::FieldDef{244, "UnderlyingRepurchaseTerm"};
    schema[247] = fix::FieldDef{247, "UnderlyingRedemptionDate"};
    schema[246] = fix::FieldDef{246, "UnderlyingFactor"};
    schema[241] = fix::FieldDef{241, "UnderlyingCouponPaymentDate"};
    schema[240] = fix::FieldDef{240, "RedemptionDate"};
    schema[243] = fix::FieldDef{243, "UnderlyingRepoCollateralSecurityType"};
    schema[242] = fix::FieldDef{242, "UnderlyingIssueDate"};
    schema[615] = fix::FieldDef{615, "LegCouponRate"};
    schema[249] = fix::FieldDef{249, "LegIssueDate"};
    schema[248] = fix::FieldDef{248, "LegCouponPaymentDate"};
    schema[519] =
      fix::FieldDef{519,
                    "ContAmtType",
                    {{"15", "NET_SETTLEMENT_AMOUNT"},
                     {"1", "COMMISSION_AMOUNT"},
                     {"2", "COMMISSION"},
                     {"3", "INITIAL_CHARGE_AMOUNT"},
                     {"4", "INITIAL_CHARGE"},
                     {"5", "DISCOUNT_AMOUNT"},
                     {"6", "DISCOUNT"},
                     {"7", "DILUTION_LEVY_AMOUNT"},
                     {"8", "DILUTION_LEVY"},
                     {"9", "EXIT_CHARGE_AMOUNT"},
                     {"10", "EXIT_CHARGE"},
                     {"11", "FUND_BASED_RENEWAL_COMMISSION"},
                     {"12", "PROJECTED_FUND_VALUE"},
                     {"14", "FUND_BASED_RENEWAL_COMMISSION_AMOUNT_14"},
                     {"13", "FUND_BASED_RENEWAL_COMMISSION_AMOUNT_13"}}};
    schema[518] = fix::FieldDef{518, "NoContAmts"};
    schema[511] = fix::FieldDef{511, "RegistEmail"};
    schema[510] = fix::FieldDef{510, "NoDistribInsts"};
    schema[513] = fix::FieldDef{513, "RegistID"};
    schema[512] = fix::FieldDef{512, "DistribPercentage"};
    schema[515] = fix::FieldDef{515, "ExecValuationPoint"};
    schema[514] =
      fix::FieldDef{514,
                    "RegistTransType",
                    {{"2", "CANCEL"}, {"0", "NEW"}, {"1", "REPLACE"}}};
    schema[517] = fix::FieldDef{517, "OwnershipType"};
    schema[516] = fix::FieldDef{516, "OrderPercent"};
    schema[458] = fix::FieldDef{458, "UnderlyingSecurityAltID"};
    schema[459] = fix::FieldDef{459, "UnderlyingSecurityAltIDSource"};
    schema[621] = fix::FieldDef{621, "EncodedLegSecurityDescLen"};
    schema[620] = fix::FieldDef{620, "LegSecurityDesc"};
    schema[627] = fix::FieldDef{627, "NoHops"};
    schema[626] =
      fix::FieldDef{626,
                    "AllocType",
                    {{"6", "BUYSIDE_READY_TO_BOOK_6"},
                     {"2", "BUYSIDE_PRELIMINARY"},
                     {"3", "SELLSIDE_CALCULATED_USING_PRELIMINARY"},
                     {"5", "BUYSIDE_READY_TO_BOOK_5"},
                     {"1", "BUYSIDE_CALCULATED"},
                     {"4", "SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY"}}};
    schema[625] = fix::FieldDef{625, "TradingSessionSubID"};
    schema[624] = fix::FieldDef{624, "LegSide"};
    schema[450] = fix::FieldDef{450, "TotalVolumeTradedTime"};
    schema[451] = fix::FieldDef{451, "NetChgPrevDay"};
    schema[452] = fix::FieldDef{452,
                                "PartyRole",
                                {{"15", "CORRESPONDANT_CLEARING_FIRM"},
                                 {"3", "CLIENT_ID"},
                                 {"20", "UNDERLYING_CONTRA_FIRM"},
                                 {"19", "SPONSORING_FIRM"},
                                 {"18", "CONTRA_CLEARING_FIRM"},
                                 {"17", "CONTRA_FIRM"},
                                 {"16", "EXECUTING_SYSTEM"},
                                 {"7", "ENTERING_FIRM"},
                                 {"1", "EXECUTING_FIRM"},
                                 {"2", "BROKER_OF_CREDIT"},
                                 {"5", "INVESTOR_ID"},
                                 {"6", "INTRODUCING_FIRM"},
                                 {"14", "GIVEUP_CLEARING_FIRM"},
                                 {"8", "LOCATE_LENDING_FIRM"},
                                 {"9", "FUND_MANAGER_CLIENT_ID"},
                                 {"10", "SETTLEMENT_LOCATION"},
                                 {"11", "ORDER_ORIGINATION_TRADER"},
                                 {"12", "EXECUTING_TRADER"},
                                 {"13", "ORDER_ORIGINATION_FIRM"},
                                 {"4", "CLEARING_FIRM"}}};
    schema[453] = fix::FieldDef{453, "NoPartyIDs"};
    schema[454] = fix::FieldDef{454, "NoSecurityAltID"};
    schema[455] = fix::FieldDef{455, "SecurityAltID"};
    schema[456] = fix::FieldDef{456, "SecurityAltIDSource"};
    schema[457] = fix::FieldDef{457, "NoUnderlyingSecurityAltID"};
    schema[179] = fix::FieldDef{179, "SecuritySettlAgentAcctName"};
    schema[178] = fix::FieldDef{178, "SecuritySettlAgentAcctNum"};
    schema[177] = fix::FieldDef{177, "SecuritySettlAgentCode"};
    schema[176] = fix::FieldDef{176, "SecuritySettlAgentName"};
    schema[175] = fix::FieldDef{175, "SettlInstCode"};
    schema[174] = fix::FieldDef{174, "SettlBrkrCode"};
    schema[173] = fix::FieldDef{173, "SettlDepositoryCode"};
    schema[172] = fix::FieldDef{
      172, "SettlDeliveryType", {{"1", "FREE"}, {"0", "VERSUS_PAYMENT"}}};
    schema[171] = fix::FieldDef{171, "StandInstDbID"};
    schema[170] = fix::FieldDef{170, "StandInstDbName"};
    schema[656] = fix::FieldDef{656, "SettlCurrBidFxRate"};
    schema[657] = fix::FieldDef{657, "SettlCurrOfferFxRate"};
    schema[654] = fix::FieldDef{654, "LegRefID"};
    schema[253] = fix::FieldDef{253, "LegFactor"};
    schema[182] = fix::FieldDef{182, "CashSettlAgentName"};
    schema[183] = fix::FieldDef{183, "CashSettlAgentCode"};
    schema[180] = fix::FieldDef{180, "SecuritySettlAgentContactName"};
    schema[181] = fix::FieldDef{181, "SecuritySettlAgentContactPhone"};
    schema[186] = fix::FieldDef{186, "CashSettlAgentContactName"};
    schema[187] = fix::FieldDef{187, "CashSettlAgentContactPhone"};
    schema[184] = fix::FieldDef{184, "CashSettlAgentAcctNum"};
    schema[185] = fix::FieldDef{185, "CashSettlAgentAcctName"};
    schema[652] = fix::FieldDef{652, "UnderlyingLastQty"};
    schema[188] = fix::FieldDef{188, "BidSpotRate"};
    schema[189] = fix::FieldDef{189, "BidForwardPoints"};
    schema[658] = fix::FieldDef{658,
                                "QuoteRequestRejectReason",
                                {{"1", "UNKNOWN_SYMBOL"},
                                 {"2", "EXCHANGE"},
                                 {"3", "QUOTE_REQUEST_EXCEEDS_LIMIT"},
                                 {"4", "TOO_LATE_TO_ENTER"},
                                 {"5", "INVALID_PRICE"},
                                 {"6", "NOT_AUTHORIZED_TO_REQUEST_QUOTE"}}};
    schema[659] = fix::FieldDef{659, "SideComplianceID"};
    schema[650] =
      fix::FieldDef{650, "LegalConfirm", {{"Y", "YES"}, {"N", "NO"}}};
    schema[651] = fix::FieldDef{651, "UnderlyingLastPx"};
    schema[11] = fix::FieldDef{11, "ClOrdID"};
    schema[10] = fix::FieldDef{10, "CheckSum"};
    schema[13] = fix::FieldDef{13,
                               "CommType",
                               {{"6", "PER_BOND"},
                                {"1", "PER_SHARE"},
                                {"2", "PERCENTAGE"},
                                {"3", "ABSOLUTE"},
                                {"5", "5"},
                                {"4", "4"}}};
    schema[12] = fix::FieldDef{12, "Commission"};
    schema[15] = fix::FieldDef{15, "Currency"};
    schema[14] = fix::FieldDef{14, "CumQty"};
    schema[17] = fix::FieldDef{17, "ExecID"};
    schema[16] = fix::FieldDef{16, "EndSeqNo"};
    schema[19] = fix::FieldDef{19, "ExecRefID"};
    schema[18] = fix::FieldDef{18,
                               "ExecInst",
                               {{"Y", "TRYTOSTOP"},
                                {"M", "MIDPRCPEG"},
                                {"P", "MARKPEG"},
                                {"Q", "CANCELONSYSFAIL"},
                                {"R", "PRIMPEG"},
                                {"S", "SUSPEND"},
                                {"U", "CUSTDISPINST"},
                                {"V", "NETTING"},
                                {"W", "PEGVWAP"},
                                {"X", "TRADEALONG"},
                                {"D", "PERCVOL"},
                                {"0", "STAYOFFER"},
                                {"2", "WORK"},
                                {"4", "OVERDAY"},
                                {"5", "HELD"},
                                {"6", "PARTNOTINIT"},
                                {"7", "STRICTSCALE"},
                                {"8", "TRYTOSCALE"},
                                {"9", "STAYBID"},
                                {"A", "NOCROSS"},
                                {"O", "OPENPEG"},
                                {"C", "CALLFIRST"},
                                {"N", "NONNEGO"},
                                {"E", "DNI"},
                                {"F", "DNR"},
                                {"G", "AON"},
                                {"H", "RESTATEONSYSFAIL"},
                                {"I", "INSTITONLY"},
                                {"J", "RESTATEONTRADINGHALT"},
                                {"K", "CANCELONTRADINGHALT"},
                                {"L", "LASTPEG"},
                                {"3", "GOALONG"},
                                {"B", "OKCROSS"},
                                {"1", "NOTHELD"}}};
    schema[62] = fix::FieldDef{62, "ValidUntilTime"};
    schema[322] = fix::FieldDef{322, "SecurityResponseID"};
    schema[323] = fix::FieldDef{
      323,
      "SecurityResponseType",
      {{"5", "REJECT_SECURITY_PROPOSAL"},
       {"1", "ACCEPT_SECURITY_PROPOSAL_AS_IS"},
       {"6", "CAN_NOT_MATCH_SELECTION_CRITERIA"},
       {"2",
        "ACCEPT_SECURITY_PROPOSAL_WITH_REVISIONS_AS_INDICATED_IN_THE_MESSAGE"},
       {"4", "LIST_OF_SECURITIES_RETURNED_PER_REQUEST"},
       {"3", "LIST_OF_SECURITY_TYPES_RETURNED_PER_REQUEST"}}};
    schema[320] = fix::FieldDef{320, "SecurityReqID"};
    schema[321] = fix::FieldDef{
      321,
      "SecurityRequestType",
      {{"0", "REQUEST_SECURITY_IDENTITY_AND_SPECIFICATIONS"},
       {"1", "REQUEST_SECURITY_IDENTITY_FOR_THE_SPECIFICATIONS_PROVIDED"},
       {"2", "REQUEST_LIST_SECURITY_TYPES"},
       {"3", "REQUEST_LIST_SECURITIES"}}};
    schema[326] = fix::FieldDef{326,
                                "SecurityTradingStatus",
                                {{"20", "UNKNOWN_OR_INVALID"},
                                 {"13", "NO_MARKET_ON_CLOSE_IMBALANCE"},
                                 {"14", "ITS_PRE_OPENING"},
                                 {"15", "NEW_PRICE_INDICATION"},
                                 {"16", "TRADE_DISSEMINATION_TIME"},
                                 {"17", "READY_TO_TRADE"},
                                 {"19", "NOT_TRADED_ON_THIS_MARKET"},
                                 {"22", "OPENING_ROTATION"},
                                 {"21", "PRE_OPEN"},
                                 {"12", "NO_MARKET_IMBALANCE"},
                                 {"18", "NOT_AVAILABLE_FOR_TRADING"},
                                 {"10", "MARKET_ON_CLOSE_IMBALANCE_SELL"},
                                 {"9", "MARKET_ON_CLOSE_IMBALANCE_BUY"},
                                 {"8", "MARKET_IMBALANCE_SELL"},
                                 {"7", "MARKET_IMBALANCE_BUY"},
                                 {"6", "TRADING_RANGE_INDICATION"},
                                 {"5", "PRICE_INDICATION"},
                                 {"4", "NO_OPEN_NO_RESUME"},
                                 {"3", "RESUME"},
                                 {"1", "OPENING_DELAY"},
                                 {"2", "TRADING_HALT"},
                                 {"23", "FAST_MARKET"}}};
    schema[327] = fix::FieldDef{327,
                                "HaltReasonChar",
                                {{"X", "EQUIPMENT_CHANGEOVER"},
                                 {"M", "ADDITIONAL_INFORMATION"},
                                 {"E", "ORDER_INFLUX"},
                                 {"P", "NEWS_PENDING"},
                                 {"I", "ORDER_IMBALANCE"},
                                 {"D", "NEWS_DISSEMINATION"}}};
    schema[324] = fix::FieldDef{324, "SecurityStatusReqID"};
    schema[325] =
      fix::FieldDef{325, "UnsolicitedIndicator", {{"Y", "YES"}, {"N", "NO"}}};
    schema[328] =
      fix::FieldDef{328, "InViewOfCommon", {{"Y", "YES"}, {"N", "NO"}}};
    schema[329] =
      fix::FieldDef{329, "DueToRelated", {{"Y", "YES"}, {"N", "NO"}}};
    schema[200] = fix::FieldDef{200, "MaturityMonthYear"};
    schema[203] = fix::FieldDef{
      203, "CoveredOrUncovered", {{"1", "UNCOVERED"}, {"0", "COVERED"}}};
    schema[202] = fix::FieldDef{202, "StrikePrice"};
    schema[207] = fix::FieldDef{207, "SecurityExchange"};
    schema[206] = fix::FieldDef{206, "OptAttribute"};
    schema[209] = fix::FieldDef{
      209,
      "AllocHandlInst",
      {{"3", "FORWARD_AND_MATCH"}, {"2", "FORWARD"}, {"1", "MATCH"}}};
    schema[208] =
      fix::FieldDef{208, "NotifyBrokerOfCredit", {{"N", "NO"}, {"Y", "YES"}}};
    schema[77] = fix::FieldDef{
      77,
      "PositionEffect",
      {{"F", "FIFO"}, {"R", "ROLLED"}, {"C", "CLOSE"}, {"O", "OPEN"}}};
    schema[75] = fix::FieldDef{75, "TradeDate"};
    schema[74] = fix::FieldDef{74, "AvgPrxPrecision"};
    schema[73] = fix::FieldDef{73, "NoOrders"};
    schema[72] = fix::FieldDef{72, "RefAllocID"};
    schema[71] = fix::FieldDef{71,
                               "AllocTransType",
                               {{"5", "CALCULATED_WITHOUT_PRELIMINARY"},
                                {"4", "CALCULATED"},
                                {"3", "PRELIMINARY"},
                                {"2", "CANCEL"},
                                {"1", "REPLACE"},
                                {"0", "NEW"}}};
    schema[70] = fix::FieldDef{70, "AllocID"};
    schema[655] = fix::FieldDef{655, "ContraLegRefID"};
    schema[79] = fix::FieldDef{79, "AllocAccount"};
    schema[78] = fix::FieldDef{78, "NoAllocs"};
    schema[2] = fix::FieldDef{2, "AdvId"};
    schema[542] = fix::FieldDef{542, "UnderlyingMaturityDate"};
    schema[543] = fix::FieldDef{543, "InstrRegistry"};
    schema[540] = fix::FieldDef{540, "TotalAccruedInterestAmt"};
    schema[541] = fix::FieldDef{541, "MaturityDate"};
    schema[546] = fix::FieldDef{
      546, "Scope", {{"1", "LOCAL"}, {"2", "NATIONAL"}, {"3", "GLOBAL"}}};
    schema[547] =
      fix::FieldDef{547, "MDImplicitDelete", {{"Y", "YES"}, {"N", "NO"}}};
    schema[544] = fix::FieldDef{
      544,
      "CashMargin",
      {{"2", "MARGIN_OPEN"}, {"3", "MARGIN_CLOSE"}, {"1", "CASH"}}};
    schema[545] = fix::FieldDef{545, "NestedPartySubID"};
    schema[8] = fix::FieldDef{8, "BeginString"};
    schema[548] = fix::FieldDef{548, "CrossID"};
    schema[549] = fix::FieldDef{
      549,
      "CrossType",
      {{"1", "CROSS_TRADE_WHICH_IS_EXECUTED_COMPLETELY_OR_NOT_BOTH_SIDES_ARE_"
             "TREATED_IN_THE_SAME_MANNER_THIS_IS_EQUIVALENT_TO_AN_ALL_OR_NONE"},
       {"2", "CROSS_TRADE_WHICH_IS_EXECUTED_PARTIALLY_AND_THE_REST_IS_"
             "CANCELLED_ONE_SIDE_IS_FULLY_EXECUTED_THE_OTHER_SIDE_IS_PARTIALLY_"
             "EXECUTED_WITH_THE_REMAINDER_BEING_CANCELLED_THIS_IS_EQUIVALENT_"
             "TO_AN_IMMEDIATE_OR_CANCEL_ON_THE_OTHER_SIDE"},
       {"3", "CROSS_TRADE_WHICH_IS_PARTIALLY_EXECUTED_WITH_THE_UNFILLED_"
             "PORTIONS_REMAINING_ACTIVE_ONE_SIDE_OF_THE_CROSS_IS_FULLY_"
             "EXECUTED"},
       {"4",
        "CROSS_TRADE_IS_EXECUTED_WITH_EXISTING_ORDERS_WITH_THE_SAME_PRICE"}}};
    schema[68] = fix::FieldDef{68, "TotNoOrders"};
    schema[598] = fix::FieldDef{598, "LegLocaleOfIssue"};
    schema[120] = fix::FieldDef{120, "SettlCurrency"};
    schema[121] = fix::FieldDef{121, "ForexReq", {{"Y", "YES"}, {"N", "NO"}}};
    schema[122] = fix::FieldDef{122, "OrigSendingTime"};
    schema[123] =
      fix::FieldDef{123, "GapFillFlag", {{"Y", "YES"}, {"N", "NO"}}};
    schema[124] = fix::FieldDef{124, "NoExecs"};
    schema[126] = fix::FieldDef{126, "ExpireTime"};
    schema[127] = fix::FieldDef{127,
                                "DKReason",
                                {{"B", "WRONG_SIDE"},
                                 {"C", "QUANTITY_EXCEEDS_ORDER"},
                                 {"D", "NO_MATCHING_ORDER"},
                                 {"E", "PRICE_EXCEEDS_LIMIT"},
                                 {"Z", "OTHER"},
                                 {"A", "UNKNOWN_SYMBOL"}}};
    schema[128] = fix::FieldDef{128, "DeliverToCompID"};
    schema[129] = fix::FieldDef{129, "DeliverToSubID"};
    schema[414] = fix::FieldDef{
      414,
      "ProgRptReqs",
      {{"3", "REAL_TIME_EXECUTION_REPORTS"},
       {"2", "SELLSIDE_PERIODICALLY_SENDS_STATUS_USING_LISTSTATUS_PERIOD_"
             "OPTIONALLY_SPECIFIED_IN_PROGRESSPERIOD"},
       {"1", "BUYSIDE_EXPLICITLY_REQUESTS_STATUS_USING_STATUSREQUEST"}}};
    schema[415] = fix::FieldDef{415, "ProgPeriodInterval"};
    schema[416] =
      fix::FieldDef{416, "IncTaxInd", {{"2", "GROSS"}, {"1", "NET"}}};
    schema[417] = fix::FieldDef{417, "NumBidders"};
    schema[410] = fix::FieldDef{410, "WtAverageLiquidity"};
    schema[411] =
      fix::FieldDef{411, "ExchangeForPhysical", {{"N", "NO"}, {"Y", "YES"}}};
    schema[412] = fix::FieldDef{412, "OutMainCntryUIndex"};
    schema[413] = fix::FieldDef{413, "CrossPercent"};
    schema[498] = fix::FieldDef{498, "CashDistribAgentName"};
    schema[418] = fix::FieldDef{418,
                                "TradeType",
                                {{"G", "VWAP_GUARANTEE"},
                                 {"A", "AGENCY"},
                                 {"J", "GUARANTEED_CLOSE"},
                                 {"R", "RISK_TRADE"}}};
    schema[419] =
      fix::FieldDef{419,
                    "BasisPxType",
                    {{"8", "VWAP_THROUGH_AN_AFTERNOON_SESSION"},
                     {"D", "OPEN"},
                     {"Z", "OTHERS"},
                     {"C", "STRIKE"},
                     {"B", "VWAP_THROUGH_AN_AFTERNOON_SESSION_EXCEPT_YORI"},
                     {"9", "VWAP_THROUGH_A_DAY_EXCEPT_YORI"},
                     {"7", "VWAP_THROUGH_A_MORNING_SESSION"},
                     {"6", "VWAP_THROUGH_A_DAY"},
                     {"5", "SQ"},
                     {"4", "CURRENT_PRICE"},
                     {"3", "CLOSING_PRICE"},
                     {"2", "CLOSING_PRICE_AT_MORNING_SESSION"},
                     {"A", "VWAP_THROUGH_A_MORNING_SESSION_EXCEPT_YORI"}}};
    schema[499] = fix::FieldDef{499, "CashDistribAgentCode"};
    schema[313] = fix::FieldDef{313, "UnderlyingMaturityMonthYear"};
    schema[312] = fix::FieldDef{312, "UnderlyingSymbolSfx"};
    schema[311] = fix::FieldDef{311, "UnderlyingSymbol"};
    schema[310] = fix::FieldDef{310, "UnderlyingSecurityType"};
    schema[317] = fix::FieldDef{317, "UnderlyingOptAttribute"};
    schema[316] = fix::FieldDef{316, "UnderlyingStrikePrice"};
    schema[315] = fix::FieldDef{315, "UnderlyingPutOrCall"};
    schema[496] = fix::FieldDef{496, "RegistRejReasonText"};
    schema[497] =
      fix::FieldDef{497, "FundRenewWaiv", {{"N", "NO"}, {"Y", "YES"}}};
    schema[3] = fix::FieldDef{3, "AdvRefID"};
    schema[368] = fix::FieldDef{368, "QuoteEntryRejectReason"};
    schema[369] = fix::FieldDef{369, "LastMsgSeqNumProcessed"};
    schema[366] = fix::FieldDef{366, "AllocPrice"};
    schema[367] = fix::FieldDef{367, "QuoteSetValidUntilTime"};
    schema[364] = fix::FieldDef{364, "EncodedUnderlyingSecurityDescLen"};
    schema[365] = fix::FieldDef{365, "EncodedUnderlyingSecurityDesc"};
    schema[362] = fix::FieldDef{362, "EncodedUnderlyingIssuerLen"};
    schema[363] = fix::FieldDef{363, "EncodedUnderlyingIssuer"};
    schema[360] = fix::FieldDef{360, "EncodedAllocTextLen"};
    schema[361] = fix::FieldDef{361, "EncodedAllocText"};
    schema[380] =
      fix::FieldDef{380,
                    "BusinessRejectReason",
                    {{"3", "UNSUPPORTED_MESSAGE_TYPE"},
                     {"7", "DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME"},
                     {"4", "APPLICATION_NOT_AVAILABLE"},
                     {"6", "NOT_AUTHORIZED"},
                     {"0", "OTHER"},
                     {"5", "CONDITIONALLY_REQUIRED_FIELD_MISSING"},
                     {"1", "UNKOWN_ID"},
                     {"2", "UNKNOWN_SECURITY"}}};
    schema[381] = fix::FieldDef{381, "GrossTradeAmt"};
    schema[382] = fix::FieldDef{382, "NoContraBrokers"};
    schema[383] = fix::FieldDef{383, "MaxMessageSize"};
    schema[384] = fix::FieldDef{384, "NoMsgTypes"};
    schema[385] =
      fix::FieldDef{385, "MsgDirection", {{"S", "SEND"}, {"R", "RECEIVE"}}};
    schema[386] = fix::FieldDef{386, "NoTradingSessions"};
    schema[387] = fix::FieldDef{387, "TotalVolumeTraded"};
    schema[388] = fix::FieldDef{388,
                                "DiscretionInst",
                                {{"0", "RELATED_TO_DISPLAYED_PRICE"},
                                 {"1", "RELATED_TO_MARKET_PRICE"},
                                 {"2", "RELATED_TO_PRIMARY_PRICE"},
                                 {"3", "RELATED_TO_LOCAL_PRIMARY_PRICE"},
                                 {"4", "RELATED_TO_MIDPOINT_PRICE"},
                                 {"5", "RELATED_TO_LAST_TRADE_PRICE"}}};
    schema[389] = fix::FieldDef{389, "DiscretionOffset"};
    schema[605] = fix::FieldDef{605, "LegSecurityAltID"};
    schema[579] = fix::FieldDef{579, "TradeInputDevice"};
    schema[578] = fix::FieldDef{578, "TradeInputSource"};
    schema[604] = fix::FieldDef{604, "NoLegSecurityAltID"};
    schema[573] = fix::FieldDef{573,
                                "MatchStatus",
                                {{"0", "COMPARED_MATCHED_OR_AFFIRMED"},
                                 {"1", "UNCOMPARED_UNMATCHED_OR_UNAFFIRMED"},
                                 {"2", "ADVISORY_OR_ALERT"}}};
    schema[572] = fix::FieldDef{572, "TradeReportRefID"};
    schema[571] = fix::FieldDef{571, "TradeReportID"};
    schema[570] =
      fix::FieldDef{570, "PreviouslyReported", {{"N", "NO"}, {"Y", "YES"}}};
    schema[577] = fix::FieldDef{577,
                                "ClearingInstruction",
                                {{"8", "MANUAL_MODE"},
                                 {"5", "MULTILATERAL_NETTING"},
                                 {"9", "AUTOMATIC_POSTING_MODE"},
                                 {"2", "BILATERAL_NETTING_ONLY"},
                                 {"6", "CLEAR_AGAINST_CENTRAL_COUNTERPARTY"},
                                 {"10", "AUTOMATIC_GIVE_UP_MODE"},
                                 {"4", "SPECIAL_TRADE"},
                                 {"3", "EX_CLEARING"},
                                 {"0", "PROCESS_NORMALLY"},
                                 {"7", "EXCLUDE_FROM_CENTRAL_COUNTERPARTY"},
                                 {"1", "EXCLUDE_FROM_ALL_NETTING"}}};
    schema[576] = fix::FieldDef{576, "NoClearingInstructions"};
    schema[575] = fix::FieldDef{575, "OddLot"};
    schema[574] = fix::FieldDef{
      574,
      "MatchType",
      {{"S5", "SUMMARIZED_MATCH_USING_A1_TO_A5_EXACT_MATCH_CRITERIA_EXCEPT_"
              "QUANTITY_IS_SUMMARIZED_S5"},
       {"M1", "ACT_M1_MATCH"},
       {"M6", "ACT_M6_MATCH"},
       {"M5", "ACT_DEFAULT_AFTER_M2"},
       {"M3", "ACT_ACCEPTED_TRADE"},
       {"S2", "SUMMARIZED_MATCH_USING_A1_TO_A5_EXACT_MATCH_CRITERIA_EXCEPT_"
              "QUANTITY_IS_SUMMARIZED_S2"},
       {"S3", "SUMMARIZED_MATCH_USING_A1_TO_A5_EXACT_MATCH_CRITERIA_EXCEPT_"
              "QUANTITY_IS_SUMMARIZED_S3"},
       {"S4", "SUMMARIZED_MATCH_USING_A1_TO_A5_EXACT_MATCH_CRITERIA_EXCEPT_"
              "QUANTITY_IS_SUMMARIZED_S4"},
       {"M2", "ACT_M2_MATCH"},
       {"A2", "EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_"
              "TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_FOUR_BADGES"},
       {"A3", "EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_"
              "TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_TWO_BADGES_AND_EXECUTION_"
              "TIME"},
       {"A4",
        "EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_TYPE_AND"},
       {"AQ",
        "COMPARED_RECORDS_RESULTING_FROM_STAMPED_ADVISORIES_OR_SPECIALIST"},
       {"MT", "NON_ACT"},
       {"M4", "ACT_DEFAULT_TRADE"},
       {"A1", "EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_"
              "TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_FOUR_BADGES_AND_EXECUTION_"
              "TIME"},
       {"S1", "SUMMARIZED_MATCH_USING_A1_TO_A5_EXACT_MATCH_CRITERIA_EXCEPT_"
              "QUANTITY_IS_SUMMARIZED_S1"},
       {"A5", "EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_"
              "TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_EXECUTION_TIME"}}};
    schema[60] = fix::FieldDef{60, "TransactTime"};
    schema[61] = fix::FieldDef{
      61, "Urgency", {{"1", "FLASH"}, {"2", "BACKGROUND"}, {"0", "NORMAL"}}};
    schema[258] =
      fix::FieldDef{258, "TradedFlatSwitch", {{"N", "NO"}, {"Y", "YES"}}};
    schema[259] = fix::FieldDef{259, "BasisFeatureDate"};
    schema[64] = fix::FieldDef{64, "FutSettDate"};
    schema[65] = fix::FieldDef{65, "SymbolSfx"};
    schema[66] = fix::FieldDef{66, "ListID"};
    schema[67] = fix::FieldDef{67, "ListSeqNo"};
    schema[252] = fix::FieldDef{252, "LegRepurchaseRate"};
    schema[69] = fix::FieldDef{69, "ListExecInst"};
    schema[250] = fix::FieldDef{250, "LegRepoCollateralSecurityType"};
    schema[251] = fix::FieldDef{251, "LegRepurchaseTerm"};
    schema[256] = fix::FieldDef{256, "UnderlyingCreditRating"};
    schema[257] = fix::FieldDef{257, "LegCreditRating"};
    schema[254] = fix::FieldDef{254, "LegRedemptionDate"};
    schema[255] = fix::FieldDef{255, "CreditRating"};
    schema[603] = fix::FieldDef{603, "LegSecurityIDSource"};
    schema[602] = fix::FieldDef{602, "LegSecurityID"};
    schema[508] = fix::FieldDef{508, "RegistRefID"};
    schema[509] = fix::FieldDef{509, "RegistDetls"};
    schema[506] = fix::FieldDef{
      506,
      "RegistStatus",
      {{"A", "ACCEPT"}, {"N", "REMINDER"}, {"R", "REJECT"}, {"H", "HELD"}}};
    schema[507] = fix::FieldDef{
      507,
      "RegistRejReasonCode",
      {{"13", "INVALID_UNACCEPTABLE_NODISTRIBINSTNS"},
       {"17", "INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_CODE"},
       {"16", "INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NAME"},
       {"4", "INVALID_UNACCEPTABLE_NO_REG_DETLS"},
       {"15", "INVALID_UNACCEPTABLE_DISTRIB_PAYMENT_METHOD"},
       {"14", "INVALID_UNACCEPTABLE_DISTRIB_PERCENTAGE"},
       {"3", "INVALID_UNACCEPTABLE_OWNERSHIP_TYPE"},
       {"2", "INVALID_UNACCEPTABLE_TAX_EXEMPT_TYPE"},
       {"12", "INVALID_UNACCEPTABLE_INVESTOR_COUNTRY_OF_RESIDENCE"},
       {"11", "INVALID_UNACCEPTABLE_DATE_OF_BIRTH"},
       {"10", "INVALID_UNACCEPTABLE_INVESTOR_ID_SOURCE"},
       {"9", "INVALID_UNACCEPTABLE_INVESTOR_ID"},
       {"8", "INVALID_UNACCEPTABLE_MAILING_INST"},
       {"7", "INVALID_UNACCEPTABLE_MAILING_DTLS"},
       {"5", "INVALID_UNACCEPTABLE_REG_SEQ_NO"},
       {"1", "INVALID_UNACCEPTABLE_ACCOUNT_TYPE"},
       {"18", "INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NUM"},
       {"6", "INVALID_UNACCEPTABLE_REG_DTLS"}}};
    schema[504] = fix::FieldDef{504, "PaymentDate"};
    schema[505] = fix::FieldDef{505, "PaymentRemitterID"};
    schema[503] = fix::FieldDef{503, "CardStartDate"};
    schema[500] = fix::FieldDef{500, "CashDistribAgentAcctNumber"};
    schema[501] = fix::FieldDef{501, "CashDistribPayRef"};
    schema[630] = fix::FieldDef{630, "HopRefID"};
    schema[631] = fix::FieldDef{631, "MidPx"};
    schema[632] = fix::FieldDef{632, "BidYield"};
    schema[633] = fix::FieldDef{633, "MidYield"};
    schema[469] = fix::FieldDef{469, "RoundingModulus"};
    schema[468] = fix::FieldDef{
      468,
      "RoundingDirection",
      {{"0", "ROUND_TO_NEAREST"}, {"1", "ROUND_DOWN"}, {"2", "ROUND_UP"}}};
    schema[636] =
      fix::FieldDef{636, "WorkingIndicator", {{"N", "NO"}, {"Y", "YES"}}};
    schema[637] = fix::FieldDef{637, "LegLastPx"};
    schema[465] = fix::FieldDef{465,
                                "QuantityType",
                                {{"6", "CONTRACTS"},
                                 {"7", "OTHER"},
                                 {"5", "CURRENCY"},
                                 {"4", "ORIGINALFACE"},
                                 {"3", "CURRENTFACE"},
                                 {"2", "BONDS"},
                                 {"1", "SHARES"},
                                 {"8", "PAR"}}};
    schema[464] =
      fix::FieldDef{464, "TestMessageIndicator", {{"Y", "YES"}, {"N", "NO"}}};
    schema[467] = fix::FieldDef{467, "IndividualAllocID"};
    schema[466] = fix::FieldDef{466, "BookingRefID"};
    schema[461] = fix::FieldDef{461, "CFICode"};
    schema[460] = fix::FieldDef{460,
                                "Product",
                                {{"8", "LOAN"},
                                 {"12", "OTHER"},
                                 {"11", "MUNICIPAL"},
                                 {"1", "AGENCY"},
                                 {"3", "CORPORATE"},
                                 {"4", "CURRENCY"},
                                 {"2", "COMMODITY"},
                                 {"6", "GOVERNMENT"},
                                 {"10", "MORTGAGE"},
                                 {"7", "INDEX"},
                                 {"9", "MONEYMARKET"},
                                 {"5", "EQUITY"}}};
    schema[463] = fix::FieldDef{463, "UnderlyingCFICode"};
    schema[462] = fix::FieldDef{462, "UnderlyingProduct"};
    schema[168] = fix::FieldDef{168, "EffectiveTime"};
    schema[169] = fix::FieldDef{169,
                                "StandInstDbType",
                                {{"0", "OTHER"},
                                 {"1", "DTC_SID"},
                                 {"3", "A_GLOBAL_CUSTODIAN"},
                                 {"2", "THOMSON_ALERT"}}};
    schema[164] = fix::FieldDef{164, "EmailThreadID"};
    schema[165] = fix::FieldDef{165,
                                "SettlInstSource",
                                {{"2", "INSTITUTIONS_INSTRUCTIONS"},
                                 {"3", "INVESTOR"},
                                 {"1", "BROKERS_INSTRUCTIONS"}}};
    schema[167] = fix::FieldDef{
      167,
      "SecurityType",
      {{"CP", "COMMERCIAL_PAPER"},
       {"VRDN", "VARIABLE_RATE_DEMAND_NOTE"},
       {"PZFJ", "PLAZOS_FIJOS"},
       {"PN", "PROMISSORY_NOTE"},
       {"ONITE", "OVERNIGHT"},
       {"MTN", "MEDIUM_TERM_NOTES"},
       {"TECP", "TAX_EXEMPT_COMMERCIAL_PAPER"},
       {"AMENDED", "AMENDED_RESTATED"},
       {"BRIDGE", "BRIDGE_LOAN"},
       {"LOFC", "LETTER_OF_CREDIT"},
       {"SWING", "SWING_LINE_FACILITY"},
       {"DINP", "DEBTOR_IN_POSSESSION"},
       {"DEFLTED", "DEFAULTED"},
       {"WITHDRN", "WITHDRAWN"},
       {"LQN", "LIQUIDITY_NOTE"},
       {"MATURED", "MATURED"},
       {"DN", "DEPOSIT_NOTES"},
       {"RETIRED", "RETIRED"},
       {"BA", "BANKERS_ACCEPTANCE"},
       {"BN", "BANK_NOTES"},
       {"BOX", "BILL_OF_EXCHANGES"},
       {"CD", "CERTIFICATE_OF_DEPOSIT"},
       {"CL", "CALL_LOANS"},
       {"REPLACD", "REPLACED"},
       {"MT", "MANDATORY_TENDER"},
       {"RVLVTRM", "REVOLVER_TERM_LOAN"},
       {"MPP", "MORTGAGE_PRIVATE_PLACEMENT"},
       {"STN", "SHORT_TERM_LOAN_NOTE"},
       {"MPT", "MISCELLANEOUS_PASS_THROUGH"},
       {"TBA", "TO_BE_ANNOUNCED"},
       {"AN", "OTHER_ANTICIPATION_NOTES_BAN_GAN_ETC"},
       {"MIO", "MORTGAGE_INTEREST_ONLY"},
       {"COFP", "CERTIFICATE_OF_PARTICIPATION"},
       {"MBS", "MORTGAGE_BACKED_SECURITIES"},
       {"REV", "REVENUE_BONDS"},
       {"SPCLA", "SPECIAL_ASSESSMENT"},
       {"SPCLO", "SPECIAL_OBLIGATION"},
       {"SPCLT", "SPECIAL_TAX"},
       {"TAN", "TAX_ANTICIPATION_NOTE"},
       {"TAXA", "TAX_ALLOCATION"},
       {"COFO", "CERTIFICATE_OF_OBLIGATION"},
       {"TD", "TIME_DEPOSIT"},
       {"GO", "GENERAL_OBLIGATION_BONDS"},
       {"?", "WILDCARD_ENTRY"},
       {"WAR", "WARRANT"},
       {"MF", "MUTUAL_FUND"},
       {"MLEG", "MULTI_LEG_INSTRUMENT"},
       {"TRAN", "TAX_REVENUE_ANTICIPATION_NOTE"},
       {"MPO", "MORTGAGE_PRINCIPAL_ONLY"},
       {"RP", "REPURCHASE_AGREEMENT"},
       {"NONE", "NO_SECURITY_TYPE"},
       {"XCN", "EXTENDED_COMM_NOTE"},
       {"POOL", "AGENCY_POOLS"},
       {"ABS", "ASSET_BACKED_SECURITIES"},
       {"CMBS", "CORP_MORTGAGE_BACKED_SECURITIES"},
       {"CMO", "COLLATERALIZED_MORTGAGE_OBLIGATION"},
       {"IET", "IOETTE_MORTGAGE"},
       {"RVRP", "REVERSE_REPURCHASE_AGREEMENT"},
       {"FOR", "FOREIGN_EXCHANGE_CONTRACT"},
       {"RAN", "REVENUE_ANTICIPATION_NOTE"},
       {"RVLV", "REVOLVER_LOAN"},
       {"FAC", "FEDERAL_AGENCY_COUPON"},
       {"FADN", "FEDERAL_AGENCY_DISCOUNT_NOTE"},
       {"PEF", "PRIVATE_EXPORT_FUNDING"},
       {"CORP", "CORPORATE_BOND"},
       {"CPP", "CORPORATE_PRIVATE_PLACEMENT"},
       {"CB", "CONVERTIBLE_BOND"},
       {"DUAL", "DUAL_CURRENCY"},
       {"XLINKD", "INDEXED_LINKED"},
       {"YANK", "YANKEE_CORPORATE_BOND"},
       {"CS", "COMMON_STOCK"},
       {"PS", "PREFERRED_STOCK"},
       {"BRADY", "BRADY_BOND"},
       {"TBOND", "US_TREASURY_BOND"},
       {"TINT", "INTEREST_STRIP_FROM_ANY_BOND_OR_NOTE"},
       {"TIPS", "TREASURY_INFLATION_PROTECTED_SECURITIES"},
       {"TCAL", "PRINCIPAL_STRIP_OF_A_CALLABLE_BOND_OR_NOTE"},
       {"TPRN", "PRINCIPAL_STRIP_FROM_A_NON_CALLABLE_BOND_OR_NOTE"},
       {"UST", "US_TREASURY_NOTE_BOND"},
       {"USTB", "US_TREASURY_BILL"},
       {"TERM", "TERM_LOAN"},
       {"STRUCT", "STRUCTURED_NOTES"}}};
    schema[160] =
      fix::FieldDef{160,
                    "SettlInstMode",
                    {{"0", "DEFAULT"},
                     {"4", "SPECIFIC_ORDER_FOR_A_SINGLE_ACCOUNT"},
                     {"3", "SPECIFIC_ALLOCATION_ACCOUNT_STANDING"},
                     {"1", "STANDING_INSTRUCTIONS_PROVIDED"},
                     {"2", "SPECIFIC_ALLOCATION_ACCOUNT_OVERRIDING"}}};
    schema[161] = fix::FieldDef{161, "AllocText"};
    schema[162] = fix::FieldDef{162, "SettlInstID"};
    schema[163] =
      fix::FieldDef{163,
                    "SettlInstTransType",
                    {{"N", "NEW"}, {"R", "REPLACE"}, {"C", "CANCEL"}}};
    schema[600] = fix::FieldDef{600, "LegSymbol"};
    schema[9] = fix::FieldDef{9, "BodyLength"};
    schema[647] = fix::FieldDef{647, "MinBidSize"};
    schema[649] = fix::FieldDef{649, "QuoteStatusReqID"};
    schema[648] = fix::FieldDef{648, "MinOfferSize"};
    schema[357] = fix::FieldDef{357, "EncodedSubject"};
    schema[356] = fix::FieldDef{356, "EncodedSubjectLen"};
    schema[355] = fix::FieldDef{355, "EncodedText"};
    schema[354] = fix::FieldDef{354, "EncodedTextLen"};
    schema[353] = fix::FieldDef{353, "EncodedListExecInst"};
    schema[352] = fix::FieldDef{352, "EncodedListExecInstLen"};
    schema[351] = fix::FieldDef{351, "EncodedSecurityDesc"};
    schema[350] = fix::FieldDef{350, "EncodedSecurityDescLen"};
    schema[359] = fix::FieldDef{359, "EncodedHeadline"};
    schema[358] = fix::FieldDef{358, "EncodedHeadlineLen"};
    schema[216] = fix::FieldDef{216,
                                "RoutingType",
                                {{"1", "TARGET_FIRM"},
                                 {"2", "TARGET_LIST"},
                                 {"3", "BLOCK_FIRM"},
                                 {"4", "BLOCK_LIST"}}};
    schema[217] = fix::FieldDef{217, "RoutingID"};
    schema[214] = fix::FieldDef{214, "SettlInstRefID"};
    schema[215] = fix::FieldDef{215, "NoRoutingIDs"};
    schema[212] = fix::FieldDef{212, "XmlDataLen"};
    schema[213] = fix::FieldDef{213, "XmlData"};
    schema[210] = fix::FieldDef{210, "MaxShow"};
    schema[211] = fix::FieldDef{211, "PegDifference"};
    schema[218] = fix::FieldDef{218, "Spread"};
    schema[219] = fix::FieldDef{219,
                                "Benchmark",
                                {{"5", "OLD_10"},
                                 {"1", "CURVE"},
                                 {"2", "5_YR"},
                                 {"4", "10_YR"},
                                 {"6", "30_YR"},
                                 {"7", "OLD_30"},
                                 {"8", "3_MO_LIBOR"},
                                 {"9", "6_MO_LIBOR"},
                                 {"3", "OLD_5"}}};
    schema[289] = fix::FieldDef{289, "MDEntrySeller"};
    schema[288] = fix::FieldDef{288, "MDEntryBuyer"};
    schema[4] = fix::FieldDef{
      4,
      "AdvSide",
      {{"B", "BUY"}, {"S", "SELL"}, {"X", "CROSS"}, {"T", "TRADE"}}};
    schema[281] = fix::FieldDef{281,
                                "MDReqRejReason",
                                {{"7", "UNSUPPORTED_AGGREGATEDBOOK"},
                                 {"1", "DUPLICATE_MDREQID"},
                                 {"C", "UNSUPPORTED_MDIMPLICITDELETE"},
                                 {"B", "UNSUPPORTED_OPENCLOSESETTLEFLAG"},
                                 {"A", "UNSUPPORTED_SCOPE"},
                                 {"9", "UNSUPPORTED_TRADINGSESSIONID"},
                                 {"8", "UNSUPPORTED_MDENTRYTYPE"},
                                 {"6", "UNSUPPORTED_MDUPDATETYPE"},
                                 {"5", "UNSUPPORTED_MARKETDEPTH"},
                                 {"4", "UNSUPPORTED_SUBSCRIPTIONREQUESTTYPE"},
                                 {"2", "INSUFFICIENT_BANDWIDTH"},
                                 {"0", "UNKNOWN_SYMBOL"},
                                 {"3", "INSUFFICIENT_PERMISSIONS"}}};
    schema[280] = fix::FieldDef{280, "MDEntryRefID"};
    schema[283] = fix::FieldDef{283, "LocationID"};
    schema[282] = fix::FieldDef{282, "MDEntryOriginator"};
    schema[285] = fix::FieldDef{
      285, "DeleteReason", {{"0", "CANCELATION"}, {"1", "ERROR"}}};
    schema[284] = fix::FieldDef{284, "DeskID"};
    schema[287] = fix::FieldDef{287, "SellerDays"};
    schema[286] = fix::FieldDef{286,
                                "OpenCloseSettleFlag",
                                {{"1", "SESSION_OPEN"},
                                 {"2", "DELIVERY_SETTLEMENT_PRICE"},
                                 {"3", "EXPECTED_PRICE"},
                                 {"4", "PRICE_FROM_PREVIOUS_BUSINESS_DAY"},
                                 {"0", "DAILY_OPEN"}}};
    schema[263] =
      fix::FieldDef{263,
                    "SubscriptionRequestType",
                    {{"1", "SNAPSHOT_PLUS_UPDATES"},
                     {"2", "DISABLE_PREVIOUS_SNAPSHOT_PLUS_UPDATE_REQUEST"},
                     {"0", "SNAPSHOT"}}};
    schema[262] = fix::FieldDef{262, "MDReqID"};
    schema[260] = fix::FieldDef{260, "BasisFeaturePrice"};
    schema[267] = fix::FieldDef{267, "NoMDEntryTypes"};
    schema[266] =
      fix::FieldDef{266, "AggregatedBook", {{"Y", "YES"}, {"N", "NO"}}};
    schema[265] =
      fix::FieldDef{265,
                    "MDUpdateType",
                    {{"0", "FULL_REFRESH"}, {"1", "INCREMENTAL_REFRESH"}}};
    schema[264] = fix::FieldDef{264, "MarketDepth"};
    schema[269] = fix::FieldDef{269,
                                "MDEntryType",
                                {{"7", "TRADING_SESSION_HIGH_PRICE"},
                                 {"1", "OFFER"},
                                 {"A", "IMBALANCE"},
                                 {"9", "TRADING_SESSION_VWAP_PRICE"},
                                 {"8", "TRADING_SESSION_LOW_PRICE"},
                                 {"5", "CLOSING_PRICE"},
                                 {"4", "OPENING_PRICE"},
                                 {"0", "BID"},
                                 {"2", "TRADE"},
                                 {"3", "INDEX_VALUE"},
                                 {"6", "SETTLEMENT_PRICE"}}};
    schema[268] = fix::FieldDef{268, "NoMDEntries"};
    schema[59] = fix::FieldDef{59,
                               "TimeInForce",
                               {{"7", "AT_THE_CLOSE"},
                                {"0", "DAY"},
                                {"1", "GOOD_TILL_CANCEL"},
                                {"2", "AT_THE_OPENING"},
                                {"3", "IMMEDIATE_OR_CANCEL"},
                                {"4", "FILL_OR_KILL"},
                                {"5", "GOOD_TILL_CROSSING"},
                                {"6", "GOOD_TILL_DATE"}}};
    schema[58] = fix::FieldDef{58, "Text"};
    schema[55] = fix::FieldDef{55, "Symbol"};
    schema[54] = fix::FieldDef{54,
                               "Side",
                               {{"6", "SELL_SHORT_EXEMPT"},
                                {"B", "AS_DEFINED"},
                                {"C", "OPPOSITE"},
                                {"8", "CROSS"},
                                {"9", "CROSS_SHORT"},
                                {"1", "BUY"},
                                {"2", "SELL"},
                                {"3", "BUY_MINUS"},
                                {"4", "SELL_PLUS"},
                                {"A", "CROSS_SHORT_EXEMPT"},
                                {"5", "SELL_SHORT"},
                                {"7", "UNDISCLOSED"}}};
    schema[57] = fix::FieldDef{57, "TargetSubID"};
    schema[56] = fix::FieldDef{56, "TargetCompID"};
    schema[50] = fix::FieldDef{50, "SenderSubID"};
    schema[53] = fix::FieldDef{53, "Quantity"};
    schema[52] = fix::FieldDef{52, "SendingTime"};
    schema[537] = fix::FieldDef{
      537,
      "QuoteType",
      {{"0", "INDICATIVE"}, {"1", "TRADEABLE"}, {"2", "RESTRICTED_TRADEABLE"}}};
    schema[536] = fix::FieldDef{536, "AffectedSecondaryOrderID"};
    schema[535] = fix::FieldDef{535, "AffectedOrderID"};
    schema[63] = fix::FieldDef{63,
                               "SettlmntTyp",
                               {{"5", "T_PLUS_4"},
                                {"A", "T_PLUS_1"},
                                {"6", "FUTURE"},
                                {"3", "T_PLUS_2"},
                                {"2", "NEXT_DAY"},
                                {"8", "SELLERS_OPTION"},
                                {"1", "CASH"},
                                {"7", "WHEN_AND_IF_ISSUED"},
                                {"0", "REGULAR"},
                                {"9", "T_PLUS_5"},
                                {"4", "T_PLUS_3"}}};
    schema[533] = fix::FieldDef{533, "TotalAffectedOrders"};
    schema[532] = fix::FieldDef{532,
                                "MassCancelRejectReason",
                                {{"2", "INVALID_OR_UNKNOWN_UNDERLYING"},
                                 {"6", "INVALID_OR_UNKNOWN_TRADING_SESSION"},
                                 {"5", "INVALID_OR_UNKNOWN_SECURITY_TYPE"},
                                 {"3", "INVALID_OR_UNKNOWN_PRODUCT"},
                                 {"1", "INVALID_OR_UNKNOWN_SECURITY"},
                                 {"0", "MASS_CANCEL_NOT_SUPPORTED"},
                                 {"4", "INVALID_OR_UNKNOWN_CFICODE"}}};
    schema[531] =
      fix::FieldDef{531,
                    "MassCancelResponse",
                    {{"6", "CANCEL_ORDERS_FOR_A_TRADING_SESSION"},
                     {"0", "CANCEL_REQUEST_REJECTED"},
                     {"7", "CANCEL_ALL_ORDERS"},
                     {"3", "CANCEL_ORDERS_FOR_A_PRODUCT"},
                     {"5", "CANCEL_ORDERS_FOR_A_SECURITYTYPE"},
                     {"4", "CANCEL_ORDERS_FOR_A_CFICODE"},
                     {"1", "CANCEL_ORDERS_FOR_A_SECURITY"},
                     {"2", "CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY"}}};
    schema[530] =
      fix::FieldDef{530,
                    "MassCancelRequestType",
                    {{"1", "CANCEL_ORDERS_FOR_A_SECURITY"},
                     {"7", "CANCEL_ALL_ORDERS"},
                     {"6", "CANCEL_ORDERS_FOR_A_TRADING_SESSION"},
                     {"5", "CANCEL_ORDERS_FOR_A_SECURITYTYPE"},
                     {"4", "CANCEL_ORDERS_FOR_A_CFICODE"},
                     {"2", "CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY"},
                     {"3", "CANCEL_ORDERS_FOR_A_PRODUCT"}}};
    schema[539] = fix::FieldDef{539, "NoNestedPartyIDs"};
    schema[538] = fix::FieldDef{538, "NestedPartyRole"};
    schema[115] = fix::FieldDef{115, "OnBehalfOfCompID"};
    schema[114] = fix::FieldDef{114, "LocateReqd", {{"Y", "YES"}, {"N", "NO"}}};
    schema[117] = fix::FieldDef{117, "QuoteID"};
    schema[116] = fix::FieldDef{116, "OnBehalfOfSubID"};
    schema[111] = fix::FieldDef{111, "MaxFloor"};
    schema[110] = fix::FieldDef{110, "MinQty"};
    schema[113] =
      fix::FieldDef{113, "ReportToExch", {{"Y", "YES"}, {"N", "NO"}}};
    schema[112] = fix::FieldDef{112, "TestReqID"};
    schema[119] = fix::FieldDef{119, "SettlCurrAmt"};
    schema[118] = fix::FieldDef{118, "NetMoney"};
    schema[429] = fix::FieldDef{429,
                                "ListStatusType",
                                {{"6", "ALERT"},
                                 {"4", "EXECSTARTED"},
                                 {"3", "TIMED"},
                                 {"2", "RESPONSE"},
                                 {"1", "ACK"},
                                 {"5", "ALLDONE"}}};
    schema[428] = fix::FieldDef{428, "NoStrikes"};
    schema[534] = fix::FieldDef{534, "NoAffectedOrders"};
    schema[421] = fix::FieldDef{421, "Country"};
    schema[420] = fix::FieldDef{420, "NoBidComponents"};
    schema[423] = fix::FieldDef{423,
                                "PriceType",
                                {{"3", "FIXED_AMOUNT"},
                                 {"1", "PERCENTAGE"},
                                 {"4", "DISCOUNT"},
                                 {"6", "BASIS_POINTS_RELATIVE_TO_BENCHMARK"},
                                 {"7", "TED_PRICE"},
                                 {"8", "TED_YIELD"},
                                 {"5", "PREMIUM"},
                                 {"2", "PER_SHARE"}}};
    schema[422] = fix::FieldDef{422, "TotNoStrikes"};
    schema[425] = fix::FieldDef{425, "DayCumQty"};
    schema[424] = fix::FieldDef{424, "DayOrderQty"};
    schema[427] = fix::FieldDef{
      427,
      "GTBookingInst",
      {{"0", "BOOK_OUT_ALL_TRADES_ON_DAY_OF_EXECUTION"},
       {"2", "ACCUMULATE_UNTIL_VERBALLY_NOTIFIED_OTHERWISE"},
       {"1", "ACCUMULATE_EXECUTIONS_UNTIL_ORDER_IS_FILLED_OR_EXPIRES"}}};
    schema[426] = fix::FieldDef{426, "DayAvgPx"};
    schema[308] = fix::FieldDef{308, "UnderlyingSecurityExchange"};
    schema[309] = fix::FieldDef{309, "UnderlyingSecurityID"};
    schema[300] = fix::FieldDef{300,
                                "QuoteRejectReason",
                                {{"9", "NOT_AUTHORIZED_TO_QUOTE_SECURITY"},
                                 {"1", "UNKNOWN_SYMBOL"},
                                 {"2", "EXCHANGE"},
                                 {"3", "QUOTE_REQUEST_EXCEEDS_LIMIT"},
                                 {"4", "TOO_LATE_TO_ENTER"},
                                 {"5", "UNKNOWN_QUOTE"},
                                 {"6", "DUPLICATE_QUOTE"},
                                 {"7", "INVALID_BID_ASK_SPREAD"},
                                 {"8", "INVALID_PRICE"}}};
    schema[301] =
      fix::FieldDef{301,
                    "QuoteResponseLevel",
                    {{"1", "ACKNOWLEDGE_ONLY_NEGATIVE_OR_ERRONEOUS_QUOTES"},
                     {"0", "NO_ACKNOWLEDGEMENT"},
                     {"2", "ACKNOWLEDGE_EACH_QUOTE_MESSAGES"}}};
    schema[302] = fix::FieldDef{302, "QuoteSetID"};
    schema[303] = fix::FieldDef{
      303, "QuoteRequestType", {{"2", "AUTOMATIC"}, {"1", "MANUAL"}}};
    schema[304] = fix::FieldDef{304, "TotQuoteEntries"};
    schema[305] = fix::FieldDef{305, "UnderlyingSecurityIDSource"};
    schema[306] = fix::FieldDef{306, "UnderlyingIssuer"};
    schema[307] = fix::FieldDef{307, "UnderlyingSecurityDesc"};
    schema[568] = fix::FieldDef{568, "TradeRequestID"};
    schema[569] = fix::FieldDef{
      569,
      "TradeRequestType",
      {{"4", "ADVISORIES_THAT_MATCH_CRITERIA"},
       {"3", "UNREPORTED_TRADES_THAT_MATCH_CRITERIA"},
       {"2", "UNMATCHED_TRADES_THAT_MATCH_CRITERIA"},
       {"1", "MATCHED_TRADES_MATCHING_CRITERIA_PROVIDED_ON_REQUEST"},
       {"0", "ALL_TRADES"}}};
    schema[560] = fix::FieldDef{
      560,
      "SecurityRequestResult",
      {{"4", "INSTRUMENT_DATA_TEMPORARILY_UNAVAILABLE"},
       {"0", "VALID_REQUEST"},
       {"1", "INVALID_OR_UNSUPPORTED_REQUEST"},
       {"5", "REQUEST_FOR_INSTRUMENT_DATA_NOT_SUPPORTED"},
       {"3", "NOT_AUTHORIZED_TO_RETRIEVE_INSTRUMENT_DATA"},
       {"2", "NO_INSTRUMENTS_FOUND_THAT_MATCH_SELECTION_CRITERIA"}}};
    schema[561] = fix::FieldDef{561, "RoundLot"};
    schema[562] = fix::FieldDef{562, "MinTradeVol"};
    schema[563] = fix::FieldDef{563, "MultiLegRptTypeReq"};
    schema[564] = fix::FieldDef{564, "LegPositionEffect"};
    schema[565] = fix::FieldDef{565, "LegCoveredOrUncovered"};
    schema[566] = fix::FieldDef{566, "LegPrice"};
    schema[567] = fix::FieldDef{567,
                                "TradSesStatusRejReason",
                                {{"1", "UNKNOWN_OR_INVALID_TRADINGSESSIONID"}}};
    schema[229] = fix::FieldDef{229, "TradeOriginationDate"};
    schema[228] = fix::FieldDef{228, "Factor"};
    schema[227] = fix::FieldDef{227, "RepurchaseRate"};
    schema[226] = fix::FieldDef{226, "RepurchaseTerm"};
    schema[225] = fix::FieldDef{225, "IssueDate"};
    schema[224] = fix::FieldDef{224, "CouponPaymentDate"};
    schema[223] = fix::FieldDef{223, "CouponRate"};
    schema[222] = fix::FieldDef{222, "BenchmarkCurvePoint"};
    schema[221] = fix::FieldDef{221,
                                "BenchmarkCurveName",
                                {{"SWAP", "SWAP"},
                                 {"LIBID", "LIBID"},
                                 {"OTHER", "OTHER"},
                                 {"Treasury", "TREASURY"},
                                 {"Euribor", "EURIBOR"},
                                 {"Pfandbriefe", "PFANDBRIEFE"},
                                 {"FutureSWAP", "FUTURESWAP"},
                                 {"MuniAAA", "MUNIAAA"},
                                 {"LIBOR", "LIBOR"}}};
    schema[220] = fix::FieldDef{220, "BenchmarkCurveCurrency"};
    schema[391] = fix::FieldDef{391, "ClientBidID"};
    schema[390] = fix::FieldDef{390, "BidID"};
    schema[151] = fix::FieldDef{151, "LeavesQty"};
    schema[150] = fix::FieldDef{150,
                                "ExecType",
                                {{"6", "PENDING_CANCEL"},
                                 {"0", "NEW"},
                                 {"1", "PARTIAL_FILL"},
                                 {"2", "FILL"},
                                 {"4", "CANCELED"},
                                 {"5", "REPLACE"},
                                 {"8", "REJECTED"},
                                 {"9", "SUSPENDED"},
                                 {"A", "PENDING_NEW"},
                                 {"B", "CALCULATED"},
                                 {"C", "EXPIRED"},
                                 {"D", "RESTATED"},
                                 {"E", "PENDING_REPLACE"},
                                 {"F", "TRADE"},
                                 {"G", "TRADE_CORRECT"},
                                 {"H", "TRADE_CANCEL"},
                                 {"I", "ORDER_STATUS"},
                                 {"3", "DONE_FOR_DAY"},
                                 {"7", "STOPPED"}}};
    schema[153] = fix::FieldDef{153, "AllocAvgPx"};
    schema[152] = fix::FieldDef{152, "CashOrderQty"};
    schema[155] = fix::FieldDef{155, "SettlCurrFxRate"};
    schema[154] = fix::FieldDef{154, "AllocNetMoney"};
    schema[157] = fix::FieldDef{157, "NumDaysInterest"};
    schema[156] = fix::FieldDef{
      156, "SettlCurrFxRateCalc", {{"D", "DIVIDE"}, {"M", "MULTIPLY"}}};
    schema[159] = fix::FieldDef{159, "AccruedInterestAmt"};
    schema[158] = fix::FieldDef{158, "AccruedInterestRate"};
    schema[609] = fix::FieldDef{609, "LegSecurityType"};
    schema[608] = fix::FieldDef{608, "LegCFICode"};
    schema[634] = fix::FieldDef{634, "OfferYield"};
    schema[399] =
      fix::FieldDef{399,
                    "BidDescriptorType",
                    {{"3", "INDEX"}, {"2", "COUNTRY"}, {"1", "SECTOR"}}};
    schema[635] = fix::FieldDef{
      635,
      "ClearingFeeIndicator",
      {{"H", "106H_AND_106J_FIRMS"},
       {"5", "5TH_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT"},
       {"4", "4TH_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT"},
       {"3", "3RD_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT"},
       {"2", "2ND_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT"},
       {"1", "1ST_YEAR_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT"},
       {"M", "ALL_OTHER_OWNERSHIP_TYPES"},
       {"I", "GIM_IDEM_AND_COM_MEMBERSHIP_INTEREST_HOLDERS"},
       {"9", "6TH_YEAR_AND_BEYOND_DELEGATE_TRADING_FOR_HIS_OWN_ACCOUNT"},
       {"F", "FULL_AND_ASSOCIATE_MEMBER_TRADING_FOR_OWN_ACCOUNT_AND_AS_FLOOR"},
       {"E", "EQUITY_MEMBER_AND_CLEARING_MEMBER"},
       {"C", "NON_MEMBER_AND_CUSTOMER"},
       {"B", "CBOE_MEMBER"},
       {"L", "LESSEE_AND_106F_EMPLOYEES"}}};
    schema[398] = fix::FieldDef{398, "NoBidDescriptors"};
    schema[48] = fix::FieldDef{48, "SecurityID"};
    schema[49] = fix::FieldDef{49, "SenderCompID"};
    schema[47] = fix::FieldDef{
      47,
      "Rule80A",
      {{"N", "PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_MEMBER"},
       {"B", "SHORT_EXEMPT_TRANSACTION_B"},
       {"D", "PROGRAM_ORDER_INDEX_ARB_FOR_MEMBER_FIRM_ORG"},
       {"E", "SHORT_EXEMPT_TRANSACTION_FOR_PRINCIPAL"},
       {"F", "SHORT_EXEMPT_TRANSACTION_F"},
       {"H", "SHORT_EXEMPT_TRANSACTION_H"},
       {"I", "INDIVIDUAL_INVESTOR_SINGLE_ORDER"},
       {"J", "PROGRAM_ORDER_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER"},
       {"K", "PROGRAM_ORDER_NON_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER"},
       {"M", "PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_MEMBER"},
       {"A", "AGENCY_SINGLE_ORDER"},
       {"O", "PROPRIETARY_TRANSACTIONS_FOR_COMPETING_MARKET_MAKER_THAT_IS_"
             "AFFILIATED_WITH_THE_CLEARING_MEMBER"},
       {"P", "PRINCIPAL"},
       {"R",
        "TRANSACTIONS_FOR_THE_ACCOUNT_OF_A_NON_MEMBER_COMPETING_MARKET_MAKER"},
       {"S", "SPECIALIST_TRADES"},
       {"T", "TRANSACTIONS_FOR_THE_ACCOUNT_OF_AN_UNAFFILIATED_MEMBERS_"
             "COMPETING_MARKET_MAKER"},
       {"U", "PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_AGENCY"},
       {"W", "ALL_OTHER_ORDERS_AS_AGENT_FOR_OTHER_MEMBER"},
       {"X", "SHORT_EXEMPT_TRANSACTION_FOR_MEMBER_COMPETING_MARKET_MAKER_NOT_"
             "AFFILIATED_WITH_THE_FIRM_CLEARING_THE_TRADE"},
       {"Y", "PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_AGENCY"},
       {"Z", "SHORT_EXEMPT_TRANSACTION_FOR_NON_MEMBER_COMPETING_MARKET_MAKER"},
       {"L", "SHORT_EXEMPT_TRANSACTION_FOR_MEMBER_COMPETING_MARKET_MAKER_"
             "AFFILIATED_WITH_THE_FIRM_CLEARING_THE_TRADE"},
       {"C", "PROGRAM_ORDER_NON_INDEX_ARB_FOR_MEMBER_FIRM_ORG"}}};
    schema[44] = fix::FieldDef{44, "Price"};
    schema[45] = fix::FieldDef{45, "RefSeqNum"};
    schema[42] = fix::FieldDef{42, "OrigTime"};
    schema[43] = fix::FieldDef{43, "PossDupFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[40] = fix::FieldDef{40,
                               "OrdType",
                               {{"D", "PREVIOUSLY_QUOTED"},
                                {"2", "LIMIT"},
                                {"3", "STOP"},
                                {"4", "STOP_LIMIT"},
                                {"5", "MARKET_ON_CLOSE"},
                                {"6", "WITH_OR_WITHOUT"},
                                {"7", "LIMIT_OR_BETTER"},
                                {"8", "LIMIT_WITH_OR_WITHOUT"},
                                {"9", "ON_BASIS"},
                                {"A", "ON_CLOSE"},
                                {"1", "MARKET"},
                                {"C", "FOREX_C"},
                                {"F", "FOREX_F"},
                                {"E", "PREVIOUSLY_INDICATED"},
                                {"G", "FOREX_G"},
                                {"I", "FUNARI"},
                                {"J", "MARKET_IF_TOUCHED"},
                                {"K", "MARKET_WITH_LEFTOVER_AS_LIMIT"},
                                {"L", "PREVIOUS_FUND_VALUATION_POINT"},
                                {"M", "NEXT_FUND_VALUATION_POINT"},
                                {"P", "PEGGED"},
                                {"B", "LIMIT_ON_CLOSE"},
                                {"H", "FOREX_H"}}};
    schema[41] = fix::FieldDef{41, "OrigClOrdID"};
    schema[638] =
      fix::FieldDef{638,
                    "PriorityIndicator",
                    {{"0", "PRIORITY_UNCHANGED"},
                     {"1", "LOST_PRIORITY_AS_RESULT_OF_ORDER_CHANGE"}}};
    schema[5] = fix::FieldDef{
      5, "AdvTransType", {{"N", "NEW"}, {"C", "CANCEL"}, {"R", "REPLACE"}}};
    schema[639] = fix::FieldDef{639, "PriceImprovement"};
    schema[489] = fix::FieldDef{489, "CardNumber"};
    schema[488] = fix::FieldDef{488, "CardHolderName"};
    schema[487] =
      fix::FieldDef{487,
                    "TradeReportTransType",
                    {{"N", "NEW"}, {"R", "REPLACE"}, {"C", "CANCEL"}}};
    schema[486] = fix::FieldDef{486, "DateOfBirth"};
    schema[485] = fix::FieldDef{485, "ExecPriceAdjustment"};
    schema[484] = fix::FieldDef{484,
                                "ExecPriceType",
                                {{"S", "SINGLE_PRICE"},
                                 {"Q", "OFFER_PRICE_MINUS_ADJUSTMENT_AMOUNT"},
                                 {"P", "OFFER_PRICE_MINUS_ADJUSTMENT"},
                                 {"O", "OFFER_PRICE"},
                                 {"E", "CREATION_PRICE_PLUS_ADJUSTMENT_AMOUNT"},
                                 {"D", "CREATION_PRICE_PLUS_ADJUSTMENT"},
                                 {"C", "CREATION_PRICE"},
                                 {"B", "BID_PRICE"}}};
    schema[483] = fix::FieldDef{483, "TransBkdTime"};
    schema[482] = fix::FieldDef{482, "MailingInst"};
    schema[481] =
      fix::FieldDef{481,
                    "MoneyLaunderingStatus",
                    {{"3", "EXEMPT_AUTHORISED_CREDIT_OR_FINANCIAL_INSTITUTION"},
                     {"2", "EXEMPT_CLIENT_MONEY_TYPE_EXEMPTION"},
                     {"1", "EXEMPT_BELOW_THE_LIMIT"},
                     {"Y", "PASSED"},
                     {"N", "NOT_CHECKED"}}};
    schema[480] = fix::FieldDef{480,
                                "CancellationRights",
                                {{"M", "NO_WAIVER_AGREEMENT"},
                                 {"N", "NO_EXECUTION_ONLY"},
                                 {"Y", "YES"},
                                 {"O", "NO_INSTITUTIONAL"}}};
    schema[472] = fix::FieldDef{472, "LocaleOfIssue"};
    schema[473] = fix::FieldDef{473, "NoRegistDtls"};
    schema[470] = fix::FieldDef{470, "CountryOfIssue"};
    schema[471] = fix::FieldDef{471, "StateOrProvinceOfIssue"};
    schema[476] = fix::FieldDef{476, "PaymentRef"};
    schema[477] = fix::FieldDef{477, "DistribPaymentMethod"};
    schema[474] = fix::FieldDef{474, "MailingDtls"};
    schema[475] = fix::FieldDef{475, "InvestorCountryOfResidence"};
    schema[478] = fix::FieldDef{478, "CashDistribCurr"};
    schema[479] = fix::FieldDef{479, "CommCurrency"};
    return schema;
  }
}
