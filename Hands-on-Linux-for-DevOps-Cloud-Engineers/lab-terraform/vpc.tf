// This or # is terraform comment
// https://developer.hashicorp.com/terraform/language/syntax/configuration
// Teraform uses key values structure to configure our lab


resource "aws_vpc" "lab-vpc" {
  cidr_block           = "10.0.0.0/16"
  enable_dns_hostnames = "true"
  instance_tenancy     = "default"

  tags = {
    Name = "lab-vpc"
  }
}

// resource  : terraform key word
// "aws_vpc" : resource we are using from amazon
// "lab-vpc" : name we gave to the resource

// cidr_block : ip = 10.0.0.0 / port = 16
//        we get 65,534 posible adress in the subnet mask

// enable dns = true : find our Virtual Instances by fully qualified domain name
// nstance_tenancy = default = we are ok with shared hardware 

// TAGS : good practice A name easy to find inside AWS 