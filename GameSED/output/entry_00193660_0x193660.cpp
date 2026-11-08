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

// Function: entry_00193660
// Address: 0x193660 - 0x193688
void entry_00193660_0x193660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193660_0x193660");
#endif

    ctx->pc = 0x193660u;

label_193660:
    // 0x193660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x193660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193664: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x193664u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x193668: 0x0  nop
    ctx->pc = 0x193668u;
    // NOP
    // 0x19366c: 0x0  nop
    ctx->pc = 0x19366cu;
    // NOP
    // 0x193670: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x193670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x193674: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x193674u;
    {
        const bool branch_taken_0x193674 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x193678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193674u;
        // 0x193678: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193674) {
            ctx->pc = 0x193660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193660;
        }
    }
    ctx->pc = 0x19367Cu;
    // 0x19367c: 0x24840244  addiu       $a0, $a0, 0x244
    ctx->pc = 0x19367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 580));
    // 0x193680: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x193680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x193684: 0x0  nop
    ctx->pc = 0x193684u;
    // NOP
    ctx->pc = 0x193688u;
}
