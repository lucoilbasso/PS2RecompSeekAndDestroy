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

// Function: entry_001aa000
// Address: 0x1aa000 - 0x1aa00c
void entry_001aa000_0x1aa000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa000_0x1aa000");
#endif

    ctx->pc = 0x1aa000u;

    // 0x1aa000: 0x0  nop
    ctx->pc = 0x1aa000u;
    // NOP
    // 0x1aa004: 0x0  nop
    ctx->pc = 0x1aa004u;
    // NOP
    // 0x1aa008: 0x460718c3  div.s       $f3, $f3, $f7
    ctx->pc = 0x1aa008u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[7]); }
    ctx->pc = 0x1aa00cu;
}
