document.addEventListener('DOMContentLoaded', () => {
    const options = {
        
        title: {
            text:'Total Renewable Energy Capacity in India',
            style: {
                color: '#ffffff'
            }
        },
        subtitle: {
            text: 'Status of Renewable Energy in India',
            style: {
                color: '#ffffff'
            }
        },
        chart: {
            type: 'column',
            backgroundColor: '#2d2d2d',
            width: 600,
            spacingLeft: 10,
            height: 330,
            


        },
        colors: ["#fd3a69", "#cad315", "#ebebeb", "#c70039"],
        tooltip: {
            backgroundColor: '#333333',
            style: {
                color: '#faa41a'
            },
            borderColor: '#faa41a', 
            borderRadius: 20,

        },
        credits:{
            enabled:false
        },
        legend: {
            color: "ffffff",
            itemHoverStyle: {
                color: "darkgray"
            },
            itemStyle: {
                color: "white"
            }
        },
        
        yAxis: {
            title: {
                text: 'Power (GW)',
                style: {
                    color: '#ffffff'
                }
            },
            labels: {
                style: {
                    color: '#ffffff'
                }
            }
           
        },
        xAxis: {
            labels: {
                style: {
                    color: '#ffffff'
                }
            }
        }
    };
     $.get('dataSS.csv', csv => {
         options.data = {
             csv
         };
         Highcharts.chart('chart-container', options);
     });
    //Highcharts.chart('chart-container', options);
});