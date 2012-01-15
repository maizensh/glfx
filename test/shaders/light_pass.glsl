struct VSInput
{
    vec3 Position;
    vec2 TexCoord;
};

					
shader VSmain(in VSInput VSin, out vec2 TexCoord)
{          
    gl_Position = vec4(VSin.Position, 1.0);
	TexCoord = VSin.TexCoord;
}

uniform sampler2D gColorMap;

shader FSmain(in vec2 TexCoord, out vec4 FragColor)	
{
	FragColor = texture(gColorMap, TexCoord);
}


program LightPass
{
    vs(410)=VSmain();
    fs(410)=FSmain();
};
