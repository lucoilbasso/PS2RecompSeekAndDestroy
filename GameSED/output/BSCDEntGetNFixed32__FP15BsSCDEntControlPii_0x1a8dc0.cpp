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

// Function: BSCDEntGetNFixed32__FP15BsSCDEntControlPii
// Address: 0x1a8dc0 - 0x1a8e58
void BSCDEntGetNFixed32__FP15BsSCDEntControlPii_0x1a8dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGetNFixed32__FP15BsSCDEntControlPii_0x1a8dc0");
#endif

    switch (ctx->pc) {
        case 0x1a8df8u: goto label_1a8df8;
        case 0x1a8e24u: goto label_1a8e24;
        default: break;
    }

    ctx->pc = 0x1a8dc0u;

    // 0x1a8dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a8dc4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a8dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a8dc8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a8dc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8dcc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a8dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a8dd0: 0x3c157ffe  lui         $s5, 0x7FFE
    ctx->pc = 0x1a8dd0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8dd8: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x1a8dd8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x1a8ddc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a8ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a8de0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8de4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a8de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8de8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8dec: 0x2692001c  addiu       $s2, $s4, 0x1C
    ctx->pc = 0x1a8decu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x1a8df0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a8df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8df4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a8df4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a8df8:
    // 0x1a8df8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8dfc: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1a8dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8e00: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x1a8e00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a8e04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8e08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8e0c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a8e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a8e10: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1a8e10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8e14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8E14u;
    {
        const bool branch_taken_0x1a8e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E14u;
        // 0x1a8e18: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e14) {
            ctx->pc = 0x1A8E28u;
            goto label_1a8e28;
        }
    }
    ctx->pc = 0x1A8E1Cu;
    // 0x1a8e1c: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8E1Cu;
    SET_GPR_U32(ctx, 31, 0x1A8E24u);
    ctx->pc = 0x1A8E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E1Cu;
    // 0x1a8e20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8E1Cu, 0x1A8E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E24u;
label_1a8e24:
    // 0x1a8e24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a8e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8e28:
    // 0x1a8e28: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a8e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a8e2c: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A8E2Cu;
    {
        const bool branch_taken_0x1a8e2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E2Cu;
        // 0x1a8e30: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e2c) {
            ctx->pc = 0x1A8DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8df8;
        }
    }
    ctx->pc = 0x1A8E34u;
    // 0x1a8e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8e38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8e3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8e3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8e40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a8e40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8e44: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a8e44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8e48: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a8e48u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8e4c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8e50: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E50u;
        // 0x1a8e54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8E58u;
}
