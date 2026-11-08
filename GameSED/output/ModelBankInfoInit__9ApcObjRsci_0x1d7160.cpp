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

// Function: ModelBankInfoInit__9ApcObjRsci
// Address: 0x1d7160 - 0x1d71e4
void ModelBankInfoInit__9ApcObjRsci_0x1d7160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ModelBankInfoInit__9ApcObjRsci_0x1d7160");
#endif

    switch (ctx->pc) {
        case 0x1d718cu: goto label_1d718c;
        case 0x1d71a8u: goto label_1d71a8;
        case 0x1d71b8u: goto label_1d71b8;
        default: break;
    }

    ctx->pc = 0x1d7160u;

    // 0x1d7160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7168: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7168u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d716c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d716cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7170: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7174: 0xae05002c  sw          $a1, 0x2C($s0)
    ctx->pc = 0x1d7174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 5));
    // 0x1d7178: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D7178u;
    {
        const bool branch_taken_0x1d7178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7178u;
        // 0x1d717c: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7178) {
            ctx->pc = 0x1D7184u;
            goto label_1d7184;
        }
    }
    ctx->pc = 0x1D7180u;
    // 0x1d7180: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d7180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d7184:
    // 0x1d7184: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1D7184u;
    SET_GPR_U32(ctx, 31, 0x1D718Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1D7184u, 0x1D718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D718Cu;
label_1d718c:
    // 0x1d718c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D718Cu;
    {
        const bool branch_taken_0x1d718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D718Cu;
        // 0x1d7190: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d718c) {
            ctx->pc = 0x1D71A8u;
            goto label_1d71a8;
        }
    }
    ctx->pc = 0x1D7194u;
    // 0x1d7194: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d7194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d7198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d719c: 0x24a51b10  addiu       $a1, $a1, 0x1B10
    ctx->pc = 0x1d719cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6928));
    // 0x1d71a0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D71A0u;
    SET_GPR_U32(ctx, 31, 0x1D71A8u);
    ctx->pc = 0x1D71A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71A0u;
    // 0x1d71a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D71A0u, 0x1D71A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D71A8u;
label_1d71a8:
    // 0x1d71a8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1d71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1d71ac: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D71ACu;
    {
        const bool branch_taken_0x1d71ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1d71ac) {
            ctx->pc = 0x1D71B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D71ACu;
            // 0x1d71b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D71D8u;
            goto label_1d71d8;
        }
    }
    ctx->pc = 0x1D71B4u;
    // 0x1d71b4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x1d71b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1d71b8:
    // 0x1d71b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d71b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d71bc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d71bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d71c0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1d71c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1d71c4: 0x0  nop
    ctx->pc = 0x1d71c4u;
    // NOP
    // 0x1d71c8: 0x0  nop
    ctx->pc = 0x1d71c8u;
    // NOP
    // 0x1d71cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D71CCu;
    {
        const bool branch_taken_0x1d71cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D71D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71CCu;
        // 0x1d71d0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d71cc) {
            ctx->pc = 0x1D71B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d71b8;
        }
    }
    ctx->pc = 0x1D71D4u;
    // 0x1d71d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d71d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d71d8:
    // 0x1d71d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d71d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d71dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D71DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D71E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71DCu;
        // 0x1d71e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D71DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D71E4u;
}
