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

// Function: entry_001c5728
// Address: 0x1c5728 - 0x1c572c
void entry_001c5728_0x1c5728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5728_0x1c5728");
#endif

    ctx->pc = 0x1c5728u;

    // 0x1c5728: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x1c5728u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1c572cu;
}
