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

// Function: entry_001cedd0
// Address: 0x1cedd0 - 0x1cedd8
void entry_001cedd0_0x1cedd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cedd0_0x1cedd0");
#endif

    ctx->pc = 0x1cedd0u;

    // 0x1cedd0: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1cedd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1cedd4: 0x24420d88  addiu       $v0, $v0, 0xD88
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3464));
    ctx->pc = 0x1cedd8u;
}
