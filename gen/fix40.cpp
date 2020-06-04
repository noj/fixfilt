#include "fix40.hpp"

namespace FIX40
{
  fix::Schema load_schema ()
  {
    fix::Schema schema;
    schema[1] = fix::FieldDef{1, "Account"};
    schema[2] = fix::FieldDef{2, "AdvId"};
    schema[3] = fix::FieldDef{3, "AdvRefID"};
    schema[4] = fix::FieldDef{
      4,
      "AdvSide",
      {{"B", "BUY"}, {"S", "SELL"}, {"T", "TRADE"}, {"X", "CROSS"}}};
    schema[5] = fix::FieldDef{
      5, "AdvTransType", {{"C", "CANCEL"}, {"N", "NEW"}, {"R", "REPLACE"}}};
    schema[6] = fix::FieldDef{6, "AvgPx"};
    schema[7] = fix::FieldDef{7, "BeginSeqNo"};
    schema[8] = fix::FieldDef{8, "BeginString"};
    schema[9] = fix::FieldDef{9, "BodyLength"};
    schema[10] = fix::FieldDef{10, "CheckSum"};
    schema[11] = fix::FieldDef{11, "ClOrdID"};
    schema[12] = fix::FieldDef{12, "Commission"};
    schema[13] = fix::FieldDef{
      13,
      "CommType",
      {{"1", "PER_SHARE"}, {"2", "PERCENTAGE"}, {"3", "ABSOLUTE"}}};
    schema[14] = fix::FieldDef{14, "CumQty"};
    schema[15] = fix::FieldDef{15, "Currency"};
    schema[16] = fix::FieldDef{16, "EndSeqNo"};
    schema[17] = fix::FieldDef{17, "ExecID"};
    schema[18] = fix::FieldDef{18,
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
                                {"S", "SUSPEND"}}};
    schema[19] = fix::FieldDef{19, "ExecRefID"};
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
                                {"5", "RIC_CODE"}}};
    schema[23] = fix::FieldDef{23, "IOIid"};
    schema[24] =
      fix::FieldDef{24, "IOIOthSvc", {{"A", "AUTEX"}, {"B", "BRIDGE"}}};
    schema[25] = fix::FieldDef{
      25, "IOIQltyInd", {{"H", "HIGH"}, {"L", "LOW"}, {"M", "MEDIUM"}}};
    schema[26] = fix::FieldDef{26, "IOIRefID"};
    schema[27] = fix::FieldDef{
      27, "IOIShares", {{"L", "LARGE"}, {"M", "MEDIUM"}, {"S", "SMALL"}}};
    schema[28] = fix::FieldDef{
      28, "IOITransType", {{"C", "CANCEL"}, {"N", "NEW"}, {"R", "REPLACE"}}};
    schema[29] = fix::FieldDef{29,
                               "LastCapacity",
                               {{"1", "AGENT"},
                                {"2", "CROSS_AS_AGENT"},
                                {"3", "CROSS_AS_PRINCIPAL"},
                                {"4", "PRINCIPAL"}}};
    schema[30] = fix::FieldDef{30, "LastMkt"};
    schema[31] = fix::FieldDef{31, "LastPx"};
    schema[32] = fix::FieldDef{32, "LastShares"};
    schema[33] = fix::FieldDef{33, "LinesOfText"};
    schema[34] = fix::FieldDef{34, "MsgSeqNum"};
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
                                {"A", "LOGON"},
                                {"B", "NEWS"},
                                {"C", "EMAIL"},
                                {"D", "ORDER_D"},
                                {"E", "ORDER_E"},
                                {"F", "ORDER_CANCEL_REQUEST"},
                                {"G", "ORDER_CANCEL_REPLACE_REQUEST"},
                                {"H", "ORDER_STATUS_REQUEST"},
                                {"J", "ALLOCATION"},
                                {"K", "LIST_CANCEL_REQUEST"},
                                {"L", "LIST_EXECUTE"},
                                {"M", "LIST_STATUS_REQUEST"},
                                {"N", "LIST_STATUS"},
                                {"P", "ALLOCATION_ACK"},
                                {"Q", "DONT_KNOW_TRADE"},
                                {"R", "QUOTE_REQUEST"},
                                {"S", "QUOTE"}}};
    schema[36] = fix::FieldDef{36, "NewSeqNo"};
    schema[37] = fix::FieldDef{37, "OrderID"};
    schema[38] = fix::FieldDef{38, "OrderQty"};
    schema[39] = fix::FieldDef{39,
                               "OrdStatus",
                               {{"0", "NEW"},
                                {"1", "PARTIALLY_FILLED"},
                                {"2", "FILLED"},
                                {"3", "DONE_FOR_DAY"},
                                {"4", "CANCELED"},
                                {"5", "REPLACED"},
                                {"6", "PENDING_CANCEL_REPLACE"},
                                {"7", "STOPPED"},
                                {"8", "REJECTED"},
                                {"9", "SUSPENDED"},
                                {"A", "PENDING_NEW"},
                                {"B", "CALCULATED"},
                                {"C", "EXPIRED"}}};
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
                                {"C", "FOREX"},
                                {"D", "PREVIOUSLY_QUOTED"},
                                {"E", "PREVIOUSLY_INDICATED"},
                                {"P", "PEGGED"}}};
    schema[41] = fix::FieldDef{41, "OrigClOrdID"};
    schema[42] = fix::FieldDef{42, "OrigTime"};
    schema[43] = fix::FieldDef{43, "PossDupFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[44] = fix::FieldDef{44, "Price"};
    schema[45] = fix::FieldDef{45, "RefSeqNum"};
    schema[46] = fix::FieldDef{46, "RelatdSym"};
    schema[47] = fix::FieldDef{
      47,
      "Rule80A",
      {{"A", "AGENCY_SINGLE_ORDER"},
       {"C", "PROGRAM_ORDER_NON_INDEX_ARB_FOR_MEMBER_FIRM_ORG"},
       {"D", "PROGRAM_ORDER_INDEX_ARB_FOR_MEMBER_FIRM_ORG"},
       {"I", "INDIVIDUAL_INVESTOR_SINGLE_ORDER"},
       {"J", "PROGRAM_ORDER_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER"},
       {"K", "PROGRAM_ORDER_NON_INDEX_ARB_FOR_INDIVIDUAL_CUSTOMER"},
       {"M", "PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_MEMBER"},
       {"N", "PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_MEMBER"},
       {"U", "PROGRAM_ORDER_INDEX_ARB_FOR_OTHER_AGENCY"},
       {"W", "ALL_OTHER_ORDERS_AS_AGENT_FOR_OTHER_MEMBER"},
       {"Y", "PROGRAM_ORDER_NON_INDEX_ARB_FOR_OTHER_AGENCY"}}};
    schema[48] = fix::FieldDef{48, "SecurityID"};
    schema[49] = fix::FieldDef{49, "SenderCompID"};
    schema[50] = fix::FieldDef{50, "SenderSubID"};
    schema[52] = fix::FieldDef{52, "SendingTime"};
    schema[53] = fix::FieldDef{53, "Shares"};
    schema[54] = fix::FieldDef{54,
                               "Side",
                               {{"1", "BUY"},
                                {"2", "SELL"},
                                {"3", "BUY_MINUS"},
                                {"4", "SELL_PLUS"},
                                {"5", "SELL_SHORT"},
                                {"6", "SELL_SHORT_EXEMPT"}}};
    schema[55] = fix::FieldDef{55, "Symbol"};
    schema[56] = fix::FieldDef{56, "TargetCompID"};
    schema[57] = fix::FieldDef{57, "TargetSubID"};
    schema[58] = fix::FieldDef{58, "Text"};
    schema[59] = fix::FieldDef{59,
                               "TimeInForce",
                               {{"0", "DAY"},
                                {"1", "GOOD_TILL_CANCEL"},
                                {"2", "AT_THE_OPENING"},
                                {"3", "IMMEDIATE_OR_CANCEL"},
                                {"4", "FILL_OR_KILL"},
                                {"5", "GOOD_TILL_CROSSING"},
                                {"6", "GOOD_TILL_DATE"}}};
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
    schema[68] = fix::FieldDef{68, "ListNoOrds"};
    schema[69] = fix::FieldDef{69, "ListExecInst"};
    schema[70] = fix::FieldDef{70, "AllocID"};
    schema[71] = fix::FieldDef{
      71, "AllocTransType", {{"0", "NEW"}, {"1", "REPLACE"}, {"2", "CANCEL"}}};
    schema[72] = fix::FieldDef{72, "RefAllocID"};
    schema[73] = fix::FieldDef{73, "NoOrders"};
    schema[74] = fix::FieldDef{74, "AvgPrxPrecision"};
    schema[75] = fix::FieldDef{75, "TradeDate"};
    schema[76] = fix::FieldDef{76, "ExecBroker"};
    schema[77] = fix::FieldDef{77, "OpenClose"};
    schema[78] = fix::FieldDef{78, "NoAllocs"};
    schema[79] = fix::FieldDef{79, "AllocAccount"};
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
    schema[82] = fix::FieldDef{82, "NoRpts"};
    schema[83] = fix::FieldDef{83, "RptSeq"};
    schema[84] = fix::FieldDef{84, "CxlQty"};
    schema[85] = fix::FieldDef{85, "NoDlvyInst"};
    schema[86] = fix::FieldDef{86, "DlvyInst"};
    schema[87] = fix::FieldDef{87,
                               "AllocStatus",
                               {{"0", "ACCEPTED"},
                                {"1", "REJECTED"},
                                {"2", "PARTIAL_ACCEPT"},
                                {"3", "RECEIVED"}}};
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
    schema[90] = fix::FieldDef{90, "SecureDataLen"};
    schema[91] = fix::FieldDef{91, "SecureData"};
    schema[92] = fix::FieldDef{92, "BrokerOfCredit"};
    schema[93] = fix::FieldDef{93, "SignatureLength"};
    schema[94] = fix::FieldDef{
      94, "EmailType", {{"0", "NEW"}, {"1", "REPLY"}, {"2", "ADMIN_REPLY"}}};
    schema[95] = fix::FieldDef{95, "RawDataLength"};
    schema[96] = fix::FieldDef{96, "RawData"};
    schema[97] = fix::FieldDef{97, "PossResend"};
    schema[98] = fix::FieldDef{98,
                               "EncryptMethod",
                               {{"0", "NONE"},
                                {"1", "PKCS"},
                                {"2", "DES"},
                                {"3", "PKCS_DES"},
                                {"4", "PGP_DES"},
                                {"5", "PGP_DES_MD5"},
                                {"6", "PEM_DES_MD5"}}};
    schema[99] = fix::FieldDef{99, "StopPx"};
    schema[100] =
      fix::FieldDef{100, "ExDestination", {{"0", "NONE"}, {"4", "POSIT"}}};
    schema[102] =
      fix::FieldDef{102,
                    "CxlRejReason",
                    {{"0", "TOO_LATE_TO_CANCEL"}, {"1", "UNKNOWN_ORDER"}}};
    schema[103] = fix::FieldDef{103,
                                "OrdRejReason",
                                {{"0", "BROKER_OPTION"},
                                 {"1", "UNKNOWN_SYMBOL"},
                                 {"2", "EXCHANGE_CLOSED"},
                                 {"3", "ORDER_EXCEEDS_LIMIT"},
                                 {"4", "TOO_LATE_TO_ENTER"}}};
    schema[104] = fix::FieldDef{104,
                                "IOIQualifier",
                                {{"A", "ALL_OR_NONE"},
                                 {"C", "AT_THE_CLOSE"},
                                 {"I", "IN_TOUCH_WITH"},
                                 {"L", "LIMIT"},
                                 {"M", "MORE_BEHIND"},
                                 {"O", "AT_THE_OPEN"},
                                 {"P", "TAKING_A_POSITION"},
                                 {"Q", "CURRENT_QUOTE"},
                                 {"S", "PORTFOLIO_SHOW_N"},
                                 {"T", "THROUGH_THE_DAY"},
                                 {"V", "VERSUS"},
                                 {"W", "INDICATION"},
                                 {"X", "CROSSING_OPPORTUNITY"}}};
    schema[105] = fix::FieldDef{105, "WaveNo"};
    schema[106] = fix::FieldDef{106, "Issuer"};
    schema[107] = fix::FieldDef{107, "SecurityDesc"};
    schema[108] = fix::FieldDef{108, "HeartBtInt"};
    schema[109] = fix::FieldDef{109, "ClientID"};
    schema[110] = fix::FieldDef{110, "MinQty"};
    schema[111] = fix::FieldDef{111, "MaxFloor"};
    schema[112] = fix::FieldDef{112, "TestReqID"};
    schema[113] =
      fix::FieldDef{113, "ReportToExch", {{"N", "NO"}, {"Y", "YES"}}};
    schema[114] = fix::FieldDef{114, "LocateReqd", {{"N", "NO"}, {"Y", "YES"}}};
    schema[115] = fix::FieldDef{115, "OnBehalfOfCompID"};
    schema[116] = fix::FieldDef{116, "OnBehalfOfSubID"};
    schema[117] = fix::FieldDef{117, "QuoteID"};
    schema[118] = fix::FieldDef{118, "NetMoney"};
    schema[119] = fix::FieldDef{119, "SettlCurrAmt"};
    schema[120] = fix::FieldDef{120, "SettlCurrency"};
    schema[121] = fix::FieldDef{121, "ForexReq", {{"N", "NO"}, {"Y", "YES"}}};
    schema[122] = fix::FieldDef{122, "OrigSendingTime"};
    schema[123] =
      fix::FieldDef{123, "GapFillFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[124] = fix::FieldDef{124, "NoExecs"};
    schema[125] = fix::FieldDef{
      125,
      "CxlType",
      {{"F", "FULL_REMAINING_QUANTITY"}, {"P", "PARTIAL_CANCEL"}}};
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
    schema[130] =
      fix::FieldDef{130, "IOINaturalFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[131] = fix::FieldDef{131, "QuoteReqID"};
    schema[132] = fix::FieldDef{132, "BidPx"};
    schema[133] = fix::FieldDef{133, "OfferPx"};
    schema[134] = fix::FieldDef{134, "BidSize"};
    schema[135] = fix::FieldDef{135, "OfferSize"};
    schema[136] = fix::FieldDef{136, "NoMiscFees"};
    schema[137] = fix::FieldDef{137, "MiscFeeAmt"};
    schema[138] = fix::FieldDef{138, "MiscFeeCurr"};
    schema[139] = fix::FieldDef{139,
                                "MiscFeeType",
                                {{"1", "REGULATORY"},
                                 {"2", "TAX"},
                                 {"3", "LOCAL_COMMISSION"},
                                 {"4", "EXCHANGE_FEES"},
                                 {"5", "STAMP"},
                                 {"6", "LEVY"},
                                 {"7", "OTHER"}}};
    schema[140] = fix::FieldDef{140, "PrevClosePx"};
    return schema;
  }
} // namespace FIX40
