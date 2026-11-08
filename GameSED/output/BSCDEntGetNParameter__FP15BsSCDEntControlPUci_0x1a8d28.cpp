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

// Function: BSCDEntGetNParameter__FP15BsSCDEntControlPUci
// Address: 0x1a8d28 - 0x1a8dc0
void BSCDEntGetNParameter__FP15BsSCDEntControlPUci_0x1a8d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BSCDEntGetNParameter__FP15BsSCDEntControlPUci_0x1a8d28");
#endif

    switch (ctx->pc) {
        case 0x1a8d60u: goto label_1a8d60;
        case 0x1a8d8cu: goto label_1a8d8c;
        default: break;
    }

    ctx->pc = 0x1a8d28u;

    // 0x1a8d28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a8d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a8d2c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a8d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a8d30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1a8d30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d34: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a8d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a8d38: 0x3c157ffe  lui         $s5, 0x7FFE
    ctx->pc = 0x1a8d38u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8d40: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x1a8d40u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x1a8d44: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a8d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a8d48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8d4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a8d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8d54: 0x2692001c  addiu       $s2, $s4, 0x1C
    ctx->pc = 0x1a8d54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x1a8d58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a8d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8d5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a8d5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d60:
    // 0x1a8d60: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1a8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1a8d64: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1a8d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8d68: 0x26130001  addiu       $s3, $s0, 0x1
    ctx->pc = 0x1a8d68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a8d6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a8d70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a8d74: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a8d74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a8d78: 0x2a3102a  slt         $v0, $s5, $v1
    ctx->pc = 0x1a8d78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a8d7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8D7Cu;
    {
        const bool branch_taken_0x1a8d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D7Cu;
        // 0x1a8d80: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d7c) {
            ctx->pc = 0x1A8D90u;
            goto label_1a8d90;
        }
    }
    ctx->pc = 0x1A8D84u;
    // 0x1a8d84: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A8D84u;
    SET_GPR_U32(ctx, 31, 0x1A8D8Cu);
    ctx->pc = 0x1A8D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D84u;
    // 0x1a8d88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A8D84u, 0x1A8D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D8Cu;
label_1a8d8c:
    // 0x1a8d8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a8d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8d90:
    // 0x1a8d90: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1a8d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1a8d94: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A8D94u;
    {
        const bool branch_taken_0x1a8d94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D94u;
        // 0x1a8d98: 0xa2050000  sb          $a1, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d94) {
            ctx->pc = 0x1A8D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8d60;
        }
    }
    ctx->pc = 0x1A8D9Cu;
    // 0x1a8d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8da0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8da4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8da8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a8da8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8dac: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a8dacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8db0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a8db0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8db4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a8db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8db8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DB8u;
        // 0x1a8dbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8DC0u;
}
