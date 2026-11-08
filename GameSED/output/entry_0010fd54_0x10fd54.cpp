#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0010fd54
// Address: 0x10fd54 - 0x10fd64
void entry_0010fd54_0x10fd54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fd54_0x10fd54");
#endif

    ctx->pc = 0x10fd54u;

    // 0x10fd54: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x10fd54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10fd58: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x10fd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10fd5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10fd5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10fd60: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x10fd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->pc = 0x10fd64u;
}
