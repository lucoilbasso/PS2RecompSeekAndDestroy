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

// Function: voBufCreate
// Address: 0x173cd8 - 0x173d4c
void voBufCreate_0x173cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("voBufCreate_0x173cd8");
#endif

    switch (ctx->pc) {
        case 0x173d08u: goto label_173d08;
        default: break;
    }

    ctx->pc = 0x173cd8u;

    // 0x173cd8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x173cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x173cdc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x173cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x173ce0: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x173ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x173ce4: 0xac88000c  sw          $t0, 0xC($a0)
    ctx->pc = 0x173ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 8));
    // 0x173ce8: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x173ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x173cec: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x173cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x173cf0: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x173cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x173cf4: 0xac8a0020  sw          $t2, 0x20($a0)
    ctx->pc = 0x173cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 10));
    // 0x173cf8: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x173cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x173cfc: 0x19400011  blez        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x173CFCu;
    {
        const bool branch_taken_0x173cfc = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x173cfc) {
            ctx->pc = 0x173D44u;
            goto label_173d44;
        }
    }
    ctx->pc = 0x173D04u;
    // 0x173d04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173d08:
    // 0x173d08: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x173d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x173d0c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x173d0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x173d10: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x173d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x173d14: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x173d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x173d18: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x173d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x173d1c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x173d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x173d20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x173d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x173d24: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x173d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x173d28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x173d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x173d2c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x173d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x173d30: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x173d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x173d34: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x173d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x173d38: 0x24a50044  addiu       $a1, $a1, 0x44
    ctx->pc = 0x173d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
    // 0x173d3c: 0x1540fff2  bnez        $t2, . + 4 + (-0xE << 2)
    ctx->pc = 0x173D3Cu;
    {
        const bool branch_taken_0x173d3c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x173D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D3Cu;
        // 0x173d40: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d3c) {
            ctx->pc = 0x173D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173d08;
        }
    }
    ctx->pc = 0x173D44u;
label_173d44:
    // 0x173d44: 0x3e00008  jr          $ra
    ctx->pc = 0x173D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173D4Cu;
}
