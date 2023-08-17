import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.15
import QtQuick.Shapes 1.15

Window {

    width: 1280
    height: 400
    visible: true
    title: qsTr("PiRacer_DashBoard")



    Rectangle {
        id: rectangle
        x: 0
        y: 0
        width: parent.width
        height: parent.height
        color: "black"
        opacity: 1
        visible: true

        //Gear Gauge Section

        Image{
            id: gearGauge
            x: 32
            y: 207
            width: 300
            height: 400
            source: "DashBoardImg/gauge-gauge-frame.png"
            rotation: 91.599


            Text {
                id: pGear
                x: 44
                y: 150
                text: "P"
                color: canReceiver.gear === "P" ? "blue" : "white"
                font.pixelSize: 14
                rotation: -91.183
            }

            Text {
                id: rGear
                x: 57
                y: 108
                text: "R"
                color: canReceiver.gear === "R" ? "blue" : "white"
                font.pixelSize: 14
                rotation: -92.41
            }

            Text {
                id: nGear
                x: 77
                y: 67
                text: "N"
                color: canReceiver.gear === "N" ? "blue" : "white"
                font.pixelSize: 14
                rotation: -91.43
            }

            Text {
                id: dGear
                x: 108
                y: 33
                text: "D"
                color: canReceiver.gear === "D" ? "blue" : "white"
                font.pixelSize: 14
                rotation: -90.857
            }

            Text {
                id: mainGear
                x: 87
                y: 115
                text : canReceiver.gear
                font.pixelSize: 25
                rotation: 268.792
                color: "white"
            }

        }

        Image {
            id: mainCarImg
            source: "DashBoardImg/bg-mask.png"
            anchors.verticalCenterOffset: 100
            anchors.horizontalCenterOffset: -555
            anchors.centerIn: parent
            width: 300
            height: 200

            Image {
                id: mainCarHighlights
                x: -42
                y: -18
                width: 383
                height: 226
                source: "DashBoardImg/car-highlights.png"
            }

            Image {
                id: centerGauge
                x: 22
                y: 54
                width: 260
                height: 260
                source: "DashBoardImg/gauge-gauge-frame-sport-center.png"
                rotation: 48.159
            }

            Image {
                id: mainCarHighlightsSurrond
                source: "DashBoardImg/car-highlights.png"
                x: -255
                y: -218
                width: 809
                height: 538
            }

        }


        Image {
            id: speedGauge
            x: -48
            y: -60
            width: 380
            height: 340
            horizontalAlignment: Image.AlignHCenter
            verticalAlignment: Image.AlignTop
            source: "DashBoardImg/gauge-gauge-frame-sport-side.png"
            rotation: 232.856


            Text{
                id: zero
                x: 182
                y: 14
                text: "0"
                color: "white"
                font.pixelSize: 14
                rotation: -52.905
            }
            Text{
                id: twenty
                x: 116
                y: 28
                text: "20"
                color: "white"
                font.pixelSize: 14
                rotation: 127.873
            }
            Text{
                id: fourty
                x: 68
                y: 69
                text: "40"
                color: "white"
                font.pixelSize: 14
                rotation: -233.911
            }
            Text{
                id: sixty
                x: 48
                y: 127
                text: "60"
                color: "white"
                font.pixelSize: 14
                rotation: -232.602
            }
            Text{
                id: eighty
                x: 48
                y: 186
                text: "80"
                color: "white"
                font.pixelSize: 14
                rotation: -232.508
            }
            Text{
                id:hundred
                x: 62
                y: 241
                text: "100"
                color: "white"
                font.pixelSize: 14
                rotation: 127.072
            }
            Text{
                id: onetwenty
                x: 110
                y: 283
                text: "120"
                color: "white"
                font.pixelSize: 14
                rotation: 125.805
            }
            Text{
                id: onefourty
                x: 169
                y: 304
                text: "140"
                color: "white"
                font.pixelSize: 14
                rotation: -233
            }

            Text{
                id: currentSpeed
                x: 182
                y: 111
                text: canReceiver.speed
                color: "white"
                font.pixelSize: 20
                anchors.horizontalCenterOffset: 56
                rotation: 127.869
                anchors.horizontalCenter: parent.horizontalCenter
            }

            function mapSpeedToAngle(speed) {
                var angle = (speed / 140) * -180
                return angle;
            }

            Image{
                id: speedGaugeNeedle
                x: 157
                y: -1
                width: 57
                height: 214
                source: "DashBoardImg/needle-standard-sport.png"
                transform: Rotation{
                    origin.x: 160.5
                    origin.y: speedGaugeNeedle.height

                    //angle: mapSpeedToAngle(canReceiver.speed)
                }
            }
        }
    }
}



/*##^##
Designer {
    D{i:0;formeditorZoom:1.33}
}
##^##*/
