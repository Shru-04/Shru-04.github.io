FROM php:8-apache

COPY index.php /var/www/html/
RUN echo "ccctf{06b744d20f4b@1nc1ud3_/etc/passwd_yyds!}" > /flag.txt
CMD ["apache2-foreground"]
