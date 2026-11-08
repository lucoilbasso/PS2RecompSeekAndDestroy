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

// Function: entry_00148ca8
// Address: 0x148ca8 - 0x148ccc
void entry_00148ca8_0x148ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148ca8_0x148ca8");
#endif

    ctx->pc = 0x148ca8u;

label_148ca8:
    // 0x148ca8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x148ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x148cac: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x148cacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x148cb0: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x148CB0u;
    {
        const bool branch_taken_0x148cb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x148CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CB0u;
        // 0x148cb4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148cb0) {
            ctx->pc = 0x148CF0u;
            return;
        }
    }
    ctx->pc = 0x148CB8u;
    // 0x148cb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x148cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148cbc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x148cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x148cc0: 0x0  nop
    ctx->pc = 0x148cc0u;
    // NOP
    // 0x148cc4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x148CC4u;
    {
        const bool branch_taken_0x148cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x148CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CC4u;
        // 0x148cc8: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148cc4) {
            ctx->pc = 0x148CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148ca8;
        }
    }
    ctx->pc = 0x148CCCu;
}
