SELECT S.PRODUCT_NAME,P.YEAR,P.PRICE
FROM SALES P
LEFT JOIN PRODUCT S
ON P.PRODUCT_ID=S.PRODUCT_ID;
