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

// Function: entry_001b6b60
// Address: 0x1b6b60 - 0x1b6b80
void entry_001b6b60_0x1b6b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6b60_0x1b6b60");
#endif

    ctx->pc = 0x1b6b60u;

label_1b6b60:
    // 0x1b6b60: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b6b60u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b6b64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b6b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1b6b68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b6b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b6b6c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b6b6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b6b70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6b74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B6B74u;
    {
        const bool branch_taken_0x1b6b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b74) {
            ctx->pc = 0x1B6B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6b60;
        }
    }
    ctx->pc = 0x1B6B7Cu;
    // 0x1b6b7c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1b6b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1b6b80u;
}
