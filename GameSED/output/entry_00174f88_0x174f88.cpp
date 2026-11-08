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

// Function: entry_00174f88
// Address: 0x174f88 - 0x174fc0
void entry_00174f88_0x174f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174f88_0x174f88");
#endif

    switch (ctx->pc) {
        case 0x174f98u: goto label_174f98;
        default: break;
    }

    ctx->pc = 0x174f88u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x174FBCu;
    // 0x174fbc: 0x0  nop
    ctx->pc = 0x174fbcu;
    // NOP
    ctx->pc = 0x174fc0u;
}
