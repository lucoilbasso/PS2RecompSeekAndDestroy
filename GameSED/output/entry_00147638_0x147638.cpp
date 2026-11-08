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

// Function: entry_00147638
// Address: 0x147638 - 0x147660
void entry_00147638_0x147638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147638_0x147638");
#endif

    ctx->pc = 0x147638u;

label_147638:
    // 0x147638: 0x24a40270  addiu       $a0, $a1, 0x270
    ctx->pc = 0x147638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 624));
    // 0x14763c: 0x24a303b0  addiu       $v1, $a1, 0x3B0
    ctx->pc = 0x14763cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 944));
    // 0x147640: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x147640u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147644: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x147644u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x147648: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x147648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x14764c: 0x0  nop
    ctx->pc = 0x14764cu;
    // NOP
    // 0x147650: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x147650u;
    {
        const bool branch_taken_0x147650 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x147654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147650u;
        // 0x147654: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147650) {
            ctx->pc = 0x147638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147638;
        }
    }
    ctx->pc = 0x147658u;
    // 0x147658: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x147658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x14765c: 0xae51015c  sw          $s1, 0x15C($s2)
    ctx->pc = 0x14765cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 17));
    ctx->pc = 0x147660u;
}
