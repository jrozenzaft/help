// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE imagecopy[height][width];

//create a copy of original image to save original pixel values
for (int r = 0; r < height; r++)
{
	for (int c = 0; c < width; c++)
	{
		imagecopy[r][c].rgbtRed = image[r][c].rgbtRed;
		imagecopy[r][c].rgbtGreen = image[r][c].rgbtGreen;
		imagecopy[r][c].rgbtBlue = image[r][c].rgbtBlue;
	}
}
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
                // First row, middle columns
            if (i == 0 && (j > 0 && j < width - 1))
            {
                float avgRed = (imagecopy[i][j].rgbtRed + imagecopy[i+1][j].rgbtRed + imagecopy[i][j+1].rgbtRed + imagecopy[i][j-1].rgbtRed + imagecopy[i+1][j-1].rgbtRed + imagecopy[i+1][j+1].rgbtRed) / 6;
                float avgGreen = (imagecopy[i][j].rgbtGreen + imagecopy[i+1][j].rgbtGreen + imagecopy[i][j+1].rgbtGreen + imagecopy[i][j-1].rgbtGreen + imagecopy[i+1][j-1].rgbtGreen + imagecopy[i+1][j+1].rgbtGreen) / 6; 
                float avgBlue = (imagecopy[i][j].rgbtBlue + imagecopy[i+1][j].rgbtBlue + imagecopy[i][j+1].rgbtBlue + imagecopy[i][j-1].rgbtBlue + imagecopy[i+1][j-1].rgbtBlue + imagecopy[i+1][j+1].rgbtBlue) / 6;
                 
                int averageRed = round(avgRed);  
                int averageGreen = round(avgGreen);  
                int averageBlue = round(avgBlue);  
                
                image[i][j].rgbtRed = averageRed;
                image[i][j].rgbtGreen = averageGreen;
                image[i][j].rgbtBlue = averageBlue;
            }
                // Bottom row, middle columns
            else if (i == (height - 1) && (j > 0 && j < width - 1))
            {
                float avgRed = (imagecopy[i][j].rgbtRed + imagecopy[i-1][j].rgbtRed + imagecopy[i-1][j-1].rgbtRed + imagecopy[i][j+1].rgbtRed + imagecopy[i][j-1].rgbtRed + imagecopy[i-1][j+1].rgbtRed) / 6;
                float avgGreen = (imagecopy[i][j].rgbtGreen + imagecopy[i-1][j].rgbtGreen + imagecopy[i-1][j-1].rgbtGreen + imagecopy[i][j+1].rgbtGreen + imagecopy[i][j-1].rgbtGreen + imagecopy[i-1][j+1].rgbtGreen) / 6;
                float avgBlue = (imagecopy[i][j].rgbtBlue + imagecopy[i-1][j].rgbtBlue + imagecopy[i-1][j-1].rgbtBlue + imagecopy[i][j+1].rgbtBlue + imagecopy[i][j-1].rgbtBlue + imagecopy[i-1][j+1].rgbtBlue) / 6;
                
                int averageRed = round(avgRed);  
                int averageGreen = round(avgGreen);  
                int averageBlue = round(avgBlue);  
                
                image[i][j].rgbtRed = averageRed;
                image[i][j].rgbtGreen = averageGreen;
                image[i][j].rgbtBlue = averageBlue;
            }
                // First column, middle rows
            else if ((i > 0 && i < height - 1) && j == 0)
            {
                float avgRed = (imagecopy[i][j].rgbtRed + imagecopy[i+1][j].rgbtRed + imagecopy[i-1][j].rgbtRed + imagecopy[i][j+1].rgbtRed + imagecopy[i-1][j+1].rgbtRed + imagecopy[i+1][j+1].rgbtRed) / 6;
                float avgGreen = (imagecopy[i][j].rgbtGreen + imagecopy[i+1][j].rgbtGreen + imagecopy[i-1][j].rgbtGreen + imagecopy[i][j+1].rgbtGreen + imagecopy[i-1][j+1].rgbtGreen + imagecopy[i+1][j+1].rgbtGreen) / 6;
                float avgBlue = (imagecopy[i][j].rgbtBlue + imagecopy[i+1][j].rgbtBlue + imagecopy[i-1][j].rgbtBlue + imagecopy[i][j+1].rgbtBlue + imagecopy[i-1][j+1].rgbtBlue + imagecopy[i+1][j+1].rgbtBlue) / 6;
                
                int averageRed = round(avgRed);  
                int averageGreen = round(avgGreen);  
                int averageBlue = round(avgBlue);  
                
                image[i][j].rgbtRed = averageRed;
                image[i][j].rgbtGreen = averageGreen;
                image[i][j].rgbtBlue = averageBlue;
                
            }
                // Last column, middle rows
            else if ((i > 0 && i < height - 1) && j == width - 1)
            {
                float avgRed = (imagecopy[i][j].rgbtRed + imagecopy[i+1][j].rgbtRed + imagecopy[i-1][j].rgbtRed + imagecopy[i-1][j-1].rgbtRed + imagecopy[i][j-1].rgbtRed + imagecopy[i+1][j-1].rgbtRed) / 6;
                float avgGreen = (imagecopy[i][j].rgbtGreen + imagecopy[i+1][j].rgbtGreen + imagecopy[i-1][j].rgbtGreen + imagecopy[i-1][j-1].rgbtGreen + imagecopy[i][j-1].rgbtGreen + imagecopy[i+1][j-1].rgbtGreen) / 6;
                float avgBlue = (imagecopy[i][j].rgbtBlue + imagecopy[i+1][j].rgbtBlue + imagecopy[i-1][j].rgbtBlue + imagecopy[i-1][j-1].rgbtBlue + imagecopy[i][j-1].rgbtBlue + imagecopy[i+1][j-1].rgbtBlue) / 6;
                
                int averageRed = round(avgRed);  
                int averageGreen = round(avgGreen);  
                int averageBlue = round(avgBlue);  
                
                image[i][j].rgbtRed = averageRed;
                image[i][j].rgbtGreen = averageGreen;
                image[i][j].rgbtBlue = averageBlue;
                
            }
                // Upper lefthand corner
            else if (i == 0 && j == 0)
            {
                float avgRed = (imagecopy[i][j].rgbtRed + imagecopy[i+1][j].rgbtRed + imagecopy[i][j+1].rgbtRed + imagecopy[i+1][j+1].rgbtRed) / 4;
                float avgGreen = (imagecopy[i][j].rgbtGreen + imagecopy[i+1][j].rgbtGreen + imagecopy[i][j+1].rgbtGreen + imagecopy[i+1][j+1].rgbtGreen) / 4;
                float avgBlue = (imagecopy[i][j].rgbtBlue + imagecopy[i+1][j].rgbtBlue + imagecopy[i][j+1].rgbtBlue + imagecopy[i+1][j+1].rgbtBlue) / 4;
                
                int averageRed = round(avgRed);  
                int averageGreen = round(avgGreen);  
                int averageBlue = round(avgBlue);  
                
                image[i][j].rgbtRed = averageRed;
                image[i][j].rgbtGreen = averageGreen;
                image[i][j].rgbtBlue = averageBlue;
                
            }
                // Upper righthand corner
            else if (i == 0 && j == width - 1)
            {
                float avgRed = (imagecopy[i][j].rgbtRed + imagecopy[i+1][j].rgbtRed + imagecopy[i][j-1].rgbtRed + imagecopy[i+1][j-1].rgbtRed) / 4;
                float avgGreen = (imagecopy[i][j].rgbtGreen + imagecopy[i+1][j].rgbtGreen + imagecopy[i][j-1].rgbtGreen + imagecopy[i+1][j-1].rgbtGreen) / 4;
                float avgBlue = (imagecopy[i][j].rgbtBlue + imagecopy[i+1][j].rgbtBlue + imagecopy[i][j-1].rgbtBlue + imagecopy[i+1][j-1].rgbtBlue) / 4;
                
                int averageRed = round(avgRed);  
                int averageGreen = round(avgGreen);  
                int averageBlue = round(avgBlue);  
                
                image[i][j].rgbtRed = averageRed;
                image[i][j].rgbtGreen = averageGreen;
                image[i][j].rgbtBlue = averageBlue;
                
            }
                // Lower lefthand corner
            else if (i == height - 1 && j == 0)
            {
                float avgRed = (imagecopy[i][j].rgbtRed + imagecopy[i-1][j].rgbtRed + imagecopy[i][j+1].rgbtRed + imagecopy[i-1][j+1].rgbtRed) / 4;
                float avgGreen = (imagecopy[i][j].rgbtGreen + imagecopy[i-1][j].rgbtGreen + imagecopy[i][j+1].rgbtGreen + imagecopy[i-1][j+1].rgbtGreen) / 4;
                float avgBlue = (imagecopy[i][j].rgbtBlue + imagecopy[i-1][j].rgbtBlue + imagecopy[i][j+1].rgbtBlue + imagecopy[i-1][j+1].rgbtBlue) / 4;
                 
                int averageRed = round(avgRed);  
                int averageGreen = round(avgGreen);  
                int averageBlue = round(avgBlue);  
                
                image[i][j].rgbtRed = averageRed;
                image[i][j].rgbtGreen = averageGreen;
                image[i][j].rgbtBlue = averageBlue;
                
            }
                // Lower righthand corner
            else if (i == height - 1 && j == width - 1)
            {
                float avgRed = (imagecopy[i][j].rgbtRed + imagecopy[i-1][j].rgbtRed + imagecopy[i-1][j-1].rgbtRed + imagecopy[i][j-1].rgbtRed) / 4;
                float avgGreen = (imagecopy[i][j].rgbtGreen + imagecopy[i-1][j].rgbtGreen + imagecopy[i-1][j-1].rgbtGreen + imagecopy[i][j-1].rgbtGreen) / 4;
                float avgBlue = (imagecopy[i][j].rgbtBlue + imagecopy[i-1][j].rgbtBlue + imagecopy[i-1][j-1].rgbtBlue + imagecopy[i][j-1].rgbtBlue) / 4;
                
                int averageRed = round(avgRed);  
                int averageGreen = round(avgGreen);  
                int averageBlue = round(avgBlue);  
                
                image[i][j].rgbtRed = averageRed;
                image[i][j].rgbtGreen = averageGreen;
                image[i][j].rgbtBlue = averageBlue;
                
            }
            else //((i > 0 && i < (height - 1)) && (j > 0 && j < width - 1))
                // Middle cells
            {
                float avgRed = (imagecopy[i][j].rgbtRed + imagecopy[i+1][j].rgbtRed + imagecopy[i-1][j].rgbtRed + imagecopy[i-1][j-1].rgbtRed + 
                    imagecopy[i][j+1].rgbtRed + imagecopy[i][j-1].rgbtRed + imagecopy[i-1][j+1].rgbtRed + imagecopy[i+1][j-1].rgbtRed + imagecopy[i+1][j+1].rgbtRed) / 9;
                float avgGreen = (imagecopy[i][j].rgbtGreen + imagecopy[i+1][j].rgbtGreen + imagecopy[i-1][j].rgbtGreen + imagecopy[i-1][j-1].rgbtGreen + 
                    imagecopy[i][j+1].rgbtGreen + imagecopy[i][j-1].rgbtGreen + imagecopy[i-1][j+1].rgbtGreen + imagecopy[i+1][j-1].rgbtGreen + imagecopy[i+1][j+1].rgbtGreen) / 9;
                float avgBlue = (imagecopy[i][j].rgbtBlue + imagecopy[i+1][j].rgbtBlue + imagecopy[i-1][j].rgbtBlue + imagecopy[i-1][j-1].rgbtBlue + 
                    imagecopy[i][j+1].rgbtBlue + imagecopy[i][j-1].rgbtBlue + imagecopy[i-1][j+1].rgbtBlue + imagecopy[i+1][j-1].rgbtBlue + imagecopy[i+1][j+1].rgbtBlue) / 9;
                    
                int averageRed = round(avgRed);  
                int averageGreen = round(avgGreen);  
                int averageBlue = round(avgBlue);  
                
                image[i][j].rgbtRed = averageRed;
                image[i][j].rgbtGreen = averageGreen;
                image[i][j].rgbtBlue = averageBlue;
                
            }
        }
    }    
    return;
}
