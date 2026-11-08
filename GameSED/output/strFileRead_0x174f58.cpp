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

// Function: strFileRead
// Address: 0x174f58 - 0x174fec
void strFileRead_0x174f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strFileRead_0x174f58");
#endif

    switch (ctx->pc) {
        case 0x174f88u: goto label_174f88;
        case 0x174f98u: goto label_174f98;
        case 0x174fccu: goto label_174fcc;
        default: break;
    }

    ctx->pc = 0x174f58u;

    // 0x174f58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x174f5c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x174f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x174f60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x174f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x174f64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x174f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x174f68: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x174f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x174f6c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x174f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x174f70: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x174F70u;
    {
        const bool branch_taken_0x174f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F70u;
        // 0x174f74: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f70) {
            ctx->pc = 0x174FC0u;
            goto label_174fc0;
        }
    }
    ctx->pc = 0x174F78u;
    // 0x174f78: 0x692c3  sra         $s2, $a2, 11
    ctx->pc = 0x174f78u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 11));
    // 0x174f7c: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x174f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x174f80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f84: 0x0  nop
    ctx->pc = 0x174f84u;
    // NOP
label_174f88:
    // 0x174f88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x174f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f8c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x174f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174f90: 0xc06ed7e  jal         func_1BB5F8
    ctx->pc = 0x174F90u;
    SET_GPR_U32(ctx, 31, 0x174F98u);
    ctx->pc = 0x174F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174F90u;
    // 0x174f94: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB5F8u, 0x174F90u, 0x174F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F98u;
label_174f98:
    // 0x174f98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x174f98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174f9c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x174f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174fa0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x174FA0u;
    {
        const bool branch_taken_0x174fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FA0u;
        // 0x174fa4: 0x31ac0  sll         $v1, $v1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174fa0) {
            ctx->pc = 0x174FD0u;
            goto label_174fd0;
        }
    }
    ctx->pc = 0x174FA8u;
    // 0x174fa8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x174fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x174fac: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x174FACu;
    {
        const bool branch_taken_0x174fac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x174FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FACu;
        // 0x174fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174fac) {
            ctx->pc = 0x174F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174f88;
        }
    }
    ctx->pc = 0x174FB4u;
    // 0x174fb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x174FB4u;
    {
        const bool branch_taken_0x174fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FB4u;
        // 0x174fb8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174fb4) {
            ctx->pc = 0x174FD0u;
            goto label_174fd0;
        }
    }
    ctx->pc = 0x174FBCu;
    // 0x174fbc: 0x0  nop
    ctx->pc = 0x174fbcu;
    // NOP
label_174fc0:
    // 0x174fc0: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x174fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x174fc4: 0xc06cbb2  jal         func_1B2EC8
    ctx->pc = 0x174FC4u;
    SET_GPR_U32(ctx, 31, 0x174FCCu);
    ctx->pc = 0x174FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174FC4u;
    // 0x174fc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2EC8u, 0x174FC4u, 0x174FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174FCCu;
label_174fcc:
    // 0x174fcc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x174fccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174fd0:
    // 0x174fd0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x174fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174fd4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x174fd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fd8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x174fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174fdc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x174fdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174fe0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x174fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x174fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x174FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FE4u;
        // 0x174fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174FECu;
}
