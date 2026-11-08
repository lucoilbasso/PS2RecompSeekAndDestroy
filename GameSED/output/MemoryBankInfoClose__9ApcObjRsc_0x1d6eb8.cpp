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

// Function: MemoryBankInfoClose__9ApcObjRsc
// Address: 0x1d6eb8 - 0x1d6f3c
void MemoryBankInfoClose__9ApcObjRsc_0x1d6eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MemoryBankInfoClose__9ApcObjRsc_0x1d6eb8");
#endif

    switch (ctx->pc) {
        case 0x1d6ee0u: goto label_1d6ee0;
        case 0x1d6f08u: goto label_1d6f08;
        case 0x1d6f24u: goto label_1d6f24;
        default: break;
    }

    ctx->pc = 0x1d6eb8u;

    // 0x1d6eb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6ebc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d6ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d6ec0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d6ec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ec4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d6ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d6ec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d6ecc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d6eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d6ed0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1d6ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d6ed4: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D6ED4u;
    {
        const bool branch_taken_0x1d6ed4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6ED4u;
        // 0x1d6ed8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ed4) {
            ctx->pc = 0x1D6F18u;
            goto label_1d6f18;
        }
    }
    ctx->pc = 0x1D6EDCu;
    // 0x1d6edc: 0x0  nop
    ctx->pc = 0x1d6edcu;
    // NOP
label_1d6ee0:
    // 0x1d6ee0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1d6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1d6ee4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d6ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1d6ee8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d6ee8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1d6eec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6ef0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d6ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6ef4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d6ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d6ef8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6EF8u;
    {
        const bool branch_taken_0x1d6ef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EF8u;
        // 0x1d6efc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ef8) {
            ctx->pc = 0x1D6F08u;
            goto label_1d6f08;
        }
    }
    ctx->pc = 0x1D6F00u;
    // 0x1d6f00: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D6F00u;
    SET_GPR_U32(ctx, 31, 0x1D6F08u);
    ctx->pc = 0x1D6F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6F00u;
    // 0x1d6f04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6F00u, 0x1D6F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F08u;
label_1d6f08:
    // 0x1d6f08: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1d6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1d6f0c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1d6f0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d6f10: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D6F10u;
    {
        const bool branch_taken_0x1d6f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F10u;
        // 0x1d6f14: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f10) {
            ctx->pc = 0x1D6EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6ee0;
        }
    }
    ctx->pc = 0x1D6F18u;
label_1d6f18:
    // 0x1d6f18: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1d6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1d6f1c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D6F1Cu;
    SET_GPR_U32(ctx, 31, 0x1D6F24u);
    ctx->pc = 0x1D6F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6F1Cu;
    // 0x1d6f20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6F1Cu, 0x1D6F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6F24u;
label_1d6f24:
    // 0x1d6f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d6f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6f28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d6f28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d6f2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d6f2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6f30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d6f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d6f34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F34u;
        // 0x1d6f38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6F3Cu;
}
