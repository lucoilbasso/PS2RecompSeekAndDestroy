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

// Function: entry_0011fcb8
// Address: 0x11fcb8 - 0x11fcbc
void entry_0011fcb8_0x11fcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fcb8_0x11fcb8");
#endif

    ctx->pc = 0x11fcb8u;

    // 0x11fcb8: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x11fcb8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    ctx->pc = 0x11fcbcu;
}
