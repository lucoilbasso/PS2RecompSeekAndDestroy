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

// Function: entry_00132ce0
// Address: 0x132ce0 - 0x132d10
void entry_00132ce0_0x132ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132ce0_0x132ce0");
#endif

    ctx->pc = 0x132ce0u;

label_132ce0:
    // 0x132ce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x132ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132ce4: 0x1044fff4  beq         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x132CE4u;
    {
        const bool branch_taken_0x132ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x132CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CE4u;
        // 0x132ce8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ce4) {
            ctx->pc = 0x132CB8u;
            return;
        }
    }
    ctx->pc = 0x132CECu;
    // 0x132cec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x132cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x132cf0: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x132cf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x132cf4: 0x0  nop
    ctx->pc = 0x132cf4u;
    // NOP
    // 0x132cf8: 0x0  nop
    ctx->pc = 0x132cf8u;
    // NOP
    // 0x132cfc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x132CFCu;
    {
        const bool branch_taken_0x132cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x132D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132CFCu;
        // 0x132d00: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132cfc) {
            ctx->pc = 0x132CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_132ce0;
        }
    }
    ctx->pc = 0x132D04u;
    // 0x132d04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x132D04u;
    {
        const bool branch_taken_0x132d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132D04u;
        // 0x132d08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132d04) {
            ctx->pc = 0x132D18u;
            return;
        }
    }
    ctx->pc = 0x132D0Cu;
    // 0x132d0c: 0x0  nop
    ctx->pc = 0x132d0cu;
    // NOP
    ctx->pc = 0x132d10u;
}
