#pragma once

#include "fix.hpp"

namespace FIX41
{
  inline auto load_schema () -> fix::Schema
  {
    fix::Schema schema;
    schema[210] = fix::FieldDef{210, "MaxShow"};
    schema[211] = fix::FieldDef{211, "PegDifference"};
    schema[165] = fix::FieldDef{
      165,
      "SettlInstSource",
      {{"1", "BROKERS_INSTRUCTIONS"}, {"2", "INSTITUTIONS_INSTRUCTIONS"}}};
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
                                 {"8", "MARKUP"}}};
    schema[138] = fix::FieldDef{138, "MiscFeeCurr"};
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
    schema[24] =
      fix::FieldDef{24, "IOIOthSvc", {{"A", "AUTEX"}, {"B", "BRIDGE"}}};
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
                                {"7", "ISO_COUNTRY_CODE"}}};
    schema[23] = fix::FieldDef{23, "IOIid"};
    schema[160] =
      fix::FieldDef{160,
                    "SettlInstMode",
                    {{"0", "DEFAULT"},
                     {"1", "STANDING_INSTRUCTIONS_PROVIDED"},
                     {"2", "SPECIFIC_ALLOCATION_ACCOUNT_OVERRIDING"},
                     {"3", "SPECIFIC_ALLOCATION_ACCOUNT_STANDING"}}};
    schema[28] = fix::FieldDef{
      28, "IOITransType", {{"C", "CANCEL"}, {"N", "NEW"}, {"R", "REPLACE"}}};
    schema[29] = fix::FieldDef{29,
                               "LastCapacity",
                               {{"1", "AGENT"},
                                {"2", "CROSS_AS_AGENT"},
                                {"3", "CROSS_AS_PRINCIPAL"},
                                {"4", "PRINCIPAL"}}};
    schema[161] = fix::FieldDef{161, "AllocText"};
    schema[4] = fix::FieldDef{
      4,
      "AdvSide",
      {{"B", "BUY"}, {"S", "SELL"}, {"T", "TRADE"}, {"X", "CROSS"}}};
    schema[8] = fix::FieldDef{8, "BeginString"};
    schema[163] =
      fix::FieldDef{163,
                    "SettlInstTransType",
                    {{"C", "CANCEL"}, {"N", "NEW"}, {"R", "REPLACE"}}};
    schema[120] = fix::FieldDef{120, "SettlCurrency"};
    schema[121] = fix::FieldDef{121, "ForexReq", {{"N", "NO"}, {"Y", "YES"}}};
    schema[122] = fix::FieldDef{122, "OrigSendingTime"};
    schema[123] =
      fix::FieldDef{123, "GapFillFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[124] = fix::FieldDef{124, "NoExecs"};
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
    schema[167] =
      fix::FieldDef{167,
                    "SecurityType",
                    {{"BA", "BANKERS_ACCEPTANCE"},
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
                     {"MF", "MUTUAL_FUND"},
                     {"MIO", "MORTGAGE_INTEREST_ONLY"},
                     {"MPO", "MORTGAGE_PRINCIPLE_ONLY"},
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
    schema[118] = fix::FieldDef{118, "NetMoney"};
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
                                {"8", "CROSS"}}};
    schema[57] = fix::FieldDef{57, "TargetSubID"};
    schema[56] = fix::FieldDef{56, "TargetCompID"};
    schema[50] = fix::FieldDef{50, "SenderSubID"};
    schema[53] = fix::FieldDef{53, "Shares"};
    schema[52] = fix::FieldDef{52, "SendingTime"};
    schema[164] = fix::FieldDef{164, "EmailThreadID"};
    schema[201] =
      fix::FieldDef{201, "PutOrCall", {{"0", "PUT"}, {"1", "CALL"}}};
    schema[199] = fix::FieldDef{199, "NoIOIQualifiers"};
    schema[179] = fix::FieldDef{179, "SecuritySettlAgentAcctName"};
    schema[200] = fix::FieldDef{200, "MaturityMonthYear"};
    schema[195] = fix::FieldDef{195, "LastForwardPoints"};
    schema[194] = fix::FieldDef{194, "LastSpotRate"};
    schema[197] = fix::FieldDef{
      197, "AllocLinkType", {{"0", "F_X_NETTING"}, {"1", "F_X_SWAP"}}};
    schema[178] = fix::FieldDef{178, "SecuritySettlAgentAcctNum"};
    schema[191] = fix::FieldDef{191, "OfferForwardPoints"};
    schema[190] = fix::FieldDef{190, "OfferSpotRate"};
    schema[193] = fix::FieldDef{193, "FutSettDate2"};
    schema[192] = fix::FieldDef{192, "OrderQty2"};
    schema[115] = fix::FieldDef{115, "OnBehalfOfCompID"};
    schema[114] = fix::FieldDef{114, "LocateReqd", {{"N", "NO"}, {"Y", "YES"}}};
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
    schema[111] = fix::FieldDef{111, "MaxFloor"};
    schema[110] = fix::FieldDef{110, "MinQty"};
    schema[113] =
      fix::FieldDef{113, "ReportToExch", {{"N", "NO"}, {"Y", "YES"}}};
    schema[112] = fix::FieldDef{112, "TestReqID"};
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
    schema[119] = fix::FieldDef{119, "SettlCurrAmt"};
    schema[87] = fix::FieldDef{87,
                               "AllocStatus",
                               {{"0", "ACCEPTED"},
                                {"1", "REJECTED"},
                                {"2", "PARTIAL_ACCEPT"},
                                {"3", "RECEIVED"}}};
    schema[84] = fix::FieldDef{84, "CxlQty"};
    schema[204] =
      fix::FieldDef{204, "CustomerOrFirm", {{"0", "CUSTOMER"}, {"1", "FIRM"}}};
    schema[198] = fix::FieldDef{198, "SecondaryOrderID"};
    schema[206] = fix::FieldDef{206, "OptAttribute"};
    schema[3] = fix::FieldDef{3, "AdvRefID"};
    schema[177] = fix::FieldDef{177, "SecuritySettlAgentCode"};
    schema[7] = fix::FieldDef{7, "BeginSeqNo"};
    schema[108] = fix::FieldDef{108, "HeartBtInt"};
    schema[109] = fix::FieldDef{109, "ClientID"};
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
                                 {"4", "TOO_LATE_TO_ENTER"},
                                 {"5", "UNKNOWN_ORDER"},
                                 {"6", "DUPLICATE_ORDER"}}};
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
                                {"6", "PENDING_CANCEL_REPLACE"},
                                {"7", "STOPPED"},
                                {"8", "REJECTED"},
                                {"9", "SUSPENDED"},
                                {"A", "PENDING_NEW"},
                                {"B", "CALCULATED"},
                                {"C", "EXPIRED"}}};
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
                                {"S", "QUOTE"},
                                {"T", "SETTLEMENT_INSTRUCTIONS"}}};
    schema[34] = fix::FieldDef{34, "MsgSeqNum"};
    schema[205] = fix::FieldDef{205, "MaturityDay"};
    schema[176] = fix::FieldDef{176, "SecuritySettlAgentName"};
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
    schema[175] = fix::FieldDef{175, "SettlInstCode"};
    schema[174] = fix::FieldDef{174, "SettlBrkrCode"};
    schema[173] = fix::FieldDef{173, "SettlDepositoryCode"};
    schema[172] = fix::FieldDef{172, "SettlDeliveryType"};
    schema[171] = fix::FieldDef{171, "StandInstDbID"};
    schema[170] = fix::FieldDef{170, "StandInstDbName"};
    schema[203] = fix::FieldDef{
      203, "CoveredOrUncovered", {{"0", "COVERED"}, {"1", "UNCOVERED"}}};
    schema[181] = fix::FieldDef{181, "SecuritySettlAgentContactPhone"};
    schema[182] = fix::FieldDef{182, "CashSettlAgentName"};
    schema[183] = fix::FieldDef{183, "CashSettlAgentCode"};
    schema[180] = fix::FieldDef{180, "SecuritySettlAgentContactName"};
    schema[2] = fix::FieldDef{2, "AdvId"};
    schema[162] = fix::FieldDef{162, "SettlInstID"};
    schema[187] = fix::FieldDef{187, "CashSettlAgentContactPhone"};
    schema[184] = fix::FieldDef{184, "CashSettlAgentAcctNum"};
    schema[6] = fix::FieldDef{6, "AvgPx"};
    schema[186] = fix::FieldDef{186, "CashSettlAgentContactName"};
    schema[188] = fix::FieldDef{188, "BidSpotRate"};
    schema[189] = fix::FieldDef{189, "BidForwardPoints"};
    schema[202] = fix::FieldDef{202, "StrikePrice"};
    schema[196] = fix::FieldDef{196, "AllocLinkID"};
    schema[185] = fix::FieldDef{185, "CashSettlAgentAcctName"};
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
    schema[168] = fix::FieldDef{168, "EffectiveTime"};
    schema[169] = fix::FieldDef{169,
                                "StandInstDbType",
                                {{"0", "OTHER"},
                                 {"1", "DTC_SID"},
                                 {"2", "THOMSON_ALERT"},
                                 {"3", "A_GLOBAL_CUSTODIAN"}}};
    schema[91] = fix::FieldDef{91, "SecureData"};
    schema[90] = fix::FieldDef{90, "SecureDataLen"};
    schema[93] = fix::FieldDef{93, "SignatureLength"};
    schema[92] = fix::FieldDef{92, "BrokerOfCredit"};
    schema[95] = fix::FieldDef{95, "RawDataLength"};
    schema[94] = fix::FieldDef{
      94, "EmailType", {{"0", "NEW"}, {"1", "REPLY"}, {"2", "ADMIN_REPLY"}}};
    schema[97] = fix::FieldDef{97, "PossResend", {{"N", "NO"}, {"Y", "YES"}}};
    schema[96] = fix::FieldDef{96, "RawData"};
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
                                {"S", "SUSPEND"},
                                {"U", "CUSTOMER_DISPLAY_INSTRUCTION"},
                                {"V", "NETTING"}}};
    schema[117] = fix::FieldDef{117, "QuoteID"};
    schema[116] = fix::FieldDef{116, "OnBehalfOfSubID"};
    schema[151] = fix::FieldDef{151, "LeavesQty"};
    schema[150] = fix::FieldDef{150,
                                "ExecType",
                                {{"0", "NEW"},
                                 {"1", "PARTIAL_FILL"},
                                 {"2", "FILL"},
                                 {"3", "DONE_FOR_DAY"},
                                 {"4", "CANCELLED"},
                                 {"5", "REPLACE"},
                                 {"6", "PENDING_CANCEL_REPLACE"},
                                 {"7", "STOPPED"},
                                 {"8", "REJECTED"},
                                 {"9", "SUSPENDED"},
                                 {"A", "PENDING_NEW"},
                                 {"B", "CALCULATED"},
                                 {"C", "EXPIRED"}}};
    schema[153] = fix::FieldDef{153, "AllocAvgPx"};
    schema[152] = fix::FieldDef{152, "CashOrderQty"};
    schema[155] = fix::FieldDef{155, "SettlCurrFxRate"};
    schema[154] = fix::FieldDef{154, "AllocNetMoney"};
    schema[157] = fix::FieldDef{157, "NumDaysInterest"};
    schema[156] = fix::FieldDef{
      156, "SettlCurrFxRateCalc", {{"M", "MULTIPLY"}, {"D", "DIVIDE"}}};
    schema[159] = fix::FieldDef{159, "AccruedInterestAmt"};
    schema[158] = fix::FieldDef{158, "AccruedInterestRate"};
    schema[207] = fix::FieldDef{207, "SecurityExchange"};
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
                                {"P", "PEGGED"}}};
    schema[41] = fix::FieldDef{41, "OrigClOrdID"};
    schema[1] = fix::FieldDef{1, "Account"};
    schema[5] = fix::FieldDef{
      5, "AdvTransType", {{"C", "CANCEL"}, {"N", "NEW"}, {"R", "REPLACE"}}};
    schema[9] = fix::FieldDef{9, "BodyLength"};
    schema[146] = fix::FieldDef{146, "NoRelatedSym"};
    schema[147] = fix::FieldDef{147, "Subject"};
    schema[144] = fix::FieldDef{144, "OnBehalfOfLocationID"};
    schema[145] = fix::FieldDef{145, "DeliverToLocationID"};
    schema[142] = fix::FieldDef{142, "SenderLocationID"};
    schema[143] = fix::FieldDef{143, "TargetLocationID"};
    schema[140] = fix::FieldDef{140, "PrevClosePx"};
    schema[141] =
      fix::FieldDef{141, "ResetSeqNumFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[209] = fix::FieldDef{
      209,
      "AllocHandlInst",
      {{"1", "MATCH"}, {"2", "FORWARD"}, {"3", "FORWARD_AND_MATCH"}}};
    schema[208] =
      fix::FieldDef{208, "NotifyBrokerOfCredit", {{"N", "NO"}, {"Y", "YES"}}};
    schema[148] = fix::FieldDef{148, "Headline"};
    schema[149] = fix::FieldDef{149, "URLLink"};
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
                                {"4", "CALCULATED"}}};
    schema[70] = fix::FieldDef{70, "AllocID"};
    schema[79] = fix::FieldDef{79, "AllocAccount"};
    schema[78] = fix::FieldDef{78, "NoAllocs"};
    return schema;
  }
}
