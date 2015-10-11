#pragma once

#include "fix.hpp"

namespace FIX42
{
  inline auto load_schema () -> fix::Schema
  {
    fix::Schema schema;
    schema[344] = fix::FieldDef{344, "TradSesCloseTime"};
    schema[345] = fix::FieldDef{345, "TradSesEndTime"};
    schema[346] = fix::FieldDef{346, "NumberOfOrders"};
    schema[347] = fix::FieldDef{347,
                                "MessageEncoding",
                                {{"EUC-JP", "EUC_JP"},
                                 {"ISO-2022-JP", "ISO_2022_JP"},
                                 {"SHIFT_JIS", "SHIFT_JIS"},
                                 {"UTF-8", "UTF_8"}}};
    schema[340] = fix::FieldDef{340,
                                "TradSesStatus",
                                {{"1", "HALTED"},
                                 {"2", "OPEN"},
                                 {"3", "CLOSED"},
                                 {"4", "PRE_OPEN"},
                                 {"5", "PRE_CLOSE"}}};
    schema[341] = fix::FieldDef{341, "TradSesStartTime"};
    schema[342] = fix::FieldDef{342, "TradSesOpenTime"};
    schema[343] = fix::FieldDef{343, "TradSesPreCloseTime"};
    schema[348] = fix::FieldDef{348, "EncodedIssuerLen"};
    schema[349] = fix::FieldDef{349, "EncodedIssuer"};
    schema[298] = fix::FieldDef{298,
                                "QuoteCancelType",
                                {{"1", "CANCEL_FOR_SYMBOL"},
                                 {"2", "CANCEL_FOR_SECURITY_TYPE"},
                                 {"3", "CANCEL_FOR_UNDERLYING_SYMBOL"},
                                 {"4", "CANCEL_FOR_ALL_QUOTES"}}};
    schema[299] = fix::FieldDef{299, "QuoteEntryID"};
    schema[296] = fix::FieldDef{296, "NoQuoteSets"};
    schema[297] = fix::FieldDef{297,
                                "QuoteAckStatus",
                                {{"0", "ACCEPTED"},
                                 {"1", "CANCELED_FOR_SYMBOL"},
                                 {"2", "CANCELED_FOR_SECURITY_TYPE"},
                                 {"3", "CANCELED_FOR_UNDERLYING"},
                                 {"4", "CANCELED_ALL"},
                                 {"5", "REJECTED"}}};
    schema[294] = fix::FieldDef{294, "DefOfferSize"};
    schema[295] = fix::FieldDef{295, "NoQuoteEntries"};
    schema[292] = fix::FieldDef{292,
                                "CorporateAction",
                                {{"A", "EX_DIVIDEND"},
                                 {"B", "EX_DISTRIBUTION"},
                                 {"C", "EX_RIGHTS"},
                                 {"D", "NEW"},
                                 {"E", "EX_INTEREST"}}};
    schema[293] = fix::FieldDef{293, "DefBidSize"};
    schema[290] = fix::FieldDef{290, "MDEntryPositionNo"};
    schema[291] = fix::FieldDef{291, "FinancialStatus", {{"1", "BANKRUPT"}}};
    schema[199] = fix::FieldDef{199, "NoIOIQualifiers"};
    schema[198] = fix::FieldDef{198, "SecondaryOrderID"};
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
                                {{"A", "OPEN"},
                                 {"B", "CLOSED"},
                                 {"C", "EXCHANGE_BEST"},
                                 {"D", "CONSOLIDATED_BEST"},
                                 {"E", "LOCKED"},
                                 {"F", "CROSSED"},
                                 {"G", "DEPTH"},
                                 {"H", "FAST_TRADING"},
                                 {"I", "NON_FIRM"}}};
    schema[277] = fix::FieldDef{277,
                                "TradeCondition",
                                {{"A", "CASH"},
                                 {"B", "AVERAGE_PRICE_TRADE"},
                                 {"C", "CASH_TRADE"},
                                 {"D", "NEXT_DAY"},
                                 {"E", "OPENING"},
                                 {"F", "INTRADAY_TRADE_DETAIL"},
                                 {"G", "RULE_127_TRADE"},
                                 {"H", "RULE_155_TRADE"},
                                 {"I", "SOLD_LAST"},
                                 {"J", "NEXT_DAY_TRADE"},
                                 {"K", "OPENED"},
                                 {"L", "SELLER"},
                                 {"M", "SOLD"},
                                 {"N", "STOPPED_STOCK"}}};
    schema[278] = fix::FieldDef{278, "MDEntryID"};
    schema[279] = fix::FieldDef{
      279, "MDUpdateAction", {{"0", "NEW"}, {"1", "CHANGE"}, {"2", "DELETE"}}};
    schema[443] = fix::FieldDef{443, "StrikeTime"};
    schema[442] =
      fix::FieldDef{442,
                    "MultiLegReportingType",
                    {{"1", "SINGLE_SECURITY"},
                     {"2", "INDIVIDUAL_LEG_OF_A_MULTI_LEG_SECURITY"},
                     {"3", "MULTI_LEG_SECURITY"}}};
    schema[441] = fix::FieldDef{441, "LiquidityNumSecurities"};
    schema[440] = fix::FieldDef{440, "ClearingAccount"};
    schema[446] = fix::FieldDef{446, "EncodedListStatusText"};
    schema[445] = fix::FieldDef{445, "EncodedListStatusTextLen"};
    schema[444] = fix::FieldDef{444, "ListStatusText"};
    schema[108] = fix::FieldDef{108, "HeartBtInt"};
    schema[109] = fix::FieldDef{109, "ClientID"};
    schema[102] = fix::FieldDef{
      102,
      "CxlRejReason",
      {{"0", "TOO_LATE_TO_CANCEL"},
       {"1", "UNKNOWN_ORDER"},
       {"2", "BROKER_OPTION"},
       {"3", "ORDER_ALREADY_IN_PENDING_CANCEL_OR_PENDING_REPLACE_STATUS"}}};
    schema[103] =
      fix::FieldDef{103,
                    "OrdRejReason",
                    {{"0", "BROKER_OPTION"},
                     {"1", "UNKNOWN_SYMBOL"},
                     {"2", "EXCHANGE_CLOSED"},
                     {"3", "ORDER_EXCEEDS_LIMIT"},
                     {"4", "TOO_LATE_TO_ENTER"},
                     {"5", "UNKNOWN_ORDER"},
                     {"6", "DUPLICATE_ORDER"},
                     {"7", "DUPLICATE_OF_A_VERBALLY_COMMUNICATED_ORDER"},
                     {"8", "STALE_ORDER"}}};
    schema[100] = fix::FieldDef{100, "ExDestination"};
    schema[106] = fix::FieldDef{106, "Issuer"};
    schema[107] = fix::FieldDef{107, "SecurityDesc"};
    schema[104] = fix::FieldDef{104,
                                "IOIQualifier",
                                {{"A", "ALL_OR_NONE"},
                                 {"C", "AT_THE_CLOSE"},
                                 {"I", "IN_TOUCH_WITH"},
                                 {"L", "LIMIT"},
                                 {"M", "MORE_BEHIND"},
                                 {"O", "AT_THE_OPEN"},
                                 {"P", "TAKING_A_POSITION"},
                                 {"Q", "AT_THE_MARKET"},
                                 {"R", "READY_TO_TRADE"},
                                 {"S", "PORTFOLIO_SHOW_N"},
                                 {"T", "THROUGH_THE_DAY"},
                                 {"V", "VERSUS"},
                                 {"W", "INDICATION"},
                                 {"X", "CROSSING_OPPORTUNITY"},
                                 {"Y", "AT_THE_MIDPOINT"},
                                 {"Z", "PRE_OPEN"}}};
    schema[105] = fix::FieldDef{105, "WaveNo"};
    schema[39] = fix::FieldDef{39,
                               "OrdStatus",
                               {{"0", "NEW"},
                                {"1", "PARTIALLY_FILLED"},
                                {"2", "FILLED"},
                                {"3", "DONE_FOR_DAY"},
                                {"4", "CANCELED"},
                                {"5", "REPLACED"},
                                {"6", "PENDING_CANCEL"},
                                {"7", "STOPPED"},
                                {"8", "REJECTED"},
                                {"9", "SUSPENDED"},
                                {"A", "PENDING_NEW"},
                                {"B", "CALCULATED"},
                                {"C", "EXPIRED"},
                                {"D", "ACCEPTED_FOR_BIDDING"},
                                {"E", "PENDING_REPLACE"}}};
    schema[38] = fix::FieldDef{38, "OrderQty"};
    schema[33] = fix::FieldDef{33, "LinesOfText"};
    schema[32] = fix::FieldDef{32, "LastShares"};
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
                                {"B", "NEWS"},
                                {"b", "QUOTE_ACKNOWLEDGEMENT"},
                                {"C", "EMAIL"},
                                {"c", "SECURITY_DEFINITION_REQUEST"},
                                {"D", "ORDER_SINGLE"},
                                {"d", "SECURITY_DEFINITION"},
                                {"E", "ORDER_LIST"},
                                {"e", "SECURITY_STATUS_REQUEST"},
                                {"f", "SECURITY_STATUS"},
                                {"F", "ORDER_CANCEL_REQUEST"},
                                {"G", "ORDER_CANCEL_REPLACE_REQUEST"},
                                {"g", "TRADING_SESSION_STATUS_REQUEST"},
                                {"H", "ORDER_STATUS_REQUEST"},
                                {"h", "TRADING_SESSION_STATUS"},
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
                                {"P", "ALLOCATION_ACK"},
                                {"Q", "DONT_KNOW_TRADE"},
                                {"R", "QUOTE_REQUEST"},
                                {"S", "QUOTE"},
                                {"T", "SETTLEMENT_INSTRUCTIONS"},
                                {"V", "MARKET_DATA_REQUEST"},
                                {"W", "MARKET_DATA_SNAPSHOT_FULL_REFRESH"},
                                {"X", "MARKET_DATA_INCREMENTAL_REFRESH"},
                                {"Y", "MARKET_DATA_REQUEST_REJECT"},
                                {"Z", "QUOTE_CANCEL"}}};
    schema[34] = fix::FieldDef{34, "MsgSeqNum"};
    schema[438] = fix::FieldDef{438, "ContraTradeTime"};
    schema[439] = fix::FieldDef{439, "ClearingFirm"};
    schema[436] = fix::FieldDef{436, "UnderlyingContractMultiplier"};
    schema[437] = fix::FieldDef{437, "ContraTradeQty"};
    schema[434] = fix::FieldDef{
      434,
      "CxlRejResponseTo",
      {{"1", "ORDER_CANCEL_REQUEST"}, {"2", "ORDER_CANCEL_REPLACE_REQUEST"}}};
    schema[435] = fix::FieldDef{435, "UnderlyingCouponRate"};
    schema[432] = fix::FieldDef{432, "ExpireDate"};
    schema[433] = fix::FieldDef{
      433,
      "ListExecInstType",
      {{"1", "IMMEDIATE"}, {"2", "WAIT_FOR_EXECUTE_INSTRUCTION"}}};
    schema[430] =
      fix::FieldDef{430, "NetGrossInd", {{"1", "NET"}, {"2", "GROSS"}}};
    schema[431] = fix::FieldDef{431, "ListOrderStatus"};
    schema[339] = fix::FieldDef{
      339,
      "TradSesMode",
      {{"1", "TESTING"}, {"2", "SIMULATED"}, {"3", "PRODUCTION"}}};
    schema[338] = fix::FieldDef{
      338,
      "TradSesMethod",
      {{"1", "ELECTRONIC"}, {"2", "OPEN_OUTCRY"}, {"3", "TWO_PARTY"}}};
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
                               {{"0", "NONE"},
                                {"1", "PKCS"},
                                {"2", "DES"},
                                {"3", "PKCS_DES"},
                                {"4", "PGP_DES"},
                                {"5", "PGP_DES_MD5"},
                                {"6", "PEM_DES_MD5"}}};
    schema[91] = fix::FieldDef{91, "SecureData"};
    schema[90] = fix::FieldDef{90, "SecureDataLen"};
    schema[93] = fix::FieldDef{93, "SignatureLength"};
    schema[92] = fix::FieldDef{92, "BrokerOfCredit"};
    schema[95] = fix::FieldDef{95, "RawDataLength"};
    schema[94] = fix::FieldDef{
      94, "EmailType", {{"0", "NEW"}, {"1", "REPLY"}, {"2", "ADMIN_REPLY"}}};
    schema[97] = fix::FieldDef{97, "PossResend", {{"N", "NO"}, {"Y", "YES"}}};
    schema[96] = fix::FieldDef{96, "RawData"};
    schema[231] = fix::FieldDef{231, "ContractMultiplier"};
    schema[1] = fix::FieldDef{1, "Account"};
    schema[146] = fix::FieldDef{146, "NoRelatedSym"};
    schema[147] = fix::FieldDef{147, "Subject"};
    schema[144] = fix::FieldDef{144, "OnBehalfOfLocationID"};
    schema[145] = fix::FieldDef{145, "DeliverToLocationID"};
    schema[142] = fix::FieldDef{142, "SenderLocationID"};
    schema[143] = fix::FieldDef{143, "TargetLocationID"};
    schema[140] = fix::FieldDef{140, "PrevClosePx"};
    schema[141] =
      fix::FieldDef{141, "ResetSeqNumFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[148] = fix::FieldDef{148, "Headline"};
    schema[149] = fix::FieldDef{149, "URLLink"};
    schema[133] = fix::FieldDef{133, "OfferPx"};
    schema[132] = fix::FieldDef{132, "BidPx"};
    schema[131] = fix::FieldDef{131, "QuoteReqID"};
    schema[130] =
      fix::FieldDef{130, "IOINaturalFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[137] = fix::FieldDef{137, "MiscFeeAmt"};
    schema[136] = fix::FieldDef{136, "NoMiscFees"};
    schema[135] = fix::FieldDef{135, "OfferSize"};
    schema[134] = fix::FieldDef{134, "BidSize"};
    schema[139] = fix::FieldDef{139,
                                "MiscFeeType",
                                {{"1", "REGULATORY"},
                                 {"2", "TAX"},
                                 {"3", "LOCAL_COMMISSION"},
                                 {"4", "EXCHANGE_FEES"},
                                 {"5", "STAMP"},
                                 {"6", "LEVY"},
                                 {"7", "OTHER"},
                                 {"8", "MARKUP"},
                                 {"9", "CONSUMPTION_TAX"}}};
    schema[138] = fix::FieldDef{138, "MiscFeeCurr"};
    schema[24] = fix::FieldDef{24, "IOIOthSvc"};
    schema[25] = fix::FieldDef{
      25, "IOIQltyInd", {{"H", "HIGH"}, {"L", "LOW"}, {"M", "MEDIUM"}}};
    schema[26] = fix::FieldDef{26, "IOIRefID"};
    schema[27] = fix::FieldDef{
      27, "IOIShares", {{"L", "LARGE"}, {"M", "MEDIUM"}, {"S", "SMALL"}}};
    schema[20] = fix::FieldDef{
      20,
      "ExecTransType",
      {{"0", "NEW"}, {"1", "CANCEL"}, {"2", "CORRECT"}, {"3", "STATUS"}}};
    schema[21] = fix::FieldDef{
      21,
      "HandlInst",
      {{"1", "AUTOMATED_EXECUTION_ORDER_PRIVATE_NO_BROKER_INTERVENTION"},
       {"2", "AUTOMATED_EXECUTION_ORDER_PUBLIC_BROKER_INTERVENTION_OK"},
       {"3", "MANUAL_ORDER_BEST_EXECUTION"}}};
    schema[22] = fix::FieldDef{22,
                               "IDSource",
                               {{"1", "CUSIP"},
                                {"2", "SEDOL"},
                                {"3", "QUIK"},
                                {"4", "ISIN_NUMBER"},
                                {"5", "RIC_CODE"},
                                {"6", "ISO_CURRENCY_CODE"},
                                {"7", "ISO_COUNTRY_CODE"},
                                {"8", "EXCHANGE_SYMBOL"},
                                {"9", "CONSOLIDATED_TAPE_ASSOCIATION"}}};
    schema[23] = fix::FieldDef{23, "IOIid"};
    schema[28] = fix::FieldDef{
      28, "IOITransType", {{"C", "CANCEL"}, {"N", "NEW"}, {"R", "REPLACE"}}};
    schema[29] = fix::FieldDef{29,
                               "LastCapacity",
                               {{"1", "AGENT"},
                                {"2", "CROSS_AS_AGENT"},
                                {"3", "CROSS_AS_PRINCIPAL"},
                                {"4", "PRINCIPAL"}}};
    schema[407] = fix::FieldDef{407, "OutsideIndexPct"};
    schema[406] = fix::FieldDef{406, "FairValue"};
    schema[405] = fix::FieldDef{405, "EFPTrackingError"};
    schema[404] = fix::FieldDef{404, "LiquidityValue"};
    schema[403] = fix::FieldDef{403, "LiquidityPctHigh"};
    schema[402] = fix::FieldDef{402, "LiquidityPctLow"};
    schema[401] = fix::FieldDef{401, "SideValueInd"};
    schema[400] = fix::FieldDef{400, "BidDescriptor"};
    schema[409] = fix::FieldDef{409,
                                "LiquidityIndType",
                                {{"1", "5_DAY_MOVING_AVERAGE"},
                                 {"2", "20_DAY_MOVING_AVERAGE"},
                                 {"3", "NORMAL_MARKET_SIZE"},
                                 {"4", "OTHER"}}};
    schema[408] = fix::FieldDef{408, "ValueOfFutures"};
    schema[379] = fix::FieldDef{379, "BusinessRejectRefID"};
    schema[378] = fix::FieldDef{378,
                                "ExecRestatementReason",
                                {{"0", "GT_CORPORATE_ACTION"},
                                 {"1", "GT_RENEWAL"},
                                 {"2", "VERBAL_CHANGE"},
                                 {"3", "REPRICING_OF_ORDER"},
                                 {"4", "BROKER_OPTION"},
                                 {"5", "PARTIAL_DECLINE_OF_ORDERQTY"}}};
    schema[371] = fix::FieldDef{371, "RefTagID"};
    schema[370] = fix::FieldDef{370, "OnBehalfOfSendingTime"};
    schema[373] = fix::FieldDef{373,
                                "SessionRejectReason",
                                {{"0", "INVALID_TAG_NUMBER"},
                                 {"1", "REQUIRED_TAG_MISSING"},
                                 {"10", "SENDINGTIME_ACCURACY_PROBLEM"},
                                 {"11", "INVALID_MSGTYPE"},
                                 {"2", "TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE"},
                                 {"3", "UNDEFINED_TAG"},
                                 {"4", "TAG_SPECIFIED_WITHOUT_A_VALUE"},
                                 {"5", "VALUE_IS_INCORRECT"},
                                 {"6", "INCORRECT_DATA_FORMAT_FOR_VALUE"},
                                 {"7", "DECRYPTION_PROBLEM"},
                                 {"8", "SIGNATURE_PROBLEM"},
                                 {"9", "COMPID_PROBLEM"}}};
    schema[372] = fix::FieldDef{372, "RefMsgType"};
    schema[375] = fix::FieldDef{375, "ContraBroker"};
    schema[374] =
      fix::FieldDef{374, "BidRequestTransType", {{"C", "CANCEL"}, {"N", "NO"}}};
    schema[377] =
      fix::FieldDef{377, "SolicitedFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[376] = fix::FieldDef{376, "ComplianceID"};
    schema[393] = fix::FieldDef{393, "TotalNumSecurities"};
    schema[392] = fix::FieldDef{392, "ListName"};
    schema[88] = fix::FieldDef{88,
                               "AllocRejCode",
                               {{"0", "UNKNOWN_ACCOUNT"},
                                {"1", "INCORRECT_QUANTITY"},
                                {"2", "INCORRECT_AVERAGE_PRICE"},
                                {"3", "UNKNOWN_EXECUTING_BROKER_MNEMONIC"},
                                {"4", "COMMISSION_DIFFERENCE"},
                                {"5", "UNKNOWN_ORDERID"},
                                {"6", "UNKNOWN_LISTID"},
                                {"7", "OTHER"}}};
    schema[89] = fix::FieldDef{89, "Signature"};
    schema[397] = fix::FieldDef{397, "SideValue2"};
    schema[396] = fix::FieldDef{396, "SideValue1"};
    schema[395] = fix::FieldDef{395, "NumTickets"};
    schema[394] = fix::FieldDef{394, "BidType"};
    schema[82] = fix::FieldDef{82, "NoRpts"};
    schema[83] = fix::FieldDef{83, "RptSeq"};
    schema[80] = fix::FieldDef{80, "AllocShares"};
    schema[81] = fix::FieldDef{81,
                               "ProcessCode",
                               {{"0", "REGULAR"},
                                {"1", "SOFT_DOLLAR"},
                                {"2", "STEP_IN"},
                                {"3", "STEP_OUT"},
                                {"4", "SOFT_DOLLAR_STEP_IN"},
                                {"5", "SOFT_DOLLAR_STEP_OUT"},
                                {"6", "PLAN_SPONSOR"}}};
    schema[86] = fix::FieldDef{86, "DlvyInst"};
    schema[87] = fix::FieldDef{87,
                               "AllocStatus",
                               {{"0", "ACCEPTED"},
                                {"1", "REJECTED"},
                                {"2", "PARTIAL_ACCEPT"},
                                {"3", "RECEIVED"}}};
    schema[84] = fix::FieldDef{84, "CxlQty"};
    schema[85] = fix::FieldDef{85, "NoDlvyInst"};
    schema[7] = fix::FieldDef{7, "BeginSeqNo"};
    schema[179] = fix::FieldDef{179, "SecuritySettlAgentAcctName"};
    schema[178] = fix::FieldDef{178, "SecuritySettlAgentAcctNum"};
    schema[177] = fix::FieldDef{177, "SecuritySettlAgentCode"};
    schema[176] = fix::FieldDef{176, "SecuritySettlAgentName"};
    schema[175] = fix::FieldDef{175, "SettlInstCode"};
    schema[174] = fix::FieldDef{174, "SettlBrkrCode"};
    schema[173] = fix::FieldDef{173, "SettlDepositoryCode"};
    schema[172] = fix::FieldDef{172, "SettlDeliveryType"};
    schema[171] = fix::FieldDef{171, "StandInstDbID"};
    schema[170] = fix::FieldDef{170, "StandInstDbName"};
    schema[182] = fix::FieldDef{182, "CashSettlAgentName"};
    schema[183] = fix::FieldDef{183, "CashSettlAgentCode"};
    schema[180] = fix::FieldDef{180, "SecuritySettlAgentContactName"};
    schema[181] = fix::FieldDef{181, "SecuritySettlAgentContactPhone"};
    schema[186] = fix::FieldDef{186, "CashSettlAgentContactName"};
    schema[187] = fix::FieldDef{187, "CashSettlAgentContactPhone"};
    schema[184] = fix::FieldDef{184, "CashSettlAgentAcctNum"};
    schema[185] = fix::FieldDef{185, "CashSettlAgentAcctName"};
    schema[188] = fix::FieldDef{188, "BidSpotRate"};
    schema[189] = fix::FieldDef{189, "BidForwardPoints"};
    schema[11] = fix::FieldDef{11, "ClOrdID"};
    schema[10] = fix::FieldDef{10, "CheckSum"};
    schema[13] = fix::FieldDef{
      13,
      "CommType",
      {{"1", "PER_SHARE"}, {"2", "PERCENTAGE"}, {"3", "ABSOLUTE"}}};
    schema[12] = fix::FieldDef{12, "Commission"};
    schema[15] = fix::FieldDef{15, "Currency"};
    schema[14] = fix::FieldDef{14, "CumQty"};
    schema[17] = fix::FieldDef{17, "ExecID"};
    schema[16] = fix::FieldDef{16, "EndSeqNo"};
    schema[19] = fix::FieldDef{19, "ExecRefID"};
    schema[18] = fix::FieldDef{
      18,
      "ExecInst",
      {{"0", "STAY_ON_OFFERSIDE"},
       {"1", "NOT_HELD"},
       {"2", "WORK"},
       {"3", "GO_ALONG"},
       {"4", "OVER_THE_DAY"},
       {"5", "HELD"},
       {"6", "PARTICIPATE_DONT_INITIATE"},
       {"7", "STRICT_SCALE"},
       {"8", "TRY_TO_SCALE"},
       {"9", "STAY_ON_BIDSIDE"},
       {"A", "NO_CROSS"},
       {"B", "OK_TO_CROSS"},
       {"C", "CALL_FIRST"},
       {"D", "PERCENT_OF_VOLUME"},
       {"E", "DO_NOT_INCREASE"},
       {"F", "DO_NOT_REDUCE"},
       {"G", "ALL_OR_NONE"},
       {"I", "INSTITUTIONS_ONLY"},
       {"L", "LAST_PEG"},
       {"M", "MID_PRICE_PEG"},
       {"N", "NON_NEGOTIABLE"},
       {"O", "OPENING_PEG"},
       {"P", "MARKET_PEG"},
       {"R", "PRIMARY_PEG"},
       {"S", "SUSPEND"},
       {"T", "FIXED_PEG_TO_LOCAL_BEST_BID_OR_OFFER_AT_TIME_OF_ORDER"},
       {"U", "CUSTOMER_DISPLAY_INSTRUCTION"},
       {"V", "NETTING"},
       {"W", "PEG_TO_VWAP"}}};
    schema[322] = fix::FieldDef{322, "SecurityResponseID"};
    schema[323] = fix::FieldDef{
      323,
      "SecurityResponseType",
      {{"1", "ACCEPT_SECURITY_PROPOSAL_AS_IS"},
       {"2",
        "ACCEPT_SECURITY_PROPOSAL_WITH_REVISIONS_AS_INDICATED_IN_THE_MESSAGE"},
       {"3", "LIST_OF_SECURITY_TYPES_RETURNED_PER_REQUEST"},
       {"4", "LIST_OF_SECURITIES_RETURNED_PER_REQUEST"},
       {"5", "REJECT_SECURITY_PROPOSAL"},
       {"6", "CAN_NOT_MATCH_SELECTION_CRITERIA"}}};
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
                                {{"1", "OPENING_DELAY"},
                                 {"10", "MARKET_ON_CLOSE_IMBALANCE_SELL"},
                                 {"12", "NO_MARKET_IMBALANCE"},
                                 {"13", "NO_MARKET_ON_CLOSE_IMBALANCE"},
                                 {"14", "ITS_PRE_OPENING"},
                                 {"15", "NEW_PRICE_INDICATION"},
                                 {"16", "TRADE_DISSEMINATION_TIME"},
                                 {"17", "READY_TO_TRADE"},
                                 {"18", "NOT_AVAILABLE_FOR_TRADING"},
                                 {"19", "NOT_TRADED_ON_THIS_MARKET"},
                                 {"2", "TRADING_HALT"},
                                 {"20", "UNKNOWN_OR_INVALID"},
                                 {"3", "RESUME"},
                                 {"4", "NO_OPEN_NO_RESUME"},
                                 {"5", "PRICE_INDICATION"},
                                 {"6", "TRADING_RANGE_INDICATION"},
                                 {"7", "MARKET_IMBALANCE_BUY"},
                                 {"8", "MARKET_IMBALANCE_SELL"},
                                 {"9", "MARKET_ON_CLOSE_IMBALANCE_BUY"}}};
    schema[327] = fix::FieldDef{327,
                                "HaltReasonChar",
                                {{"D", "NEWS_DISSEMINATION"},
                                 {"E", "ORDER_INFLUX"},
                                 {"I", "ORDER_IMBALANCE"},
                                 {"M", "ADDITIONAL_INFORMATION"},
                                 {"P", "NEWS_PENDING"},
                                 {"X", "EQUIPMENT_CHANGEOVER"}}};
    schema[324] = fix::FieldDef{324, "SecurityStatusReqID"};
    schema[325] =
      fix::FieldDef{325, "UnsolicitedIndicator", {{"N", "NO"}, {"Y", "YES"}}};
    schema[328] =
      fix::FieldDef{328, "InViewOfCommon", {{"N", "NO"}, {"Y", "YES"}}};
    schema[329] =
      fix::FieldDef{329, "DueToRelated", {{"N", "NO"}, {"Y", "YES"}}};
    schema[201] =
      fix::FieldDef{201, "PutOrCall", {{"0", "PUT"}, {"1", "CALL"}}};
    schema[200] = fix::FieldDef{200, "MaturityMonthYear"};
    schema[203] = fix::FieldDef{
      203, "CoveredOrUncovered", {{"0", "COVERED"}, {"1", "UNCOVERED"}}};
    schema[202] = fix::FieldDef{202, "StrikePrice"};
    schema[205] = fix::FieldDef{205, "MaturityDay"};
    schema[204] =
      fix::FieldDef{204, "CustomerOrFirm", {{"0", "CUSTOMER"}, {"1", "FIRM"}}};
    schema[207] = fix::FieldDef{207, "SecurityExchange"};
    schema[206] = fix::FieldDef{206, "OptAttribute"};
    schema[209] = fix::FieldDef{
      209,
      "AllocHandlInst",
      {{"1", "MATCH"}, {"2", "FORWARD"}, {"3", "FORWARD_AND_MATCH"}}};
    schema[208] =
      fix::FieldDef{208, "NotifyBrokerOfCredit", {{"N", "NO"}, {"Y", "YES"}}};
    schema[77] =
      fix::FieldDef{77, "OpenClose", {{"C", "CLOSE"}, {"O", "OPEN"}}};
    schema[76] = fix::FieldDef{76, "ExecBroker"};
    schema[75] = fix::FieldDef{75, "TradeDate"};
    schema[74] = fix::FieldDef{74, "AvgPrxPrecision"};
    schema[73] = fix::FieldDef{73, "NoOrders"};
    schema[72] = fix::FieldDef{72, "RefAllocID"};
    schema[71] = fix::FieldDef{71,
                               "AllocTransType",
                               {{"0", "NEW"},
                                {"1", "REPLACE"},
                                {"2", "CANCEL"},
                                {"3", "PRELIMINARY"},
                                {"4", "CALCULATED"},
                                {"5", "CALCULATED_WITHOUT_PRELIMINARY"}}};
    schema[70] = fix::FieldDef{70, "AllocID"};
    schema[79] = fix::FieldDef{79, "AllocAccount"};
    schema[78] = fix::FieldDef{78, "NoAllocs"};
    schema[2] = fix::FieldDef{2, "AdvId"};
    schema[8] = fix::FieldDef{8, "BeginString"};
    schema[120] = fix::FieldDef{120, "SettlCurrency"};
    schema[121] = fix::FieldDef{121, "ForexReq", {{"N", "NO"}, {"Y", "YES"}}};
    schema[122] = fix::FieldDef{122, "OrigSendingTime"};
    schema[123] =
      fix::FieldDef{123, "GapFillFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[124] = fix::FieldDef{124, "NoExecs"};
    schema[125] = fix::FieldDef{125, "CxlType"};
    schema[126] = fix::FieldDef{126, "ExpireTime"};
    schema[127] = fix::FieldDef{127,
                                "DKReason",
                                {{"A", "UNKNOWN_SYMBOL"},
                                 {"B", "WRONG_SIDE"},
                                 {"C", "QUANTITY_EXCEEDS_ORDER"},
                                 {"D", "NO_MATCHING_ORDER"},
                                 {"E", "PRICE_EXCEEDS_LIMIT"},
                                 {"Z", "OTHER"}}};
    schema[128] = fix::FieldDef{128, "DeliverToCompID"};
    schema[129] = fix::FieldDef{129, "DeliverToSubID"};
    schema[414] = fix::FieldDef{
      414,
      "ProgRptReqs",
      {{"1", "BUYSIDE_EXPLICITLY_REQUESTS_STATUS_USING_STATUSREQUEST"},
       {"2", "SELLSIDE_PERIODICALLY_SENDS_STATUS_USING_LISTSTATUS_PERIOD_"
             "OPTIONALLY_SPECIFIED_IN_PROGRESSPERIOD"},
       {"3", "REAL_TIME_EXECUTION_REPORTS"}}};
    schema[415] = fix::FieldDef{415, "ProgPeriodInterval"};
    schema[416] =
      fix::FieldDef{416, "IncTaxInd", {{"1", "NET"}, {"2", "GROSS"}}};
    schema[417] = fix::FieldDef{417, "NumBidders"};
    schema[410] = fix::FieldDef{410, "WtAverageLiquidity"};
    schema[411] =
      fix::FieldDef{411, "ExchangeForPhysical", {{"N", "NO"}, {"Y", "YES"}}};
    schema[412] = fix::FieldDef{412, "OutMainCntryUIndex"};
    schema[413] = fix::FieldDef{413, "CrossPercent"};
    schema[418] = fix::FieldDef{418,
                                "TradeType",
                                {{"A", "AGENCY"},
                                 {"G", "VWAP_GUARANTEE"},
                                 {"J", "GUARANTEED_CLOSE"},
                                 {"R", "RISK_TRADE"}}};
    schema[419] =
      fix::FieldDef{419,
                    "BasisPxType",
                    {{"2", "CLOSING_PRICE_AT_MORNING_SESSION"},
                     {"3", "CLOSING_PRICE"},
                     {"4", "CURRENT_PRICE"},
                     {"5", "SQ"},
                     {"6", "VWAP_THROUGH_A_DAY"},
                     {"7", "VWAP_THROUGH_A_MORNING_SESSION"},
                     {"8", "VWAP_THROUGH_AN_AFTERNOON_SESSION"},
                     {"9", "VWAP_THROUGH_A_DAY_EXCEPT_YORI"},
                     {"A", "VWAP_THROUGH_A_MORNING_SESSION_EXCEPT_YORI"},
                     {"B", "VWAP_THROUGH_AN_AFTERNOON_SESSION_EXCEPT_YORI"},
                     {"C", "STRIKE"},
                     {"D", "OPEN"},
                     {"Z", "OTHERS"}}};
    schema[319] = fix::FieldDef{319, "RatioQty"};
    schema[318] = fix::FieldDef{318, "UnderlyingCurrency"};
    schema[313] = fix::FieldDef{313, "UnderlyingMaturityMonthYear"};
    schema[312] = fix::FieldDef{312, "UnderlyingSymbolSfx"};
    schema[311] = fix::FieldDef{311, "UnderlyingSymbol"};
    schema[310] = fix::FieldDef{310, "UnderlyingSecurityType"};
    schema[317] = fix::FieldDef{317, "UnderlyingOptAttribute"};
    schema[316] = fix::FieldDef{316, "UnderlyingStrikePrice"};
    schema[315] = fix::FieldDef{315, "UnderlyingPutOrCall"};
    schema[314] = fix::FieldDef{314, "UnderlyingMaturityDay"};
    schema[3] = fix::FieldDef{3, "AdvRefID"};
    schema[368] = fix::FieldDef{368,
                                "QuoteEntryRejectReason",
                                {{"1", "UNKNOWN_SYMBOL"},
                                 {"2", "EXCHANGE"},
                                 {"3", "QUOTE_EXCEEDS_LIMIT"},
                                 {"4", "TOO_LATE_TO_ENTER"},
                                 {"5", "UNKNOWN_QUOTE"},
                                 {"6", "DUPLICATE_QUOTE"},
                                 {"7", "INVALID_BID_ASK_SPREAD"},
                                 {"8", "INVALID_PRICE"},
                                 {"9", "NOT_AUTHORIZED_TO_QUOTE_SECURITY"}}};
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
                    {{"0", "OTHER"},
                     {"1", "UNKOWN_ID"},
                     {"2", "UNKNOWN_SECURITY"},
                     {"3", "UNSUPPORTED_MESSAGE_TYPE"},
                     {"4", "APPLICATION_NOT_AVAILABLE"},
                     {"5", "CONDITIONALLY_REQUIRED_FIELD_MISSING"}}};
    schema[381] = fix::FieldDef{381, "GrossTradeAmt"};
    schema[382] = fix::FieldDef{382, "NoContraBrokers"};
    schema[383] = fix::FieldDef{383, "MaxMessageSize"};
    schema[384] = fix::FieldDef{384, "NoMsgTypes"};
    schema[385] =
      fix::FieldDef{385, "MsgDirection", {{"R", "RECEIVE"}, {"S", "SEND"}}};
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
    schema[60] = fix::FieldDef{60, "TransactTime"};
    schema[61] = fix::FieldDef{
      61, "Urgency", {{"0", "NORMAL"}, {"1", "FLASH"}, {"2", "BACKGROUND"}}};
    schema[62] = fix::FieldDef{62, "ValidUntilTime"};
    schema[63] = fix::FieldDef{63,
                               "SettlmntTyp",
                               {{"0", "REGULAR"},
                                {"1", "CASH"},
                                {"2", "NEXT_DAY"},
                                {"3", "T_PLUS_2"},
                                {"4", "T_PLUS_3"},
                                {"5", "T_PLUS_4"},
                                {"6", "FUTURE"},
                                {"7", "WHEN_ISSUED"},
                                {"8", "SELLERS_OPTION"},
                                {"9", "T_PLUS_5"}}};
    schema[64] = fix::FieldDef{64, "FutSettDate"};
    schema[65] = fix::FieldDef{65, "SymbolSfx"};
    schema[66] = fix::FieldDef{66, "ListID"};
    schema[67] = fix::FieldDef{67, "ListSeqNo"};
    schema[68] = fix::FieldDef{68, "TotNoOrders"};
    schema[69] = fix::FieldDef{69, "ListExecInst"};
    schema[168] = fix::FieldDef{168, "EffectiveTime"};
    schema[169] = fix::FieldDef{169,
                                "StandInstDbType",
                                {{"0", "OTHER"},
                                 {"1", "DTC_SID"},
                                 {"2", "THOMSON_ALERT"},
                                 {"3", "A_GLOBAL_CUSTODIAN"}}};
    schema[164] = fix::FieldDef{164, "EmailThreadID"};
    schema[165] = fix::FieldDef{
      165,
      "SettlInstSource",
      {{"1", "BROKERS_INSTRUCTIONS"}, {"2", "INSTITUTIONS_INSTRUCTIONS"}}};
    schema[166] =
      fix::FieldDef{166,
                    "SettlLocation",
                    {{"CED", "CEDEL"},
                     {"DTC", "DEPOSITORY_TRUST_COMPANY"},
                     {"EUR", "EUROCLEAR"},
                     {"FED", "FEDERAL_BOOK_ENTRY"},
                     {"ISO Country Code", "LOCAL_MARKET_SETTLE_LOCATION"},
                     {"PNY", "PHYSICAL"},
                     {"PTC", "PARTICIPANT_TRUST_COMPANY"}}};
    schema[167] =
      fix::FieldDef{167,
                    "SecurityType",
                    {{"?", "WILDCARD_ENTRY"},
                     {"BA", "BANKERS_ACCEPTANCE"},
                     {"CB", "CONVERTIBLE_BOND"},
                     {"CD", "CERTIFICATE_OF_DEPOSIT"},
                     {"CMO", "COLLATERALIZE_MORTGAGE_OBLIGATION"},
                     {"CORP", "CORPORATE_BOND"},
                     {"CP", "COMMERCIAL_PAPER"},
                     {"CPP", "CORPORATE_PRIVATE_PLACEMENT"},
                     {"CS", "COMMON_STOCK"},
                     {"FHA", "FEDERAL_HOUSING_AUTHORITY"},
                     {"FHL", "FEDERAL_HOME_LOAN"},
                     {"FN", "FEDERAL_NATIONAL_MORTGAGE_ASSOCIATION"},
                     {"FOR", "FOREIGN_EXCHANGE_CONTRACT"},
                     {"FUT", "FUTURE"},
                     {"GN", "GOVERNMENT_NATIONAL_MORTGAGE_ASSOCIATION"},
                     {"GOVT", "TREASURIES_PLUS_AGENCY_DEBENTURE"},
                     {"IET", "MORTGAGE_IOETTE"},
                     {"MF", "MUTUAL_FUND"},
                     {"MIO", "MORTGAGE_INTEREST_ONLY"},
                     {"MPO", "MORTGAGE_PRINCIPAL_ONLY"},
                     {"MPP", "MORTGAGE_PRIVATE_PLACEMENT"},
                     {"MPT", "MISCELLANEOUS_PASS_THRU"},
                     {"MUNI", "MUNICIPAL_BOND"},
                     {"NONE", "NO_ISITC_SECURITY_TYPE"},
                     {"OPT", "OPTION"},
                     {"PS", "PREFERRED_STOCK"},
                     {"RP", "REPURCHASE_AGREEMENT"},
                     {"RVRP", "REVERSE_REPURCHASE_AGREEMENT"},
                     {"SL", "STUDENT_LOAN_MARKETING_ASSOCIATION"},
                     {"TD", "TIME_DEPOSIT"},
                     {"USTB", "US_TREASURY_BILL"},
                     {"WAR", "WARRANT"},
                     {"ZOO", "CATS_TIGERS_LIONS"}}};
    schema[160] =
      fix::FieldDef{160,
                    "SettlInstMode",
                    {{"0", "DEFAULT"},
                     {"1", "STANDING_INSTRUCTIONS_PROVIDED"},
                     {"2", "SPECIFIC_ALLOCATION_ACCOUNT_OVERRIDING"},
                     {"3", "SPECIFIC_ALLOCATION_ACCOUNT_STANDING"}}};
    schema[161] = fix::FieldDef{161, "AllocText"};
    schema[162] = fix::FieldDef{162, "SettlInstID"};
    schema[163] =
      fix::FieldDef{163,
                    "SettlInstTransType",
                    {{"C", "CANCEL"}, {"N", "NEW"}, {"R", "REPLACE"}}};
    schema[9] = fix::FieldDef{9, "BodyLength"};
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
    schema[218] = fix::FieldDef{218, "SpreadToBenchmark"};
    schema[219] = fix::FieldDef{219,
                                "Benchmark",
                                {{"1", "CURVE"},
                                 {"2", "5_YR"},
                                 {"3", "OLD_5"},
                                 {"4", "10_YR"},
                                 {"5", "OLD_10"},
                                 {"6", "30_YR"},
                                 {"7", "OLD_30"},
                                 {"8", "3_MO_LIBOR"},
                                 {"9", "6_MO_LIBOR"}}};
    schema[289] = fix::FieldDef{289, "MDEntrySeller"};
    schema[288] = fix::FieldDef{288, "MDEntryBuyer"};
    schema[4] = fix::FieldDef{
      4,
      "AdvSide",
      {{"B", "BUY"}, {"S", "SELL"}, {"T", "TRADE"}, {"X", "CROSS"}}};
    schema[281] = fix::FieldDef{281,
                                "MDReqRejReason",
                                {{"0", "UNKNOWN_SYMBOL"},
                                 {"1", "DUPLICATE_MDREQID"},
                                 {"2", "INSUFFICIENT_BANDWIDTH"},
                                 {"3", "INSUFFICIENT_PERMISSIONS"},
                                 {"4", "UNSUPPORTED_SUBSCRIPTIONREQUESTTYPE"},
                                 {"5", "UNSUPPORTED_MARKETDEPTH"},
                                 {"6", "UNSUPPORTED_MDUPDATETYPE"},
                                 {"7", "UNSUPPORTED_AGGREGATEDBOOK"},
                                 {"8", "UNSUPPORTED_MDENTRYTYPE"}}};
    schema[280] = fix::FieldDef{280, "MDEntryRefID"};
    schema[283] = fix::FieldDef{283, "LocationID"};
    schema[282] = fix::FieldDef{282, "MDEntryOriginator"};
    schema[285] = fix::FieldDef{
      285, "DeleteReason", {{"0", "CANCELATION"}, {"1", "ERROR"}}};
    schema[284] = fix::FieldDef{284, "DeskID"};
    schema[287] = fix::FieldDef{287, "SellerDays"};
    schema[286] = fix::FieldDef{286,
                                "OpenCloseSettleFlag",
                                {{"0", "DAILY_OPEN"},
                                 {"1", "SESSION_OPEN"},
                                 {"2", "DELIVERY_SETTLEMENT_PRICE"}}};
    schema[263] =
      fix::FieldDef{263,
                    "SubscriptionRequestType",
                    {{"0", "SNAPSHOT"},
                     {"1", "SNAPSHOT_PLUS_UPDATES"},
                     {"2", "DISABLE_PREVIOUS_SNAPSHOT_PLUS_UPDATE_REQUEST"}}};
    schema[262] = fix::FieldDef{262, "MDReqID"};
    schema[267] = fix::FieldDef{267, "NoMDEntryTypes"};
    schema[266] =
      fix::FieldDef{266, "AggregatedBook", {{"N", "NO"}, {"Y", "YES"}}};
    schema[265] =
      fix::FieldDef{265,
                    "MDUpdateType",
                    {{"0", "FULL_REFRESH"}, {"1", "INCREMENTAL_REFRESH"}}};
    schema[264] = fix::FieldDef{264, "MarketDepth"};
    schema[269] = fix::FieldDef{269,
                                "MDEntryType",
                                {{"0", "BID"},
                                 {"1", "OFFER"},
                                 {"2", "TRADE"},
                                 {"3", "INDEX_VALUE"},
                                 {"4", "OPENING_PRICE"},
                                 {"5", "CLOSING_PRICE"},
                                 {"6", "SETTLEMENT_PRICE"},
                                 {"7", "TRADING_SESSION_HIGH_PRICE"},
                                 {"8", "TRADING_SESSION_LOW_PRICE"},
                                 {"9", "TRADING_SESSION_VWAP_PRICE"}}};
    schema[268] = fix::FieldDef{268, "NoMDEntries"};
    schema[59] = fix::FieldDef{59,
                               "TimeInForce",
                               {{"0", "DAY"},
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
                               {{"1", "BUY"},
                                {"2", "SELL"},
                                {"3", "BUY_MINUS"},
                                {"4", "SELL_PLUS"},
                                {"5", "SELL_SHORT"},
                                {"6", "SELL_SHORT_EXEMPT"},
                                {"7", "UNDISCLOSED"},
                                {"8", "CROSS"},
                                {"9", "CROSS_SHORT"}}};
    schema[57] = fix::FieldDef{57, "TargetSubID"};
    schema[56] = fix::FieldDef{56, "TargetCompID"};
    schema[51] = fix::FieldDef{51, "SendingDate"};
    schema[50] = fix::FieldDef{50, "SenderSubID"};
    schema[53] = fix::FieldDef{53, "Shares"};
    schema[52] = fix::FieldDef{52, "SendingTime"};
    schema[115] = fix::FieldDef{115, "OnBehalfOfCompID"};
    schema[114] = fix::FieldDef{114, "LocateReqd", {{"N", "NO"}, {"Y", "YES"}}};
    schema[117] = fix::FieldDef{117, "QuoteID"};
    schema[116] = fix::FieldDef{116, "OnBehalfOfSubID"};
    schema[111] = fix::FieldDef{111, "MaxFloor"};
    schema[110] = fix::FieldDef{110, "MinQty"};
    schema[113] =
      fix::FieldDef{113, "ReportToExch", {{"N", "NO"}, {"Y", "YES"}}};
    schema[112] = fix::FieldDef{112, "TestReqID"};
    schema[119] = fix::FieldDef{119, "SettlCurrAmt"};
    schema[118] = fix::FieldDef{118, "NetMoney"};
    schema[429] = fix::FieldDef{429, "ListStatusType"};
    schema[428] = fix::FieldDef{428, "NoStrikes"};
    schema[421] = fix::FieldDef{421, "Country"};
    schema[420] = fix::FieldDef{420, "NoBidComponents"};
    schema[423] = fix::FieldDef{
      423,
      "PriceType",
      {{"1", "PERCENTAGE"}, {"2", "PER_SHARE"}, {"3", "FIXED_AMOUNT"}}};
    schema[422] = fix::FieldDef{422, "TotNoStrikes"};
    schema[425] = fix::FieldDef{425, "DayCumQty"};
    schema[424] = fix::FieldDef{424, "DayOrderQty"};
    schema[427] = fix::FieldDef{
      427,
      "GTBookingInst",
      {{"0", "BOOK_OUT_ALL_TRADES_ON_DAY_OF_EXECUTION"},
       {"1", "ACCUMULATE_EXECUTIONS_UNTIL_ORDER_IS_FILLED_OR_EXPIRES"},
       {"2", "ACCUMULATE_UNTIL_VERBALLY_NOTIFIED_OTHERWISE"}}};
    schema[426] = fix::FieldDef{426, "DayAvgPx"};
    schema[308] = fix::FieldDef{308, "UnderlyingSecurityExchange"};
    schema[309] = fix::FieldDef{309, "UnderlyingSecurityID"};
    schema[300] = fix::FieldDef{300,
                                "QuoteRejectReason",
                                {{"1", "UNKNOWN_SYMBOL"},
                                 {"2", "EXCHANGE"},
                                 {"3", "QUOTE_REQUEST_EXCEEDS_LIMIT"},
                                 {"4", "TOO_LATE_TO_ENTER"},
                                 {"5", "UNKNOWN_QUOTE"},
                                 {"6", "DUPLICATE_QUOTE"},
                                 {"7", "INVALID_BID_ASK_SPREAD"},
                                 {"8", "INVALID_PRICE"},
                                 {"9", "NOT_AUTHORIZED_TO_QUOTE_SECURITY"}}};
    schema[301] =
      fix::FieldDef{301,
                    "QuoteResponseLevel",
                    {{"0", "NO_ACKNOWLEDGEMENT"},
                     {"1", "ACKNOWLEDGE_ONLY_NEGATIVE_OR_ERRONEOUS_QUOTES"},
                     {"2", "ACKNOWLEDGE_EACH_QUOTE_MESSAGES"}}};
    schema[302] = fix::FieldDef{302, "QuoteSetID"};
    schema[303] = fix::FieldDef{
      303, "QuoteRequestType", {{"1", "MANUAL"}, {"2", "AUTOMATIC"}}};
    schema[304] = fix::FieldDef{304, "TotQuoteEntries"};
    schema[305] = fix::FieldDef{305, "UnderlyingIDSource"};
    schema[306] = fix::FieldDef{306, "UnderlyingIssuer"};
    schema[307] = fix::FieldDef{307, "UnderlyingSecurityDesc"};
    schema[223] = fix::FieldDef{223, "CouponRate"};
    schema[391] = fix::FieldDef{391, "ClientBidID"};
    schema[390] = fix::FieldDef{390, "BidID"};
    schema[151] = fix::FieldDef{151, "LeavesQty"};
    schema[150] = fix::FieldDef{150,
                                "ExecType",
                                {{"0", "NEW"},
                                 {"1", "PARTIAL_FILL"},
                                 {"2", "FILL"},
                                 {"3", "DONE_FOR_DAY"},
                                 {"4", "CANCELED"},
                                 {"5", "REPLACE"},
                                 {"6", "PENDING_CANCEL"},
                                 {"7", "STOPPED"},
                                 {"8", "REJECTED"},
                                 {"9", "SUSPENDED"},
                                 {"A", "PENDING_NEW"},
                                 {"B", "CALCULATED"},
                                 {"C", "EXPIRED"},
                                 {"D", "RESTATED"},
                                 {"E", "PENDING_REPLACE"}}};
    schema[153] = fix::FieldDef{153, "AllocAvgPx"};
    schema[152] = fix::FieldDef{152, "CashOrderQty"};
    schema[155] = fix::FieldDef{155, "SettlCurrFxRate"};
    schema[154] = fix::FieldDef{154, "AllocNetMoney"};
    schema[157] = fix::FieldDef{157, "NumDaysInterest"};
    schema[156] = fix::FieldDef{
      156, "SettlCurrFxRateCalc", {{"M", "MULTIPLY"}, {"D", "DIVIDE"}}};
    schema[159] = fix::FieldDef{159, "AccruedInterestAmt"};
    schema[158] = fix::FieldDef{158, "AccruedInterestRate"};
    schema[399] = fix::FieldDef{399, "BidDescriptorType"};
    schema[398] = fix::FieldDef{398, "NoBidDescriptors"};
    schema[48] = fix::FieldDef{48, "SecurityID"};
    schema[49] = fix::FieldDef{49, "SenderCompID"};
    schema[46] = fix::FieldDef{46, "RelatdSym"};
    schema[47] = fix::FieldDef{
      47,
      "Rule80A",
      {{"A", "AGENCY_SINGLE_ORDER"},
       {"B", "SHORT_EXEMPT_TRANSACTION_B"},
       {"C", "PROGRAM_ORDER_NON_INDEX_ARB_FOR_MEMBER_FIRM_ORG"},
       {"D", "PROGRAM_ORDER_INDEX_ARB_FOR_MEMBER_FIRM_ORG"},
       {"E", "REGISTERED_EQUITY_MARKET_MAKER_TRADES"},
       {"F", "SHORT_EXEMPT_TRANSACTION_F"},
       {"H", "SHORT_EXEMPT_TRANSACTION_H"},
       {"I", "INDIVIDUAL_INVESTOR_SINGLE_ORDER"},
       {"J", "PROGRAM_ORDER_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER"},
       {"K", "PROGRAM_ORDER_NON_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER"},
       {"L", "SHORT_EXEMPT_TRANSACTION_FOR_MEMBER_COMPETING_MARKET_MAKER_"
             "AFFILIATED_WITH_THE_FIRM_CLEARING_THE_TRADE"},
       {"M", "PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_MEMBER"},
       {"N", "PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_MEMBER"},
       {"O", "COMPETING_DEALER_TRADES_O"},
       {"P", "PRINCIPAL"},
       {"R", "COMPETING_DEALER_TRADES_R"},
       {"S", "SPECIALIST_TRADES"},
       {"T", "COMPETING_DEALER_TRADES_T"},
       {"U", "PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_AGENCY"},
       {"W", "ALL_OTHER_ORDERS_AS_AGENT_FOR_OTHER_MEMBER"},
       {"X", "SHORT_EXEMPT_TRANSACTION_FOR_MEMBER_COMPETING_MARKET_MAKER_NOT_"
             "AFFILIATED_WITH_THE_FIRM_CLEARING_THE_TRADE"},
       {"Y", "PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_AGENCY"},
       {"Z",
        "SHORT_EXEMPT_TRANSACTION_FOR_NON_MEMBER_COMPETING_MARKET_MAKER"}}};
    schema[44] = fix::FieldDef{44, "Price"};
    schema[45] = fix::FieldDef{45, "RefSeqNum"};
    schema[42] = fix::FieldDef{42, "OrigTime"};
    schema[43] = fix::FieldDef{43, "PossDupFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[40] = fix::FieldDef{40,
                               "OrdType",
                               {{"1", "MARKET"},
                                {"2", "LIMIT"},
                                {"3", "STOP"},
                                {"4", "STOP_LIMIT"},
                                {"5", "MARKET_ON_CLOSE"},
                                {"6", "WITH_OR_WITHOUT"},
                                {"7", "LIMIT_OR_BETTER"},
                                {"8", "LIMIT_WITH_OR_WITHOUT"},
                                {"9", "ON_BASIS"},
                                {"A", "ON_CLOSE"},
                                {"B", "LIMIT_ON_CLOSE"},
                                {"C", "FOREX_C"},
                                {"D", "PREVIOUSLY_QUOTED"},
                                {"E", "PREVIOUSLY_INDICATED"},
                                {"F", "FOREX_F"},
                                {"G", "FOREX_G"},
                                {"H", "FOREX_H"},
                                {"I", "FUNARI"},
                                {"P", "PEGGED"}}};
    schema[41] = fix::FieldDef{41, "OrigClOrdID"};
    schema[5] = fix::FieldDef{
      5, "AdvTransType", {{"C", "CANCEL"}, {"N", "NEW"}, {"R", "REPLACE"}}};
    return schema;
  }
}
