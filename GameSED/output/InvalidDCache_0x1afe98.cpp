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

// Function: InvalidDCache
// Address: 0x1afe98 - 0x1aff14
void InvalidDCache_0x1afe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InvalidDCache_0x1afe98");
#endif

    switch (ctx->pc) {
        case 0x1afed0u: goto label_1afed0;
        case 0x1afee4u: goto label_1afee4;
        default: break;
    }

    ctx->pc = 0x1afe98u;

    // 0x1afe98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1afe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1afe9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1afe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1afea0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1afea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1afea4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1afea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afea8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1afea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1afeac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1afeacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afeb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afeb4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x1afeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x1afeb8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1afeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1afebc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x1afebcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1afec0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFEC0u;
    {
        const bool branch_taken_0x1afec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1afec0) {
            ctx->pc = 0x1AFED0u;
            goto label_1afed0;
        }
    }
    ctx->pc = 0x1AFEC8u;
    // 0x1afec8: 0xc06dae8  jal         func_1B6BA0
    ctx->pc = 0x1AFEC8u;
    SET_GPR_U32(ctx, 31, 0x1AFED0u);
    ctx->pc = 0x1B6BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6BA0u, 0x1AFEC8u, 0x1AFED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFED0u;
label_1afed0:
    // 0x1afed0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1afed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1afed4: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x1afed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x1afed8: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x1afed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x1afedc: 0xc06bf7c  jal         func_1AFDF0
    ctx->pc = 0x1AFEDCu;
    SET_GPR_U32(ctx, 31, 0x1AFEE4u);
    ctx->pc = 0x1AFEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEDCu;
    // 0x1afee0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFDF0u, 0x1AFEDCu, 0x1AFEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFEE4u;
label_1afee4:
    // 0x1afee4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFEE4u;
    {
        const bool branch_taken_0x1afee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFEE4u;
        // 0x1afee8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afee4) {
            ctx->pc = 0x1AFF00u;
            goto label_1aff00;
        }
    }
    ctx->pc = 0x1AFEECu;
    // 0x1afeec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1afeecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1afef0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1afef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1afef4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afef8: 0x806dafa  j           func_1B6BE8
    ctx->pc = 0x1AFEF8u;
    ctx->pc = 0x1AFEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFEF8u;
    // 0x1afefc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6BE8u;
    EIntr_0x1b6be8(rdram, ctx, runtime); return;
    ctx->pc = 0x1AFF00u;
label_1aff00:
    // 0x1aff00: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1aff00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aff04: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1aff04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aff08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aff08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aff0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFF0Cu;
        // 0x1aff10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFF14u;
}
