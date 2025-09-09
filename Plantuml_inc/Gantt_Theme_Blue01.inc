' https://www.audi.com/ci/en/intro/basics/colours.html
!define Task_Color  #a1b9d8ff
'!define Task_Font Hack Nerd Font Mono
!define Task_Font Lucida Sans

<style>
ganttDiagram {
    TimeLine {
        FontName Task_Font
        FontSize 14
        BackGroundColor #d9d9d9
    }
    task {
        FontName Task_Font
        FontColor black
        FontSize 12
        //FontStyle bold
        BackGroundColor Task_Color
        LineColor black
    }
    milestone {
        FontName Task_Font
        FontColor black
        FontSize 12
        //FontStyle bold
        BackGroundColor yellow
        LineColor red
    }
    separator {
        FontName Task_Font
		LineColor Gray
		//BackGroundColor green
		FontSize 14
		//FontStyle bold
		FontColor Gray
	}
    arrow {
		FontName Task_Font
		FontColor red
		FontSize 18
		FontStyle bold
		LineColor black
	}
    title {
        //HorizontalAlignment right
        FontSize 18
        FontColor blue
    }
}
</style>

skinparam title {
  FontName Task_Font
  FontSize 20
  BorderRoundCorner 0
  BorderThickness 0
}
skinparam backgroundColor #f2f2f2