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

// Function: entry_00171f04
// Address: 0x171f04 - 0x171f08
void entry_00171f04_0x171f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171f04_0x171f04");
#endif

    ctx->pc = 0x171f04u;

    // 0x171f04: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x171f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    ctx->pc = 0x171f08u;
}
