struct VSinput
{
    vec3 Position;
    vec2 TexCoord;
};


uniform mat4 gWVP;


shader VSmain(in VSinput VSin, out vec2 TexCoord)
{
    gl_Position = gWVP * vec4(VSin.Position, 1.0);
    TexCoord = VSin.TexCoord;
}


uniform sampler2D gColorMap;


shader FSmain(in vec2 TexCoord, out vec4 FragColor)
{
     FragColor = texture(gColorMap, TexCoord);
}


program SimpleTechnique
{
    vs(410) = VSmain();
    fs(410) = FSmain();
};