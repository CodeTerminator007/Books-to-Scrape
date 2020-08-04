# -*- coding: utf-8 -*-
import scrapy
from scrapy.linkextractors import LinkExtractor
from scrapy.spiders import CrawlSpider, Rule
import unicodedata

class AllbooksSpider(CrawlSpider):
    name = 'allbooks'
    allowed_domains = ['books.toscrape.com']
    start_urls = ['http://books.toscrape.com']

    rules = (
        Rule(LinkExtractor(restrict_xpaths='//article[@class="product_pod"]/h3/a'), callback='parse_item', follow=True),
        Rule(LinkExtractor(restrict_xpaths='//li[@class="next"]/a'))
      
    )

    def parse_item(self, response):
        price = response.xpath('normalize-space(//div[@class="col-sm-6 product_main"]/p/text())').get()
        
        yield {
            'Title' : response.xpath('//div[@class="col-sm-6 product_main"]/h1/text()').get(),
            'Price' : price
            }
        