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

// Function: BSCDEntGetNParameter__FP15BsSCDEntControlPii
// Address: 0x1a8bf8 - 0x1a8c90
void BSCDEntGetNParameter__FP15BsSCDEntControlPii_0x1a8bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGetNParameter__FP15BsSCDEntControlPii_0x1a8bf8");
#endif

    switch (ctx->pc) {
        case 0x1a8c30u: goto label_1a8c30;
        case 0x1a8c5cu: goto label_1a8c5c;
        default: break;
    }

    ctx->pc = 0x1a8bf8u;

    // 0x1a8bf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a8bfc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a8bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a8c00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a8c00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a8c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a8c08: 0x3c157ffe  lui         $s5, 0x7FFE
    ctx->pc = 0x1a8c08u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8c10: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x1a8c10u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x1a8c14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a8c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a8c18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8c1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a8c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8c24: 0x2692001c  addiu       $s2, $s4, 0x1C
    ctx->pc = 0x1a8c24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x1a8c28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a8c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8c2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a8c2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a8c30:
    // 0x1a8c30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a8c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8c34: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1a8c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c38: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x1a8c38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a8c3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8c40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8c44: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a8c44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a8c48: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1a8c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8c4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8C4Cu;
    {
        const bool branch_taken_0x1a8c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C4Cu;
        // 0x1a8c50: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c4c) {
            ctx->pc = 0x1A8C60u;
            goto label_1a8c60;
        }
    }
    ctx->pc = 0x1A8C54u;
    // 0x1a8c54: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8C54u;
    SET_GPR_U32(ctx, 31, 0x1A8C5Cu);
    ctx->pc = 0x1A8C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8C54u;
    // 0x1a8c58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8C54u, 0x1A8C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8C5Cu;
label_1a8c5c:
    // 0x1a8c5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a8c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8c60:
    // 0x1a8c60: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a8c60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a8c64: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A8C64u;
    {
        const bool branch_taken_0x1a8c64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C64u;
        // 0x1a8c68: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c64) {
            ctx->pc = 0x1A8C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8c30;
        }
    }
    ctx->pc = 0x1A8C6Cu;
    // 0x1a8c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8c70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8c74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8c78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a8c78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8c7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a8c7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8c80: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a8c80u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8c84: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8c88: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8C88u;
        // 0x1a8c8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8C90u;
}
