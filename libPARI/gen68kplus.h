#define signe(x)          (((long)((GEN)(x))[1])>>SIGNSHIFT)
#define setsigne(x,s)     (((GEN)(x))[1]=(((GEN)(x))[1]&(~SIGNBITS))+(((long)(s))<<SIGNSHIFT))
#define typ(x)            (((uLong)((GEN)(x))[0])>>TYPSHIFT)
#define settyp(x,s)       (((GEN)(x))[0]=(((GEN)(x))[0]&(~TYPBITS))+(((uLong)(s))<<TYPSHIFT))
#define pere(x)           ((uLong)(((GEN)(x))[0]&PEREBITS)>>PERESHIFT)
#define setpere(x,s)      (((GEN)(x))[0]=(((GEN)(x))[0]&(~PEREBITS))+(((uLong)(s))<<PERESHIFT))
#define lg(x)             (((GEN)(x))[0]&LGBITS)
#define setlg(x,s)        (((GEN)(x))[0]=(((GEN)(x))[0]&(~LGBITS))+(s))
#define lgef(x)           (((GEN)(x))[1]&LGEFBITS)
#define setlgef(x,s)      (((GEN)(x))[1]=(((GEN)(x))[1]&(~LGEFBITS))+(s))
#define expo(x)           ((((GEN)(x))[1]&EXPOBITS)-HIGHEXPOBIT)
#define setexpo(x,s)      (((GEN)(x))[1]=(((GEN)(x))[1]&(~EXPOBITS))+(HIGHEXPOBIT+(s)))
#define valp(x)           ((((GEN)(x))[1]&VALPBITS)-HIGHVALPBIT)
#define setvalp(x,s)      (((GEN)(x))[1]=(((GEN)(x))[1]&(~VALPBITS))+(HIGHVALPBIT+(s)))
#define precp(x)          (((uLong)((GEN)(x))[1])>>PRECPSHIFT)
#define setprecp(x,s)     (((GEN)(x))[1]=(((GEN)(x))[1]&(~PRECPBITS))+(((long)(s))<<PRECPSHIFT))
#define varn(x)           ((((GEN)(x))[1]&VARNBITS)>>VARNSHIFT)
#define setvarn(x,s)      (((GEN)(x))[1]=(((GEN)(x))[1]&(~VARNBITS))+(((uLong)(s))<<VARNSHIFT))
#define mant(x,i)         ((((GEN)(x))[1]&SIGNBITS)?((GEN)(x))[i+1]:0)
#define setmant(x,i,s)    (((GEN)(x))[i+1]=s)
