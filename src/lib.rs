use reqwest::{StatusCode, Client};
use serde::Deserialize;

#[derive(Deserialize, Debug)]
pub struct CatboyImage {
    pub image_url:  String,
    pub artist:     String,
    pub artist_url: String,
    pub source_url: String
}

#[derive(Deserialize, Debug)]
pub struct CatboyResponse {
    pub response: String,
    pub url:      String
}

#[derive(Debug)]
pub enum CatboyError {
    RequestError,
    APIError,
    ParseError
}

#[derive(Deserialize)]
struct CatboyBakaImage {
    url: String
}

pub async fn get_image() -> Result<CatboyImage, CatboyError> {
    match Client::new()
                  .get("https://api.catboys.com/img")
                  .header("Content-Type", "application/json")
                  .header("User-Agent", "libcatboy 1.0")
                  .send().await {
        Ok(response) => {
            if response.status() != StatusCode::OK {
                return Err(CatboyError::APIError);
            }
        
            match response.json::<CatboyImage>().await {
                Ok(parsed) => Ok(parsed),
        
                _ => {
                    return Err(CatboyError::ParseError);
                }
            }
        }

        _ => {
            return Err(CatboyError::RequestError);
        }
    }
}

pub async fn get_baka() -> Result<String, CatboyError> {
    match Client::new()
                  .get("https://api.catboys.com/baka")
                  .header("Content-Type", "application/json")
                  .header("User-Agent", "libcatboy 1.0")
                  .send().await {
        Ok(response) => {
            if response.status() != StatusCode::OK {
                return Err(CatboyError::APIError);
            }
        
            match response.json::<CatboyBakaImage>().await {
                Ok(parsed) => Ok(parsed.url),
        
                _ => {
                    return Err(CatboyError::ParseError);
                }
            }
        }

        _ => {
            return Err(CatboyError::RequestError);
        }
    }
}

pub async fn get_8ball() -> Result<CatboyResponse, CatboyError> {
    match Client::new()
                  .get("https://api.catboys.com/8ball")
                  .header("Content-Type", "application/json")
                  .header("User-Agent", "libcatboy 1.0")
                  .send().await {
        Ok(response) => {
            if response.status() != StatusCode::OK {
                return Err(CatboyError::APIError);
            }
        
            match response.json::<CatboyResponse>().await {
                Ok(parsed) => Ok(parsed),
        
                _ => {
                    return Err(CatboyError::ParseError);
                }
            }
        }

        _ => {
            return Err(CatboyError::RequestError);
        }
    }
}

pub async fn get_dice() -> Result<CatboyResponse, CatboyError> {
    match Client::new()
                  .get("https://api.catboys.com/dice")
                  .header("Content-Type", "application/json")
                  .header("User-Agent", "libcatboy 1.0")
                  .send().await {
        Ok(response) => {
            if response.status() != StatusCode::OK {
                return Err(CatboyError::APIError);
            }
        
            match response.json::<CatboyResponse>().await {
                Ok(parsed) => Ok(parsed),
        
                _ => {
                    return Err(CatboyError::ParseError);
                }
            }
        }

        _ => {
            return Err(CatboyError::RequestError);
        }
    }
}
