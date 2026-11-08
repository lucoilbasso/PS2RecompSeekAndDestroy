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

// Function: entry_00146b88
// Address: 0x146b88 - 0x146b90
void entry_00146b88_0x146b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146b88_0x146b88");
#endif

    ctx->pc = 0x146b88u;

    // 0x146b88: 0x46064801  sub.s       $f0, $f9, $f6
    ctx->pc = 0x146b88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[9], ctx->f[6]);
    // 0x146b8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x146b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    ctx->pc = 0x146b90u;
}
