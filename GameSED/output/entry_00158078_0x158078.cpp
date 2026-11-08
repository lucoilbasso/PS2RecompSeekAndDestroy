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

// Function: entry_00158078
// Address: 0x158078 - 0x15807c
void entry_00158078_0x158078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158078_0x158078");
#endif

    ctx->pc = 0x158078u;

    // 0x158078: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x158078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    ctx->pc = 0x15807cu;
}
