
msbuild -restore -t:Rebuild     ^
    -p:Configuration="Release"  -p:Platform=x64         ^
    BowlingScoreView.sln

msbuild -restore -t:Rebuild     ^
    -p:Configuration="Debug"    -p:Platform=x64         ^
    BowlingScoreView.sln

msbuild -restore -t:Rebuild     ^
    -p:Configuration="Release"  -p:Platform=x86         ^
    BowlingScoreView.sln

msbuild -restore -t:Rebuild     ^
    -p:Configuration="Debug"    -p:Platform=x86         ^
    BowlingScoreView.sln

msbuild -restore -t:Rebuild     ^
    -p:Configuration="Release"  -p:Platform="Any CPU"   ^
    BowlingScoreView.sln

msbuild -restore -t:Rebuild     ^
    -p:Configuration="Debug"    -p:Platform="Any CPU"   ^
    BowlingScoreView.sln


msbuild -restore -t:Rebuild     ^
    -p:Configuration="Release"  -p:Platform=x64         ^
    BowlingScoreView.NetOld.sln

msbuild -restore -t:Rebuild     ^
    -p:Configuration="Debug"    -p:Platform=x64         ^
    BowlingScoreView.NetOld.sln

msbuild -restore -t:Rebuild     ^
    -p:Configuration="Release"  -p:Platform=x86         ^
    BowlingScoreView.NetOld.sln

msbuild -restore -t:Rebuild     ^
    -p:Configuration="Debug"    -p:Platform=x86         ^
    BowlingScoreView.NetOld.sln

msbuild -restore -t:Rebuild     ^
    -p:Configuration="Release"  -p:Platform="Any CPU"   ^
    BowlingScoreView.NetOld.sln

msbuild -restore -t:Rebuild     ^
    -p:Configuration="Debug"    -p:Platform="Any CPU"   ^
    BowlingScoreView.NetOld.sln
