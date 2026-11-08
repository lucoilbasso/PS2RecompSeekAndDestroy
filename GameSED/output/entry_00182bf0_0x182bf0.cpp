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

// Function: entry_00182bf0
// Address: 0x182bf0 - 0x182bf4
void entry_00182bf0_0x182bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182bf0_0x182bf0");
#endif

    ctx->pc = 0x182bf0u;

    // 0x182bf0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x182bf0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    ctx->pc = 0x182bf4u;
}
