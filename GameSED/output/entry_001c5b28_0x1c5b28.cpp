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

// Function: entry_001c5b28
// Address: 0x1c5b28 - 0x1c5b2c
void entry_001c5b28_0x1c5b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5b28_0x1c5b28");
#endif

    ctx->pc = 0x1c5b28u;

    // 0x1c5b28: 0x8e020400  lw          $v0, 0x400($s0)
    ctx->pc = 0x1c5b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
    ctx->pc = 0x1c5b2cu;
}
