#include <stdio.h>
int main()
{
    int choice=0;
    printf("CONVERSION TABLE:\n1.WEIGHT CONVERSION\n2.LENGTH CONVERSION\n3.TEMPERATURE CONVERSION\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("INPUT WEIGHT UNIT:\n1.KILOGRAM\n2.GRAM\n3.POUND\n4.OUNCE\n");
        int in_weight_unit,out_weight_unit;
        float weight_value;
        scanf("%d",&in_weight_unit);
        printf("ENTER OUTPUT WEIGHT UNIT:\n1.KILOGRAM\n2.GRAM\n3.POUND\n4.OUNCE\n");
        scanf("%d",&out_weight_unit);
        printf("ENTER WEIGHT VALUE:\n");
        scanf("%f",&weight_value);
        switch(in_weight_unit)
        {
            case 1: //KILOGRAM
            switch(out_weight_unit)
            {
                case 1: //KILOGRAM
                printf("%f KILOGRAM",weight_value);
                break;
                case 2: //GRAM
                printf("%f GRAM",weight_value*1000);
                break;
                case 3: //POUND
                printf("%f POUND",weight_value*2.20462);
                break;
                case 4: //OUNCE
                printf("%f OUNCE",weight_value*35.274);
                break;
                default:
                printf("INVALID OUTPUT UNIT");
                break;
            }
            break;
            case 2: //GRAM
            switch(out_weight_unit)
            {
                case 1: //KILOGRAM
                printf("%f KILOGRAM",weight_value/1000);
                break;
                case 2: //GRAM
                printf("%f GRAM",weight_value);
                break;
                case 3: //POUND
                printf("%f POUND",weight_value*0.00220462);
                break;
                case 4: //OUNCE
                printf("%f OUNCE",weight_value*0.035274);
                break;
                default:
                printf("INVALID OUTPUT UNIT");
                break;
            }
            break;
            case 3: //POUND
            switch(out_weight_unit)
            {
                case 1: //KILOGRAM
                printf("%f KILOGRAM",weight_value*0.453592);
                break;
                case 2: //GRAM
                printf("%f GRAM",weight_value*453.592);
                break;
                case 3: //POUND
                printf("%f POUND",weight_value);
                break;
                case 4: //OUNCE
                printf("%f OUNCE",weight_value*16);
                break;
                default:
                printf("INVALID OUTPUT UNIT");
                break;
            }
            break;
            case 4: //OUNCE
            switch(out_weight_unit)
            {
                case 1: //KILOGRAM
                printf("%f KILOGRAM",weight_value*0.0283495);
                break;
                case 2: //GRAM
                printf("%f GRAM",weight_value*28.3495);
                break;
                case 3: //POUND
                printf("%f POUND",weight_value*0.0625);
                break;
                case 4: //OUNCE
                printf("%f OUNCE",weight_value);
                break;
                default:
                printf("INVALID OUTPUT UNIT");
                break;
            }
            default:
            printf("INVALID INPUT UNIT");
            break;
        }
        break;
        case 2:
        printf("INPUT LENGTH UNIT:\n1.METER\n2.CENTIMETER\n3.KILOMETER\n4.INCH\n5.FOOT\n6.MILE\n");
        int in_length_unit,out_length_unit;
        float length_value;
        scanf("%d",&in_length_unit);
        printf("ENTER OUTPUT LENGTH UNIT:\n1.METER\n2.CENTIMETER\n3.KILOMETER\n4.INCH\n5.FOOT\n6.MILE\n");
        scanf("%d",&out_length_unit);
        printf("ENTER LENGTH VALUE:\n");
        scanf("%f",&length_value);
        switch(in_length_unit)
        {
            case 1: //METER
            switch(out_length_unit)
            {
                case 1: //METER
                printf("%f METER",length_value);
                break;
                case 2: //CENTIMETER
                printf("%f CENTIMETER",length_value*100);
                break;
                case 3: //KILOMETER
                printf("%f KILOMETER",length_value/1000);
                break;
                case 4: //INCH
                printf("%f INCH",length_value*39.3701);
                break;
                case 5: //FOOT
                printf("%f FOOT",length_value*3.28084);
                break;
                case 6: //MILE
                printf("%f MILE",length_value*0.000621371);
                break;
                default:
                printf("INVALID OUTPUT UNIT");
                break;
            }
            break;
            case 2: //CENTIMETER
            switch(out_length_unit)
            {
                case 1: //METER
                printf("%f METER",length_value/100);
                break;
                case 2: //CENTIMETER
                printf("%f CENTIMETER",length_value);
                break;
                case 3: //KILOMETER
                printf("%f KILOMETER",length_value/100000);
                break;
                case 4: //INCH
                printf("%f INCH",length_value*0.393701);
                break;
                case 5: //FOOT
                printf("%f FOOT",length_value*0.0328084);
                break;
                case 6: //MILE
                printf("%f MILE",length_value*0.0000062137);
                break;
                default:
                printf("INVALID OUTPUT UNIT");
                break;
            }
            break;
            case 3: //KILOMETER
            switch(out_length_unit)
            {
                case 1: //METER
                printf("%f METER",length_value*1000);
                break;
                case 2: //CENTIMETER
                printf("%f CENTIMETER",length_value*100000);
                break;
                case 3: //KILOMETER
                printf("%f KILOMETER",length_value);
                break;
                case 4: //INCH
                printf("%f INCH",length_value*39370.1);
                break;
                case 5: //FOOT
                printf("%f FOOT",length_value*3280.84);
                break;
                case 6: //MILE
                printf("%f MILE",length_value*0.621371);
                break;
                default:
                printf("INVALID OUTPUT UNIT");
                break;
            }
            break;
            case 4: //INCH
            switch(out_length_unit)
            {
                case 1: //METER
                printf("%f METER",length_value*0.0254);
                break;
                case 2: //CENTIMETER
                printf("%f CENTIMETER",length_value*2.54);
                break;
                case 3: //KILOMETER
                printf("%f KILOMETER",length_value*0.0000254);
                break;
                case 4: //INCH
                printf("%f INCH",length_value);
                break;
                case 5: //FOOT
                printf("%f FOOT",length_value*0.0833333);
                break;
                case 6: //MILE
                printf("%f MILE",length_value*0.0000157828);
                break;
                default:
                printf("INVALID OUTPUT UNIT");
                break;
            }
            break;
            case 5: //FOOT
            switch(out_length_unit)
            {
                case 1: //METER
                printf("%f METER",length_value*0.3048);
                break;
                case 2: //CENTIMETER
                printf("%f CENTIMETER",length_value*30.48);
                break;
                case 3: //KILOMETER
                printf("%f KILOMETER",length_value*0.0003048);
                break;
                case 4: //INCH
                printf("%f INCH",length_value*12);
                break;
                case 5: //FOOT
                printf("%f FOOT",length_value);
                break;
                case 6: //MILE
                printf("%f MILE",length_value*0.000189394);
                break;
                default:
                printf("INVALID OUTPUT UNIT");
                break;
            }
            break;
            case 6: //MILE
            switch(out_length_unit)
            {
                case 1: //METER
                printf("%f METER",length_value*1609.34);
                break;
                case 2: //CENTIMETER
                printf("%f CENTIMETER",length_value*160934);
                break;
                case 3: //KILOMETER
                printf("%f KILOMETER",length_value*1.60934);
                break;
                case 4: //INCH
                printf("%f INCH",length_value*63360);
                break;
                case 5: //FOOT
                printf("%f FOOT",length_value*5280);
                break;
                case 6: //MILE
                printf("%f MILE",length_value);
                break;
                default:
                printf("INVALID OUTPUT UNIT");
                break;
            }
            default:
            printf("INVALID INPUT UNIT");
            break;
        }
        break;
        case 3:
        printf("INPUT TEMPERATURE UNIT:\n1.CELSIUS\n2.FAHRENHEIT\n3.KELVIN\n");
        int in_temp_unit,out_temp_unit;
        float temp_value;
        scanf("%d",&in_temp_unit);
        printf("ENTER OUTPUT TEMPERATURE UNIT:\n1.CELSIUS\n2.FAHRENHEIT\n3.KELVIN\n");
        scanf("%d",&out_temp_unit);
        printf("ENTER TEMPERATURE VALUE:\n");
        scanf("%f",&temp_value);
        switch(in_temp_unit)
        {
            case 1: //CELSIUS
            switch(out_temp_unit)
            {
                case 1: //CELSIUS
                printf("%f CELSIUS",temp_value);
                break;
                case 2: //FAHRENHEIT
                printf("%f FAHRENHEIT",(temp_value*9/5)+32);
                break;
                case 3: //KELVIN
                printf("%f KELVIN",temp_value+273.15);
                break;
                default:
                printf("INVALID OUTPUT UNIT");
                break;
            }
            break;
            case 2: //FAHRENHEIT
            switch(out_temp_unit)
            {
                case 1: //CELSIUS
                printf("%f CELSIUS",(temp_value-32)*5/9);
                break;
                case 2: //FAHRENHEIT
                printf("%f FAHRENHEIT",temp_value);
                break;
                case 3: //KELVIN
                printf("%f KELVIN",((temp_value-32)*5/9)+273.15);
                break;
                default:
                printf("INVALID OUTPUT UNIT");
                break;
            }
            break;
            case 3: //KELVIN
            switch(out_temp_unit)
            {
                case 1: //CELSIUS
                printf("%f CELSIUS",temp_value-273.15);
                break;
                case 2: //FAHRENHEIT
                printf("%f FAHRENHEIT",((temp_value-273.15)*9/5)+32);
                break;
                case 3: //KELVIN
                printf("%f KELVIN",temp_value);
                break;
                default:
                printf("INVALID OUTPUT UNIT");
                break;
            }
            default:
            printf("INVALID INPUT UNIT");
            break;
        }
        default:
        printf("INVALID CHOICE");
        break;
    }
    return 0;
}



