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

// Function: entry_001a2594
// Address: 0x1a2594 - 0x1a2598
void entry_001a2594_0x1a2594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2594_0x1a2594");
#endif

    ctx->pc = 0x1a2594u;

    // 0x1a2594: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x1a2594u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x1a2598u;
}
