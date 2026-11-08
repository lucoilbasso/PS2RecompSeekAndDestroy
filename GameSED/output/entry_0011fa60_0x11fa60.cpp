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

// Function: entry_0011fa60
// Address: 0x11fa60 - 0x11fa68
void entry_0011fa60_0x11fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fa60_0x11fa60");
#endif

    ctx->pc = 0x11fa60u;

    // 0x11fa60: 0xc7808090  lwc1        $f0, -0x7F70($gp)
    ctx->pc = 0x11fa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fa64: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x11fa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->pc = 0x11fa68u;
}
