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

// Function: entry_00159f6c
// Address: 0x159f6c - 0x159f78
void entry_00159f6c_0x159f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159f6c_0x159f6c");
#endif

    ctx->pc = 0x159f6cu;

    // 0x159f6c: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x159f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x159f70: 0xc44003b4  lwc1        $f0, 0x3B4($v0)
    ctx->pc = 0x159f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159f74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x159f74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x159f78u;
}
