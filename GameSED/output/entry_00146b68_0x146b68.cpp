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

// Function: entry_00146b68
// Address: 0x146b68 - 0x146b6c
void entry_00146b68_0x146b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146b68_0x146b68");
#endif

    ctx->pc = 0x146b68u;

    // 0x146b68: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x146b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    ctx->pc = 0x146b6cu;
}
