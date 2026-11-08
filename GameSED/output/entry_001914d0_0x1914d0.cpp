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

// Function: entry_001914d0
// Address: 0x1914d0 - 0x1914dc
void entry_001914d0_0x1914d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001914d0_0x1914d0");
#endif

    ctx->pc = 0x1914d0u;

    // 0x1914d0: 0x0  nop
    ctx->pc = 0x1914d0u;
    // NOP
    // 0x1914d4: 0x0  nop
    ctx->pc = 0x1914d4u;
    // NOP
    // 0x1914d8: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x1914d8u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[5]); }
    ctx->pc = 0x1914dcu;
}
