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

// Function: entry_00199534
// Address: 0x199534 - 0x199538
void entry_00199534_0x199534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199534_0x199534");
#endif

    ctx->pc = 0x199534u;

    // 0x199534: 0xac430150  sw          $v1, 0x150($v0)
    ctx->pc = 0x199534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 3));
    ctx->pc = 0x199538u;
}
