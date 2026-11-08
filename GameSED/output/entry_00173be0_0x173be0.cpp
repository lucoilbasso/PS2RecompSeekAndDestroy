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

// Function: entry_00173be0
// Address: 0x173be0 - 0x173bf0
void entry_00173be0_0x173be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173be0_0x173be0");
#endif

    ctx->pc = 0x173be0u;

    // 0x173be0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x173be0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x173be4: 0x0  nop
    ctx->pc = 0x173be4u;
    // NOP
    // 0x173be8: 0x0  nop
    ctx->pc = 0x173be8u;
    // NOP
    // 0x173bec: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x173becu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    ctx->pc = 0x173bf0u;
}
