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

// Function: entry_001575a0
// Address: 0x1575a0 - 0x1575a4
void entry_001575a0_0x1575a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001575a0_0x1575a0");
#endif

    ctx->pc = 0x1575a0u;

    // 0x1575a0: 0xace30234  sw          $v1, 0x234($a3)
    ctx->pc = 0x1575a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 564), GPR_U32(ctx, 3));
    ctx->pc = 0x1575a4u;
}
