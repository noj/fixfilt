#pragma once

#include "fix.hpp"

namespace FIX50
{
  inline auto load_schema () -> fix::Schema
  {
    fix::Schema schema;
    schema[344] = fix::FieldDef{344, "TradSesCloseTime"};
    schema[345] = fix::FieldDef{345, "TradSesEndTime"};
    schema[346] = fix::FieldDef{346, "NumberOfOrders"};
    schema[347] = fix::FieldDef{347, "MessageEncoding"};
    schema[340] = fix::FieldDef{340,
                                "TradSesStatus",
                                {{"0", "UNKNOWN"},
                                 {"1", "HALTED"},
                                 {"2", "OPEN"},
                                 {"3", "CLOSED"},
                                 {"4", "PRE_OPEN"},
                                 {"5", "PRE_CLOSE"},
                                 {"6", "REQUEST_REJECTED"}}};
    schema[341] = fix::FieldDef{341, "TradSesStartTime"};
    schema[342] = fix::FieldDef{342, "TradSesOpenTime"};
    schema[343] = fix::FieldDef{343, "TradSesPreCloseTime"};
    schema[810] = fix::FieldDef{810, "UnderlyingPx"};
    schema[811] = fix::FieldDef{811, "PriceDelta"};
    schema[812] = fix::FieldDef{812, "ApplQueueMax"};
    schema[813] = fix::FieldDef{813, "ApplQueueDepth"};
    schema[348] = fix::FieldDef{348, "EncodedIssuerLen"};
    schema[349] = fix::FieldDef{349, "EncodedIssuer"};
    schema[816] = fix::FieldDef{816, "NoAltMDSource"};
    schema[817] = fix::FieldDef{817, "AltMDSourceID"};
    schema[719] = fix::FieldDef{719, "ContraryInstructionIndicator"};
    schema[718] = fix::FieldDef{718,
                                "AdjustmentType",
                                {{"0", "PROCESS_REQUEST_AS_MARGIN_DISPOSITION"},
                                 {"1", "DELTA_PLUS"},
                                 {"2", "DELTA_MINUS"},
                                 {"3", "FINAL"}}};
    schema[717] = fix::FieldDef{717, "SettlSessSubID"};
    schema[716] = fix::FieldDef{716,
                                "SettlSessID",
                                {{"ITD", "INTRADAY"},
                                 {"RTH", "REGULAR_TRADING_HOURS"},
                                 {"ETH", "ELECTRONIC_TRADING_HOURS"},
                                 {"EOD", "END_OF_DAY"}}};
    schema[715] = fix::FieldDef{715, "ClearingBusinessDate"};
    schema[714] = fix::FieldDef{714, "PosMaintRptRefID"};
    schema[713] = fix::FieldDef{713, "OrigPosReqRefID"};
    schema[712] = fix::FieldDef{
      712,
      "PosMaintAction",
      {{"1", "NEW"}, {"2", "REPLACE"}, {"3", "CANCEL"}, {"4", "REVERSE"}}};
    schema[711] = fix::FieldDef{711, "NoUnderlyings"};
    schema[710] = fix::FieldDef{710, "PosReqID"};
    schema[915] = fix::FieldDef{915, "AgreementDate"};
    schema[914] = fix::FieldDef{914, "AgreementID"};
    schema[606] = fix::FieldDef{606, "LegSecurityAltIDSource"};
    schema[917] = fix::FieldDef{917, "EndDate"};
    schema[594] = fix::FieldDef{594, "UnderlyingLocaleOfIssue"};
    schema[736] = fix::FieldDef{736, "AllocSettlCurrency"};
    schema[916] = fix::FieldDef{916, "StartDate"};
    schema[1061] = fix::FieldDef{1061, "UndlyInstrumentPartyRole"};
    schema[911] = fix::FieldDef{911, "TotNumReports"};
    schema[1063] = fix::FieldDef{1063, "UndlyInstrumentPartySubID"};
    schema[1062] = fix::FieldDef{1062, "NoUndlyInstrumentPartySubIDs"};
    schema[1065] = fix::FieldDef{1065, "BidSwapPoints"};
    schema[1064] = fix::FieldDef{1064, "UndlyInstrumentPartySubIDType"};
    schema[619] = fix::FieldDef{619, "EncodedLegIssuer"};
    schema[910] = fix::FieldDef{910,
                                "CollStatus",
                                {{"0", "UNASSIGNED"},
                                 {"1", "PARTIALLY_ASSIGNED"},
                                 {"2", "ASSIGNMENT_PROPOSED"},
                                 {"3", "ASSIGNED"},
                                 {"4", "CHALLENGED"}}};
    schema[913] = fix::FieldDef{913, "AgreementDesc"};
    schema[298] = fix::FieldDef{298,
                                "QuoteCancelType",
                                {{"1", "CANCEL_FOR_SYMBOL"},
                                 {"2", "CANCEL_FOR_SECURITY_TYPE"},
                                 {"3", "CANCEL_FOR_UNDERLYING_SYMBOL"},
                                 {"4", "CANCEL_ALL_QUOTES"},
                                 {"5", "CANCEL_QUOTE_SPECIFIED_IN_QUOTEID"}}};
    schema[299] = fix::FieldDef{299, "QuoteEntryID"};
    schema[296] = fix::FieldDef{296, "NoQuoteSets"};
    schema[297] = fix::FieldDef{297,
                                "QuoteStatus",
                                {{"0", "ACCEPTED"},
                                 {"1", "CANCEL_FOR_SYMBOL"},
                                 {"2", "CANCELED_FOR_SECURITY_TYPE"},
                                 {"3", "CANCELED_FOR_UNDERLYING"},
                                 {"4", "CANCELED_ALL"},
                                 {"5", "REJECTED"},
                                 {"6", "REMOVED_FROM_MARKET"},
                                 {"7", "EXPIRED"},
                                 {"8", "QUERY"},
                                 {"9", "QUOTE_NOT_FOUND"},
                                 {"10", "PENDING"},
                                 {"11", "PASS"},
                                 {"12", "LOCKED_MARKET_WARNING"},
                                 {"13", "CROSS_MARKET_WARNING"},
                                 {"14", "CANCELED_DUE_TO_LOCK_MARKET"},
                                 {"15", "CANCELED_DUE_TO_CROSS_MARKET"}}};
    schema[294] = fix::FieldDef{294, "DefOfferSize"};
    schema[295] = fix::FieldDef{295, "NoQuoteEntries"};
    schema[292] = fix::FieldDef{292,
                                "CorporateAction",
                                {{"A", "EX_DIVIDEND"},
                                 {"B", "EX_DISTRIBUTION"},
                                 {"C", "EX_RIGHTS"},
                                 {"D", "NEW"},
                                 {"E", "EX_INTEREST"},
                                 {"F", "CASH_DIVIDEND"},
                                 {"G", "STOCK_DIVIDEND"},
                                 {"H", "NON_INTEGER_STOCK_SPLIT"},
                                 {"I", "REVERSE_STOCK_SPLIT"},
                                 {"J", "STANDARD_INTEGER_STOCK_SPLIT"},
                                 {"K", "POSITION_CONSOLIDATION"},
                                 {"L", "LIQUIDATION_REORGANIZATION"},
                                 {"M", "MERGER_REORGANIZATION"},
                                 {"N", "RIGHTS_OFFERING"},
                                 {"O", "SHAREHOLDER_MEETING"},
                                 {"P", "SPINOFF"},
                                 {"Q", "TENDER_OFFER"},
                                 {"R", "WARRANT"},
                                 {"S", "SPECIAL_ACTION"},
                                 {"T", "SYMBOL_CONVERSION"},
                                 {"U", "CUSIP"},
                                 {"V", "LEAP_ROLLOVER"}}};
    schema[293] = fix::FieldDef{293, "DefBidSize"};
    schema[290] = fix::FieldDef{290, "MDEntryPositionNo"};
    schema[291] = fix::FieldDef{
      291,
      "FinancialStatus",
      {{"1", "BANKRUPT"}, {"2", "PENDING_DELISTING"}, {"3", "RESTRICTED"}}};
    schema[591] = fix::FieldDef{
      591, "PreallocMethod", {{"0", "PRO_RATA"}, {"1", "DO_NOT_PRO_RATA"}}};
    schema[590] = fix::FieldDef{
      590,
      "BookingUnit",
      {{"0", "EACH_PARTIAL_EXECUTION_IS_A_BOOKABLE_UNIT"},
       {"1", "AGGREGATE_PARTIAL_EXECUTIONS_ON_THIS_ORDER_AND_BOOK_ONE_TRADE_"
             "PER_ORDER"},
       {"2", "AGGREGATE_EXECUTIONS_FOR_THIS_SYMBOL_SIDE_AND_SETTLEMENT_DATE"}}};
    schema[593] = fix::FieldDef{593, "UnderlyingStateOrProvinceOfIssue"};
    schema[592] = fix::FieldDef{592, "UnderlyingCountryOfIssue"};
    schema[199] = fix::FieldDef{199, "NoIOIQualifiers"};
    schema[198] = fix::FieldDef{198, "SecondaryOrderID"};
    schema[597] = fix::FieldDef{597, "LegStateOrProvinceOfIssue"};
    schema[596] = fix::FieldDef{596, "LegCountryOfIssue"};
    schema[195] = fix::FieldDef{195, "LastForwardPoints"};
    schema[194] = fix::FieldDef{194, "LastSpotRate"};
    schema[197] = fix::FieldDef{
      197, "AllocLinkType", {{"0", "FX_NETTING"}, {"1", "FX_SWAP"}}};
    schema[196] = fix::FieldDef{196, "AllocLinkID"};
    schema[191] = fix::FieldDef{191, "OfferForwardPoints"};
    schema[190] = fix::FieldDef{190, "OfferSpotRate"};
    schema[193] = fix::FieldDef{193, "SettlDate2"};
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
                                {{"A", "OPEN_ACTIVE"},
                                 {"B", "CLOSED_INACTIVE"},
                                 {"C", "EXCHANGE_BEST"},
                                 {"D", "CONSOLIDATED_BEST"},
                                 {"E", "LOCKED"},
                                 {"F", "CROSSED"},
                                 {"G", "DEPTH"},
                                 {"H", "FAST_TRADING"},
                                 {"I", "NON_FIRM"},
                                 {"L", "MANUAL_SLOW_QUOTE"},
                                 {"J", "OUTRIGHT_PRICE"},
                                 {"K", "IMPLIED_PRICE"},
                                 {"M", "DEPTH_ON_OFFER"},
                                 {"N", "DEPTH_ON_BID"},
                                 {"O", "CLOSING"},
                                 {"P", "NEWS_DISSEMINATION"},
                                 {"Q", "TRADING_RANGE"},
                                 {"R", "ORDER_INFLUX"},
                                 {"S", "DUE_TO_RELATED"},
                                 {"T", "NEWS_PENDING"},
                                 {"U", "ADDITIONAL_INFO"},
                                 {"V", "ADDITIONAL_INFO_DUE_TO_RELATED"},
                                 {"W", "RESUME"},
                                 {"X", "VIEW_OF_COMMON"},
                                 {"Y", "VOLUME_ALERT"},
                                 {"Z", "ORDER_IMBALANCE"},
                                 {"a", "EQUIPMENT_CHANGEOVER"},
                                 {"b", "NO_OPEN"},
                                 {"c", "REGULAR_ETH"},
                                 {"d", "AUTOMATIC_EXECUTION"},
                                 {"e", "AUTOMATIC_EXECUTION_ETH"},
                                 {"f ", "FAST_MARKET_ETH"},
                                 {"g", "INACTIVE_ETH"},
                                 {"h", "ROTATION"},
                                 {"i", "ROTATION_ETH"},
                                 {"j", "HALT"},
                                 {"k", "HALT_ETH"},
                                 {"l", "DUE_TO_NEWS_DISSEMINATION"},
                                 {"m", "DUE_TO_NEWS_PENDING"},
                                 {"n", "TRADING_RESUME"},
                                 {"o", "OUT_OF_SEQUENCE"},
                                 {"p", "BID_SPECIALIST"},
                                 {"q", "OFFER_SPECIALIST"},
                                 {"r", "BID_OFFER_SPECIALIST"},
                                 {"s", "END_OF_DAY_SAM"},
                                 {"t", "FORBIDDEN_SAM"},
                                 {"u", "FROZEN_SAM"},
                                 {"v", "PREOPENING_SAM"},
                                 {"w", "OPENING_SAM"},
                                 {"x", "OPEN_SAM"},
                                 {"y", "SURVEILLANCE_SAM"},
                                 {"z", "SUSPENDED_SAM"},
                                 {"0", "RESERVED_SAM"},
                                 {"1", "NO_ACTIVE_SAM"},
                                 {"2", "RESTRICTED"}}};
    schema[277] =
      fix::FieldDef{277,
                    "TradeCondition",
                    {{"A", "CASH"},
                     {"B", "AVERAGE_PRICE_TRADE"},
                     {"C", "CASH_TRADE"},
                     {"D", "NEXT_DAY"},
                     {"E", "OPENING_REOPENING_TRADE_DETAIL"},
                     {"F", "INTRADAY_TRADE_DETAIL"},
                     {"G", "RULE_127_TRADE"},
                     {"H", "RULE_155_TRADE"},
                     {"I", "SOLD_LAST"},
                     {"J", "NEXT_DAY_TRADE"},
                     {"K", "OPENED"},
                     {"L", "SELLER"},
                     {"M", "SOLD"},
                     {"N", "STOPPED_STOCK"},
                     {"P", "IMBALANCE_MORE_BUYERS"},
                     {"Q", "IMBALANCE_MORE_SELLERS"},
                     {"R", "OPENING_PRICE"},
                     {"S", "BARGAIN_CONDITION"},
                     {"T", "CONVERTED_PRICE_INDICATOR"},
                     {"U", "EXCHANGE_LAST"},
                     {"V", "FINAL_PRICE_OF_SESSION"},
                     {"W", "EX_PIT"},
                     {"X", "CROSSED_X"},
                     {"Y", "TRADES_RESULTING_FROM_MANUAL_SLOW_QUOTE"},
                     {"Z", "TRADES_RESULTING_FROM_INTERMARKET_SWEEP"},
                     {"a", "VOLUME_ONLY"},
                     {"b", "DIRECT_PLUS"},
                     {"c", "ACQUISITION"},
                     {"d", "BUNCHED"},
                     {"e", "DISTRIBUTION"},
                     {"f", "BUNCHED_SALE"},
                     {"g", "SPLIT_TRADE"},
                     {"h", "CANCEL_STOPPED"},
                     {"i", "CANCEL_ETH"},
                     {"j", "CANCEL_STOPPED_ETH"},
                     {"k", "OUT_OF_SEQUENCE_ETH"},
                     {"l", "CANCEL_LAST_ETH"},
                     {"m", "SOLD_LAST_SALE_ETH"},
                     {"n", "CANCEL_LAST"},
                     {"o", "SOLD_LAST_SALE"},
                     {"p", "CANCEL_OPEN"},
                     {"q", "CANCEL_OPEN_ETH"},
                     {"r", "OPENED_SALE_ETH"},
                     {"s", "CANCEL_ONLY"},
                     {"t", "CANCEL_ONLY_ETH"},
                     {"u", "LATE_OPEN_ETH"},
                     {"v", "AUTO_EXECUTION_ETH"},
                     {"w", "REOPEN"},
                     {"x", "REOPEN_ETH"},
                     {"y", "ADJUSTED"},
                     {"z", "ADJUSTED_ETH"},
                     {"AA", "SPREAD"},
                     {"AB", "SPREAD_ETH"},
                     {"AC", "STRADDLE"},
                     {"AD", "STRADDLE_ETH"},
                     {"AE", "STOPPED"},
                     {"AF", "STOPPED_ETH"},
                     {"AG", "REGULAR_ETH"},
                     {"AH", "COMBO"},
                     {"AI", "COMBO_ETH"},
                     {"AJ", "OFFICIAL_CLOSING_PRICE"},
                     {"AK", "PRIOR_REFERENCE_PRICE"},
                     {"0", "CANCEL"},
                     {"AL", "STOPPED_SOLD_LAST"},
                     {"AM", "STOPPED_OUT_OF_SEQUENCE"},
                     {"AN", "OFFICAL_CLOSING_PRICE"},
                     {"AO", "CROSSED_AO"},
                     {"AP", "FAST_MARKET"},
                     {"AQ", "AUTOMATIC_EXECUTION"},
                     {"AR", "FORM_T"},
                     {"AS", "BASKET_INDEX"},
                     {"AT", "BURST_BASKET"}}};
    schema[278] = fix::FieldDef{278, "MDEntryID"};
    schema[279] = fix::FieldDef{279,
                                "MDUpdateAction",
                                {{"0", "NEW"},
                                 {"1", "CHANGE"},
                                 {"2", "DELETE"},
                                 {"3", "DELETE_THRU"},
                                 {"4", "DELETE_FROM"}}};
    schema[738] = fix::FieldDef{738, "InterestAtMaturity"};
    schema[1067] = fix::FieldDef{1067, "LegBidForwardPoints"};
    schema[524] = fix::FieldDef{524, "NestedPartyID"};
    schema[525] = fix::FieldDef{525, "NestedPartyIDSource"};
    schema[526] = fix::FieldDef{526, "SecondaryClOrdID"};
    schema[527] = fix::FieldDef{527, "SecondaryExecID"};
    schema[520] = fix::FieldDef{520, "ContAmtValue"};
    schema[521] = fix::FieldDef{521, "ContAmtCurr"};
    schema[522] = fix::FieldDef{522,
                                "OwnerType",
                                {{"1", "INDIVIDUAL_INVESTOR"},
                                 {"2", "PUBLIC_COMPANY"},
                                 {"3", "PRIVATE_COMPANY"},
                                 {"4", "INDIVIDUAL_TRUSTEE"},
                                 {"5", "COMPANY_TRUSTEE"},
                                 {"6", "PENSION_PLAN"},
                                 {"7", "CUSTODIAN_UNDER_GIFTS_TO_MINORS_ACT"},
                                 {"8", "TRUSTS"},
                                 {"9", "FIDUCIARIES"},
                                 {"10", "NETWORKING_SUB_ACCOUNT"},
                                 {"11", "NON_PROFIT_ORGANIZATION"},
                                 {"12", "CORPORATE_BODY"},
                                 {"13", "NOMINEE"}}};
    schema[523] = fix::FieldDef{523, "PartySubID"};
    schema[1014] = fix::FieldDef{1014, "SideTrdRegTimestampSrc"};
    schema[1015] =
      fix::FieldDef{1015, "AsOfIndicator", {{"0", "FALSE"}, {"1", "TRUE"}}};
    schema[1016] = fix::FieldDef{1016, "NoSideTrdRegTS"};
    schema[1017] = fix::FieldDef{1017, "LegOptionRatio"};
    schema[528] = fix::FieldDef{528,
                                "OrderCapacity",
                                {{"A", "AGENCY"},
                                 {"G", "PROPRIETARY"},
                                 {"I", "INDIVIDUAL"},
                                 {"P", "PRINCIPAL"},
                                 {"R", "RISKLESS_PRINCIPAL"},
                                 {"W", "AGENT_FOR_OTHER_MEMBER"}}};
    schema[529] = fix::FieldDef{
      529,
      "OrderRestrictions",
      {{"1", "PROGRAM_TRADE"},
       {"2", "INDEX_ARBITRAGE"},
       {"3", "NON_INDEX_ARBITRAGE"},
       {"4", "COMPETING_MARKET_MAKER"},
       {"5", "ACTING_AS_MARKET_MAKER_OR_SPECIALIST_IN_THE_SECURITY"},
       {"6", "ACTING_AS_MARKET_MAKER_OF_SPECIALIST_IN_THE_UNDERLYING_SECURITY_"
             "OF_A_DERIVATIVE_SEUCIRTY"},
       {"7", "FOREIGN_ENTITY"},
       {"8", "EXTERNAL_MARKET_PARTICIPANT"},
       {"9", "EXTNERAL_INTER_CONNECTED_MARKET_LINKAGE"},
       {"A", "RISKLESS_ARBITRAGE"}}};
    schema[994] = fix::FieldDef{994, "TierCode"};
    schema[1013] = fix::FieldDef{1013, "SideTrdRegTimestampType"};
    schema[1025] = fix::FieldDef{1025, "FirstPx"};
    schema[448] = fix::FieldDef{448, "PartyID"};
    schema[443] = fix::FieldDef{443, "StrikeTime"};
    schema[442] = fix::FieldDef{442,
                                "MultiLegReportingType",
                                {{"1", "SINGLE_SECURITY"},
                                 {"2", "INDIVIDUAL_LEG_OF_A_MULTILEG_SECURITY"},
                                 {"3", "MULTI_LEG_SECURITY"}}};
    schema[441] = fix::FieldDef{441, "LiquidityNumSecurities"};
    schema[1066] = fix::FieldDef{1066, "OfferSwapPoints"};
    schema[447] =
      fix::FieldDef{447,
                    "PartyIDSource",
                    {{"6", "UK_NATIONAL_INSURANCE_OR_PENSION_NUMBER"},
                     {"7", "US_SOCIAL_SECURITY_NUMBER"},
                     {"8", "US_EMPLOYER_OR_TAX_ID_NUMBER"},
                     {"9", "AUSTRALIAN_BUSINESS_NUMBER"},
                     {"A", "AUSTRALIAN_TAX_FILE_NUMBER"},
                     {"1", "KOREAN_INVESTOR_ID"},
                     {"2", "TAIWANESE_QUALIFIED_FOREIGN_INVESTOR_ID_QFII_FID"},
                     {"3", "TAIWANESE_TRADING_ACCT"},
                     {"4", "MALAYSIAN_CENTRAL_DEPOSITORY"},
                     {"5", "CHINESE_INVESTOR_ID"},
                     {"I", "DIRECTED_BROKER_THREE_CHARACTER_ACRONYM_AS_DEFINED_"
                           "IN_ISITC_ETC_BEST_PRACTICE_GUIDELINES_DOCUMENT"},
                     {"B", "BIC"},
                     {"C", "GENERALLY_ACCEPTED_MARKET_PARTICIPANT_IDENTIFIER"},
                     {"D", "PROPRIETARY"},
                     {"E", "ISO_COUNTRY_CODE"},
                     {"F", "SETTLEMENT_ENTITY_LOCATION"},
                     {"G", "MIC"},
                     {"H", "CSD_PARTICIPANT_MEMBER_CODE"}}};
    schema[446] = fix::FieldDef{446, "EncodedListStatusText"};
    schema[445] = fix::FieldDef{445, "EncodedListStatusTextLen"};
    schema[444] = fix::FieldDef{444, "ListStatusText"};
    schema[108] = fix::FieldDef{108, "HeartBtInt"};
    schema[1135] = fix::FieldDef{1135, "RptSys"};
    schema[102] = fix::FieldDef{
      102,
      "CxlRejReason",
      {{"0", "TOO_LATE_TO_CANCEL"},
       {"1", "UNKNOWN_ORDER"},
       {"2", "BROKER"},
       {"3", "ORDER_ALREADY_IN_PENDING_CANCEL_OR_PENDING_REPLACE_STATUS"},
       {"4", "UNABLE_TO_PROCESS_ORDER_MASS_CANCEL_REQUEST"},
       {"5", "ORIGORDMODTIME"},
       {"6", "DUPLICATE_CLORDID"},
       {"18", "INVALID_PRICE_INCREMENT"},
       {"99", "OTHER"}}};
    schema[103] =
      fix::FieldDef{103,
                    "OrdRejReason",
                    {{"0", "BROKER"},
                     {"1", "UNKNOWN_SYMBOL"},
                     {"2", "EXCHANGE_CLOSED"},
                     {"3", "ORDER_EXCEEDS_LIMIT"},
                     {"4", "TOO_LATE_TO_ENTER"},
                     {"5", "UNKNOWN_ORDER"},
                     {"6", "DUPLICATE_ORDER"},
                     {"7", "DUPLICATE_OF_A_VERBALLY_COMMUNICATED_ORDER"},
                     {"8", "STALE_ORDER"},
                     {"9", "TRADE_ALONG_REQUIRED"},
                     {"10", "INVALID_INVESTOR_ID"},
                     {"11", "UNSUPPORTED_ORDER_CHARACTERISTIC"},
                     {"12", "SURVEILLENCE_OPTION"},
                     {"13", "INCORRECT_QUANTITY"},
                     {"14", "INCORRECT_ALLOCATED_QUANTITY"},
                     {"15", "UNKNOWN_ACCOUNT"},
                     {"18", "INVALID_PRICE_INCREMENT"},
                     {"99", "OTHER"}}};
    schema[100] = fix::FieldDef{100, "ExDestination"};
    schema[1134] = fix::FieldDef{1134, "ReportedPxDiff"};
    schema[106] = fix::FieldDef{106, "Issuer"};
    schema[107] = fix::FieldDef{107, "SecurityDesc"};
    schema[104] = fix::FieldDef{104,
                                "IOIQualifier",
                                {{"A", "ALL_OR_NONE"},
                                 {"B", "MARKET_ON_CLOSE"},
                                 {"C", "AT_THE_CLOSE"},
                                 {"D", "VWAP"},
                                 {"I", "IN_TOUCH_WITH"},
                                 {"L", "LIMIT"},
                                 {"M", "MORE_BEHIND"},
                                 {"O", "AT_THE_OPEN"},
                                 {"P", "TAKING_A_POSITION"},
                                 {"Q", "AT_THE_MARKET"},
                                 {"R", "READY_TO_TRADE"},
                                 {"S", "PORTFOLIO_SHOWN"},
                                 {"T", "THROUGH_THE_DAY"},
                                 {"V", "VERSUS"},
                                 {"W", "INDIDCATION"},
                                 {"X", "CROSSING_OPPORTUNITY"},
                                 {"Y", "AT_THE_MIDPOINT"},
                                 {"Z", "PRE_OPEN"}}};
    schema[902] = fix::FieldDef{902, "CollAsgnID"};
    schema[903] = fix::FieldDef{903,
                                "CollAsgnTransType",
                                {{"0", "NEW"},
                                 {"1", "REPLACE"},
                                 {"2", "CANCEL"},
                                 {"3", "RELEASE"},
                                 {"4", "REVERSE"}}};
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
    schema[906] = fix::FieldDef{906,
                                "CollAsgnRejectReason",
                                {{"0", "UNKNOWN_DEAL"},
                                 {"1", "UNKNOWN_OR_INVALID_INSTRUMENT"},
                                 {"2", "UNAUTHORIZED_TRANSACTION"},
                                 {"3", "INSUFFICIENT_COLLATERAL"},
                                 {"4", "INVALID_TYPE_OF_COLLATERAL"},
                                 {"5", "EXCESSIVE_SUBSTITUTION"},
                                 {"99", "OTHER"}}};
    schema[907] = fix::FieldDef{907, "CollAsgnRefID"};
    schema[904] = fix::FieldDef{904, "CollRespID"};
    schema[905] = fix::FieldDef{905,
                                "CollAsgnRespType",
                                {{"0", "RECEIVED"},
                                 {"1", "ACCEPTED"},
                                 {"2", "DECLINED"},
                                 {"3", "REJECTED"}}};
    schema[33] = fix::FieldDef{33, "NoLinesOfText"};
    schema[32] = fix::FieldDef{32, "LastQty"};
    schema[31] = fix::FieldDef{31, "LastPx"};
    schema[30] = fix::FieldDef{30, "LastMkt"};
    schema[37] = fix::FieldDef{37, "OrderID"};
    schema[36] = fix::FieldDef{36, "NewSeqNo"};
    schema[35] =
      fix::FieldDef{35,
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
                     {"D", "NEW_ORDER_D"},
                     {"E", "NEW_ORDER_E"},
                     {"F", "ORDER_CANCEL_REQUEST"},
                     {"G", "ORDER_CANCEL_REPLACE_REQUEST"},
                     {"H", "ORDER_STATUS_REQUEST"},
                     {"J", "ALLOCATION_INSTRUCTION"},
                     {"K", "LIST_CANCEL_REQUEST"},
                     {"L", "LIST_EXECUTE"},
                     {"M", "LIST_STATUS_REQUEST"},
                     {"N", "LIST_STATUS"},
                     {"P", "ALLOCATION_INSTRUCTION_ACK"},
                     {"Q", "DONT_KNOW_TRADE"},
                     {"R", "QUOTE_REQUEST"},
                     {"S", "QUOTE"},
                     {"T", "SETTLEMENT_INSTRUCTIONS"},
                     {"V", "MARKET_DATA_REQUEST"},
                     {"W", "MARKET_DATA_W"},
                     {"X", "MARKET_DATA_X"},
                     {"Y", "MARKET_DATA_REQUEST_REJECT"},
                     {"Z", "QUOTE_CANCEL"},
                     {"a", "QUOTE_STATUS_REQUEST"},
                     {"b", "MASS_QUOTE_ACKNOWLEDGEMENT"},
                     {"c", "SECURITY_DEFINITION_REQUEST"},
                     {"d", "SECURITY_DEFINITION"},
                     {"e", "SECURITY_STATUS_REQUEST"},
                     {"f", "SECURITY_STATUS"},
                     {"g", "TRADING_SESSION_STATUS_REQUEST"},
                     {"h", "TRADING_SESSION_STATUS"},
                     {"i", "MASS_QUOTE"},
                     {"j", "BUSINESS_MESSAGE_REJECT"},
                     {"k", "BID_REQUEST"},
                     {"l", "BID_RESPONSE"},
                     {"m", "LIST_STRIKE_PRICE"},
                     {"n", "XML_MESSAGE"},
                     {"o", "REGISTRATION_INSTRUCTIONS"},
                     {"p", "REGISTRATION_INSTRUCTIONS_RESPONSE"},
                     {"q", "ORDER_MASS_CANCEL_REQUEST"},
                     {"r", "ORDER_MASS_CANCEL_REPORT"},
                     {"s", "NEW_ORDER_s"},
                     {"t", "CROSS_ORDER_CANCEL_REPLACE_REQUEST"},
                     {"u", "CROSS_ORDER_CANCEL_REQUEST"},
                     {"v", "SECURITY_TYPE_REQUEST"},
                     {"w", "SECURITY_TYPES"},
                     {"x", "SECURITY_LIST_REQUEST"},
                     {"y", "SECURITY_LIST"},
                     {"z", "DERIVATIVE_SECURITY_LIST_REQUEST"},
                     {"AA", "DERIVATIVE_SECURITY_LIST"},
                     {"AB", "NEW_ORDER_AB"},
                     {"AC", "MULTILEG_ORDER_CANCEL_REPLACE"},
                     {"AD", "TRADE_CAPTURE_REPORT_REQUEST"},
                     {"AE", "TRADE_CAPTURE_REPORT"},
                     {"AF", "ORDER_MASS_STATUS_REQUEST"},
                     {"AG", "QUOTE_REQUEST_REJECT"},
                     {"AH", "RFQ_REQUEST"},
                     {"AI", "QUOTE_STATUS_REPORT"},
                     {"AJ", "QUOTE_RESPONSE"},
                     {"AK", "CONFIRMATION"},
                     {"AL", "POSITION_MAINTENANCE_REQUEST"},
                     {"AM", "POSITION_MAINTENANCE_REPORT"},
                     {"AN", "REQUEST_FOR_POSITIONS"},
                     {"AO", "REQUEST_FOR_POSITIONS_ACK"},
                     {"AP", "POSITION_REPORT"},
                     {"AQ", "TRADE_CAPTURE_REPORT_REQUEST_ACK"},
                     {"AR", "TRADE_CAPTURE_REPORT_ACK"},
                     {"AS", "ALLOCATION_REPORT"},
                     {"AT", "ALLOCATION_REPORT_ACK"},
                     {"AU", "CONFIRMATION_ACK"},
                     {"AV", "SETTLEMENT_INSTRUCTION_REQUEST"},
                     {"AW", "ASSIGNMENT_REPORT"},
                     {"AX", "COLLATERAL_REQUEST"},
                     {"AY", "COLLATERAL_ASSIGNMENT"},
                     {"AZ", "COLLATERAL_RESPONSE"},
                     {"BA", "COLLATERAL_REPORT"},
                     {"BB", "COLLATERAL_INQUIRY"},
                     {"BC", "NETWORK_COUNTERPARTY_SYSTEM_STATUS_REQUEST"},
                     {"BD", "NETWORK_COUNTERPARTY_SYSTEM_STATUS_RESPONSE"},
                     {"BE", "USER_REQUEST"},
                     {"BF", "USER_RESPONSE"},
                     {"BG", "COLLATERAL_INQUIRY_ACK"},
                     {"BH", "CONFIRMATION_REQUEST"},
                     {"BI", "TRADING_SESSION_LIST_REQUEST"},
                     {"BJ", "TRADING_SESSION_LIST"},
                     {"BK", "SECURITY_LIST_UPDATE_REPORT"},
                     {"BL", "ADJUSTED_POSITION_REPORT"},
                     {"BM", "ALLOCATION_INSTRUCTION_ALERT"},
                     {"BN", "EXECUTION_ACKNOWLEDGEMENT"},
                     {"BO", "CONTRARY_INTENTION_REPORT"},
                     {"BP", "SECURITY_DEFINITION_UPDATE_REPORT"}}};
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
      {{"1", "ORDER_CANCEL_REQUEST"}, {"2", "ORDER_CANCEL_REPLACE_REQUEST"}}};
    schema[435] = fix::FieldDef{435, "UnderlyingCouponRate"};
    schema[432] = fix::FieldDef{432, "ExpireDate"};
    schema[433] = fix::FieldDef{433,
                                "ListExecInstType",
                                {{"1", "IMMEDIATE"},
                                 {"2", "WAIT_FOR_EXECUT_INSTRUCTION"},
                                 {"3", "EXCHANGE_SWITCH_CIV_ORDER_3"},
                                 {"4", "EXCHANGE_SWITCH_CIV_ORDER_4"},
                                 {"5", "EXCHANGE_SWITCH_CIV_ORDER_5"}}};
    schema[430] =
      fix::FieldDef{430, "NetGrossInd", {{"1", "NET"}, {"2", "GROSS"}}};
    schema[431] = fix::FieldDef{431,
                                "ListOrderStatus",
                                {{"1", "IN_BIDDING_PROCESS"},
                                 {"2", "RECEIVED_FOR_EXECUTION"},
                                 {"3", "EXECUTING"},
                                 {"4", "CANCELLING"},
                                 {"5", "ALERT"},
                                 {"6", "ALL_DONE"},
                                 {"7", "REJECT"}}};
    schema[1002] =
      fix::FieldDef{1002,
                    "AllocMethod",
                    {{"1", "AUTOMATIC"}, {"2", "GUARANTOR"}, {"3", "MANUAL"}}};
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
    schema[1120] = fix::FieldDef{1120, "NoRootPartySubIDs"};
    schema[744] = fix::FieldDef{
      744, "AssignmentMethod", {{"P", "PRO_RATA"}, {"R", "RANDOM"}}};
    schema[1000] = fix::FieldDef{1000, "UnderlyingTimeUnit"};
    schema[745] = fix::FieldDef{745, "AssignmentUnit"};
    schema[854] = fix::FieldDef{854,
                                "QtyType",
                                {{"0", "UNITS"},
                                 {"1", "CONTRACTS"},
                                 {"2", "UNITS_OF_MEASURE_PER_TIME_UNIT"}}};
    schema[818] = fix::FieldDef{818, "SecondaryTradeReportID"};
    schema[856] = fix::FieldDef{856,
                                "TradeReportType",
                                {{"0", "SUBMIT"},
                                 {"1", "ALLEGED_1"},
                                 {"2", "ACCEPT"},
                                 {"3", "DECLINE"},
                                 {"4", "ADDENDUM"},
                                 {"5", "NO_WAS"},
                                 {"6", "TRADE_REPORT_CANCEL"},
                                 {"7", "7"},
                                 {"8", "DEFAULTED"},
                                 {"9", "INVALID_CMTA"},
                                 {"10", "PENDED"},
                                 {"11", "ALLEGED_NEW"},
                                 {"12", "ALLEGED_ADDENDUM"},
                                 {"13", "ALLEGED_NO_WAS"},
                                 {"14", "ALLEGED_TRADE_REPORT_CANCEL"},
                                 {"15", "ALLEGED_15"}}};
    schema[857] =
      fix::FieldDef{857,
                    "AllocNoOrdersType",
                    {{"0", "NOT_SPECIFIED"}, {"1", "EXPLICIT_LIST_PROVIDED"}}};
    schema[850] = fix::FieldDef{850, "TargetStrategyPerformance"};
    schema[851] = fix::FieldDef{851,
                                "LastLiquidityInd",
                                {{"1", "ADDED_LIQUIDITY"},
                                 {"2", "REMOVED_LIQUIDITY"},
                                 {"3", "LIQUIDITY_ROUTED_OUT"}}};
    schema[852] =
      fix::FieldDef{852, "PublishTrdIndicator", {{"N", "NO"}, {"Y", "YES"}}};
    schema[819] = fix::FieldDef{819,
                                "AvgPxIndicator",
                                {{"0", "NO_AVERAGE_PRICING"},
                                 {"1", "TRADE_IS_PART_OF_AN_AVERAGE_PRICE_"
                                       "GROUP_IDENTIFIED_BY_THE_TRADELINKID"},
                                 {"2", "LAST_TRADE_IS_THE_AVERAGE_PRICE_GROUP_"
                                       "IDENTIFIED_BY_THE_TRADELINKID"}}};
    schema[858] = fix::FieldDef{858, "SharedCommission"};
    schema[859] = fix::FieldDef{859, "ConfirmReqID"};
    schema[748] = fix::FieldDef{748, "TotNumTradeReports"};
    schema[6] = fix::FieldDef{6, "AvgPx"};
    schema[900] = fix::FieldDef{900, "TotalNetValue"};
    schema[848] = fix::FieldDef{848, "TargetStrategyParameters"};
    schema[99] = fix::FieldDef{99, "StopPx"};
    schema[98] = fix::FieldDef{98,
                               "EncryptMethod",
                               {{"0", "NONE"},
                                {"1", "PKCS_1"},
                                {"2", "DES"},
                                {"3", "PKCS_3"},
                                {"4", "PGP_4"},
                                {"5", "PGP_5"},
                                {"6", "PEM"}}};
    schema[844] =
      fix::FieldDef{844,
                    "DiscretionRoundDirection",
                    {{"1", "MORE_AGGRESSIVE"}, {"2", "MORE_PASSIVE"}}};
    schema[1085] = fix::FieldDef{1085, "DisplayLowQty"};
    schema[91] = fix::FieldDef{91, "SecureData"};
    schema[90] = fix::FieldDef{90, "SecureDataLen"};
    schema[93] = fix::FieldDef{93, "SignatureLength"};
    schema[95] = fix::FieldDef{95, "RawDataLength"};
    schema[94] = fix::FieldDef{
      94, "EmailType", {{"0", "NEW"}, {"1", "REPLY"}, {"2", "ADMIN_REPLY"}}};
    schema[97] = fix::FieldDef{97, "PossResend", {{"N", "NO"}, {"Y", "YES"}}};
    schema[96] = fix::FieldDef{96, "RawData"};
    schema[814] = fix::FieldDef{814,
                                "ApplQueueResolution",
                                {{"0", "NO_ACTION_TAKEN"},
                                 {"1", "QUEUE_FLUSHED"},
                                 {"2", "OVERLAY_LAST"},
                                 {"3", "END_SESSION"}}};
    schema[1030] = fix::FieldDef{1030, "ReceivedDeptID"};
    schema[815] = fix::FieldDef{815,
                                "ApplQueueAction",
                                {{"0", "NO_ACTION_TAKEN"},
                                 {"1", "QUEUE_FLUSHED"},
                                 {"2", "OVERLAY_LAST"},
                                 {"3", "END_SESSION"}}};
    schema[1098] = fix::FieldDef{1098, "PegSymbol"};
    schema[740] = fix::FieldDef{740, "LegPool"};
    schema[741] = fix::FieldDef{741, "AllocInterestAtMaturity"};
    schema[742] = fix::FieldDef{742, "AllocAccruedInterestAmt"};
    schema[743] = fix::FieldDef{743, "DeliveryDate"};
    schema[559] = fix::FieldDef{559,
                                "SecurityListRequestType",
                                {{"0", "SYMBOL"},
                                 {"1", "SECURITYTYPE_AND_OR_CFICODE"},
                                 {"2", "PRODUCT"},
                                 {"3", "TRADINGSESSIONID"},
                                 {"4", "ALL_SECURITIES"}}};
    schema[558] = fix::FieldDef{558, "NoSecurityTypes"};
    schema[746] = fix::FieldDef{746, "OpenInterest"};
    schema[747] = fix::FieldDef{
      747, "ExerciseMethod", {{"A", "AUTOMATIC"}, {"M", "MANUAL"}}};
    schema[555] = fix::FieldDef{555, "NoLegs"};
    schema[554] = fix::FieldDef{554, "Password"};
    schema[557] = fix::FieldDef{557, "TotNoSecurityTypes"};
    schema[556] = fix::FieldDef{556, "LegCurrency"};
    schema[551] = fix::FieldDef{551, "OrigCrossID"};
    schema[550] = fix::FieldDef{550,
                                "CrossPrioritization",
                                {{"0", "NONE"},
                                 {"1", "BUY_SIDE_IS_PRIORITIZED"},
                                 {"2", "SELL_SIDE_IS_PRIORITIZED"}}};
    schema[553] = fix::FieldDef{553, "Username"};
    schema[552] =
      fix::FieldDef{552, "NoSides", {{"1", "ONE_SIDE"}, {"2", "BOTH_SIDES"}}};
    schema[238] = fix::FieldDef{238, "Concession"};
    schema[239] = fix::FieldDef{239, "RepoCollateralSecurityType"};
    schema[234] = fix::FieldDef{234, "StipulationValue"};
    schema[235] =
      fix::FieldDef{235,
                    "YieldType",
                    {{"AFTERTAX", "AFTER_TAX_YIELD"},
                     {"ANNUAL", "ANNUAL_YIELD"},
                     {"ATISSUE", "YIELD_AT_ISSUE"},
                     {"AVGMATURITY", "YIELD_TO_AVG_MATURITY"},
                     {"BOOK", "BOOK_YIELD"},
                     {"CALL", "YIELD_TO_NEXT_CALL"},
                     {"CHANGE", "YIELD_CHANGE_SINCE_CLOSE"},
                     {"CLOSE", "CLOSING_YIELD"},
                     {"COMPOUND", "COMPOUND_YIELD"},
                     {"CURRENT", "CURRENT_YIELD"},
                     {"GOVTEQUIV", "GVNT_EQUIVALENT_YIELD"},
                     {"GROSS", "TRUE_GROSS_YIELD"},
                     {"INFLATION", "YIELD_WITH_INFLATION_ASSUMPTION"},
                     {"INVERSEFLOATER", "INVERSE_FLOATER_BOND_YIELD"},
                     {"LASTCLOSE", "MOST_RECENT_CLOSING_YIELD"},
                     {"LASTMONTH", "CLOSING_YIELD_MOST_RECENT_MONTH"},
                     {"LASTQUARTER", "CLOSING_YIELD_MOST_RECENT_QUARTER"},
                     {"LASTYEAR", "CLOSING_YIELD_MOST_RECENT_YEAR"},
                     {"LONGAVGLIFE", "YIELD_TO_LONGEST_AVERAGE_LIFE"},
                     {"MARK", "MARK_TO_MARKET_YIELD"},
                     {"MATURITY", "YIELD_TO_MATURITY"},
                     {"NEXTREFUND", "YIELD_TO_NEXT_REFUND"},
                     {"OPENAVG", "OPEN_AVERAGE_YIELD"},
                     {"PREVCLOSE", "PREVIOUS_CLOSE_YIELD"},
                     {"PROCEEDS", "PROCEEDS_YIELD"},
                     {"PUT", "YIELD_TO_NEXT_PUT"},
                     {"SEMIANNUAL", "SEMI_ANNUAL_YIELD"},
                     {"SHORTAVGLIFE", "YIELD_TO_SHORTEST_AVERAGE_LIFE"},
                     {"SIMPLE", "SIMPLE_YIELD"},
                     {"TAXEQUIV", "TAX_EQUIVALENT_YIELD"},
                     {"TENDER", "YIELD_TO_TENDER_DATE"},
                     {"TRUE", "TRUE_YIELD"},
                     {"VALUE1_32", "YIELD_VALUE_OF_1_32"},
                     {"WORST", "YIELD_TO_WORST"}}};
    schema[236] = fix::FieldDef{236, "Yield"};
    schema[237] = fix::FieldDef{237, "TotalTakedown"};
    schema[230] = fix::FieldDef{230, "ExDate"};
    schema[231] = fix::FieldDef{231, "ContractMultiplier"};
    schema[232] = fix::FieldDef{232, "NoStipulations"};
    schema[233] = fix::FieldDef{
      233,
      "StipulationType",
      {{"AMT", "ALTERNATIVE_MINIMUM_TAX"},
       {"AUTOREINV", "AUTO_REINVESTMENT_AT_RATE_OR_BETTER"},
       {"BANKQUAL", "BANK_QUALIFIED"},
       {"BGNCON", "BARGAIN_CONDITIONS"},
       {"COUPON", "COUPON_RANGE"},
       {"CURRENCY", "ISO_CURRENCY_CODE"},
       {"CUSTOMDATE", "CUSTOM_START_END_DATE"},
       {"GEOG", "GEOGRAPHICS_AND_RANGE"},
       {"HAIRCUT", "VALUATION_DISCOUNT"},
       {"INSURED", "INSURED"},
       {"ISSUE", "YEAR_OR_YEAR_MONTH_OF_ISSUE"},
       {"ISSUER", "ISSUERS_TICKER"},
       {"ISSUESIZE", "ISSUE_SIZE_RANGE"},
       {"LOOKBACK", "LOOKBACK_DAYS"},
       {"LOT", "EXPLICIT_LOT_IDENTIFIER"},
       {"LOTVAR", "LOT_VARIANCE"},
       {"MAT", "MATURITY_YEAR_AND_MONTH"},
       {"MATURITY", "MATURITY_RANGE"},
       {"MAXSUBS", "MAXIMUM_SUBSTITUTIONS"},
       {"MINDNOM", "MINIMUM_DENOMINATION"},
       {"MININCR", "MINIMUM_INCREMENT"},
       {"MINQTY", "MINIMUM_QUANTITY"},
       {"PAYFREQ", "PAYMENT_FREQUENCY_CALENDAR"},
       {"PIECES", "NUMBER_OF_PIECES"},
       {"PMAX", "POOLS_MAXIMUM"},
       {"PPL", "POOLS_PER_LOT"},
       {"PPM", "POOLS_PER_MILLION"},
       {"PPT", "POOLS_PER_TRADE"},
       {"PRICE", "PRICE_RANGE"},
       {"PRICEFREQ", "PRICING_FREQUENCY"},
       {"PROD", "PRODUCTION_YEAR"},
       {"PROTECT", "CALL_PROTECTION"},
       {"PURPOSE", "PURPOSE"},
       {"PXSOURCE", "BENCHMARK_PRICE_SOURCE"},
       {"RATING", "RATING_SOURCE_AND_RANGE"},
       {"REDEMPTION", "TYPE_OF_REDEMPTION"},
       {"RESTRICTED", "RESTRICTED"},
       {"SECTOR", "MARKET_SECTOR"},
       {"SECTYPE", "SECURITY_TYPE_INCLUDED_OR_EXCLUDED"},
       {"STRUCT", "STRUCTURE"},
       {"SUBSFREQ", "SUBSTITUTIONS_FREQUENCY"},
       {"SUBSLEFT", "SUBSTITUTIONS_LEFT"},
       {"TEXT", "FREEFORM_TEXT"},
       {"TRDVAR", "TRADE_VARIANCE"},
       {"WAC", "WEIGHTED_AVERAGE_COUPON"},
       {"WAL", "WEIGHTED_AVERAGE_LIFE_COUPON"},
       {"WALA", "WEIGHTED_AVERAGE_LOAN_AGE"},
       {"WAM", "WEIGHTED_AVERAGE_MATURITY"},
       {"WHOLE", "WHOLE_POOL"},
       {"YIELD", "YIELD_RANGE"},
       {"ABS", "ABSOLUTE_PREPAYMENT_SPEED"},
       {"CPP", "CONSTANT_PREPAYMENT_PENALTY"},
       {"CPR", "CONSTANT_PREPAYMENT_RATE"},
       {"CPY", "CONSTANT_PREPAYMENT_YIELD"},
       {"HEP", "FINAL_CPR_OF_HOME_EQUITY_PREPAYMENT_CURVE"},
       {"MHP", "PERCENT_OF_MANUFACTURED_HOUSING_PREPAYMENT_CURVE"},
       {"MPR", "MONTHLY_PREPAYMENT_RATE"},
       {"PPC", "PERCENT_OF_PROSPECTUS_PREPAYMENT_CURVE"},
       {"PSA", "PERCENT_OF_BMA_PREPAYMENT_CURVE"},
       {"SMM", "SINGLE_MONTHLY_MORTALITY"}}};
    schema[1050] = fix::FieldDef{1050, "InstrumentPartyIDSource"};
    schema[1051] = fix::FieldDef{1051, "InstrumentPartyRole"};
    schema[1052] = fix::FieldDef{1052, "NoInstrumentPartySubIDs"};
    schema[1053] = fix::FieldDef{1053, "InstrumentPartySubID"};
    schema[1054] = fix::FieldDef{1054, "InstrumentPartySubIDType"};
    schema[1055] = fix::FieldDef{1055, "PositionCurrency"};
    schema[1056] = fix::FieldDef{1056, "CalculatedCcyLastQty"};
    schema[1057] =
      fix::FieldDef{1057, "AggressorIndicator", {{"Y", "YES"}, {"N", "NO"}}};
    schema[1058] = fix::FieldDef{1058, "NoUndlyInstrumentParties"};
    schema[1059] = fix::FieldDef{1059, "UndlyInstrumentPartyID"};
    schema[992] =
      fix::FieldDef{992,
                    "IndividualAllocType",
                    {{"1", "SUB_ALLOCATE"}, {"2", "THIRD_PARTY_ALLOCATION"}}};
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
      fix::FieldDef{141, "ResetSeqNumFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[612] = fix::FieldDef{612, "LegStrikePrice"};
    schema[613] = fix::FieldDef{613, "LegOptAttribute"};
    schema[610] = fix::FieldDef{610, "LegMaturityMonthYear"};
    schema[611] = fix::FieldDef{611, "LegMaturityDate"};
    schema[616] = fix::FieldDef{616, "LegSecurityExchange"};
    schema[617] = fix::FieldDef{617, "LegIssuer"};
    schema[148] = fix::FieldDef{148, "Headline"};
    schema[149] = fix::FieldDef{149, "URLLink"};
    schema[1007] = fix::FieldDef{1007, "SideReasonCd"};
    schema[912] =
      fix::FieldDef{912, "LastRptRequested", {{"N", "NO"}, {"Y", "YES"}}};
    schema[1139] = fix::FieldDef{1139, "ExchangeSpecialInstructions"};
    schema[1006] = fix::FieldDef{1006, "SideFillStationCd"};
    schema[1005] = fix::FieldDef{1005, "SideTradeReportID"};
    schema[948] = fix::FieldDef{948, "NoNested3PartyIDs"};
    schema[949] = fix::FieldDef{949, "Nested3PartyID"};
    schema[946] =
      fix::FieldDef{946,
                    "CollInquiryResult",
                    {{"0", "SUCCESSFUL"},
                     {"1", "INVALID_OR_UNKNOWN_INSTRUMENT"},
                     {"2", "INVALID_OR_UNKNOWN_COLLATERAL_TYPE"},
                     {"3", "INVALID_PARTIES"},
                     {"4", "INVALID_TRANSPORT_TYPE_REQUESTED"},
                     {"5", "INVALID_DESTINATION_REQUESTED"},
                     {"6", "NO_COLLATERAL_FOUND_FOR_THE_TRADE_SPECIFIED"},
                     {"7", "NO_COLLATERAL_FOUND_FOR_THE_ORDER_SPECIFIED"},
                     {"8", "COLLATERAL_INQUIRY_TYPE_NOT_SUPPORTED"},
                     {"9", "UNAUTHORIZED_FOR_COLLATERAL_INQUIRY"},
                     {"99", "OTHER"}}};
    schema[947] = fix::FieldDef{947, "StrikeCurrency"};
    schema[944] = fix::FieldDef{
      944, "CollAction", {{"0", "RETAIN"}, {"1", "ADD"}, {"2", "REMOVE"}}};
    schema[945] = fix::FieldDef{945,
                                "CollInquiryStatus",
                                {{"0", "ACCEPTED"},
                                 {"1", "ACCEPTED_WITH_WARNINGS"},
                                 {"2", "COMPLETED"},
                                 {"3", "COMPLETED_WITH_WARNINGS"},
                                 {"4", "REJECTED"}}};
    schema[942] = fix::FieldDef{942, "LegStrikeCurrency"};
    schema[943] = fix::FieldDef{943, "TimeBracket"};
    schema[940] = fix::FieldDef{940,
                                "AffirmStatus",
                                {{"1", "RECEIVED"},
                                 {"2", "CONFIRM_REJECTED_IE_NOT_AFFIRMED"},
                                 {"3", "AFFIRMED"}}};
    schema[941] = fix::FieldDef{941, "UnderlyingStrikeCurrency"};
    schema[768] = fix::FieldDef{768, "NoTrdRegTimestamps"};
    schema[689] = fix::FieldDef{689, "LegStipulationValue"};
    schema[688] = fix::FieldDef{688, "LegStipulationType"};
    schema[685] = fix::FieldDef{685, "LegOrderQty"};
    schema[684] = fix::FieldDef{684, "LegOfferPx"};
    schema[687] = fix::FieldDef{687, "LegQty"};
    schema[686] = fix::FieldDef{686, "LegPriceType"};
    schema[681] = fix::FieldDef{681, "LegBidPx"};
    schema[680] = fix::FieldDef{680, "LegBenchmarkPriceType"};
    schema[683] = fix::FieldDef{683, "NoLegStipulations"};
    schema[682] = fix::FieldDef{682, "LegIOIQty"};
    schema[623] = fix::FieldDef{623, "LegRatioQty"};
    schema[1103] = fix::FieldDef{1103, "TriggerSymbol"};
    schema[622] = fix::FieldDef{622, "EncodedLegSecurityDesc"};
    schema[133] = fix::FieldDef{133, "OfferPx"};
    schema[132] = fix::FieldDef{132, "BidPx"};
    schema[131] = fix::FieldDef{131, "QuoteReqID"};
    schema[130] =
      fix::FieldDef{130, "IOINaturalFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[137] = fix::FieldDef{137, "MiscFeeAmt"};
    schema[136] = fix::FieldDef{136, "NoMiscFees"};
    schema[135] = fix::FieldDef{135, "OfferSize"};
    schema[134] = fix::FieldDef{134, "BidSize"};
    schema[494] = fix::FieldDef{494, "Designation"};
    schema[495] = fix::FieldDef{495,
                                "TaxAdvantageType",
                                {{"0", "NONE_NOT_APPLICABLE"},
                                 {"1", "MAXI_ISA"},
                                 {"2", "TESSA"},
                                 {"3", "MINI_CASH_ISA"},
                                 {"4", "MINI_STOCKS_AND_SHARES_ISA"},
                                 {"5", "MINI_INSURANCE_ISA"},
                                 {"6", "CURRENT_YEAR_PAYMENT"},
                                 {"7", "PRIOR_YEAR_PAYMENT"},
                                 {"8", "ASSET_TRANSFER"},
                                 {"9", "EMPLOYEE_9"},
                                 {"10", "EMPLOYEE_10"},
                                 {"11", "EMPLOYER_11"},
                                 {"12", "EMPLOYER_12"},
                                 {"13", "NON_FUND_PROTOTYPE_IRA"},
                                 {"14", "NON_FUND_QUALIFIED_PLAN"},
                                 {"15", "DEFINED_CONTRIBUTION_PLAN"},
                                 {"16", "INDIVIDUAL_RETIREMENT_ACCOUNT_16"},
                                 {"17", "INDIVIDUAL_RETIREMENT_ACCOUNT_17"},
                                 {"18", "KEOGH"},
                                 {"19", "PROFIT_SHARING_PLAN"},
                                 {"20", "401"},
                                 {"21", "SELF_DIRECTED_IRA"},
                                 {"22", "403"},
                                 {"23", "457"},
                                 {"24", "ROTH_IRA_24"},
                                 {"25", "ROTH_IRA_25"},
                                 {"26", "ROTH_CONVERSION_IRA_26"},
                                 {"27", "ROTH_CONVERSION_IRA_27"},
                                 {"28", "EDUCATION_IRA_28"},
                                 {"29", "EDUCATION_IRA_29"},
                                 {"999", "OTHER"}}};
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
                                 {"9", "CONSUMPTION_TAX"},
                                 {"10", "PER_TRANSACTION"},
                                 {"11", "CONVERSION"},
                                 {"12", "AGENT"},
                                 {"13", "TRANSFER_FEE"},
                                 {"14", "SECURITY_LENDING"}}};
    schema[138] = fix::FieldDef{138, "MiscFeeCurr"};
    schema[490] = fix::FieldDef{490, "CardExpDate"};
    schema[491] = fix::FieldDef{491, "CardIssNum"};
    schema[492] = fix::FieldDef{492,
                                "PaymentMethod",
                                {{"1", "CREST"},
                                 {"2", "NSCC"},
                                 {"3", "EUROCLEAR"},
                                 {"4", "CLEARSTREAM"},
                                 {"5", "CHEQUE"},
                                 {"6", "TELEGRAPHIC_TRANSFER"},
                                 {"7", "FED_WIRE"},
                                 {"8", "DEBIT_CARD"},
                                 {"9", "DIRECT_DEBIT"},
                                 {"10", "DIRECT_CREDIT"},
                                 {"11", "CREDIT_CARD"},
                                 {"12", "ACH_DEBIT"},
                                 {"13", "ACH_CREDIT"},
                                 {"14", "BPAY"},
                                 {"15", "HIGH_VALUE_CLEARING_SYSTEM"}}};
    schema[493] = fix::FieldDef{493, "RegistAcctType"};
    schema[25] = fix::FieldDef{
      25, "IOIQltyInd", {{"H", "HIGH"}, {"L", "LOW"}, {"M", "MEDIUM"}}};
    schema[26] = fix::FieldDef{26, "IOIRefID"};
    schema[27] = fix::FieldDef{27,
                               "IOIQty",
                               {{"S", "SMALL"},
                                {"M", "MEDIUM"},
                                {"L", "LARGE"},
                                {"U", "UNDISCLOSED_QUANTITY"}}};
    schema[21] = fix::FieldDef{
      21,
      "HandlInst",
      {{"1", "AUTOMATED_EXECUTION_ORDER_PRIVATE_NO_BROKER_INTERVENTION"},
       {"2", "AUTOMATED_EXECUTION_ORDER_PUBLIC_BROKER_INTERVENTION_OK"},
       {"3", "MANUAL_ORDER_BEST_EXECUTION"}}};
    schema[22] = fix::FieldDef{22,
                               "SecurityIDSource",
                               {{"1", "CUSIP"},
                                {"2", "SEDOL"},
                                {"3", "QUIK"},
                                {"4", "ISIN_NUMBER"},
                                {"5", "RIC_CODE"},
                                {"6", "ISO_CURRENCY_CODE"},
                                {"7", "ISO_COUNTRY_CODE"},
                                {"8", "EXCHANGE_SYMBOL"},
                                {"9", "CONSOLIDATED_TAPE_ASSOCIATION"},
                                {"A", "BLOOMBERG_SYMBOL"},
                                {"B", "WERTPAPIER"},
                                {"C", "DUTCH"},
                                {"D", "VALOREN"},
                                {"E", "SICOVAM"},
                                {"F", "BELGIAN"},
                                {"G", "COMMON"},
                                {"H", "CLEARING_HOUSE"},
                                {"I", "ISDA_FPML_PRODUCT_SPECIFICATION"},
                                {"J", "OPTION_PRICE_REPORTING_AUTHORITY"},
                                {"K", "ISDA_FPML_PRODUCT_URL"},
                                {"L", "LETTER_OF_CREDIT"}}};
    schema[23] = fix::FieldDef{23, "IOIID"};
    schema[927] = fix::FieldDef{927, "UserStatusText"};
    schema[28] = fix::FieldDef{
      28, "IOITransType", {{"N", "NEW"}, {"C", "CANCEL"}, {"R", "REPLACE"}}};
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
    schema[401] = fix::FieldDef{
      401, "SideValueInd", {{"1", "SIDE_VALUE_1"}, {"2", "SIDE_VALUE_2"}}};
    schema[400] = fix::FieldDef{400, "BidDescriptor"};
    schema[933] = fix::FieldDef{933, "NetworkRequestID"};
    schema[932] = fix::FieldDef{932, "NetworkResponseID"};
    schema[931] = fix::FieldDef{931, "RefSubID"};
    schema[930] = fix::FieldDef{930, "RefCompID"};
    schema[937] = fix::FieldDef{937,
                                "NetworkStatusResponseType",
                                {{"1", "FULL"}, {"2", "INCREMENTAL_UPDATE"}}};
    schema[629] = fix::FieldDef{629, "HopSendingTime"};
    schema[409] = fix::FieldDef{409,
                                "LiquidityIndType",
                                {{"1", "5_DAY_MOVING_AVERAGE"},
                                 {"2", "20_DAY_MOVING_AVERAGE"},
                                 {"3", "NORMAL_MARKET_SIZE"},
                                 {"4", "OTHER"}}};
    schema[408] = fix::FieldDef{408, "ValueOfFutures"};
    schema[1069] = fix::FieldDef{1069, "SwapPoints"};
    schema[628] = fix::FieldDef{628, "HopCompID"};
    schema[1068] = fix::FieldDef{1068, "LegOfferForwardPoints"};
    schema[758] = fix::FieldDef{758, "Nested2PartyIDSource"};
    schema[1018] = fix::FieldDef{1018, "NoInstrumentParties"};
    schema[379] = fix::FieldDef{379, "BusinessRejectRefID"};
    schema[378] = fix::FieldDef{378,
                                "ExecRestatementReason",
                                {{"0", "GT_CORPORATE_ACTION"},
                                 {"1", "GT_RENEWAL"},
                                 {"2", "VERBAL_CHANGE"},
                                 {"3", "REPRICING_OF_ORDER"},
                                 {"4", "BROKER_OPTION"},
                                 {"5", "PARTIAL_DECLINE_OF_ORDERQTY"},
                                 {"6", "CANCEL_ON_TRADING_HALT"},
                                 {"7", "CANCEL_ON_SYSTEM_FAILURE"},
                                 {"8", "MARKET"},
                                 {"9", "CANCELED_NOT_BEST"},
                                 {"10", "WAREHOUSE_RECAP"},
                                 {"11", "PEG_REFRESH"},
                                 {"99", "OTHER"}}};
    schema[829] =
      fix::FieldDef{829,
                    "TrdSubType",
                    {{"0", "CMTA"},
                     {"1", "INTERNAL_TRANSFER_OR_ADJUSTMENT"},
                     {"2", "EXTERNAL_TRANSFER_OR_TRANSFER_OF_ACCOUNT"},
                     {"3", "REJECT_FOR_SUBMITTING_SIDE"},
                     {"4", "ADVISORY_FOR_CONTRA_SIDE"},
                     {"5", "OFFSET_DUE_TO_AN_ALLOCATION"},
                     {"6", "ONSET_DUT_TO_AN_ALLOCATION"},
                     {"7", "DIFFERENTIAL_SPREAD"},
                     {"8", "IMPLIED_SPREAD_LEG_EXECUTED_AGAINST_AN_OUTRIGHT"},
                     {"9", "TRANSACTION_FROM_EXERCISE"},
                     {"10", "TRANSACTION_FROM_ASSIGNMENT"},
                     {"11", "ACATS"},
                     {"14", "AI"},
                     {"15", "B"},
                     {"16", "K"},
                     {"17", "LC"},
                     {"18", "M"},
                     {"19", "N"},
                     {"20", "NM"},
                     {"21", "NR"},
                     {"22", "P"},
                     {"23", "PA"},
                     {"24", "PC"},
                     {"25", "PN"},
                     {"26", "R"},
                     {"27", "RO"},
                     {"28", "RT"},
                     {"29", "SW"},
                     {"30", "T"},
                     {"31", "WN"},
                     {"32", "WT"}}};
    schema[828] = fix::FieldDef{828,
                                "TrdType",
                                {{"0", "REGULAR_TRADE"},
                                 {"1", "BLOCK_TRADE_1"},
                                 {"2", "EFP"},
                                 {"3", "TRANSFER"},
                                 {"4", "LATE_TRADE"},
                                 {"5", "T_TRADE"},
                                 {"6", "WEIGHTED_AVERAGE_PRICE_TRADE"},
                                 {"7", "BUNCHED_TRADE"},
                                 {"8", "LATE_BUNCHED_TRADE"},
                                 {"9", "PRIOR_REFERENCE_PRICE_TRADE"},
                                 {"10", "AFTER_HOURS_TRADE"},
                                 {"11", "EXCHANGE_FOR_RISK"},
                                 {"12", "EXCHANGE_FOR_SWAP"},
                                 {"13", "EXCHANGE_OF_FUTURES_FOR"},
                                 {"14", "EXCHANGE_OF_OPTIONS_FOR_OPTIONS"},
                                 {"15", "TRADING_AT_SETTLEMENT"},
                                 {"16", "ALL_OR_NONE"},
                                 {"17", "FUTURES_LARGE_ORDER_EXECUTION"},
                                 {"18", "EXCHANGE_OF_FUTURES_FOR_FUTURES"},
                                 {"19", "OPTION_INTERIM_TRADE"},
                                 {"20", "OPTION_CABINET_TRADE"},
                                 {"22", "PRIVATELY_NEGOTIATED_TRADES"},
                                 {"23", "SUBSTITUTION_OF_FUTURES_FOR_FORWARDS"},
                                 {"24", "ERROR_TRADE"},
                                 {"25", "SPECIAL_CUM_DIVIDEND"},
                                 {"26", "SPECIAL_EX_DIVIDEND"},
                                 {"27", "SPECIAL_CUM_COUPON"},
                                 {"28", "SPECIAL_EX_COUPON"},
                                 {"29", "CASH_SETTLEMENT"},
                                 {"30", "SPECIAL_PRICE"},
                                 {"31", "GUARANTEED_DELIVERY"},
                                 {"32", "SPECIAL_CUM_RIGHTS"},
                                 {"33", "SPECIAL_EX_RIGHTS"},
                                 {"34", "SPECIAL_CUM_CAPITAL_REPAYMENTS"},
                                 {"35", "SPECIAL_EX_CAPITAL_REPAYMENTS"},
                                 {"36", "SPECIAL_CUM_BONUS"},
                                 {"37", "SPECIAL_EX_BONUS"},
                                 {"38", "BLOCK_TRADE_38"},
                                 {"39", "WORKED_PRINCIPAL_TRADE"},
                                 {"40", "BLOCK_TRADES"},
                                 {"41", "NAME_CHANGE"},
                                 {"42", "PORTFOLIO_TRANSFER"},
                                 {"43", "PROROGATION_BUY"},
                                 {"44", "PROROGATION_SELL"},
                                 {"45", "OPTION_EXERCISE"},
                                 {"46", "DELTA_NEUTRAL_TRANSACTION"},
                                 {"47", "FINANCING_TRANSACTION"}}};
    schema[1060] = fix::FieldDef{1060, "UndlyInstrumentPartyIDSource"};
    schema[371] = fix::FieldDef{371, "RefTagID"};
    schema[824] = fix::FieldDef{824, "TradeLegRefID"};
    schema[373] =
      fix::FieldDef{373,
                    "SessionRejectReason",
                    {{"0", "INVALID_TAG_NUMBER"},
                     {"1", "REQUIRED_TAG_MISSING"},
                     {"2", "TAG_NOT_DEFINED_FOR_THIS_MESSAGE_TYPE"},
                     {"3", "UNDEFINED_TAG"},
                     {"4", "TAG_SPECIFIED_WITHOUT_A_VALUE"},
                     {"5", "VALUE_IS_INCORRECT"},
                     {"6", "INCORRECT_DATA_FORMAT_FOR_VALUE"},
                     {"7", "DECRYPTION_PROBLEM"},
                     {"8", "SIGNATURE_PROBLEM"},
                     {"9", "COMPID_PROBLEM"},
                     {"10", "SENDINGTIME_ACCURACY_PROBLEM"},
                     {"11", "INVALID_MSGTYPE"},
                     {"12", "XML_VALIDATION_ERROR"},
                     {"13", "TAG_APPEARS_MORE_THAN_ONCE"},
                     {"14", "TAG_SPECIFIED_OUT_OF_REQUIRED_ORDER"},
                     {"15", "REPEATING_GROUP_FIELDS_OUT_OF_ORDER"},
                     {"16", "INCORRECT_NUMINGROUP_COUNT_FOR_REPEATING_GROUP"},
                     {"17", "NON_DATA_VALUE_INCLUDES_FIELD_DELIMITER"},
                     {"99", "OTHER"}}};
    schema[372] = fix::FieldDef{372, "RefMsgType"};
    schema[375] = fix::FieldDef{375, "ContraBroker"};
    schema[374] =
      fix::FieldDef{374, "BidRequestTransType", {{"C", "CANCEL"}, {"N", "NO"}}};
    schema[377] =
      fix::FieldDef{377, "SolicitedFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[376] = fix::FieldDef{376, "ComplianceID"};
    schema[708] = fix::FieldDef{708, "PosAmt"};
    schema[709] =
      fix::FieldDef{709,
                    "PosTransType",
                    {{"1", "EXERCISE"},
                     {"2", "DO_NOT_EXERCISE"},
                     {"3", "POSITION_ADJUSTMENT"},
                     {"4", "POSITION_CHANGE_SUBMISSION_MARGIN_DISPOSITION"},
                     {"5", "PLEDGE"},
                     {"6", "LARGE_TRADER_SUBMISSION"}}};
    schema[704] = fix::FieldDef{704, "LongQty"};
    schema[705] = fix::FieldDef{705, "ShortQty"};
    schema[706] =
      fix::FieldDef{706,
                    "PosQtyStatus",
                    {{"0", "SUBMITTED"}, {"1", "ACCEPTED"}, {"2", "REJECTED"}}};
    schema[707] = fix::FieldDef{707,
                                "PosAmtType",
                                {{"CASH", "CASH_AMOUNT"},
                                 {"CRES", "CASH_RESIDUAL_AMOUNT"},
                                 {"FMTM", "FINAL_MARK_TO_MARKET_AMOUNT"},
                                 {"IMTM", "INCREMENTAL_MARK_TO_MARKET_AMOUNT"},
                                 {"PREM", "PREMIUM_AMOUNT"},
                                 {"SMTM", "START_OF_DAY_MARK_TO_MARKET_AMOUNT"},
                                 {"TVAR", "TRADE_VARIATION_AMOUNT"},
                                 {"VADJ", "VALUE_ADJUSTED_AMOUNT"},
                                 {"SETL", "SETTLEMENT_VALUE"}}};
    schema[700] = fix::FieldDef{700, "ReversalIndicator"};
    schema[618] = fix::FieldDef{618, "EncodedLegIssuerLen"};
    schema[702] = fix::FieldDef{702, "NoPositions"};
    schema[703] = fix::FieldDef{703,
                                "PosType",
                                {{"ALC", "ALLOCATION_TRADE_QTY"},
                                 {"AS", "OPTION_ASSIGNMENT"},
                                 {"ASF", "AS_OF_TRADE_QTY"},
                                 {"DLV", "DELIVERY_QTY"},
                                 {"ETR", "ELECTRONIC_TRADE_QTY"},
                                 {"EX", "OPTION_EXERCISE_QTY"},
                                 {"FIN", "END_OF_DAY_QTY"},
                                 {"IAS", "INTRA_SPREAD_QTY"},
                                 {"IES", "INTER_SPREAD_QTY"},
                                 {"PA", "ADJUSTMENT_QTY"},
                                 {"PIT", "PIT_TRADE_QTY"},
                                 {"SOD", "START_OF_DAY_QTY"},
                                 {"SPL", "INTEGRAL_SPLIT"},
                                 {"TA", "TRANSACTION_FROM_ASSIGNMENT"},
                                 {"TOT", "TOTAL_TRANSACTION_QTY"},
                                 {"TQ", "TRANSACTION_QUANTITY"},
                                 {"TRF", "TRANSFER_TRADE_QTY"},
                                 {"TX", "TRANSACTION_FROM_EXERCISE"},
                                 {"XM", "CROSS_MARGIN_QTY"},
                                 {"RCV", "RECEIVE_QUANTITY"},
                                 {"CAA", "CORPORATE_ACTION_ADJUSTMENT"},
                                 {"DN", "DELIVERY_NOTICE_QTY"},
                                 {"EP", "EXCHANGE_FOR_PHYSICAL_QTY"}}};
    schema[393] = fix::FieldDef{393, "TotNoRelatedSym"};
    schema[392] = fix::FieldDef{392, "ListName"};
    schema[88] = fix::FieldDef{88,
                               "AllocRejCode",
                               {{"0", "UNKNOWN_ACCOUNT"},
                                {"1", "INCORRECT_QUANTITY"},
                                {"2", "INCORRECT_AVERAGEG_PRICE"},
                                {"3", "UNKNOWN_EXECUTING_BROKER_MNEMONIC"},
                                {"4", "COMMISSION_DIFFERENCE"},
                                {"5", "UNKNOWN_ORDERID"},
                                {"6", "UNKNOWN_LISTID"},
                                {"7", "OTHER"},
                                {"8", "INCORRECT_ALLOCATED_QUANTITY"},
                                {"9", "CALCULATION_DIFFERENCE"},
                                {"10", "UNKNOWN_OR_STALE_EXECID"},
                                {"11", "MISMATCHED_DATA"},
                                {"12", "UNKNOWN_CLORDID"},
                                {"13", "WAREHOUSE_REQUEST_REJECTED"}}};
    schema[89] = fix::FieldDef{89, "Signature"};
    schema[397] = fix::FieldDef{397, "SideValue2"};
    schema[396] = fix::FieldDef{396, "SideValue1"};
    schema[395] = fix::FieldDef{395, "NumTickets"};
    schema[394] = fix::FieldDef{394,
                                "BidType",
                                {{"1", "NON_DISCLOSED_STYLE"},
                                 {"2", "DISCLOSED_SYTLE"},
                                 {"3", "NO_BIDDING_PROCESS"}}};
    schema[82] = fix::FieldDef{82, "NoRpts"};
    schema[83] = fix::FieldDef{83, "RptSeq"};
    schema[80] = fix::FieldDef{80, "AllocQty"};
    schema[81] = fix::FieldDef{81,
                               "ProcessCode",
                               {{"0", "REGULAR"},
                                {"1", "SOFT_DOLLAR"},
                                {"2", "STEP_IN"},
                                {"3", "STEP_OUT"},
                                {"4", "SOFT_DOLLAR_STEP_IN"},
                                {"5", "SOFT_DOLLAR_STEP_OUT"},
                                {"6", "PLAN_SPONSOR"}}};
    schema[87] = fix::FieldDef{87,
                               "AllocStatus",
                               {{"0", "ACCEPTED"},
                                {"1", "BLOCK_LEVEL_REJECT"},
                                {"2", "ACCOUNT_LEVEL_REJECT"},
                                {"3", "RECEIVED"},
                                {"4", "INCOMPLETE"},
                                {"5", "REJECTED_BY_INTERMEDIARY"},
                                {"6", "ALLOCATION_PENDING"},
                                {"7", "REVERSED"}}};
    schema[84] = fix::FieldDef{84, "CxlQty"};
    schema[85] = fix::FieldDef{85, "NoDlvyInst"};
    schema[797] = fix::FieldDef{797, "CopyMsgIndicator"};
    schema[796] = fix::FieldDef{796,
                                "AllocCancReplaceReason",
                                {{"1", "ORIGINAL_DETAILS_INCOMPLETE_INCORRECT"},
                                 {"2", "CHANGE_IN_UNDERLYING_ORDER_DETAILS"},
                                 {"99", "OTHER"}}};
    schema[795] = fix::FieldDef{795, "AllocReportRefID"};
    schema[794] =
      fix::FieldDef{794,
                    "AllocReportType",
                    {{"2", "PRELIMINARY_REQUEST_TO_INTERMEDIARY"},
                     {"3", "SELLSIDE_CALCULATED_USING_PRELIMINARY"},
                     {"4", "SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY"},
                     {"5", "WAREHOUSE_RECAP"},
                     {"8", "REQUEST_TO_INTERMEDIARY"},
                     {"9", "ACCEPT"},
                     {"10", "REJECT"},
                     {"11", "ACCEPT_PENDING"},
                     {"12", "COMPLETE"},
                     {"14", "REVERSE_PENDING"}}};
    schema[793] = fix::FieldDef{793, "SecondaryAllocID"};
    schema[792] =
      fix::FieldDef{792,
                    "SettlInstReqRejCode",
                    {{"0", "UNABLE_TO_PROCESS_REQUEST"},
                     {"1", "UNKNOWN_ACCOUNT"},
                     {"2", "NO_MATCHING_SETTLEMENT_INSTRUCTIONS_FOUND"},
                     {"99", "OTHER"}}};
    schema[791] = fix::FieldDef{791, "SettlInstReqID"};
    schema[790] = fix::FieldDef{790, "OrdStatusReqID"};
    schema[799] = fix::FieldDef{799, "OrderAvgPx"};
    schema[798] =
      fix::FieldDef{798,
                    "AllocAccountType",
                    {{"1", "ACCOUNT_IS_CARRIED_PN_CUSTOMER_SIDE_OF_BOOKS"},
                     {"2", "ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS"},
                     {"3", "HOUSE_TRADER"},
                     {"4", "FLOOR_TRADER"},
                     {"6", "ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_"
                           "AND_IS_CROSS_MARGINED"},
                     {"7", "ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED"},
                     {"8", "JOINT_BACK_OFFICE_ACCOUNT"}}};
    schema[7] = fix::FieldDef{7, "BeginSeqNo"};
    schema[601] = fix::FieldDef{601, "LegSymbolSfx"};
    schema[607] = fix::FieldDef{607, "LegProduct"};
    schema[586] = fix::FieldDef{586, "OrigOrdModTime"};
    schema[587] = fix::FieldDef{587, "LegSettlType"};
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
                     {"7", "STATUS_FOR_ALL_ORDERS"},
                     {"8", "STATUS_FOR_ORDERS_FOR_A_PARTYID"}}};
    schema[582] =
      fix::FieldDef{582,
                    "CustOrderCapacity",
                    {{"1", "MEMBER_TRADING_FOR_THEIR_OWN_ACCOUNT"},
                     {"2", "CLEARING_FIRM_TRADING_FOR_ITS_PROPRIETARY_ACCOUNT"},
                     {"3", "MEMBER_TRADING_FOR_ANOTHER_MEMBER"},
                     {"4", "ALL_OTHER"}}};
    schema[583] = fix::FieldDef{583, "ClOrdLinkID"};
    schema[580] = fix::FieldDef{580, "NoDates"};
    schema[581] =
      fix::FieldDef{581,
                    "AccountType",
                    {{"1", "ACCOUNT_IS_CARRIED_ON_CUSTOMER_SIDE_OF_THE_BOOKS"},
                     {"2", "ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS"},
                     {"3", "HOUSE_TRADER"},
                     {"4", "FLOOR_TRADER"},
                     {"6", "ACCOUNT_IS_CARRIED_ON_NON_CUSTOMER_SIDE_OF_BOOKS_"
                           "AND_IS_CROSS_MARGINED"},
                     {"7", "ACCOUNT_IS_HOUSE_TRADER_AND_IS_CROSS_MARGINED"},
                     {"8", "JOINT_BACK_OFFICE_ACCOUNT"}}};
    schema[1133] =
      fix::FieldDef{1133,
                    "ExDestinationIDSource",
                    {{"B", "BIC"},
                     {"C", "GENERALLY_ACCEPTED_MARKET_PARTICIPANT_IDENTIFIER"},
                     {"D", "PROPRIETARY"},
                     {"E", "ISO_COUNTRY_CODE"},
                     {"G", "MIC"}}};
    schema[1132] = fix::FieldDef{1132, "TZTransactTime"};
    schema[1131] = fix::FieldDef{1131, "RefCstmApplVerID"};
    schema[1130] = fix::FieldDef{1130, "RefApplVerID"};
    schema[1137] = fix::FieldDef{1137, "DefaultApplVerID"};
    schema[1136] = fix::FieldDef{1136, "AllocClearingFeeIndicator"};
    schema[588] = fix::FieldDef{588, "LegSettlDate"};
    schema[589] = fix::FieldDef{
      589,
      "DayBookingInst",
      {{"0", "CAN_TRIGGER_BOOKING_WITHOUT_REFERENCE_TO_THE_ORDER_INITIATOR"},
       {"1", "SPEAK_WITH_ORDER_INITIATOR_BEFORE_BOOKING"},
       {"2", "ACCUMULATE"}}};
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
    schema[924] = fix::FieldDef{924,
                                "UserRequestType",
                                {{"1", "LOG_ON_USER"},
                                 {"2", "LOG_OFF_USER"},
                                 {"3", "CHANGE_PASSWORD_FOR_USER"},
                                 {"4", "REQUEST_INDIVIDUAL_USER_STATUS"}}};
    schema[970] = fix::FieldDef{970, "PositionLimit"};
    schema[925] = fix::FieldDef{925, "NewPassword"};
    schema[519] =
      fix::FieldDef{519,
                    "ContAmtType",
                    {{"1", "COMMISSION_AMOUNT"},
                     {"2", "COMMISSION_PERCENT"},
                     {"3", "INITIAL_CHARGE_AMOUNT"},
                     {"4", "INITIAL_CHARGE_PERCENT"},
                     {"5", "DISCOUNT_AMOUNT"},
                     {"6", "DISCOUNT_PERCENT"},
                     {"7", "DILUTION_LEVY_AMOUNT"},
                     {"8", "DILUTION_LEVY_PERCENT"},
                     {"9", "EXIT_CHARGE_AMOUNT"},
                     {"10", "EXIT_CHARGE_PERCENT"},
                     {"11", "FUND_BASED_RENEWAL_COMMISSION_PERCENT"},
                     {"12", "PROJECTED_FUND_VALUE"},
                     {"13", "FUND_BASED_RENEWAL_COMMISSION_AMOUNT_13"},
                     {"14", "FUND_BASED_RENEWAL_COMMISSION_AMOUNT_14"},
                     {"15", "NET_SETTLEMENT_AMOUNT"}}};
    schema[518] = fix::FieldDef{518, "NoContAmts"};
    schema[926] = fix::FieldDef{926,
                                "UserStatus",
                                {{"1", "LOGGED_IN"},
                                 {"2", "NOT_LOGGED_IN"},
                                 {"3", "USER_NOT_RECOGNISED"},
                                 {"4", "PASSWORD_INCORRECT"},
                                 {"5", "PASSWORD_CHANGED"},
                                 {"6", "OTHER"}}};
    schema[1009] = fix::FieldDef{1009, "SideQty"};
    schema[1008] = fix::FieldDef{1008, "SideTrdSubTyp"};
    schema[511] = fix::FieldDef{511, "RegistEmail"};
    schema[510] = fix::FieldDef{510, "NoDistribInsts"};
    schema[513] = fix::FieldDef{513, "RegistID"};
    schema[512] = fix::FieldDef{512, "DistribPercentage"};
    schema[515] = fix::FieldDef{515, "ExecValuationPoint"};
    schema[514] =
      fix::FieldDef{514,
                    "RegistTransType",
                    {{"0", "NEW"}, {"2", "CANCEL"}, {"1", "REPLACE"}}};
    schema[517] = fix::FieldDef{517,
                                "OwnershipType",
                                {{"J", "JOINT_INVESTORS"},
                                 {"T", "TENANTS_IN_COMMON"},
                                 {"2", "JOINT_TRUSTEES"}}};
    schema[516] = fix::FieldDef{516, "OrderPercent"};
    schema[458] = fix::FieldDef{458, "UnderlyingSecurityAltID"};
    schema[459] = fix::FieldDef{459, "UnderlyingSecurityAltIDSource"};
    schema[621] = fix::FieldDef{621, "EncodedLegSecurityDescLen"};
    schema[620] = fix::FieldDef{620, "LegSecurityDesc"};
    schema[627] = fix::FieldDef{627, "NoHops"};
    schema[626] =
      fix::FieldDef{626,
                    "AllocType",
                    {{"1", "CALCULATED"},
                     {"2", "PRELIMINARY"},
                     {"3", "SELLSIDE_CALCULATED_USING_PRELIMINARY"},
                     {"4", "SELLSIDE_CALCULATED_WITHOUT_PRELIMINARY"},
                     {"5", "READY_TO_BOOK"},
                     {"6", "BUYSIDE_READY_TO_BOOK"},
                     {"7", "WAREHOUSE_INSTRUCTION"},
                     {"8", "REQUEST_TO_INTERMEDIARY"},
                     {"9", "ACCEPT"},
                     {"10", "REJECT"},
                     {"11", "ACCEPT_PENDING"},
                     {"12", "INCOMPLETE_GROUP"},
                     {"13", "COMPLETE_GROUP"},
                     {"14", "REVERSAL_PENDING"}}};
    schema[625] = fix::FieldDef{625, "TradingSessionSubID"};
    schema[624] = fix::FieldDef{624, "LegSide"};
    schema[451] = fix::FieldDef{451, "NetChgPrevDay"};
    schema[452] =
      fix::FieldDef{452,
                    "PartyRole",
                    {{"1", "EXECUTING_FIRM"},
                     {"2", "BROKER_OF_CREDIT"},
                     {"3", "CLIENT_ID"},
                     {"4", "CLEARING_FIRM"},
                     {"5", "INVESTOR_ID"},
                     {"6", "INTRODUCING_FIRM"},
                     {"7", "ENTERING_FIRM"},
                     {"8", "LOCATE"},
                     {"9", "FUND_MANAGER_CLIENT_ID"},
                     {"10", "SETTLEMENT_LOCATION"},
                     {"11", "ORDER_ORIGINATION_TRADER"},
                     {"12", "EXECUTING_TRADER"},
                     {"13", "ORDER_ORIGINATION_FIRM"},
                     {"14", "GIVEUP_CLEARING_FIRM"},
                     {"15", "CORRESPONDANT_CLEARING_FIRM"},
                     {"16", "EXECUTING_SYSTEM"},
                     {"17", "CONTRA_FIRM"},
                     {"18", "CONTRA_CLEARING_FIRM"},
                     {"19", "SPONSORING_FIRM"},
                     {"20", "UNDERLYING_CONTRA_FIRM"},
                     {"21", "CLEARING_ORGANIZATION"},
                     {"22", "EXCHANGE"},
                     {"24", "CUSTOMER_ACCOUNT"},
                     {"25", "CORRESPONDENT_CLEARING_ORGANIZATION"},
                     {"26", "CORRESPONDENT_BROKER"},
                     {"27", "BUYER_SELLER"},
                     {"28", "CUSTODIAN"},
                     {"29", "INTERMEDIARY"},
                     {"30", "AGENT"},
                     {"31", "SUB_CUSTODIAN"},
                     {"32", "BENEFICIARY"},
                     {"33", "INTERESTED_PARTY"},
                     {"34", "REGULATORY_BODY"},
                     {"35", "LIQUIDITY_PROVIDER"},
                     {"36", "ENTERING_TRADER"},
                     {"37", "CONTRA_TRADER"},
                     {"38", "POSITION_ACCOUNT"},
                     {"39", "CONTRA_INVESTOR_ID"},
                     {"40", "TRANSFER_TO_FIRM"},
                     {"41", "CONTRA_POSITION_ACCOUNT"},
                     {"42", "CONTRA_EXCHANGE"},
                     {"43", "INTERNAL_CARRY_ACCOUNT"},
                     {"44", "ORDER_ENTRY_OPERATOR_ID"},
                     {"45", "SECONDARY_ACCOUNT_NUMBER"},
                     {"46", "FORIEGN_FIRM"},
                     {"47", "THIRD_PARTY_ALLOCATION_FIRM"},
                     {"48", "CLAIMING_ACCOUNT"},
                     {"49", "ASSET_MANAGER"},
                     {"50", "PLEDGOR_ACCOUNT"},
                     {"51", "PLEDGEE_ACCOUNT"},
                     {"52", "LARGE_TRADER_REPORTABLE_ACCOUNT"},
                     {"53", "TRADER_MNEMONIC"},
                     {"54", "SENDER_LOCATION"},
                     {"55", "SESSION_ID"},
                     {"56", "ACCEPTABLE_COUNTERPARTY"},
                     {"57", "UNACCEPTABLE_COUNTERPARTY"},
                     {"58", "ENTERING_UNIT"},
                     {"59", "EXECUTING_UNIT"},
                     {"60", "INTRODUCING_BROKER"},
                     {"61", "QUOTE_ORIGINATOR"},
                     {"62", "REPORT_ORIGINATOR"},
                     {"63", "SYSTEMATIC_INTERNALISER"},
                     {"64", "MULTILATERAL_TRADING_FACILITY"},
                     {"65", "REGULATED_MARKET"},
                     {"66", "MARKET_MAKER"},
                     {"67", "INVESTMENT_FIRM"},
                     {"68", "HOST_COMPETENT_AUTHORITY"},
                     {"69", "HOME_COMPETENT_AUTHORITY"},
                     {"70", "COMPETENT_AUTHORITY_OF_THE_MOST_RELEVANT_MARKET_"
                            "IN_TERMS_OF_LIQUIDITY"},
                     {"71", "COMPETENT_AUTHORITY_OF_THE_TRANSACTION"},
                     {"72", "REPORTING_INTERMEDIARY"},
                     {"73", "EXECUTION_VENUE"},
                     {"74", "MARKET_DATA_ENTRY_ORIGINATOR"},
                     {"75", "LOCATION_ID"},
                     {"76", "DESK_ID"},
                     {"77", "MARKET_DATA_MARKET"},
                     {"78", "ALLOCATION_ENTITY"}}};
    schema[453] = fix::FieldDef{453, "NoPartyIDs"};
    schema[454] = fix::FieldDef{454, "NoSecurityAltID"};
    schema[455] = fix::FieldDef{455, "SecurityAltID"};
    schema[456] = fix::FieldDef{456, "SecurityAltIDSource"};
    schema[457] = fix::FieldDef{457, "NoUnderlyingSecurityAltID"};
    schema[1084] = fix::FieldDef{
      1084, "DisplayMethod", {{"1", "INITIAL"}, {"2", "NEW"}, {"3", "RANDOM"}}};
    schema[979] = fix::FieldDef{979, "InputSource"};
    schema[1082] = fix::FieldDef{1082, "SecondaryDisplayQty"};
    schema[600] = fix::FieldDef{600, "LegSymbol"};
    schema[595] = fix::FieldDef{595, "UnderlyingInstrRegistry"};
    schema[172] = fix::FieldDef{172,
                                "SettlDeliveryType",
                                {{"0", "VERSUS_PAYMENT_DELIVER"},
                                 {"1", "FREE_DELIVER"},
                                 {"2", "TRI_PARTY"},
                                 {"3", "HOLD_IN_CUSTODY"}}};
    schema[171] = fix::FieldDef{171, "StandInstDbID"};
    schema[170] = fix::FieldDef{170, "StandInstDbName"};
    schema[977] = fix::FieldDef{977, "ContIntRptID"};
    schema[976] = fix::FieldDef{976, "QuantityDate"};
    schema[975] =
      fix::FieldDef{975,
                    "UnderlyingSettlementType",
                    {{"2", "T_PLUS_1"}, {"4", "T_PLUS_3"}, {"5", "T_PLUS_4"}}};
    schema[974] = fix::FieldDef{
      974, "UnderlyingCashType", {{"FIXED", "FIXED"}, {"DIFF", "DIFF"}}};
    schema[973] = fix::FieldDef{973, "UnderlyingCashAmount"};
    schema[972] = fix::FieldDef{972, "UnderlyingAllocationPercent"};
    schema[971] = fix::FieldDef{971, "NTPositionLimit"};
    schema[657] = fix::FieldDef{657, "SettlCurrOfferFxRate"};
    schema[1080] = fix::FieldDef{1080, "RefOrderID"};
    schema[253] = fix::FieldDef{253, "LegFactor"};
    schema[978] = fix::FieldDef{978, "LateIndicator"};
    schema[656] = fix::FieldDef{656, "SettlCurrBidFxRate"};
    schema[599] = fix::FieldDef{599, "LegInstrRegistry"};
    schema[654] = fix::FieldDef{654, "LegRefID"};
    schema[2] = fix::FieldDef{2, "AdvId"};
    schema[652] = fix::FieldDef{652, "UnderlyingLastQty"};
    schema[650] =
      fix::FieldDef{650, "LegalConfirm", {{"N", "NO"}, {"Y", "YES"}}};
    schema[598] = fix::FieldDef{598, "LegLocaleOfIssue"};
    schema[188] = fix::FieldDef{188, "BidSpotRate"};
    schema[189] = fix::FieldDef{189, "BidForwardPoints"};
    schema[1122] = fix::FieldDef{1122, "RootPartySubIDType"};
    schema[658] = fix::FieldDef{658,
                                "QuoteRequestRejectReason",
                                {{"1", "UNKNOWN_SYMBOL"},
                                 {"2", "EXCHANGE"},
                                 {"3", "QUOTE_REQUEST_EXCEEDS_LIMIT"},
                                 {"4", "TOO_LATE_TO_ENTER"},
                                 {"5", "INVALID_PRICE"},
                                 {"6", "NOT_AUTHORIZED_TO_REQUEST_QUOTE"},
                                 {"7", "NO_MATCH_FOR_INQUIRY"},
                                 {"8", "NO_MARKET_FOR_INSTRUMENT"},
                                 {"9", "NO_INVENTORY"},
                                 {"10", "PASS"},
                                 {"11", "INSUFFICIENT_CREDIT"},
                                 {"99", "OTHER"}}};
    schema[659] = fix::FieldDef{659, "SideComplianceID"};
    schema[1123] = fix::FieldDef{1123,
                                 "TradeHandlingInstr",
                                 {{"0", "TRADE_CONFIRMATION"},
                                  {"1", "TWO_PARTY_REPORT"},
                                  {"2", "ONE_PARTY_REPORT_FOR_MATCHING"},
                                  {"3", "ONE_PARTY_REPORT_FOR_PASS_THROUGH"},
                                  {"4", "AUTOMATED_FLOOR_ORDER_ROUTING"}}};
    schema[1124] = fix::FieldDef{1124, "OrigTradeHandlingInstr"};
    schema[651] = fix::FieldDef{651, "UnderlyingLastPx"};
    schema[1125] = fix::FieldDef{1125, "OrigTradeDate"};
    schema[1089] = fix::FieldDef{1089, "MatchIncrement"};
    schema[1088] = fix::FieldDef{1088, "RefreshQty"};
    schema[11] = fix::FieldDef{11, "ClOrdID"};
    schema[10] = fix::FieldDef{10, "CheckSum"};
    schema[13] = fix::FieldDef{13,
                               "CommType",
                               {{"1", "PER_UNIT"},
                                {"2", "PERCENT"},
                                {"3", "ABSOLUTE"},
                                {"4", "PERCENTAGE_WAIVED_4"},
                                {"5", "PERCENTAGE_WAIVED_5"},
                                {"6", "POINTS_PER_BOND_OR_CONTRACT"}}};
    schema[12] = fix::FieldDef{12, "Commission"};
    schema[15] = fix::FieldDef{15, "Currency"};
    schema[14] = fix::FieldDef{14, "CumQty"};
    schema[17] = fix::FieldDef{17, "ExecID"};
    schema[16] = fix::FieldDef{16, "EndSeqNo"};
    schema[19] = fix::FieldDef{19, "ExecRefID"};
    schema[18] = fix::FieldDef{
      18,
      "ExecInst",
      {{"0", "STAY_ON_OFFER_SIDE"},
       {"1", "NOT_HELD"},
       {"2", "WORK"},
       {"3", "GO_ALONG"},
       {"4", "OVER_THE_DAY"},
       {"5", "HELD"},
       {"6", "PARTICIPATE_DONT_INITIATE"},
       {"7", "STRICT_SCALE"},
       {"8", "TRY_TO_SCALE"},
       {"9", "STAY_ON_BID_SIDE"},
       {"A", "NO_CROSS"},
       {"B", "OK_TO_CROSS"},
       {"C", "CALL_FIRST"},
       {"D", "PERCENT_OF_VOLUME"},
       {"E", "DO_NOT_INCREASE"},
       {"F", "DO_NOT_REDUCE"},
       {"G", "ALL_OR_NONE"},
       {"H", "REINSTATE_ON_SYSTEM_FAILUE"},
       {"I", "INSTITUTIONS_ONLY"},
       {"J", "REINSTATE_ON_TRADING_HALT"},
       {"K", "CANCEL_ON_TRADING_HALT"},
       {"L", "LAST_PEG"},
       {"M", "MID_PRICE_PEG"},
       {"N", "NON_NEGOTIABLE"},
       {"O", "OPENING_PEG"},
       {"P", "MARKET_PEG"},
       {"Q", "CANCEL_ON_SYSTEM_FAILURE"},
       {"R", "PRIMARY_PEG"},
       {"S", "SUSPEND"},
       {"T", "FIXED_PEG_TO_LOCAL_BEST_BID_OR_OFFER_AT_TIME_OF_ORDER"},
       {"U", "CUSTOMER_DISPLAY_INSTRUCTION"},
       {"V", "NETTING"},
       {"W", "PEG_TO_VWAP"},
       {"X", "TRADE_ALONG"},
       {"Y", "TRY_TO_STOP"},
       {"Z", "CANCEL_IF_NOT_BEST"},
       {"a", "TRAILING_STOP_PEG"},
       {"b", "STRICT_LIMIT"},
       {"c", "IGNORE_PRICE_VALIDITY_CHECKS"},
       {"d", "PEG_TO_LIMIT_PRICE"},
       {"e", "WORK_TO_TARGET_STRATEGY"},
       {"f", "INTERMARKET_SWEEP"},
       {"g", "EXTERNAL_ROUTING_ALLOWED"},
       {"h", "EXTERNAL_ROUTING_NOT_ALLOWED"},
       {"i", "IMBALANCE_ONLY"},
       {"j", "SINGLE_EXECUTION_REQUESTED_FOR_BLOCK_TRADE"},
       {"k", "BEST_EXECUTION"}}};
    schema[863] = fix::FieldDef{863, "OrderCapacityQty"};
    schema[862] = fix::FieldDef{862, "NoCapacities"};
    schema[865] = fix::FieldDef{865,
                                "EventType",
                                {{"1", "PUT"},
                                 {"2", "CALL"},
                                 {"3", "TENDER"},
                                 {"4", "SINKING_FUND_CALL"},
                                 {"5", "ACTIVATION"},
                                 {"6", "INACTIVIATION"},
                                 {"99", "OTHER"}}};
    schema[864] = fix::FieldDef{864, "NoEvents"};
    schema[867] = fix::FieldDef{867, "EventPx"};
    schema[866] = fix::FieldDef{866, "EventDate"};
    schema[884] = fix::FieldDef{884, "UnderlyingStartValue"};
    schema[938] = fix::FieldDef{938, "NoCollInquiryQualifier"};
    schema[883] = fix::FieldDef{883, "UnderlyingEndPrice"};
    schema[753] = fix::FieldDef{753, "NoPosAmt"};
    schema[881] = fix::FieldDef{881, "SecondaryTradeReportRefID"};
    schema[880] = fix::FieldDef{880, "TrdMatchID"};
    schema[887] = fix::FieldDef{887, "NoUnderlyingStips"};
    schema[886] = fix::FieldDef{886, "UnderlyingEndValue"};
    schema[885] = fix::FieldDef{885, "UnderlyingCurrentValue"};
    schema[752] = fix::FieldDef{752,
                                "SideMultiLegReportingType",
                                {{"1", "SINGLE_SECURITY"},
                                 {"2", "INDIVIDUAL_LEG_OF_A_MULTILEG_SECURITY"},
                                 {"3", "MULTILEG_SECURITY"}}};
    schema[928] = fix::FieldDef{928,
                                "StatusValue",
                                {{"1", "CONNECTED"},
                                 {"2", "NOT_CONNECTED_2"},
                                 {"3", "NOT_CONNECTED_3"},
                                 {"4", "IN_PROCESS"}}};
    schema[62] = fix::FieldDef{62, "ValidUntilTime"};
    schema[888] = fix::FieldDef{888, "UnderlyingStipType"};
    schema[1012] = fix::FieldDef{1012, "SideTrdRegTimestamp"};
    schema[1032] =
      fix::FieldDef{1032, "OrderHandlingInstSource", {{"1", "NASD_OATS"}}};
    schema[1115] = fix::FieldDef{1115,
                                 "OrderCategory",
                                 {{"1", "ORDER"},
                                  {"2", "QUOTE"},
                                  {"3", "PRIVATELY_NEGOTIATED_TRADE"},
                                  {"4", "MULTILEG_ORDER"},
                                  {"5", "LINKED_ORDER"},
                                  {"6", "QUOTE_REQUEST"},
                                  {"7", "IMPLIED_ORDER"},
                                  {"8", "CROSS_ORDER"}}};
    schema[756] = fix::FieldDef{756, "NoNested2PartyIDs"};
    schema[929] = fix::FieldDef{929, "StatusText"};
    schema[1081] = fix::FieldDef{1081,
                                 "RefOrderIDSource",
                                 {{"0", "SECONDARYORDEID"},
                                  {"1", "ORDEID"},
                                  {"2", "MENTRYID"},
                                  {"3", "QUOTENTRYID"}}};
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
       {"6", "CANNOT_MATCH_SELECTION_CRITERIA"}}};
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
                                 {"2", "TRADING_HALT"},
                                 {"3", "RESUME"},
                                 {"4", "NO_OPEN"},
                                 {"5", "PRICE_INDICATION"},
                                 {"6", "TRADING_RANGE_INDICATION"},
                                 {"7", "MARKET_IMBALANCE_BUY"},
                                 {"8", "MARKET_IMBALANCE_SELL"},
                                 {"9", "MARKET_ON_CLOSE_IMBALANCE_BUY"},
                                 {"10", "MARKET_ON_CLOSE_IMBALANCE_SELL"},
                                 {"12", "NO_MARKET_IMBALANCE"},
                                 {"13", "NO_MARKET_ON_CLOSE_IMBALANCE"},
                                 {"14", "ITS_PRE_OPENING"},
                                 {"15", "NEW_PRICE_INDICATION"},
                                 {"16", "TRADE_DISSEMINATION_TIME"},
                                 {"17", "READY_TO_TRADE"},
                                 {"18", "NOT_AVAILABLE_FOR_TRADING"},
                                 {"19", "NOT_TRADED_ON_THIS_MARKET"},
                                 {"20", "UNKNOWN_OR_INVALID"},
                                 {"21", "PRE_OPEN"},
                                 {"22", "OPENING_ROTATION"},
                                 {"23", "FAST_MARKET"}}};
    schema[327] = fix::FieldDef{327,
                                "HaltReasonChar",
                                {{"D", "NEWS_DISSEMINATION"},
                                 {"E", "ORDER_INFLUX"},
                                 {"I", "ORDER_IMBALANCE"},
                                 {"M", "ADDITIONAL_INFORMATION"},
                                 {"P", "NEW_PENDING"},
                                 {"X", "EQUIPMENT_CHANGEOVER"}}};
    schema[324] = fix::FieldDef{324, "SecurityStatusReqID"};
    schema[325] =
      fix::FieldDef{325, "UnsolicitedIndicator", {{"N", "NO"}, {"Y", "YES"}}};
    schema[328] =
      fix::FieldDef{328, "InViewOfCommon", {{"N", "NO"}, {"Y", "YES"}}};
    schema[329] =
      fix::FieldDef{329, "DueToRelated", {{"N", "NO"}, {"Y", "YES"}}};
    schema[759] = fix::FieldDef{759, "Nested2PartyRole"};
    schema[201] =
      fix::FieldDef{201, "PutOrCall", {{"0", "PUT"}, {"1", "CALL"}}};
    schema[200] = fix::FieldDef{200, "MaturityMonthYear"};
    schema[203] = fix::FieldDef{
      203, "CoveredOrUncovered", {{"0", "COVERED"}, {"1", "UNCOVERED"}}};
    schema[202] = fix::FieldDef{202, "StrikePrice"};
    schema[771] = fix::FieldDef{771, "TrdRegTimestampOrigin"};
    schema[770] = fix::FieldDef{770,
                                "TrdRegTimestampType",
                                {{"1", "EXECUTION_TIME"},
                                 {"2", "TIME_IN"},
                                 {"3", "TIME_OUT"},
                                 {"4", "BROKER_RECEIPT"},
                                 {"5", "BROKER_EXECUTION"},
                                 {"6", "DESK_RECEIPT"}}};
    schema[207] = fix::FieldDef{207, "SecurityExchange"};
    schema[206] = fix::FieldDef{206, "OptAttribute"};
    schema[209] = fix::FieldDef{
      209,
      "AllocHandlInst",
      {{"1", "MATCH"}, {"2", "FORWARD"}, {"3", "FORWARD_AND_MATCH"}}};
    schema[208] =
      fix::FieldDef{208, "NotifyBrokerOfCredit", {{"N", "NO"}, {"Y", "YES"}}};
    schema[779] = fix::FieldDef{779, "LastUpdateTime"};
    schema[778] = fix::FieldDef{778, "NoSettlInst"};
    schema[889] = fix::FieldDef{889, "UnderlyingStipValue"};
    schema[77] = fix::FieldDef{
      77,
      "PositionEffect",
      {{"C", "CLOSE"}, {"F", "FIFO"}, {"O", "OPEN"}, {"R", "ROLLED"}}};
    schema[75] = fix::FieldDef{75, "TradeDate"};
    schema[74] = fix::FieldDef{74, "AvgPxPrecision"};
    schema[73] = fix::FieldDef{73, "NoOrders"};
    schema[72] = fix::FieldDef{72, "RefAllocID"};
    schema[71] = fix::FieldDef{71,
                               "AllocTransType",
                               {{"0", "NEW"},
                                {"1", "REPLACE"},
                                {"2", "CANCEL"},
                                {"3", "PRELIMINARY"},
                                {"4", "CALCULATED"},
                                {"5", "CALCULATED_WITHOUT_PRELIMINARY"},
                                {"6", "REVERSAL"}}};
    schema[70] = fix::FieldDef{70, "AllocID"};
    schema[655] = fix::FieldDef{655, "ContraLegRefID"};
    schema[79] = fix::FieldDef{79, "AllocAccount"};
    schema[78] = fix::FieldDef{78, "NoAllocs"};
    schema[1043] = fix::FieldDef{
      1043, "CollApplType", {{"0", "SPECIFIC_DEPOSIT"}, {"1", "GENERAL"}}};
    schema[1042] = fix::FieldDef{1042, "SecondaryFirmTradeID"};
    schema[1041] = fix::FieldDef{1041, "FirmTradeID"};
    schema[1040] = fix::FieldDef{1040, "SecondaryTradeID"};
    schema[1047] = fix::FieldDef{
      1047,
      "AllocPositionEffect",
      {{"O", "OPEN"}, {"C", "CLOSE"}, {"R", "ROLLED"}, {"F", "FIFO"}}};
    schema[1046] = fix::FieldDef{
      1046, "UnderlyingFXRateCalc", {{"D", "DIVIDE"}, {"M", "MULTIPLY"}}};
    schema[1045] = fix::FieldDef{1045, "UnderlyingFXRate"};
    schema[1044] = fix::FieldDef{1044, "UnderlyingAdjustedQuantity"};
    schema[1049] = fix::FieldDef{1049, "InstrmtAssignmentMethod"};
    schema[1048] = fix::FieldDef{1048, "DealingCapacity"};
    schema[805] = fix::FieldDef{805, "NestedPartySubIDType"};
    schema[804] = fix::FieldDef{804, "NoNestedPartySubIDs"};
    schema[669] = fix::FieldDef{669, "LastParPx"};
    schema[668] = fix::FieldDef{
      668, "DeliveryForm", {{"1", "BOOK_ENTRY"}, {"2", "BEARER"}}};
    schema[667] = fix::FieldDef{667, "ContractSettlMonth"};
    schema[666] =
      fix::FieldDef{666,
                    "ConfirmTransType",
                    {{"0", "NEW"}, {"1", "REPLACE"}, {"2", "CANCEL"}}};
    schema[665] = fix::FieldDef{665,
                                "ConfirmStatus",
                                {{"1", "RECEIVED"},
                                 {"2", "MISMATCHED_ACCOUNT"},
                                 {"3", "MISSING_SETTLEMENT_INSTRUCTIONS"},
                                 {"4", "CONFIRMED"},
                                 {"5", "REQUEST_REJECTED"}}};
    schema[664] = fix::FieldDef{664, "ConfirmID"};
    schema[663] = fix::FieldDef{663, "BenchmarkPriceType"};
    schema[662] = fix::FieldDef{662, "BenchmarkPrice"};
    schema[661] = fix::FieldDef{661, "AllocAcctIDSource"};
    schema[660] = fix::FieldDef{660,
                                "AcctIDSource",
                                {{"1", "BIC"},
                                 {"2", "SID_CODE"},
                                 {"3", "TFM"},
                                 {"4", "OMGEO"},
                                 {"5", "DTCC_CODE"},
                                 {"99", "OTHER"}}};
    schema[769] = fix::FieldDef{769, "TrdRegTimestamp"};
    schema[692] = fix::FieldDef{692,
                                "QuotePriceType",
                                {{"1", "PERCENT"},
                                 {"2", "PER_SHARE"},
                                 {"3", "FIXED_AMOUNT"},
                                 {"4", "DISCOUNT"},
                                 {"5", "PREMIUM"},
                                 {"6", "SPREAD"},
                                 {"7", "TED_PRICE"},
                                 {"8", "TED_YIELD"},
                                 {"9", "YIELD_SPREAD"},
                                 {"10", "YIELD"}}};
    schema[693] = fix::FieldDef{693, "QuoteRespID"};
    schema[690] = fix::FieldDef{690,
                                "LegSwapType",
                                {{"1", "PAR_FOR_PAR"},
                                 {"2", "MODIFIED_DURATION"},
                                 {"4", "RISK"},
                                 {"5", "PROCEEDS"}}};
    schema[691] = fix::FieldDef{691, "Pool"};
    schema[696] = fix::FieldDef{696, "YieldRedemptionDate"};
    schema[697] = fix::FieldDef{697, "YieldRedemptionPrice"};
    schema[694] = fix::FieldDef{694,
                                "QuoteRespType",
                                {{"1", "HIT_LIFT"},
                                 {"2", "COUNTER"},
                                 {"3", "EXPIRED"},
                                 {"4", "COVER"},
                                 {"5", "DONE_AWAY"},
                                 {"6", "PASS"}}};
    schema[695] = fix::FieldDef{695, "QuoteQualifier"};
    schema[698] = fix::FieldDef{698, "YieldRedemptionPriceType"};
    schema[699] = fix::FieldDef{699, "BenchmarkSecurityID"};
    schema[542] = fix::FieldDef{542, "UnderlyingMaturityDate"};
    schema[543] = fix::FieldDef{543, "InstrRegistry"};
    schema[540] = fix::FieldDef{540, "TotalAccruedInterestAmt"};
    schema[541] = fix::FieldDef{541, "MaturityDate"};
    schema[546] = fix::FieldDef{
      546,
      "Scope",
      {{"1", "LOCAL_MARKET"}, {"2", "NATIONAL"}, {"3", "GLOBAL"}}};
    schema[547] =
      fix::FieldDef{547, "MDImplicitDelete", {{"N", "NO"}, {"Y", "YES"}}};
    schema[544] = fix::FieldDef{
      544,
      "CashMargin",
      {{"1", "CASH"}, {"2", "MARGIN_OPEN"}, {"3", "MARGIN_CLOSE"}}};
    schema[545] = fix::FieldDef{545, "NestedPartySubID"};
    schema[8] = fix::FieldDef{8, "BeginString"};
    schema[548] = fix::FieldDef{548, "CrossID"};
    schema[549] = fix::FieldDef{549,
                                "CrossType",
                                {{"1", "CROSS_AON"},
                                 {"2", "CROSS_IOC"},
                                 {"3", "CROSS_ONE_SIDE"},
                                 {"4", "CROSS_SAME_PRICE"}}};
    schema[68] = fix::FieldDef{68, "TotNoOrders"};
    schema[1019] = fix::FieldDef{1019, "InstrumentPartyID"};
    schema[869] = fix::FieldDef{869, "PctAtRisk"};
    schema[997] = fix::FieldDef{997,
                                "TimeUnit",
                                {{"H", "HOUR"},
                                 {"Min", "MINUTE"},
                                 {"S", "SECOND"},
                                 {"D", "DAY"},
                                 {"Wk", "WEEK"},
                                 {"Mo", "MONTH"},
                                 {"Yr", "YEAR"}}};
    schema[996] = fix::FieldDef{996,
                                "UnitOfMeasure",
                                {{"Bbl", "BARRELS"},
                                 {"Bcf", "BILLION_CUBIC_FEET"},
                                 {"Bu", "BUSHELS"},
                                 {"lbs", "POUNDS"},
                                 {"Gal", "GALLONS"},
                                 {"MMbbl", "MILLION_BARRELS"},
                                 {"MMBtu", "ONE_MILLION_BTU"},
                                 {"MWh", "MEGAWATT_HOURS"},
                                 {"oz_tr", "TROY_OUNCES"},
                                 {"t", "METRIC_TONS"},
                                 {"tn", "TONS"},
                                 {"USD", "US_DOLLARS"}}};
    schema[991] = fix::FieldDef{991, "RndPx"};
    schema[990] = fix::FieldDef{990, "LegReportID"};
    schema[993] = fix::FieldDef{993, "AllocCustomerCapacity"};
    schema[868] = fix::FieldDef{868, "EventText"};
    schema[999] = fix::FieldDef{999, "LegUnitOfMeasure"};
    schema[998] = fix::FieldDef{998, "UnderlyingUnitOfMeasure"};
    schema[120] = fix::FieldDef{120, "SettlCurrency"};
    schema[121] = fix::FieldDef{121, "ForexReq", {{"N", "NO"}, {"Y", "YES"}}};
    schema[122] = fix::FieldDef{122, "OrigSendingTime"};
    schema[123] =
      fix::FieldDef{123, "GapFillFlag", {{"N", "NO"}, {"Y", "YES"}}};
    schema[124] = fix::FieldDef{124, "NoExecs"};
    schema[764] = fix::FieldDef{764, "LegSecuritySubType"};
    schema[126] = fix::FieldDef{126, "ExpireTime"};
    schema[127] = fix::FieldDef{127,
                                "DKReason",
                                {{"A", "UNKNOWN_SYMBOL"},
                                 {"B", "WRONG_SIDE"},
                                 {"C", "QUANTITY_EXCEEDS_ORDER"},
                                 {"D", "NO_MATCHING_ORDER"},
                                 {"E", "PRICE_EXCEEDS_LIMIT"},
                                 {"F", "CALCULATION_DIFFERENCE"},
                                 {"Z", "OTHER"}}};
    schema[128] = fix::FieldDef{128, "DeliverToCompID"};
    schema[129] = fix::FieldDef{129, "DeliverToSubID"};
    schema[1128] = fix::FieldDef{1128,
                                 "ApplVerID",
                                 {{"0", "FIX27"},
                                  {"1", "FIX30"},
                                  {"2", "FIX40"},
                                  {"3", "FIX41"},
                                  {"4", "FIX42"},
                                  {"5", "FIX43"},
                                  {"6", "FIX44"},
                                  {"7", "FIX50"}}};
    schema[1011] = fix::FieldDef{1011, "MessageEventSource"};
    schema[414] = fix::FieldDef{
      414,
      "ProgRptReqs",
      {{"1", "BUY_SIDE_EXPLICITLY_REQUESTS_STATUS_USING_STATUE_REQUEST"},
       {"2", "SELL_SIDE_PERIODICALLY_SENDS_STATUS_USING_LIST_STATUS_PERIOD_"
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
    schema[920] = fix::FieldDef{920, "EndAccruedInterestAmt"};
    schema[498] = fix::FieldDef{498, "CashDistribAgentName"};
    schema[922] = fix::FieldDef{922, "EndCash"};
    schema[923] = fix::FieldDef{923, "UserRequestID"};
    schema[418] = fix::FieldDef{418,
                                "BidTradeType",
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
    schema[776] = fix::FieldDef{776, "IndividualAllocRejCode"};
    schema[499] = fix::FieldDef{499, "CashDistribAgentCode"};
    schema[318] = fix::FieldDef{318, "UnderlyingCurrency"};
    schema[313] = fix::FieldDef{313, "UnderlyingMaturityMonthYear"};
    schema[312] = fix::FieldDef{312, "UnderlyingSymbolSfx"};
    schema[311] = fix::FieldDef{311, "UnderlyingSymbol"};
    schema[310] = fix::FieldDef{310, "UnderlyingSecurityType"};
    schema[317] = fix::FieldDef{317, "UnderlyingOptAttribute"};
    schema[316] = fix::FieldDef{316, "UnderlyingStrikePrice"};
    schema[315] = fix::FieldDef{315, "UnderlyingPutOrCall"};
    schema[1028] = fix::FieldDef{1028, "ManualOrderIndicator"};
    schema[861] = fix::FieldDef{861, "ReportedPx"};
    schema[921] = fix::FieldDef{921, "StartCash"};
    schema[1126] = fix::FieldDef{1126, "OrigTradeID"};
    schema[496] = fix::FieldDef{496, "RegistRejReasonText"};
    schema[832] = fix::FieldDef{832, "TotNumAssignmentReports"};
    schema[833] = fix::FieldDef{833, "AsgnRptID"};
    schema[830] = fix::FieldDef{830, "TransferReason"};
    schema[497] =
      fix::FieldDef{497, "FundRenewWaiv", {{"N", "NO"}, {"Y", "YES"}}};
    schema[836] = fix::FieldDef{836,
                                "PegOffsetType",
                                {{"0", "PRICE"},
                                 {"1", "BASIS_POINTS"},
                                 {"2", "TICKS"},
                                 {"3", "PRICE_TIER"}}};
    schema[837] =
      fix::FieldDef{837,
                    "PegLimitType",
                    {{"0", "OR_BETTER"}, {"1", "STRICT"}, {"2", "OR_WORSE"}}};
    schema[834] = fix::FieldDef{834, "ThresholdAmount"};
    schema[835] =
      fix::FieldDef{835, "PegMoveType", {{"0", "FLOATING"}, {"1", "FIXED"}}};
    schema[838] =
      fix::FieldDef{838,
                    "PegRoundDirection",
                    {{"1", "MORE_AGGRESSIVE"}, {"2", "MORE_PASSIVE"}}};
    schema[839] = fix::FieldDef{839, "PeggedPrice"};
    schema[808] = fix::FieldDef{808,
                                "AllocIntermedReqType",
                                {{"1", "PENDING_ACCEPT"},
                                 {"2", "PENDING_RELEASE"},
                                 {"3", "PENDING_REVERSAL"},
                                 {"4", "ACCEPT"},
                                 {"5", "BLOCK_LEVEL_REJECT"},
                                 {"6", "ACCOUNT_LEVEL_REJECT"}}};
    schema[3] = fix::FieldDef{3, "AdvRefID"};
    schema[725] = fix::FieldDef{
      725, "ResponseTransportType", {{"0", "INBAND"}, {"1", "OUT_OF_BAND"}}};
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
    schema[959] = fix::FieldDef{959,
                                "StrategyParameterType",
                                {{"1", "INT"},
                                 {"2", "LENGTH"},
                                 {"3", "NUMINGROUP"},
                                 {"4", "SEQNUM"},
                                 {"5", "TAGNUM"},
                                 {"6", "FLOAT"},
                                 {"7", "QTY"},
                                 {"8", "PRICE"},
                                 {"9", "PRICEOFFSET"},
                                 {"10", "AMT"},
                                 {"11", "PERCENTAGE"},
                                 {"12", "CHAR"},
                                 {"13", "BOOLEAN"},
                                 {"14", "STRING"},
                                 {"15", "MULTIPLECHARVALUE"},
                                 {"16", "CURRENCY"},
                                 {"17", "EXCHANGE"},
                                 {"18", "MONTHYEAR"},
                                 {"19", "UTCTIMESTAMP"},
                                 {"20", "UTCTIMEONLY"},
                                 {"21", "LOCALMKTTIME"},
                                 {"22", "UTCDATE"},
                                 {"23", "DATA"},
                                 {"24", "MULTIPLESTRINGVALUE"}}};
    schema[1138] = fix::FieldDef{1138, "DisplayQty"};
    schema[952] = fix::FieldDef{952, "NoNested3PartySubIDs"};
    schema[882] = fix::FieldDef{882, "UnderlyingDirtyPrice"};
    schema[380] =
      fix::FieldDef{380,
                    "BusinessRejectReason",
                    {{"0", "OTHER"},
                     {"1", "UNKNOWN_ID"},
                     {"2", "UNKNOWN_SECURITY"},
                     {"3", "UNKNOWN_MESSAGE_TYPE"},
                     {"4", "APPLICATION_NOT_AVAILABLE"},
                     {"5", "CONDITIONALLY_REQUIRED_FIELD_MISSING"},
                     {"6", "NOT_AUTHORIZED"},
                     {"7", "DELIVERTO_FIRM_NOT_AVAILABLE_AT_THIS_TIME"},
                     {"18", "INVALID_PRICE_INCREMENT"}}};
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
                                 {"5", "RELATED_TO_LAST_TRADE_PRICE"},
                                 {"6", "RELATED_TO_VWAP"},
                                 {"7", "AVERAGE_PRICE_GUARANTEE"}}};
    schema[389] = fix::FieldDef{389, "DiscretionOffsetValue"};
    schema[784] = fix::FieldDef{784, "SettlPartyRole"};
    schema[785] = fix::FieldDef{785, "SettlPartySubID"};
    schema[786] = fix::FieldDef{786, "SettlPartySubIDType"};
    schema[787] =
      fix::FieldDef{787, "DlvyInstType", {{"C", "CASH"}, {"S", "SECURITIES"}}};
    schema[780] = fix::FieldDef{780,
                                "AllocSettlInstType",
                                {{"0", "USE_DEFAULT_INSTRUCTIONS"},
                                 {"1", "DERIVE_FROM_PARAMETERS_PROVIDED"},
                                 {"2", "FULL_DETAILS_PROVIDED"},
                                 {"3", "SSI_DB_IDS_PROVIDED"},
                                 {"4", "PHONE_FOR_INSTRUCTIONS"}}};
    schema[781] = fix::FieldDef{781, "NoSettlPartyIDs"};
    schema[782] = fix::FieldDef{782, "SettlPartyID"};
    schema[783] = fix::FieldDef{783, "SettlPartyIDSource"};
    schema[788] = fix::FieldDef{
      788,
      "TerminationType",
      {{"1", "OVERNIGHT"}, {"2", "TERM"}, {"3", "FLEXIBLE"}, {"4", "OPEN"}}};
    schema[789] = fix::FieldDef{789, "NextExpectedMsgSeqNum"};
    schema[860] = fix::FieldDef{860, "AvgParPx"};
    schema[605] = fix::FieldDef{605, "LegSecurityAltID"};
    schema[579] = fix::FieldDef{579, "TradeInputDevice"};
    schema[578] = fix::FieldDef{578, "TradeInputSource"};
    schema[604] = fix::FieldDef{604, "NoLegSecurityAltID"};
    schema[573] = fix::FieldDef{573,
                                "MatchStatus",
                                {{"0", "COMPARED_MATCHED_OR_AFFIRMED"},
                                 {"1", "UNCOMPARED_UNMATCHED_OR_UNAFFIRED"},
                                 {"2", "ADVISORY_OR_ALERT"}}};
    schema[572] = fix::FieldDef{572, "TradeReportRefID"};
    schema[571] = fix::FieldDef{571, "TradeReportID"};
    schema[570] =
      fix::FieldDef{570, "PreviouslyReported", {{"N", "NO"}, {"Y", "YES"}}};
    schema[577] = fix::FieldDef{577,
                                "ClearingInstruction",
                                {{"0", "PROCESS_NORMALLY"},
                                 {"1", "EXCLUDE_FROM_ALL_NETTING"},
                                 {"2", "BILATERAL_NETTING_ONLY"},
                                 {"3", "EX_CLEARING"},
                                 {"4", "SPECIAL_TRADE"},
                                 {"5", "MULTILATERAL_NETTING"},
                                 {"6", "CLEAR_AGAINST_CENTRAL_COUNTERPARTY"},
                                 {"7", "EXCLUDE_FROM_CENTRAL_COUNTERPARTY"},
                                 {"8", "MANUAL_MODE"},
                                 {"9", "AUTOMATIC_POSTING_MODE"},
                                 {"10", "AUTOMATIC_GIVE_UP_MODE"},
                                 {"11", "QUALIFIED_SERVICE_REPRESENTATIVE_QSR"},
                                 {"12", "CUSTOMER_TRADE"},
                                 {"13", "SELF_CLEARING"}}};
    schema[576] = fix::FieldDef{576, "NoClearingInstructions"};
    schema[575] = fix::FieldDef{575, "OddLot", {{"N", "NO"}, {"Y", "YES"}}};
    schema[574] = fix::FieldDef{
      574,
      "MatchType",
      {{"60", "ONE_PARTY_PRIVATELY_NEGOTIATED_TRADE_REPORT"},
       {"61", "TWO_PARTY_PRIVATELY_NEGOTIATED_TRADE_REPORT"},
       {"62", "CONTINUOUS_AUTO_MATCH"},
       {"63", "CROSS_AUCTION_63"},
       {"64", "COUNTER_ORDER_SELECTION_64"},
       {"65", "CALL_AUCTION_65"},
       {"M3", "ACT_ACCEPTED_TRADE"},
       {"M4", "ACT_DEFAULT_TRADE"},
       {"M5", "ACT_DEFAULT_AFTER_M2"},
       {"M6", "ACT_M6_MATCH"},
       {"A1", "EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_"
              "TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_FOUR_BADGES_AND_EXECUTION_"
              "TIME"},
       {"A2", "EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_"
              "TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_FOUR_BADGES"},
       {"A3", "EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_"
              "TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_TWO_BADGES_AND_EXECUTION_"
              "TIME"},
       {"A4", "EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_"
              "TYPE_AND_SPECIAL_TRADE_INDICATOR_PLUS_TWO_BADGES"},
       {"A5", "EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADETYPE_"
              "AND_SPECIAL_TRADE_INDICATOR_PLUS_EXECUTION_TIME"},
       {"AQ", "COMPARED_RECORDS_RESULTING_FROM_STAMPED_ADVISORIES_OR_"
              "SPECIALIST_ACCEPTS_PAIR_OFFS"},
       {"S1", "SUMMARIZED_MATCH_USING_A1_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_"
              "IS_SUMMARIED"},
       {"S2", "SUMMARIZED_MATCH_USING_A2_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_"
              "IS_SUMMARIZED"},
       {"S3", "SUMMARIZED_MATCH_USING_A3_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_"
              "IS_SUMMARIZED"},
       {"S4", "SUMMARIZED_MATCH_USING_A4_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_"
              "IS_SUMMARIZED"},
       {"S5", "SUMMARIZED_MATCH_USING_A5_EXACT_MATCH_CRITERIA_EXCEPT_QUANTITY_"
              "IS_SUMMARIZED"},
       {"M1", "EXACT_MATCH_ON_TRADE_DATE_STOCK_SYMBOL_QUANTITY_PRICE_TRADE_"
              "TYPE_AND_SPECIAL_TRADE_INDICATOR_MINUS_BADGES_AND_TIMES_ACT_M1_"
              "MATCH"},
       {"M2", "SUMMARIZED_MATCH_MINUS_BADGES_AND_TIMES_ACT_M2_MATCH"},
       {"MT", "OCS_LOCKED_IN_NON_ACT"},
       {"1", "ONE_PARTY_TRADE_REPORT"},
       {"2", "TWO_PARTY_TRADE_REPORT"},
       {"3", "CONFIRMED_TRADE_REPORT"},
       {"4", "AUTO_MATCH"},
       {"5", "CROSS_AUCTION_5"},
       {"6", "COUNTER_ORDER_SELECTION_6"},
       {"7", "CALL_AUCTION_7"}}};
    schema[60] = fix::FieldDef{60, "TransactTime"};
    schema[61] = fix::FieldDef{
      61, "Urgency", {{"0", "NORMAL"}, {"1", "FLASH"}, {"2", "BACKGROUND"}}};
    schema[258] =
      fix::FieldDef{258, "TradedFlatSwitch", {{"N", "NO"}, {"Y", "YES"}}};
    schema[259] = fix::FieldDef{259, "BasisFeatureDate"};
    schema[64] = fix::FieldDef{64, "SettlDate"};
    schema[65] = fix::FieldDef{
      65,
      "SymbolSfx",
      {{"CD", "EUCP_WITH_LUMP_SUM_INTEREST_RATHER_THAN_DISCOUNT_PRICE"},
       {"WI", "WHEN_ISSUED_FOR_A_SECURITY_TO_BE_REISSUED_UNDER_AN_OLD_CUSIP_OR_"
              "ISIN"}}};
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
    schema[939] = fix::FieldDef{
      939,
      "TrdRptStatus",
      {{"0", "ACCEPTED"}, {"1", "REJECTED"}, {"3", "ACCEPTED_WITH_ERRORS"}}};
    schema[731] = fix::FieldDef{
      731, "SettlPriceType", {{"1", "FINAL"}, {"2", "THEORETICAL"}}};
    schema[730] = fix::FieldDef{730, "SettlPrice"};
    schema[733] = fix::FieldDef{733, "UnderlyingSettlPriceType"};
    schema[732] = fix::FieldDef{732, "UnderlyingSettlPrice"};
    schema[735] = fix::FieldDef{735, "NoQuoteQualifiers"};
    schema[734] = fix::FieldDef{734, "PriorSettlPrice"};
    schema[508] = fix::FieldDef{508, "RegistRefID"};
    schema[509] = fix::FieldDef{509, "RegistDtls"};
    schema[506] = fix::FieldDef{
      506,
      "RegistStatus",
      {{"A", "ACCEPTED"}, {"R", "REJECTED"}, {"H", "HELD"}, {"N", "REMINDER"}}};
    schema[507] = fix::FieldDef{
      507,
      "RegistRejReasonCode",
      {{"1", "INVALID_UNACCEPTABLE_ACCOUNT_TYPE"},
       {"2", "INVALID_UNACCEPTABLE_TAX_EXEMPT_TYPE"},
       {"3", "INVALID_UNACCEPTABLE_OWNERSHIP_TYPE"},
       {"4", "INVALID_UNACCEPTABLE_NO_REG_DETAILS"},
       {"5", "INVALID_UNACCEPTABLE_REG_SEQ_NO"},
       {"6", "INVALID_UNACCEPTABLE_REG_DETAILS"},
       {"7", "INVALID_UNACCEPTABLE_MAILING_DETAILS"},
       {"8", "INVALID_UNACCEPTABLE_MAILING_INSTRUCTIONS"},
       {"9", "INVALID_UNACCEPTABLE_INVESTOR_ID"},
       {"10", "INVALID_UNACEEPTABLE_INVESTOR_ID_SOURCE"},
       {"11", "INVALID_UNACCEPTABLE_DATE_OF_BIRTH"},
       {"12", "INVALID_UNACCEPTABLE_INVESTOR_COUNTRY_OF_RESIDENCE"},
       {"13", "INVALID_UNACCEPTABLE_NO_DISTRIB_INSTNS"},
       {"14", "INVALID_UNACCEPTABLE_DISTRIB_PERCENTAGE"},
       {"15", "INVALID_UNACCEPTABLE_DISTRIB_PAYMENT_METHOD"},
       {"16", "INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NAME"},
       {"17", "INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_CODE"},
       {"18", "INVALID_UNACCEPTABLE_CASH_DISTRIB_AGENT_ACCT_NUM"},
       {"99", "OTHER"}}};
    schema[504] = fix::FieldDef{504, "PaymentDate"};
    schema[505] = fix::FieldDef{505, "PaymentRemitterID"};
    schema[502] = fix::FieldDef{502, "CashDistribAgentAcctName"};
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
    schema[638] =
      fix::FieldDef{638,
                    "PriorityIndicator",
                    {{"0", "PRIORITY_UNCHANGED"},
                     {"1", "LOST_PRIORITY_AS_RESULT_OF_ORDER_CHANGE"}}};
    schema[464] =
      fix::FieldDef{464, "TestMessageIndicator", {{"N", "NO"}, {"Y", "YES"}}};
    schema[467] = fix::FieldDef{467, "IndividualAllocID"};
    schema[466] = fix::FieldDef{466, "BookingRefID"};
    schema[461] = fix::FieldDef{461, "CFICode"};
    schema[460] = fix::FieldDef{460,
                                "Product",
                                {{"1", "AGENCY"},
                                 {"2", "COMMODITY"},
                                 {"3", "CORPORATE"},
                                 {"4", "CURRENCY"},
                                 {"5", "EQUITY"},
                                 {"6", "GOVERNMENT"},
                                 {"7", "INDEX"},
                                 {"8", "LOAN"},
                                 {"9", "MONEYMARKET"},
                                 {"10", "MORTGAGE"},
                                 {"11", "MUNICIPAL"},
                                 {"12", "OTHER"},
                                 {"13", "FINANCING"}}};
    schema[463] = fix::FieldDef{463, "UnderlyingCFICode"};
    schema[462] = fix::FieldDef{462, "UnderlyingProduct"};
    schema[901] = fix::FieldDef{901, "CashOutstanding"};
    schema[168] = fix::FieldDef{168, "EffectiveTime"};
    schema[169] = fix::FieldDef{169,
                                "StandInstDbType",
                                {{"0", "OTHER"},
                                 {"1", "DTC_SID"},
                                 {"2", "THOMSON_ALERT"},
                                 {"3", "A_GLOBAL_CUSTODIAN"},
                                 {"4", "ACCOUNTNET"}}};
    schema[164] = fix::FieldDef{164, "EmailThreadID"};
    schema[165] = fix::FieldDef{165,
                                "SettlInstSource",
                                {{"1", "BROKERS_INSTRUCTIONS"},
                                 {"2", "INSTITUTIONS_INSTRUCTIONS"},
                                 {"3", "INVESTOR"}}};
    schema[167] = fix::FieldDef{
      167,
      "SecurityType",
      {{"FUT", "FUTURE"},
       {"OPT", "OPTION"},
       {"UST", "US_TREASURY_NOTE_UST"},
       {"USTB", "US_TREASURY_BILL_USTB"},
       {"EUSUPRA", "EURO_SUPRANATIONAL_COUPONS"},
       {"FAC", "FEDERAL_AGENCY_COUPON"},
       {"FADN", "FEDERAL_AGENCY_DISCOUNT_NOTE"},
       {"PEF", "PRIVATE_EXPORT_FUNDING"},
       {"SUPRA", "USD_SUPRANATIONAL_COUPONS"},
       {"CORP", "CORPORATE_BOND"},
       {"CPP", "CORPORATE_PRIVATE_PLACEMENT"},
       {"CB", "CONVERTIBLE_BOND"},
       {"DUAL", "DUAL_CURRENCY"},
       {"EUCORP", "EURO_CORPORATE_BOND"},
       {"XLINKD", "INDEXED_LINKED"},
       {"STRUCT", "STRUCTURED_NOTES"},
       {"YANK", "YANKEE_CORPORATE_BOND"},
       {"FOR", "FOREIGN_EXCHANGE_CONTRACT"},
       {"CS", "COMMON_STOCK"},
       {"PS", "PREFERRED_STOCK"},
       {"REPO", "REPURCHASE"},
       {"FORWARD", "FORWARD"},
       {"BUYSELL", "BUY_SELLBACK"},
       {"SECLOAN", "SECURITIES_LOAN"},
       {"SECPLEDGE", "SECURITIES_PLEDGE"},
       {"BRADY", "BRADY_BOND"},
       {"EUSOV", "EURO_SOVEREIGNS"},
       {"TBOND", "US_TREASURY_BOND"},
       {"TINT", "INTEREST_STRIP_FROM_ANY_BOND_OR_NOTE"},
       {"TIPS", "TREASURY_INFLATION_PROTECTED_SECURITIES"},
       {"TCAL", "PRINCIPAL_STRIP_OF_A_CALLABLE_BOND_OR_NOTE"},
       {"TPRN", "PRINCIPAL_STRIP_FROM_A_NON_CALLABLE_BOND_OR_NOTE"},
       {"TNOTE", "US_TREASURY_NOTE_TNOTE"},
       {"TBILL", "US_TREASURY_BILL_TBILL"},
       {"TERM", "TERM_LOAN"},
       {"RVLV", "REVOLVER_LOAN"},
       {"RVLVTRM", "REVOLVER_TERM_LOAN"},
       {"BRIDGE", "BRIDGE_LOAN"},
       {"LOFC", "LETTER_OF_CREDIT"},
       {"SWING", "SWING_LINE_FACILITY"},
       {"DINP", "DEBTOR_IN_POSSESSION"},
       {"DEFLTED", "DEFAULTED"},
       {"WITHDRN", "WITHDRAWN"},
       {"REPLACD", "REPLACED"},
       {"MATURED", "MATURED"},
       {"AMENDED", "AMENDED_RESTATED"},
       {"RETIRED", "RETIRED"},
       {"BA", "BANKERS_ACCEPTANCE"},
       {"BN", "BANK_NOTES"},
       {"BOX", "BILL_OF_EXCHANGES"},
       {"CD", "CERTIFICATE_OF_DEPOSIT"},
       {"CL", "CALL_LOANS"},
       {"CP", "COMMERCIAL_PAPER"},
       {"DN", "DEPOSIT_NOTES"},
       {"EUCD", "EURO_CERTIFICATE_OF_DEPOSIT"},
       {"EUCP", "EURO_COMMERCIAL_PAPER"},
       {"LQN", "LIQUIDITY_NOTE"},
       {"MTN", "MEDIUM_TERM_NOTES"},
       {"ONITE", "OVERNIGHT"},
       {"PN", "PROMISSORY_NOTE"},
       {"PZFJ", "PLAZOS_FIJOS"},
       {"STN", "SHORT_TERM_LOAN_NOTE"},
       {"TD", "TIME_DEPOSIT"},
       {"XCN", "EXTENDED_COMM_NOTE"},
       {"YCD", "YANKEE_CERTIFICATE_OF_DEPOSIT"},
       {"ABS", "ASSET_BACKED_SECURITIES"},
       {"CMBS", "CORP_MORTGAGE_BACKED_SECURITIES"},
       {"CMO", "COLLATERALIZED_MORTGAGE_OBLIGATION"},
       {"IET", "IOETTE_MORTGAGE"},
       {"MBS", "MORTGAGE_BACKED_SECURITIES"},
       {"MIO", "MORTGAGE_INTEREST_ONLY"},
       {"MPO", "MORTGAGE_PRINCIPAL_ONLY"},
       {"MPP", "MORTGAGE_PRIVATE_PLACEMENT"},
       {"MPT", "MISCELLANEOUS_PASS_THROUGH"},
       {"PFAND", "PFANDBRIEFE"},
       {"TBA", "TO_BE_ANNOUNCED"},
       {"AN", "OTHER_ANTICIPATION_NOTES"},
       {"COFO", "CERTIFICATE_OF_OBLIGATION"},
       {"COFP", "CERTIFICATE_OF_PARTICIPATION"},
       {"GO", "GENERAL_OBLIGATION_BONDS"},
       {"MT", "MANDATORY_TENDER"},
       {"RAN", "REVENUE_ANTICIPATION_NOTE"},
       {"REV", "REVENUE_BONDS"},
       {"SPCLA", "SPECIAL_ASSESSMENT"},
       {"SPCLO", "SPECIAL_OBLIGATION"},
       {"SPCLT", "SPECIAL_TAX"},
       {"TAN", "TAX_ANTICIPATION_NOTE"},
       {"TAXA", "TAX_ALLOCATION"},
       {"TECP", "TAX_EXEMPT_COMMERCIAL_PAPER"},
       {"TRAN", "TAX_REVENUE_ANTICIPATION_NOTE"},
       {"VRDN", "VARIABLE_RATE_DEMAND_NOTE"},
       {"WAR", "WARRANT"},
       {"MF", "MUTUAL_FUND"},
       {"MLEG", "MULTILEG_INSTRUMENT"},
       {"NONE", "NO_SECURITY_TYPE"},
       {"OOF", "OPTIONS_ON_FUTURES"},
       {"OOP", "OPTIONS_ON_PHYSICAL"},
       {"WLD", "WILDCARD_ENTRY"},
       {"CASH", "CASH"}}};
    schema[160] =
      fix::FieldDef{160,
                    "SettlInstMode",
                    {{"0", "DEFAULT"},
                     {"1", "STANDING_INSTRUCTIONS_PROVIDED"},
                     {"2", "SPECIFIC_ALLOCATION_ACCOUNT_OVERRIDING"},
                     {"3", "SPECIFIC_ALLOCATION_ACCOUNT_STANDING"},
                     {"4", "SPECIFIC_ORDER_FOR_A_SINGLE_ACCOUNT"},
                     {"5", "REQUEST_REJECT"}}};
    schema[161] = fix::FieldDef{161, "AllocText"};
    schema[162] = fix::FieldDef{162, "SettlInstID"};
    schema[163] = fix::FieldDef{
      163,
      "SettlInstTransType",
      {{"N", "NEW"}, {"C", "CANCEL"}, {"R", "REPLACE"}, {"T", "RESTATE"}}};
    schema[964] = fix::FieldDef{964, "SecurityReportID"};
    schema[965] = fix::FieldDef{
      965, "SecurityStatus", {{"1", "ACTIVE"}, {"2", "INACTIVE"}}};
    schema[966] = fix::FieldDef{966, "SettleOnOpenFlag"};
    schema[967] = fix::FieldDef{967, "StrikeMultiplier"};
    schema[960] = fix::FieldDef{960, "StrategyParameterValue"};
    schema[961] = fix::FieldDef{961, "HostCrossID"};
    schema[962] = fix::FieldDef{962, "SideTimeInForce"};
    schema[963] = fix::FieldDef{963, "MDReportID"};
    schema[1129] = fix::FieldDef{1129, "CstmApplVerID"};
    schema[968] = fix::FieldDef{968, "StrikeValue"};
    schema[969] = fix::FieldDef{969, "MinPriceIncrement"};
    schema[936] = fix::FieldDef{936, "NoCompIDs"};
    schema[1106] = fix::FieldDef{1106, "TriggerSecurityDesc"};
    schema[1107] = fix::FieldDef{1107,
                                 "TriggerPriceType",
                                 {{"1", "BEST_OFFER"},
                                  {"2", "LAST_TRADE"},
                                  {"3", "BEST_BID"},
                                  {"4", "BEST_BID_OR_LAST_TRADE"},
                                  {"5", "BEST_OFFER_OR_LAST_TRADE"},
                                  {"6", "BEST_MID"}}};
    schema[1104] = fix::FieldDef{1104, "TriggerSecurityID"};
    schema[1105] = fix::FieldDef{1105, "TriggerSecurityIDSource"};
    schema[1102] = fix::FieldDef{1102, "TriggerPrice"};
    schema[935] =
      fix::FieldDef{935,
                    "NetworkRequestType",
                    {{"1", "SNAPSHOT"},
                     {"2", "SUBSCRIBE"},
                     {"4", "STOP_SUBSCRIBING"},
                     {"8", "LEVEL_OF_DETAIL_THEN_NOCOMPIDS_BECOMES_REQUIRED"}}};
    schema[1100] = fix::FieldDef{1100,
                                 "TriggerType",
                                 {{"1", "PARTIAL_EXECUTION"},
                                  {"2", "SPECIFIED_TRADING_SESSION"},
                                  {"3", "NEXT_AUCTION"},
                                  {"4", "PRICE_MOVEMENT"}}};
    schema[1101] =
      fix::FieldDef{1101,
                    "TriggerAction",
                    {{"1", "ACTIVATE"}, {"2", "MODIFY"}, {"3", "CANCEL"}}};
    schema[934] = fix::FieldDef{934, "LastNetworkResponseID"};
    schema[908] = fix::FieldDef{908, "CollRptID"};
    schema[1108] = fix::FieldDef{
      1108,
      "TriggerPriceTypeScope",
      {{"0", "NONE"}, {"1", "LOCAL"}, {"2", "NATIONAL"}, {"3", "GLOBAL"}}};
    schema[1109] =
      fix::FieldDef{1109,
                    "TriggerPriceDirection",
                    {{"U", "TRIGGER_IF_THE_PRICE_OF_THE_SPECIFIED_TYPE_GOES_UP_"
                           "TO_OR_THROUGH_THE_SPECIFIED_TRIGGER_PRICE"},
                     {"D", "TRIGGER_IF_THE_PRICE_OF_THE_SPECIFIED_TYPE_GOES_"
                           "DOWN_TO_OR_THROUGH_THE_SPECIFIED_TRIGGER_PRICE"}}};
    schema[909] = fix::FieldDef{909, "CollInquiryID"};
    schema[1096] = fix::FieldDef{1096, "PegSecurityIDSource"};
    schema[1090] = fix::FieldDef{1090, "MaxPriceLevels"};
    schema[1091] = fix::FieldDef{1091, "PreTradeAnonymity"};
    schema[878] = fix::FieldDef{878, "UnderlyingCPRegType"};
    schema[879] = fix::FieldDef{879, "UnderlyingQty"};
    schema[876] = fix::FieldDef{876, "CPRegType"};
    schema[877] = fix::FieldDef{877, "UnderlyingCPProgram"};
    schema[874] = fix::FieldDef{874, "InterestAccrualDate"};
    schema[875] = fix::FieldDef{
      875, "CPProgram", {{"1", "3"}, {"2", "4"}, {"99", "OTHER"}}};
    schema[872] = fix::FieldDef{872, "InstrAttribValue"};
    schema[873] = fix::FieldDef{873, "DatedDate"};
    schema[870] = fix::FieldDef{870, "NoInstrAttrib"};
    schema[871] = fix::FieldDef{
      871,
      "InstrAttribType",
      {{"1", "FLAT"},
       {"2", "ZERO_COUPON"},
       {"3", "INTEREST_BEARING"},
       {"4", "NO_PERIODIC_PAYMENTS"},
       {"5", "VARIABLE_RATE"},
       {"6", "LESS_FEE_FOR_PUT"},
       {"7", "STEPPED_COUPON"},
       {"8", "COUPON_PERIOD"},
       {"9", "WHEN_AND_IF_ISSUED"},
       {"10", "ORIGINAL_ISSUE_DISCOUNT"},
       {"11", "CALLABLE_PUTTABLE"},
       {"12", "ESCROWED_TO_MATURITY"},
       {"13", "ESCROWED_TO_REDEMPTION_DATE"},
       {"14", "PRE_REFUNDED"},
       {"15", "IN_DEFAULT"},
       {"16", "UNRATED"},
       {"17", "TAXABLE"},
       {"18", "INDEXED"},
       {"19", "SUBJECT_TO_ALTERNATIVE_MINIMUM_TAX"},
       {"20",
        "ORIGINAL_ISSUE_DISCOUNT_PRICE_SUPPLY_PRICE_IN_THE_INSTRATTRIBVALUE"},
       {"21", "CALLABLE_BELOW_MATURITY_VALUE"},
       {"22", "CALLABLE_WITHOUT_NOTICE_BY_MAIL_TO_HOLDER_UNLESS_REGISTERED"},
       {"99", "TEXT_SUPPLY_THE_TEXT_OF_THE_ATTRIBUTE_OR_DISCLAIMER_IN_THE_"
              "INSTRATTRIBVALUE"}}};
    schema[9] = fix::FieldDef{9, "BodyLength"};
    schema[890] = fix::FieldDef{890, "MaturityNetMoney"};
    schema[891] = fix::FieldDef{
      891,
      "MiscFeeBasis",
      {{"0", "ABSOLUTE"}, {"1", "PER_UNIT"}, {"2", "PERCENTAGE"}}};
    schema[892] = fix::FieldDef{892, "TotNoAllocs"};
    schema[893] =
      fix::FieldDef{893, "LastFragment", {{"N", "NO"}, {"Y", "YES"}}};
    schema[894] = fix::FieldDef{894, "CollReqID"};
    schema[647] = fix::FieldDef{647, "MinBidSize"};
    schema[896] = fix::FieldDef{896,
                                "CollInquiryQualifier",
                                {{"0", "TRADE_DATE"},
                                 {"1", "GC_INSTRUMENT"},
                                 {"2", "COLLATERAL_INSTRUMENT"},
                                 {"3", "SUBSTITUTION_ELIGIBLE"},
                                 {"4", "NOT_ASSIGNED"},
                                 {"5", "PARTIALLY_ASSIGNED"},
                                 {"6", "FULLY_ASSIGNED"},
                                 {"7", "OUTSTANDING_TRADES"}}};
    schema[897] = fix::FieldDef{897, "NoTrades"};
    schema[898] = fix::FieldDef{898, "MarginRatio"};
    schema[899] = fix::FieldDef{899, "MarginExcess"};
    schema[1087] = fix::FieldDef{1087, "DisplayMinIncr"};
    schema[1116] = fix::FieldDef{1116, "NoRootPartyIDs"};
    schema[1099] = fix::FieldDef{1099, "PegSecurityDesc"};
    schema[649] = fix::FieldDef{649, "QuoteStatusReqID"};
    schema[648] = fix::FieldDef{648, "MinOfferSize"};
    schema[1086] = fix::FieldDef{1086, "DisplayHighQty"};
    schema[357] = fix::FieldDef{357, "EncodedSubject"};
    schema[356] = fix::FieldDef{356, "EncodedSubjectLen"};
    schema[355] = fix::FieldDef{355, "EncodedText"};
    schema[354] = fix::FieldDef{354, "EncodedTextLen"};
    schema[353] = fix::FieldDef{353, "EncodedListExecInst"};
    schema[352] = fix::FieldDef{352, "EncodedListExecInstLen"};
    schema[351] = fix::FieldDef{351, "EncodedSecurityDesc"};
    schema[350] = fix::FieldDef{350, "EncodedSecurityDescLen"};
    schema[803] = fix::FieldDef{803,
                                "PartySubIDType",
                                {{"1", "FIRM"},
                                 {"2", "PERSON"},
                                 {"3", "SYSTEM"},
                                 {"4", "APPLICATION"},
                                 {"5", "FULL_LEGAL_NAME_OF_FIRM"},
                                 {"6", "POSTAL_ADDRESS"},
                                 {"7", "PHONE_NUMBER"},
                                 {"8", "EMAIL_ADDRESS"},
                                 {"9", "CONTACT_NAME"},
                                 {"10", "SECURITIES_ACCOUNT_NUMBER"},
                                 {"11", "REGISTRATION_NUMBER"},
                                 {"12", "REGISTERED_ADDRESS_12"},
                                 {"13", "REGULATORY_STATUS"},
                                 {"14", "REGISTRATION_NAME"},
                                 {"15", "CASH_ACCOUNT_NUMBER"},
                                 {"16", "BIC"},
                                 {"17", "CSD_PARTICIPANT_MEMBER_CODE"},
                                 {"18", "REGISTERED_ADDRESS_18"},
                                 {"19", "FUND_ACCOUNT_NAME"},
                                 {"20", "TELEX_NUMBER"},
                                 {"21", "FAX_NUMBER"},
                                 {"22", "SECURITIES_ACCOUNT_NAME"},
                                 {"23", "CASH_ACCOUNT_NAME"},
                                 {"24", "DEPARTMENT"},
                                 {"25", "LOCATION_DESK"},
                                 {"26", "POSITION_ACCOUNT_TYPE"},
                                 {"27", "SECURITY_LOCATE_ID"},
                                 {"28", "MARKET_MAKER"},
                                 {"29", "ELIGIBLE_COUNTERPARTY"},
                                 {"30", "PROFESSIONAL_CLIENT"},
                                 {"31", "LOCATION"},
                                 {"32", "EXECUTION_VENUE"}}};
    schema[802] = fix::FieldDef{802, "NoPartySubIDs"};
    schema[801] = fix::FieldDef{801, "NoSettlPartySubIDs"};
    schema[800] = fix::FieldDef{800, "OrderBookingQty"};
    schema[807] = fix::FieldDef{807, "Nested2PartySubIDType"};
    schema[806] = fix::FieldDef{806, "NoNested2PartySubIDs"};
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
    schema[211] = fix::FieldDef{211, "PegOffsetValue"};
    schema[762] = fix::FieldDef{762, "SecuritySubType"};
    schema[763] = fix::FieldDef{763, "UnderlyingSecuritySubType"};
    schema[760] = fix::FieldDef{760, "Nested2PartySubID"};
    schema[761] = fix::FieldDef{761, "BenchmarkSecurityIDSource"};
    schema[766] = fix::FieldDef{766, "AllowableOneSidednessValue"};
    schema[767] = fix::FieldDef{767, "AllowableOneSidednessCurr"};
    schema[218] = fix::FieldDef{218, "Spread"};
    schema[765] = fix::FieldDef{765, "AllowableOneSidednessPct"};
    schema[957] = fix::FieldDef{957, "NoStrategyParameters"};
    schema[956] = fix::FieldDef{956, "LegInterestAccrualDate"};
    schema[1033] = fix::FieldDef{1033,
                                 "DeskType",
                                 {{"A", "AGENCY"},
                                  {"AR", "ARBITRAGE"},
                                  {"D", "DERIVATIVES"},
                                  {"IN", "INTERNATIONAL"},
                                  {"IS", "INSTITUTIONAL"},
                                  {"O", "OTHER"},
                                  {"PF", "PREFERRED_TRADING"},
                                  {"PR", "PROPRIETARY"},
                                  {"PT", "PROGRAM_TRADING"},
                                  {"S", "SALES"},
                                  {"T", "TRADING"}}};
    schema[1079] = fix::FieldDef{1079, "MaturityTime"};
    schema[1074] = fix::FieldDef{1074, "LegCalculatedCcyLastQty"};
    schema[1075] = fix::FieldDef{1075, "LegGrossTradeAmt"};
    schema[1072] = fix::FieldDef{1072, "SideGrossTradeAmt"};
    schema[1073] = fix::FieldDef{1073, "LegLastForwardPoints"};
    schema[1070] = fix::FieldDef{1070,
                                 "MDQuoteType",
                                 {{"0", "INDICATIVE"},
                                  {"1", "TRADEABLE"},
                                  {"2", "RESTRICTED_TRADEABLE"},
                                  {"3", "COUNTER"},
                                  {"4", "INDICATIVE_AND_TRADEABLE"}}};
    schema[1071] = fix::FieldDef{1071, "LastSwapPoints"};
    schema[289] = fix::FieldDef{289, "MDEntrySeller"};
    schema[288] = fix::FieldDef{288, "MDEntryBuyer"};
    schema[1003] = fix::FieldDef{1003, "TradeID"};
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
                                 {"8", "UNSUPPORTED_MDENTRYTYPE"},
                                 {"9", "UNSUPPORTED_TRADINGSESSIONID"},
                                 {"A", "UNSUPPORTED_SCOPE"},
                                 {"B", "UNSUPPORTED_OPENCLOSESETTLEFLAG"},
                                 {"C", "UNSUPPORTED_MDIMPLICITDELETE"},
                                 {"D", "INSUFFICIENT_CREDIT"}}};
    schema[280] = fix::FieldDef{280, "MDEntryRefID"};
    schema[283] = fix::FieldDef{283, "LocationID"};
    schema[282] = fix::FieldDef{282, "MDEntryOriginator"};
    schema[285] = fix::FieldDef{
      285, "DeleteReason", {{"0", "CANCELLATION"}, {"1", "ERROR"}}};
    schema[284] = fix::FieldDef{284, "DeskID"};
    schema[287] = fix::FieldDef{287, "SellerDays"};
    schema[286] = fix::FieldDef{286,
                                "OpenCloseSettlFlag",
                                {{"0", "DAILY_OPEN"},
                                 {"1", "SESSION_OPEN"},
                                 {"2", "DELIVERY_SETTLEMENT_ENTRY"},
                                 {"3", "EXPECTED_ENTRY"},
                                 {"4", "ENTRY_FROM_PREVIOUS_BUSINESS_DAY"},
                                 {"5", "THEORETICAL_PRICE_VALUE"}}};
    schema[1094] = fix::FieldDef{
      1094,
      "PegPriceType",
      {{"1", "LAST_PEG"},
       {"2", "MID_PRICE_PEG"},
       {"3", "OPENING_PEG"},
       {"4", "MARKET_PEG"},
       {"5", "PRIMARY_PEG"},
       {"6", "FIXED_PEG_TO_LOCAL_BEST_BID_OR_OFFER_AT_TIME_OF_ORDER"},
       {"7", "PEG_TO_VWAP"},
       {"8", "TRAILING_STOP_PEG"},
       {"9", "PEG_TO_LIMIT_PRICE"}}};
    schema[1095] = fix::FieldDef{1095, "PeggedRefPrice"};
    schema[1083] = fix::FieldDef{
      1083, "DisplayWhen", {{"1", "IMMEDIATE"}, {"2", "EXHAUST"}}};
    schema[1097] = fix::FieldDef{1097, "PegSecurityID"};
    schema[678] = fix::FieldDef{678, "LegBenchmarkCurvePoint"};
    schema[679] = fix::FieldDef{679, "LegBenchmarkPrice"};
    schema[1092] = fix::FieldDef{
      1092,
      "PriceProtectionScope",
      {{"0", "NONE"}, {"1", "LOCAL"}, {"2", "NATIONAL"}, {"3", "GLOBAL"}}};
    schema[1093] =
      fix::FieldDef{1093,
                    "LotType",
                    {{"1", "ODD_LOT"}, {"2", "ROUND_LOT"}, {"3", "BLOCK_LOT"}}};
    schema[674] = fix::FieldDef{674, "LegAllocAcctIDSource"};
    schema[675] = fix::FieldDef{675, "LegSettlCurrency"};
    schema[676] = fix::FieldDef{676, "LegBenchmarkCurveCurrency"};
    schema[677] = fix::FieldDef{677, "LegBenchmarkCurveName"};
    schema[670] = fix::FieldDef{670, "NoLegAllocs"};
    schema[671] = fix::FieldDef{671, "LegAllocAccount"};
    schema[672] = fix::FieldDef{672, "LegIndividualAllocID"};
    schema[673] = fix::FieldDef{673, "LegAllocQty"};
    schema[263] =
      fix::FieldDef{263,
                    "SubscriptionRequestType",
                    {{"0", "SNAPSHOT"},
                     {"1", "SNAPSHOT_PLUS_UPDATES"},
                     {"2", "DISABLE_PREVIOUS_SNAPSHOT_PLUS_UPDATE_REQUEST"}}};
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
    schema[1121] = fix::FieldDef{1121, "RootPartySubID"};
    schema[1031] = fix::FieldDef{1031,
                                 "CustOrderHandlingInst",
                                 {{"ADD", "ADD_ON_ORDER"},
                                  {"AON", "ALL_OR_NONE"},
                                  {"CNH", "CASH_NOT_HELD"},
                                  {"DIR", "DIRECTED_ORDER"},
                                  {"E.W", "EXCHANGE_FOR_PHYSICAL_TRANSACTION"},
                                  {"FOK", "FILL_OR_KILL"},
                                  {"IO", "IMBALANCE_ONLY"},
                                  {"IOC", "IMMEDIATE_OR_CANCEL"},
                                  {"LOO", "LIMIT_ON_OPEN"},
                                  {"LOC", "LIMIT_ON_CLOSE"},
                                  {"MAO", "MARKET_AT_OPEN"},
                                  {"MAC", "MARKET_AT_CLOSE"},
                                  {"MOO", "MARKET_ON_OPEN"},
                                  {"MOC", "MARKET_ON_CLOSE"},
                                  {"MQT", "MINIMUM_QUANTITY"},
                                  {"NH", "NOT_HELD"},
                                  {"OVD", "OVER_THE_DAY"},
                                  {"PEG", "PEGGED"},
                                  {"RSV", "RESERVE_SIZE_ORDER"},
                                  {"S.W", "STOP_STOCK_TRANSACTION"},
                                  {"SCL", "SCALE"},
                                  {"TMO", "TIME_ORDER"},
                                  {"TS", "TRAILING_STOP"},
                                  {"WRK", "WORK"}}};
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
                                 {"9", "TRADING_SESSION_VWAP_PRICE"},
                                 {"A", "IMBALANCE"},
                                 {"B", "TRADE_VOLUME"},
                                 {"C", "OPEN_INTEREST"},
                                 {"D", "COMPOSITE_UNDERLYING_PRICE"},
                                 {"E", "SIMULATED_SELL_PRICE"},
                                 {"F", "SIMULATED_BUY_PRICE"},
                                 {"G", "MARGIN_RATE"},
                                 {"H", "MID_PRICE"},
                                 {"J", "EMPTY_BOOK"},
                                 {"K", "SETTLE_HIGH_PRICE"},
                                 {"L", "SETTLE_LOW_PRICE"},
                                 {"M", "PRIOR_SETTLE_PRICE"},
                                 {"N", "SESSION_HIGH_BID"},
                                 {"O", "SESSION_LOW_OFFER"},
                                 {"P", "EARLY_PRICES"},
                                 {"Q", "AUCTION_CLEARING_PRICE"}}};
    schema[268] = fix::FieldDef{268, "NoMDEntries"};
    schema[701] = fix::FieldDef{701, "YieldCalcDate"};
    schema[59] = fix::FieldDef{59,
                               "TimeInForce",
                               {{"0", "DAY"},
                                {"1", "GOOD_TILL_CANCEL"},
                                {"2", "AT_THE_OPENING"},
                                {"3", "IMMEDIATE_OR_CANCEL"},
                                {"4", "FILL_OR_KILL"},
                                {"5", "GOOD_TILL_CROSSING"},
                                {"6", "GOOD_TILL_DATE"},
                                {"7", "AT_THE_CLOSE"}}};
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
                                {"9", "CROSS_SHORT"},
                                {"A", "CROSS_SHORT_EXXMPT"},
                                {"B", "AS_DEFINED"},
                                {"C", "OPPOSITE"},
                                {"D", "SUBSCRIBE"},
                                {"E", "REDEEM"},
                                {"F", "LEND"},
                                {"G", "BORROW"}}};
    schema[57] = fix::FieldDef{57, "TargetSubID"};
    schema[56] = fix::FieldDef{56, "TargetCompID"};
    schema[50] = fix::FieldDef{50, "SenderSubID"};
    schema[53] = fix::FieldDef{53, "Quantity"};
    schema[52] = fix::FieldDef{52, "SendingTime"};
    schema[537] = fix::FieldDef{537,
                                "QuoteType",
                                {{"0", "INDICATIVE"},
                                 {"1", "TRADEABLE"},
                                 {"2", "RESTRICTED_TRADEABLE"},
                                 {"3", "COUNTER"}}};
    schema[536] = fix::FieldDef{536, "AffectedSecondaryOrderID"};
    schema[535] = fix::FieldDef{535, "AffectedOrderID"};
    schema[63] = fix::FieldDef{63,
                               "SettlType",
                               {{"0", "REGULAR"},
                                {"1", "CASH"},
                                {"2", "NEXT_DAY"},
                                {"3", "T_PLUS_2"},
                                {"4", "T_PLUS_3"},
                                {"5", "T_PLUS_4"},
                                {"6", "FUTURE"},
                                {"7", "WHEN_AND_IF_ISSUED"},
                                {"8", "SELLERS_OPTION"},
                                {"9", "T_PLUS_5"},
                                {"B", "BROKEN_DATE"},
                                {"C", "FX_SPOT_NEXT_SETTLEMENT"}}};
    schema[533] = fix::FieldDef{533, "TotalAffectedOrders"};
    schema[532] = fix::FieldDef{532,
                                "MassCancelRejectReason",
                                {{"0", "MASS_CANCEL_NOT_SUPPORTED"},
                                 {"1", "INVALID_OR_UNKNOWN_SECURITY"},
                                 {"2", "INVALID_OR_UNKOWN_UNDERLYING_SECURITY"},
                                 {"3", "INVALID_OR_UNKNOWN_PRODUCT"},
                                 {"4", "INVALID_OR_UNKNOWN_CFICODE"},
                                 {"5", "INVALID_OR_UNKNOWN_SECURITYTYPE"},
                                 {"6", "INVALID_OR_UNKNOWN_TRADING_SESSION"},
                                 {"99", "OTHER"}}};
    schema[531] =
      fix::FieldDef{531,
                    "MassCancelResponse",
                    {{"0", "CANCEL_REQUEST_REJECTED"},
                     {"1", "CANCEL_ORDERS_FOR_A_SECURITY"},
                     {"2", "CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY"},
                     {"3", "CANCEL_ORDERS_FOR_A_PRODUCT"},
                     {"4", "CANCEL_ORDERS_FOR_A_CFICODE"},
                     {"5", "CANCEL_ORDERS_FOR_A_SECURITYTYPE"},
                     {"6", "CANCEL_ORDERS_FOR_A_TRADING_SESSION"},
                     {"7", "CANCEL_ALL_ORDERS"}}};
    schema[530] =
      fix::FieldDef{530,
                    "MassCancelRequestType",
                    {{"1", "CANCEL_ORDERS_FOR_A_SECURITY"},
                     {"2", "CANCEL_ORDERS_FOR_AN_UNDERLYING_SECURITY"},
                     {"3", "CANCEL_ORDERS_FOR_A_PRODUCT"},
                     {"4", "CANCEL_ORDERS_FOR_A_CFICODE"},
                     {"5", "CANCEL_ORDERS_FOR_A_SECURITYTYPE"},
                     {"6", "CANCEL_ORDERS_FOR_A_TRADING_SESSION"},
                     {"7", "CANCEL_ALL_ORDERS"}}};
    schema[539] = fix::FieldDef{539, "NoNestedPartyIDs"};
    schema[538] = fix::FieldDef{538, "NestedPartyRole"};
    schema[987] = fix::FieldDef{987, "UnderlyingSettlementDate"};
    schema[775] = fix::FieldDef{
      775,
      "BookingType",
      {{"0", "REGULAR_BOOKING"}, {"1", "CFD"}, {"2", "TOTAL_RETURN_SWAP"}}};
    schema[988] = fix::FieldDef{988, "UnderlyingSettlementStatus"};
    schema[989] = fix::FieldDef{989, "SecondaryIndividualAllocID"};
    schema[774] = fix::FieldDef{774,
                                "ConfirmRejReason",
                                {{"1", "MISMATCHED_ACCOUNT"},
                                 {"2", "MISSING_SETTLEMENT_INSTRUCTIONS"},
                                 {"99", "OTHER"}}};
    schema[982] = fix::FieldDef{982,
                                "ExpType",
                                {{"1", "AUTO_EXERCISE"},
                                 {"2", "NON_AUTO_EXERCISE"},
                                 {"3", "FINAL_WILL_BE_EXERCISED"},
                                 {"4", "CONTRARY_INTENTION"},
                                 {"5", "DIFFERENCE"}}};
    schema[983] = fix::FieldDef{983, "ExpQty"};
    schema[980] =
      fix::FieldDef{980,
                    "SecurityUpdateAction",
                    {{"A", "ADD"}, {"D", "DELETE"}, {"M", "MODIFY"}}};
    schema[981] = fix::FieldDef{981, "NoExpiration"};
    schema[986] = fix::FieldDef{986, "UnderlyingCollectAmount"};
    schema[777] = fix::FieldDef{777, "SettlInstMsgID"};
    schema[984] = fix::FieldDef{984, "NoUnderlyingAmounts"};
    schema[985] = fix::FieldDef{985, "UnderlyingPayAmount"};
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
    schema[773] = fix::FieldDef{773,
                                "ConfirmType",
                                {{"1", "STATUS"},
                                 {"2", "CONFIRMATION"},
                                 {"3", "CONFIRMATION_REQUEST_REJECTED"}}};
    schema[772] = fix::FieldDef{772, "ConfirmRefID"};
    schema[953] = fix::FieldDef{953, "Nested3PartySubID"};
    schema[429] = fix::FieldDef{429,
                                "ListStatusType",
                                {{"1", "ACK"},
                                 {"2", "RESPONSE"},
                                 {"3", "TIMED"},
                                 {"4", "EXEC_STARTED"},
                                 {"5", "ALL_DONE"},
                                 {"6", "ALERT"}}};
    schema[428] = fix::FieldDef{428, "NoStrikes"};
    schema[534] = fix::FieldDef{534, "NoAffectedOrders"};
    schema[919] = fix::FieldDef{919,
                                "DeliveryType",
                                {{"0", "VERSUS_PAYMENT_DELIVER"},
                                 {"1", "FREE_DELIVER"},
                                 {"2", "TRI_PARTY"},
                                 {"3", "HOLD_IN_CUSTODY"}}};
    schema[918] = fix::FieldDef{918, "AgreementCurrency"};
    schema[421] = fix::FieldDef{421, "Country"};
    schema[420] = fix::FieldDef{420, "NoBidComponents"};
    schema[423] = fix::FieldDef{423,
                                "PriceType",
                                {{"1", "PERCENTAGE"},
                                 {"2", "PER_UNIT"},
                                 {"3", "FIXED_AMOUNT"},
                                 {"4", "DISCOUNT"},
                                 {"5", "PREMIUM"},
                                 {"6", "SPREAD"},
                                 {"7", "TED_PRICE"},
                                 {"8", "TED_YIELD"},
                                 {"9", "YIELD"},
                                 {"10", "FIXED_CABINET_TRADE_PRICE"},
                                 {"11", "VARIABLE_CABINET_TRADE_PRICE"},
                                 {"13", "PRODUCT_TICKS_IN_HALFS"},
                                 {"14", "PRODUCT_TICKS_IN_FOURTHS"},
                                 {"15", "PRODUCT_TICKS_IN_EIGHTS"},
                                 {"16", "PRODUCT_TICKS_IN_SIXTEENTHS"},
                                 {"17", "PRODUCT_TICKS_IN_THIRTY_SECONDS"},
                                 {"18", "PRODUCT_TICKS_IN_SIXTY_FORTHS"},
                                 {"19", "PRODUCT_TICKS_IN_ONE_TWENTY_EIGHTS"}}};
    schema[422] = fix::FieldDef{422, "TotNoStrikes"};
    schema[425] = fix::FieldDef{425, "DayCumQty"};
    schema[424] = fix::FieldDef{424, "DayOrderQty"};
    schema[427] = fix::FieldDef{
      427,
      "GTBookingInst",
      {{"0", "BOOK_OUT_ALL_TRADES_ON_DAY_OF_EXECUTION"},
       {"1", "ACCUMULATE_EXECTUIONS_UNTIL_FORDER_IS_FILLED_OR_EXPIRES"},
       {"2", "ACCUMULATE_UNTIL_VERBALLLY_NOTIFIED_OTHERWISE"}}};
    schema[426] = fix::FieldDef{426, "DayAvgPx"};
    schema[308] = fix::FieldDef{308, "UnderlyingSecurityExchange"};
    schema[309] = fix::FieldDef{309, "UnderlyingSecurityID"};
    schema[855] = fix::FieldDef{855, "SecondaryTrdType"};
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
                                 {"9", "NOT_AUTHORIZED_TO_QUOTE_SECURITY"},
                                 {"99", "OTHER"}}};
    schema[301] =
      fix::FieldDef{301,
                    "QuoteResponseLevel",
                    {{"0", "NO_ACKNOWLEDGEMENT"},
                     {"1", "ACKNOWLEDGE_ONLY_NEGATIVE_OR_ERRONEOUS_QUOTES"},
                     {"2", "ACKNOWLEDGE_EACH_QUOTE_MESSAGES"}}};
    schema[302] = fix::FieldDef{302, "QuoteSetID"};
    schema[303] = fix::FieldDef{
      303, "QuoteRequestType", {{"1", "MANUAL"}, {"2", "AUTOMATIC"}}};
    schema[304] = fix::FieldDef{304, "TotNoQuoteEntries"};
    schema[305] = fix::FieldDef{305, "UnderlyingSecurityIDSource"};
    schema[306] = fix::FieldDef{306, "UnderlyingIssuer"};
    schema[307] = fix::FieldDef{307, "UnderlyingSecurityDesc"};
    schema[895] = fix::FieldDef{895,
                                "CollAsgnReason",
                                {{"0", "INITIAL"},
                                 {"1", "SCHEDULED"},
                                 {"2", "TIME_WARNING"},
                                 {"3", "MARGIN_DEFICIENCY"},
                                 {"4", "MARGIN_EXCESS"},
                                 {"5", "FORWARD_COLLATERAL_DEMAND"},
                                 {"6", "EVENT_OF_DEFAULT"},
                                 {"7", "ADVERSE_TAX_EVENT"}}};
    schema[825] = fix::FieldDef{825, "ExchangeRule"};
    schema[827] = fix::FieldDef{827,
                                "ExpirationCycle",
                                {{"0", "EXPIRE_ON_TRADING_SESSION_CLOSE"},
                                 {"1", "EXPIRE_ON_TRADING_SESSION_OPEN"}}};
    schema[847] = fix::FieldDef{
      847,
      "TargetStrategy",
      {{"1", "VWAP"}, {"2", "PARTICIPATE"}, {"3", "MININIZE_MARKET_IMPACT"}}};
    schema[846] = fix::FieldDef{846,
                                "DiscretionScope",
                                {{"1", "LOCAL"},
                                 {"2", "NATIONAL"},
                                 {"3", "GLOBAL"},
                                 {"4", "NATIONAL_EXCLUDING_LOCAL"}}};
    schema[845] = fix::FieldDef{845, "DiscretionPrice"};
    schema[826] =
      fix::FieldDef{826,
                    "TradeAllocIndicator",
                    {{"0", "ALLOCATION_NOT_REQUIRED"},
                     {"1", "ALLOCATION_REQUIRED"},
                     {"2", "USE_ALLOCATION_PROVIDED_WITH_THE_TRADE"},
                     {"3", "ALLOCATION_GIVE_UP_EXECUTOR"},
                     {"4", "ALLOCATION_FROM_EXECUTOR"},
                     {"5", "ALLOCATION_TO_CLAIM_ACCOUNT"}}};
    schema[843] =
      fix::FieldDef{843,
                    "DiscretionLimitType",
                    {{"0", "OR_BETTER"}, {"1", "STRICT"}, {"2", "OR_WORSE"}}};
    schema[842] = fix::FieldDef{842,
                                "DiscretionOffsetType",
                                {{"0", "PRICE"},
                                 {"1", "BASIS_POINTS"},
                                 {"2", "TICKS"},
                                 {"3", "PRICE_TIER"}}};
    schema[841] = fix::FieldDef{
      841, "DiscretionMoveType", {{"0", "FLOATING"}, {"1", "FIXED"}}};
    schema[840] = fix::FieldDef{840,
                                "PegScope",
                                {{"1", "LOCAL"},
                                 {"2", "NATIONAL"},
                                 {"3", "GLOBAL"},
                                 {"4", "NATIONAL_XXCLUDING_LOCAL"}}};
    schema[821] = fix::FieldDef{821, "OrderInputDevice"};
    schema[853] =
      fix::FieldDef{853,
                    "ShortSaleReason",
                    {{"0", "DEALER_SOLD_SHORT"},
                     {"1", "DEALER_SOLD_SHORT_EXEMPT"},
                     {"2", "SELLING_CUSTOMER_SOLD_SHORT"},
                     {"3", "SELLING_CUSTOMER_SOLD_SHORT_EXEMPT"},
                     {"4", "QUALIFIED_SERVICE_REPRESENTATIVE"},
                     {"5", "QSR_OR_AGU_CONTRA_SIDE_SOLD_SHORT_EXEMPT"}}};
    schema[849] = fix::FieldDef{849, "ParticipationRate"};
    schema[820] = fix::FieldDef{820, "TradeLinkID"};
    schema[823] = fix::FieldDef{823, "UnderlyingTradingSessionSubID"};
    schema[822] = fix::FieldDef{822, "UnderlyingTradingSessionID"};
    schema[954] = fix::FieldDef{954, "Nested3PartySubIDType"};
    schema[1034] = fix::FieldDef{1034, "DeskTypeSource", {{"1", "NASD_OATS"}}};
    schema[1127] = fix::FieldDef{1127, "OrigSecondaryTradeID"};
    schema[1038] = fix::FieldDef{1038, "UnderlyingCapValue"};
    schema[1039] = fix::FieldDef{1039, "UnderlyingSettlMethod"};
    schema[568] = fix::FieldDef{568, "TradeRequestID"};
    schema[569] = fix::FieldDef{
      569,
      "TradeRequestType",
      {{"0", "ALL_TRADES"},
       {"1", "MATCHED_TRADES_MATCHING_CRITERIA_PROVIDED_ON_REQUEST"},
       {"2", "UNMATCHED_TRADES_THAT_MATCH_CRITERIA"},
       {"3", "UNREPORTED_TRADES_THAT_MATCH_CRITERIA"},
       {"4", "ADVISORIES_THAT_MATCH_CRITERIA"}}};
    schema[751] = fix::FieldDef{751,
                                "TradeReportRejectReason",
                                {{"0", "SUCCESSFUL"},
                                 {"1", "INVALID_PARTY_ONFORMATION"},
                                 {"2", "UNKNOWN_INSTRUMENT"},
                                 {"3", "UNAUTHORIZED_TO_REPORT_TRADES"},
                                 {"4", "INVALID_TRADE_TYPE"},
                                 {"99", "OTHER"}}};
    schema[750] =
      fix::FieldDef{750,
                    "TradeRequestStatus",
                    {{"0", "ACCEPTED"}, {"1", "COMPLETED"}, {"2", "REJECTED"}}};
    schema[757] = fix::FieldDef{757, "Nested2PartyID"};
    schema[737] = fix::FieldDef{737, "AllocSettlCurrAmt"};
    schema[755] = fix::FieldDef{755, "AllocReportID"};
    schema[754] = fix::FieldDef{754, "AutoAcceptIndicator"};
    schema[560] = fix::FieldDef{
      560,
      "SecurityRequestResult",
      {{"0", "VALID_REQUEST"},
       {"1", "INVALID_OR_UNSUPPORTED_REQUEST"},
       {"2", "NO_INSTRUMENTS_FOUND_THAT_MATCH_SELECTION_CRITERIA"},
       {"3", "NOT_AUTHORIZED_TO_RETRIEVE_INSTRUMENT_DATA"},
       {"4", "INSTRUMENT_DATA_TEMPORARILY_UNAVAILABLE"},
       {"5", "REQUEST_FOR_INSTRUMENT_DATA_NOT_SUPPORTED"}}};
    schema[561] = fix::FieldDef{561, "RoundLot"};
    schema[562] = fix::FieldDef{562, "MinTradeVol"};
    schema[563] = fix::FieldDef{
      563,
      "MultiLegRptTypeReq",
      {{"0", "REPORT_BY_MULITLEG_SECURITY_ONLY"},
       {"1", "REPORT_BY_MULTILEG_SECURITY_AND_BY_INSTRUMENT_LEGS_BELONGING_TO_"
             "THE_MULTILEG_SECURITY"},
       {"2",
        "REPORT_BY_INSTRUMENT_LEGS_BELONGING_TO_THE_MULTILEG_SECURITY_ONLY"}}};
    schema[564] = fix::FieldDef{564, "LegPositionEffect"};
    schema[565] = fix::FieldDef{565, "LegCoveredOrUncovered"};
    schema[566] = fix::FieldDef{566, "LegPrice"};
    schema[567] = fix::FieldDef{
      567,
      "TradSesStatusRejReason",
      {{"1", "UNKNOWN_OR_INVALID_TRADINGSESSIONID"}, {"99", "OTHER"}}};
    schema[739] = fix::FieldDef{739, "LegDatedDate"};
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
                                {{"EONIA", "EONIA"},
                                 {"EUREPO", "EUREPO"},
                                 {"Euribor", "EURIBOR"},
                                 {"FutureSWAP", "FUTURESWAP"},
                                 {"LIBID", "LIBID"},
                                 {"LIBOR", "LIBOR"},
                                 {"MuniAAA", "MUNIAAA"},
                                 {"OTHER", "OTHER"},
                                 {"Pfandbriefe", "PFANDBRIEFE"},
                                 {"SONIA", "SONIA"},
                                 {"SWAP", "SWAP"},
                                 {"Treasury", "TREASURY"}}};
    schema[220] = fix::FieldDef{220, "BenchmarkCurveCurrency"};
    schema[1001] = fix::FieldDef{1001, "LegTimeUnit"};
    schema[1024] = fix::FieldDef{
      1024, "MDOriginType", {{"0", "BOOK"}, {"1", "OFF_BOOK"}, {"2", "CROSS"}}};
    schema[1027] = fix::FieldDef{1027, "MDEntryForwardPoints"};
    schema[1026] = fix::FieldDef{1026, "MDEntrySpotRate"};
    schema[1021] = fix::FieldDef{
      1021,
      "MDBookType",
      {{"1", "TOP_OF_BOOK"}, {"2", "PRICE_DEPTH"}, {"3", "ORDER_DEPTH"}}};
    schema[1020] = fix::FieldDef{1020, "TradeVolume"};
    schema[1023] = fix::FieldDef{1023, "MDPriceLevel"};
    schema[1022] = fix::FieldDef{1022, "MDFeedType"};
    schema[1036] = fix::FieldDef{1036,
                                 "ExecAckStatus",
                                 {{"0", "RECEIVED_NOT_YET_PROCESSED"},
                                  {"1", "ACCEPTED"},
                                  {"2", "DONT_KNOW"}}};
    schema[1029] = fix::FieldDef{1029, "CustDirectedOrder"};
    schema[391] = fix::FieldDef{391, "ClientBidID"};
    schema[1037] = fix::FieldDef{1037, "UnderlyingDeliveryAmount"};
    schema[726] = fix::FieldDef{726, "ResponseDestination"};
    schema[727] = fix::FieldDef{727, "TotalNumPosReports"};
    schema[724] = fix::FieldDef{724,
                                "PosReqType",
                                {{"0", "POSITIONS"},
                                 {"1", "TRADES"},
                                 {"2", "EXERCISES"},
                                 {"3", "ASSIGNMENTS"},
                                 {"4", "SETTLEMENT_ACTIVITY"},
                                 {"5", "BACKOUT_MESSAGE"}}};
    schema[390] = fix::FieldDef{390, "BidID"};
    schema[722] = fix::FieldDef{722,
                                "PosMaintStatus",
                                {{"0", "ACCEPTED"},
                                 {"1", "ACCEPTED_WITH_WARNINGS"},
                                 {"2", "REJECTED"},
                                 {"3", "COMPLETED"},
                                 {"4", "COMPLETED_WITH_WARNINGS"}}};
    schema[723] = fix::FieldDef{
      723,
      "PosMaintResult",
      {{"0", "SUCCESSFUL_COMPLETION"}, {"1", "REJECTED"}, {"99", "OTHER"}}};
    schema[720] = fix::FieldDef{720, "PriorSpreadIndicator"};
    schema[721] = fix::FieldDef{721, "PosMaintRptID"};
    schema[1035] = fix::FieldDef{1035,
                                 "DeskOrderHandlingInst",
                                 {{"ADD", "ADD_ON_ORDER"},
                                  {"AON", "ALL_OR_NONE"},
                                  {"CNH", "CASH_NOT_HELD"},
                                  {"DIR", "DIRECTED_ORDER"},
                                  {"E.W", "EXCHANGE_FOR_PHYSICAL_TRANSACTION"},
                                  {"FOK", "FILL_OR_KILL"},
                                  {"IO", "IMBALANCE_ONLY"},
                                  {"IOC", "IMMEDIATE_OR_CANCEL"},
                                  {"LOO", "LIMIT_ON_OPEN"},
                                  {"LOC", "LIMIT_ON_CLOSE"},
                                  {"MAO", "MARKET_AT_OPEN"},
                                  {"MAC", "MARKET_AT_CLOSE"},
                                  {"MOO", "MARKET_ON_OPEN"},
                                  {"MOC", "MARKET_ON_CLOSE"},
                                  {"MQT", "MINIMUM_QUANTITY"},
                                  {"NH", "NOT_HELD"},
                                  {"OVD", "OVER_THE_DAY"},
                                  {"PEG", "PEGGED"},
                                  {"RSV", "RESERVE_SIZE_ORDER"},
                                  {"S.W", "STOP_STOCK_TRANSACTION"},
                                  {"SCL", "SCALE"},
                                  {"TMO", "TIME_ORDER"},
                                  {"TS", "TRAILING_STOP"},
                                  {"WRK", "WORK"}}};
    schema[728] =
      fix::FieldDef{728,
                    "PosReqResult",
                    {{"0", "VALID_REQUEST"},
                     {"1", "INVALID_OR_UNSUPPORTED_REQUEST"},
                     {"2", "NO_POSITIONS_FOUND_THAT_MATCH_CRITERIA"},
                     {"3", "NOT_AUTHORIZED_TO_REQUEST_POSITIONS"},
                     {"4", "REQUEST_FOR_POSITION_NOT_SUPPORTED"},
                     {"99", "OTHER"}}};
    schema[729] = fix::FieldDef{729,
                                "PosReqStatus",
                                {{"0", "COMPLETED"},
                                 {"1", "COMPLETED_WITH_WARNINGS"},
                                 {"2", "REJECTED"}}};
    schema[151] = fix::FieldDef{151, "LeavesQty"};
    schema[150] = fix::FieldDef{150,
                                "ExecType",
                                {{"0", "NEW"},
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
                                 {"D", "RESTATED"},
                                 {"E", "PENDING_REPLACE"},
                                 {"F", "TRADE"},
                                 {"G", "TRADE_CORRECT"},
                                 {"H", "TRADE_CANCEL"},
                                 {"I", "ORDER_STATUS"},
                                 {"J", "TRADE_IN_A_CLEARING_HOLD"},
                                 {"K", "TRADE_HAS_BEEN_RELEASED_TO_CLEARING"},
                                 {"L", "TRIGGERED_OR_ACTIVATED_BY_SYSTEM"}}};
    schema[153] = fix::FieldDef{153, "AllocAvgPx"};
    schema[152] = fix::FieldDef{152, "CashOrderQty"};
    schema[155] = fix::FieldDef{155, "SettlCurrFxRate"};
    schema[154] = fix::FieldDef{154, "AllocNetMoney"};
    schema[157] = fix::FieldDef{157, "NumDaysInterest"};
    schema[156] = fix::FieldDef{
      156, "SettlCurrFxRateCalc", {{"M", "MULTIPLY"}, {"D", "DIVIDE"}}};
    schema[159] = fix::FieldDef{159, "AccruedInterestAmt"};
    schema[158] = fix::FieldDef{158, "AccruedInterestRate"};
    schema[609] = fix::FieldDef{609, "LegSecurityType"};
    schema[608] = fix::FieldDef{608, "LegCFICode"};
    schema[634] = fix::FieldDef{634, "OfferYield"};
    schema[399] =
      fix::FieldDef{399,
                    "BidDescriptorType",
                    {{"1", "SECTOR"}, {"2", "COUNTRY"}, {"3", "INDEX"}}};
    schema[635] =
      fix::FieldDef{635,
                    "ClearingFeeIndicator",
                    {{"1", "1ST_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT"},
                     {"2", "2ND_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT"},
                     {"3", "3RD_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT"},
                     {"4", "4TH_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT"},
                     {"5", "5TH_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT"},
                     {"9", "6TH_YEAR_DELEGATE_TRADING_FOR_OWN_ACCOUNT"},
                     {"B", "CBOE_MEMBER"},
                     {"C", "NON_MEMBER_AND_CUSTOMER"},
                     {"E", "EQUITY_MEMBER_AND_CLEARING_MEMBER"},
                     {"F", "FULL_AND_ASSOCIATE_MEMBER_TRADING_FOR_OWN_ACCOUNT_"
                           "AND_AS_FLOOR_BROKERS"},
                     {"H", "106H_AND_106J_FIRMS"},
                     {"I", "GIM_IDEM_AND_COM_MEMBERSHIP_INTEREST_HOLDERS"},
                     {"L", "LESSEE_106F_EMPLOYEES"},
                     {"M", "ALL_OTHER_OWNERSHIP_TYPES"}}};
    schema[749] =
      fix::FieldDef{749,
                    "TradeRequestResult",
                    {{"0", "SUCCESSFUL"},
                     {"1", "INVALID_OR_UNKNOWN_INSTRUMENT"},
                     {"2", "INVALID_TYPE_OF_TRADE_REQUESTED"},
                     {"3", "INVALID_PARTIES"},
                     {"4", "INVALID_TRANSPORT_TYPE_REQUESTED"},
                     {"5", "INVALID_DESTINATION_REQUESTED"},
                     {"8", "TRADEREQUESTTYPE_NOT_SUPPORTED"},
                     {"9", "UNAUTHORIZED_ROR_TRADE_CAPTURE_REPORT_REQUEST"},
                     {"99", "OTHER"}}};
    schema[958] = fix::FieldDef{958, "StrategyParameterName"};
    schema[398] = fix::FieldDef{398, "NoBidDescriptors"};
    schema[48] = fix::FieldDef{48, "SecurityID"};
    schema[49] = fix::FieldDef{49, "SenderCompID"};
    schema[951] = fix::FieldDef{951, "Nested3PartyRole"};
    schema[950] = fix::FieldDef{950, "Nested3PartyIDSource"};
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
                                {"C", "FOREX_MARKET"},
                                {"D", "PREVIOUSLY_QUOTED"},
                                {"E", "PREVIOUSLY_INDICATED"},
                                {"F", "FOREX_LIMIT"},
                                {"G", "FOREX_SWAP"},
                                {"H", "FOREX_PREVIOUSLY_QUOTED"},
                                {"I", "FUNARI"},
                                {"J", "MARKET_IF_TOUCHED"},
                                {"K", "MARKET_WITH_LEFT_OVER_AS_LIMIT"},
                                {"L", "PREVIOUS_FUND_VALUATION_POINT"},
                                {"M", "NEXT_FUND_VALUATION_POINT"},
                                {"P", "PEGGED"},
                                {"Q", "COUNTER_ORDER_SELECTION"}}};
    schema[41] = fix::FieldDef{41, "OrigClOrdID"};
    schema[1111] = fix::FieldDef{
      1111, "TriggerOrderType", {{"1", "MARKET"}, {"2", "LIMIT"}}};
    schema[1110] = fix::FieldDef{1110, "TriggerNewPrice"};
    schema[1113] = fix::FieldDef{1113, "TriggerTradingSessionID"};
    schema[1112] = fix::FieldDef{1112, "TriggerNewQty"};
    schema[5] = fix::FieldDef{
      5, "AdvTransType", {{"N", "NEW"}, {"C", "CANCEL"}, {"R", "REPLACE"}}};
    schema[1114] = fix::FieldDef{1114, "TriggerTradingSessionSubID"};
    schema[1117] = fix::FieldDef{1117, "RootPartyID"};
    schema[639] = fix::FieldDef{639, "PriceImprovement"};
    schema[1119] = fix::FieldDef{1119, "RootPartyRole"};
    schema[1118] = fix::FieldDef{1118, "RootPartyIDSource"};
    schema[489] = fix::FieldDef{489, "CardNumber"};
    schema[488] = fix::FieldDef{488, "CardHolderName"};
    schema[487] = fix::FieldDef{487,
                                "TradeReportTransType",
                                {{"0", "NEW"},
                                 {"1", "CANCEL"},
                                 {"2", "REPLACE"},
                                 {"3", "RELEASE"},
                                 {"4", "REVERSE"},
                                 {"5", "CANCEL_DUE_TO_BACK_OUT_OF_TRADE"}}};
    schema[486] = fix::FieldDef{486, "DateOfBirth"};
    schema[485] = fix::FieldDef{485, "ExecPriceAdjustment"};
    schema[484] =
      fix::FieldDef{484,
                    "ExecPriceType",
                    {{"B", "BID_PRICE"},
                     {"C", "CREATION_PRICE"},
                     {"D", "CREATION_PRICE_PLUS_ADJUSTMENT_PERCENT"},
                     {"E", "CREATION_PRICE_PLUS_ADJUSTMENT_AMOUNT"},
                     {"O", "OFFER_PRICE"},
                     {"P", "OFFER_PRICE_MINUS_ADJUSTMENT_PERCENT"},
                     {"Q", "OFFER_PRICE_MINUS_ADJUSTMENT_AMOUNT"},
                     {"S", "SINGLE_PRICE"}}};
    schema[483] = fix::FieldDef{483, "TransBkdTime"};
    schema[482] = fix::FieldDef{482, "MailingInst"};
    schema[481] = fix::FieldDef{481,
                                "MoneyLaunderingStatus",
                                {{"Y", "PASSED"},
                                 {"N", "NOT_CHECKED"},
                                 {"1", "EXEMPT_1"},
                                 {"2", "EXEMPT_2"},
                                 {"3", "EXEMPT_3"}}};
    schema[480] = fix::FieldDef{
      480,
      "CancellationRights",
      {{"Y", "YES"}, {"N", "NO_N"}, {"M", "NO_M"}, {"O", "NO_O"}}};
    schema[955] = fix::FieldDef{955, "LegContractSettlMonth"};
    schema[472] = fix::FieldDef{472, "LocaleOfIssue"};
    schema[473] = fix::FieldDef{473, "NoRegistDtls"};
    schema[470] = fix::FieldDef{470, "CountryOfIssue"};
    schema[471] = fix::FieldDef{471, "StateOrProvinceOfIssue"};
    schema[476] = fix::FieldDef{476, "PaymentRef"};
    schema[477] = fix::FieldDef{477,
                                "DistribPaymentMethod",
                                {{"1", "CREST"},
                                 {"2", "NSCC"},
                                 {"3", "EUROCLEAR"},
                                 {"4", "CLEARSTREAM"},
                                 {"5", "CHEQUE"},
                                 {"6", "TELEGRAPHIC_TRANSFER"},
                                 {"7", "FED_WIRE"},
                                 {"8", "DIRECT_CREDIT"},
                                 {"9", "ACH_CREDIT"},
                                 {"10", "BPAY"},
                                 {"11", "HIGH_VALUE_CLEARING_SYSTEM_HVACS"},
                                 {"12", "REINVEST_IN_FUND"}}};
    schema[474] = fix::FieldDef{474, "MailingDtls"};
    schema[475] = fix::FieldDef{475, "InvestorCountryOfResidence"};
    schema[478] = fix::FieldDef{478, "CashDistribCurr"};
    schema[479] = fix::FieldDef{479, "CommCurrency"};
    return schema;
  }
}
