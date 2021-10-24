void rlMatrixMode(int mode)
void rlPushMatrix(void)
void rlPopMatrix(void)
void rlLoadIdentity(void)
void rlTranslatef(float x, float y, float z)
void rlRotatef(float angle, float x, float y, float z)
void rlScalef(float x, float y, float z)
void rlMultMatrixf(float *matf)
void rlFrustum(double left, double right, double bottom, double top, double znear, double zfar)
void rlOrtho(double left, double right, double bottom, double top, double znear, double zfar)
void rlViewport(int x, int y, int width, int height)
void rlBegin(int mode)
void rlEnd(void)
void rlVertex2i(int x, int y)
void rlVertex2f(float x, float y)
void rlVertex3f(float x, float y, float z)
void rlTexCoord2f(float x, float y)
void rlNormal3f(float x, float y, float z)
void rlColor4ub(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
void rlColor3f(float x, float y, float z)
void rlColor4f(float x, float y, float z, float w)
bool rlEnableVertexArray(unsigned int vaoId)
void rlDisableVertexArray(void)
void rlEnableVertexBuffer(unsigned int id)
void rlDisableVertexBuffer(void)
void rlEnableVertexBufferElement(unsigned int id)
void rlDisableVertexBufferElement(void)
void rlEnableVertexAttribute(unsigned int index)
void rlDisableVertexAttribute(unsigned int index)
#if defined(GRAPHICS_API_OPENGL_11)
void rlEnableStatePointer(int vertexAttribType, void *buffer)
void rlDisableStatePointer(int vertexAttribType)
#endif
void rlActiveTextureSlot(int slot)
void rlEnableTexture(unsigned int id)
void rlDisableTexture(void)
void rlEnableTextureCubemap(unsigned int id)
void rlDisableTextureCubemap(void)
void rlTextureParameters(unsigned int id, int param, int value)
void rlEnableShader(unsigned int id)
void rlDisableShader(void)
void rlEnableFramebuffer(unsigned int id)
void rlDisableFramebuffer(void)
void rlActiveDrawBuffers(int count)
void rlEnableColorBlend(void)
void rlDisableColorBlend(void)
void rlEnableDepthTest(void)
void rlDisableDepthTest(void)
void rlEnableDepthMask(void)
void rlDisableDepthMask(void)
void rlEnableBackfaceCulling(void)
void rlDisableBackfaceCulling(void)
void rlEnableScissorTest(void)
void rlDisableScissorTest(void)
void rlScissor(int x, int y, int width, int height)
void rlEnableWireMode(void)
void rlDisableWireMode(void)
void rlSetLineWidth(float width)
float rlGetLineWidth(void)
void rlEnableSmoothLines(void)
void rlDisableSmoothLines(void)
void rlEnableStereoRender(void)
void rlDisableStereoRender(void)
bool rlIsStereoRenderEnabled(void)
void rlClearColor(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
void rlClearScreenBuffers(void)
void rlCheckErrors(void)
void rlSetBlendMode(int mode)
void rlSetBlendFactors(int glSrcFactor, int glDstFactor, int glEquation)
void rlglInit(int width, int height)
void rlglClose(void)
void rlLoadExtensions(void *loader)
int rlGetVersion(void)
int rlGetFramebufferWidth(void)
int rlGetFramebufferHeight(void)
unsigned int rlGetTextureIdDefault(void)
unsigned int rlGetShaderIdDefault(void)
int *rlGetShaderLocsDefault(void)
rlRenderBatch rlLoadRenderBatch(int numBuffers, int bufferElements)
void rlUnloadRenderBatch(rlRenderBatch batch)
void rlDrawRenderBatch(rlRenderBatch *batch)
void rlSetRenderBatchActive(rlRenderBatch *batch)
void rlDrawRenderBatchActive(void)
bool rlCheckRenderBatchLimit(int vCount)
void rlSetTexture(unsigned int id)
unsigned int rlLoadVertexArray(void)
unsigned int rlLoadVertexBuffer(void *buffer, int size, bool dynamic)
unsigned int rlLoadVertexBufferElement(void *buffer, int size, bool dynamic)
void rlUpdateVertexBuffer(unsigned int bufferId, void *data, int dataSize, int offset)
void rlUnloadVertexArray(unsigned int vaoId)
void rlUnloadVertexBuffer(unsigned int vboId)
void rlSetVertexAttribute(unsigned int index, int compSize, int type, bool normalized, int stride, void *pointer)
void rlSetVertexAttributeDivisor(unsigned int index, int divisor)
void rlSetVertexAttributeDefault(int locIndex, const void *value, int attribType, int count)
void rlDrawVertexArray(int offset, int count)
void rlDrawVertexArrayElements(int offset, int count, void *buffer)
void rlDrawVertexArrayInstanced(int offset, int count, int instances)
void rlDrawVertexArrayElementsInstanced(int offset, int count, void *buffer, int instances)
unsigned int rlLoadTexture(void *data, int width, int height, int format, int mipmapCount)
unsigned int rlLoadTextureDepth(int width, int height, bool useRenderBuffer)
unsigned int rlLoadTextureCubemap(void *data, int size, int format)
void rlUpdateTexture(unsigned int id, int offsetX, int offsetY, int width, int height, int format, const void *data)
void rlGetGlTextureFormats(int format, int *glInternalFormat, int *glFormat, int *glType)
const char *rlGetPixelFormatName(unsigned int format)
void rlUnloadTexture(unsigned int id)
void rlGenTextureMipmaps(unsigned int id, int width, int height, int format, int *mipmaps)
void *rlReadTexturePixels(unsigned int id, int width, int height, int format)
unsigned char *rlReadScreenPixels(int width, int height)
unsigned int rlLoadFramebuffer(int width, int height)
void rlFramebufferAttach(unsigned int fboId, unsigned int texId, int attachType, int texType, int mipLevel)
bool rlFramebufferComplete(unsigned int id)
void rlUnloadFramebuffer(unsigned int id)
unsigned int rlLoadShaderCode(const char *vsCode, const char *fsCode)
unsigned int rlCompileShader(const char *shaderCode, int type)
unsigned int rlLoadShaderProgram(unsigned int vShaderId, unsigned int fShaderId)
void rlUnloadShaderProgram(unsigned int id)
int rlGetLocationUniform(unsigned int shaderId, const char *uniformName)
int rlGetLocationAttrib(unsigned int shaderId, const char *attribName)
void rlSetUniform(int locIndex, const void *value, int uniformType, int count)
void rlSetUniformMatrix(int locIndex, Matrix mat)
void rlSetUniformSampler(int locIndex, unsigned int textureId)
void rlSetShader(unsigned int id, int *locs)
#if defined(GRAPHICS_API_OPENGL_43)
unsigned int rlLoadComputeShaderProgram(int shaderId)
void rlComputeShaderDispatch(unsigned int groupX, unsigned int groupY, unsigned int groupZ)
unsigned int rlLoadShaderBuffer(unsigned long long size, const void *data, int usageHint)
void rlUnloadShaderBuffer(unsigned int ssboId)
void rlUpdateShaderBufferElements(unsigned int id, const void *data, unsigned long long dataSize, unsigned long long offset)
unsigned long long rlGetShaderBufferSize(unsigned int id)
void rlReadShaderBufferElements(unsigned int id, void *dest, unsigned long long count, unsigned long long offset)
void rlBindShaderBuffer(unsigned int id, unsigned int index)
void rlCopyBuffersElements(unsigned int destId, unsigned int srcId, unsigned long long destOffset, unsigned long long srcOffset, unsigned long long count)
void rlBindImageTexture(unsigned int id, unsigned int index, unsigned int format, int readonly)
#endif
Matrix rlGetMatrixModelview(void)
Matrix rlGetMatrixProjection(void)
Matrix rlGetMatrixTransform(void)
Matrix rlGetMatrixProjectionStereo(int eye)
Matrix rlGetMatrixViewOffsetStereo(int eye)
void rlSetMatrixProjection(Matrix proj)
void rlSetMatrixModelview(Matrix view)
void rlSetMatrixProjectionStereo(Matrix right, Matrix left)
void rlSetMatrixViewOffsetStereo(Matrix right, Matrix left)
void rlLoadDrawCube(void)
void rlLoadDrawQuad(void)