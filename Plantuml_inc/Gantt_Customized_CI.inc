'!define stg_task_color #f50537
!define stg_task_color #3187a1
!define stg_font Consolas

<style>
  ganttDiagram {
      TimeLine {
          FontName stg_font
          FontColor white
          FontSize 22
          BackGroundColor #10504dff
      }
      closed {
        FontColor lightGray
        BackGroundColor #c9c9c9ff
      }
      task {
          FontName stg_font
          FontColor black
          FontSize 20
          FontStyle bold
          BackGroundColor stg_task_color
          LineColor black
      }
      milestone {
          FontName stg_font
          FontColor black
          FontSize 18
          FontStyle bold
          BackGroundColor yellow
          LineColor red
      }
      separator {
        FontName stg_font
  		LineColor black
  		//BackGroundColor green
  		FontSize 16
  		FontStyle bold
  		FontColor black
  	}
      arrow {
  		FontName stg_font
  		FontColor red
  		FontSize 18
  		FontStyle bold
  		LineColor black
  	}
      title {
          //HorizontalAlignment right
          FontSize 30
          FontColor blue
      }
  }
</style>

skinparam title {
    FontName stg_font
    FontSize 29
    BorderRoundCorner 0
    BorderThickness 0
}
skinparam backgroundColor #f2f2f2
