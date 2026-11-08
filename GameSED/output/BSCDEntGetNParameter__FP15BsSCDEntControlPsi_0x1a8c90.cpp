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

// Function: BSCDEntGetNParameter__FP15BsSCDEntControlPsi
// Address: 0x1a8c90 - 0x1a8d28
void BSCDEntGetNParameter__FP15BsSCDEntControlPsi_0x1a8c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGetNParameter__FP15BsSCDEntControlPsi_0x1a8c90");
#endif

    switch (ctx->pc) {
        case 0x1a8cc8u: goto label_1a8cc8;
        case 0x1a8cf4u: goto label_1a8cf4;
        default: break;
    }

    ctx->pc = 0x1a8c90u;

    // 0x1a8c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a8c94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a8c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a8c98: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a8c98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c9c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a8c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a8ca0: 0x3c157ffe  lui         $s5, 0x7FFE
    ctx->pc = 0x1a8ca0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8ca8: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x1a8ca8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x1a8cac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a8cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a8cb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8cb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a8cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8cb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8cbc: 0x2692001c  addiu       $s2, $s4, 0x1C
    ctx->pc = 0x1a8cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x1a8cc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a8cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8cc4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a8cc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a8cc8:
    // 0x1a8cc8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a8cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8ccc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1a8cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8cd0: 0x26130002  addiu       $s3, $s0, 0x2
    ctx->pc = 0x1a8cd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1a8cd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8cd8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8cdc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a8cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a8ce0: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1a8ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8ce4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8CE4u;
    {
        const bool branch_taken_0x1a8ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CE4u;
        // 0x1a8ce8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8ce4) {
            ctx->pc = 0x1A8CF8u;
            goto label_1a8cf8;
        }
    }
    ctx->pc = 0x1A8CECu;
    // 0x1a8cec: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8CECu;
    SET_GPR_U32(ctx, 31, 0x1A8CF4u);
    ctx->pc = 0x1A8CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8CECu;
    // 0x1a8cf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8CECu, 0x1A8CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8CF4u;
label_1a8cf4:
    // 0x1a8cf4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a8cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8cf8:
    // 0x1a8cf8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a8cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a8cfc: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A8CFCu;
    {
        const bool branch_taken_0x1a8cfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CFCu;
        // 0x1a8d00: 0xa6050000  sh          $a1, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8cfc) {
            ctx->pc = 0x1A8CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8cc8;
        }
    }
    ctx->pc = 0x1A8D04u;
    // 0x1a8d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8d08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8d0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8d0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8d10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a8d10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8d14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a8d14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8d18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a8d18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8d1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D20u;
        // 0x1a8d24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8D28u;
}
