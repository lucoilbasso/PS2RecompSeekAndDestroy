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

// Function: entry_00137e00
// Address: 0x137e00 - 0x137e04
void entry_00137e00_0x137e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137e00_0x137e00");
#endif

    ctx->pc = 0x137e00u;

    // 0x137e00: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x137e00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x137e04u;
}
