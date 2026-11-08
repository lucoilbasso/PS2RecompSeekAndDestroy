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

// Function: entry_00111b14
// Address: 0x111b14 - 0x111b18
void entry_00111b14_0x111b14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111b14_0x111b14");
#endif

    ctx->pc = 0x111b14u;

    // 0x111b14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x111b14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x111b18u;
}
