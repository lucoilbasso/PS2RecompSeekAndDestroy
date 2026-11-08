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

// Function: entry_00119d50
// Address: 0x119d50 - 0x119d58
void entry_00119d50_0x119d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119d50_0x119d50");
#endif

    ctx->pc = 0x119d50u;

    // 0x119d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x119d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119d54: 0xac6200b0  sw          $v0, 0xB0($v1)
    ctx->pc = 0x119d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 2));
    ctx->pc = 0x119d58u;
}
