#include "gtest/gtest.h"
#include "config_parser.h"

TEST(NginxConfigParserTest, SimpleConfig) {
  NginxConfigParser parser;
  NginxConfig out_config;
  bool success = parser.Parse("test_configs/example_config", &out_config);
  EXPECT_TRUE(success);
}

TEST(NginxConfigParserTest, SimpleServerTest) {
  NginxConfigParser parser;
  NginxConfig out_config;
  bool success = parser.Parse("test_configs/simple_server_config", &out_config);
  EXPECT_TRUE(success);
}

TEST(NginxConfigParserTest, ServerWithLocationTest) {
  NginxConfigParser parser;
  NginxConfig out_config;
  bool success = parser.Parse("test_configs/location_config", &out_config);
  EXPECT_TRUE(success);
}

TEST(NginxConfigParserTest, HttpWithServerTest) {
  NginxConfigParser parser;
  NginxConfig out_config;
  bool success = parser.Parse("test_configs/http_config", &out_config);
  EXPECT_TRUE(success);
}

TEST(NginxConfigParserTest, ComplicatedConfig) {
  NginxConfigParser parser;
  NginxConfig out_config;
  bool success = parser.Parse("test_configs/complicated_config", &out_config);
  EXPECT_TRUE(success);
}
