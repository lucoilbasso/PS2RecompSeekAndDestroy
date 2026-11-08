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

// Function: entry_001a0f28
// Address: 0x1a0f28 - 0x1a0f38
void entry_001a0f28_0x1a0f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0f28_0x1a0f28");
#endif

    ctx->pc = 0x1a0f28u;

    // 0x1a0f28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0f2c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1a0f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1a0f30: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1a0f30u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1a0f34: 0xac222c08  sw          $v0, 0x2C08($at)
    ctx->pc = 0x1a0f34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11272), GPR_U32(ctx, 2));
    ctx->pc = 0x1a0f38u;
}
