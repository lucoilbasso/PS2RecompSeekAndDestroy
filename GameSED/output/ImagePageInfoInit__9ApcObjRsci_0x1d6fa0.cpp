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

// Function: ImagePageInfoInit__9ApcObjRsci
// Address: 0x1d6fa0 - 0x1d702c
void ImagePageInfoInit__9ApcObjRsci_0x1d6fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ImagePageInfoInit__9ApcObjRsci_0x1d6fa0");
#endif

    switch (ctx->pc) {
        case 0x1d6fccu: goto label_1d6fcc;
        case 0x1d6fe8u: goto label_1d6fe8;
        case 0x1d6ff8u: goto label_1d6ff8;
        default: break;
    }

    ctx->pc = 0x1d6fa0u;

    // 0x1d6fa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6fa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d6fa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6fac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d6facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d6fb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d6fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6fb4: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x1d6fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x1d6fb8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D6FB8u;
    {
        const bool branch_taken_0x1d6fb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FB8u;
        // 0x1d6fbc: 0x52900  sll         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fb8) {
            ctx->pc = 0x1D6FC4u;
            goto label_1d6fc4;
        }
    }
    ctx->pc = 0x1D6FC0u;
    // 0x1d6fc0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d6fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6fc4:
    // 0x1d6fc4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D6FC4u;
    SET_GPR_U32(ctx, 31, 0x1D6FCCu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D6FC4u, 0x1D6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6FCCu;
label_1d6fcc:
    // 0x1d6fcc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D6FCCu;
    {
        const bool branch_taken_0x1d6fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FCCu;
        // 0x1d6fd0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fcc) {
            ctx->pc = 0x1D6FE8u;
            goto label_1d6fe8;
        }
    }
    ctx->pc = 0x1D6FD4u;
    // 0x1d6fd4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d6fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d6fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6fdc: 0x24a51a28  addiu       $a1, $a1, 0x1A28
    ctx->pc = 0x1d6fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6696));
    // 0x1d6fe0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D6FE0u;
    SET_GPR_U32(ctx, 31, 0x1D6FE8u);
    ctx->pc = 0x1D6FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6FE0u;
    // 0x1d6fe4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D6FE0u, 0x1D6FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6FE8u;
label_1d6fe8:
    // 0x1d6fe8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d6fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d6fec: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D6FECu;
    {
        const bool branch_taken_0x1d6fec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D6FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FECu;
        // 0x1d6ff0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fec) {
            ctx->pc = 0x1D701Cu;
            goto label_1d701c;
        }
    }
    ctx->pc = 0x1D6FF4u;
    // 0x1d6ff4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1d6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1d6ff8:
    // 0x1d6ff8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d6ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d6ffc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1d6ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d7000: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d7000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d7004: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1d7004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d7008: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1d7008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1d700c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1d700cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d7010: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1d7010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1d7014: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D7014u;
    {
        const bool branch_taken_0x1d7014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7014u;
        // 0x1d7018: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7014) {
            ctx->pc = 0x1D6FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6ff8;
        }
    }
    ctx->pc = 0x1D701Cu;
label_1d701c:
    // 0x1d701c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d701cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7020: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7024: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7024u;
        // 0x1d7028: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D702Cu;
}
