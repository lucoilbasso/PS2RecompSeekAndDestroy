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

// Function: DeleteMotion__8WcEntity
// Address: 0x1dd318 - 0x1dd364
void DeleteMotion__8WcEntity_0x1dd318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteMotion__8WcEntity_0x1dd318");
#endif

    switch (ctx->pc) {
        case 0x1dd338u: goto label_1dd338;
        case 0x1dd348u: goto label_1dd348;
        default: break;
    }

    ctx->pc = 0x1dd318u;

    // 0x1dd318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd31c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dd320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd324: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dd324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dd328: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1dd328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1dd32c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1DD32Cu;
    {
        const bool branch_taken_0x1dd32c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd32c) {
            ctx->pc = 0x1DD330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD32Cu;
            // 0x1dd330: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD358u;
            goto label_1dd358;
        }
    }
    ctx->pc = 0x1DD334u;
    // 0x1dd334: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1dd334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1dd338:
    // 0x1dd338: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1dd338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd33c: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x1dd33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x1dd340: 0xc069070  jal         func_1A41C0
    ctx->pc = 0x1DD340u;
    SET_GPR_U32(ctx, 31, 0x1DD348u);
    ctx->pc = 0x1DD344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD340u;
    // 0x1dd344: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A41C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A41C0u, 0x1DD340u, 0x1DD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD348u;
label_1dd348:
    // 0x1dd348: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1dd348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1dd34c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DD34Cu;
    {
        const bool branch_taken_0x1dd34c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dd34c) {
            ctx->pc = 0x1DD350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DD34Cu;
            // 0x1dd350: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd338;
        }
    }
    ctx->pc = 0x1DD354u;
    // 0x1dd354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd358:
    // 0x1dd358: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dd358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd35c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD35Cu;
        // 0x1dd360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD364u;
}
