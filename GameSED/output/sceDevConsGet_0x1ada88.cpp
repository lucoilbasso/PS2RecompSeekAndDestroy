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

// Function: sceDevConsGet
// Address: 0x1ada88 - 0x1adafc
void sceDevConsGet_0x1ada88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsGet_0x1ada88");
#endif

    switch (ctx->pc) {
        case 0x1adaa4u: goto label_1adaa4;
        default: break;
    }

    ctx->pc = 0x1ada88u;

    // 0x1ada88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ada88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ada8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ada8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ada90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ada90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ada94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ada94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada98: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ada98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ada9c: 0xc06b90c  jal         func_1AE430
    ctx->pc = 0x1ADA9Cu;
    SET_GPR_U32(ctx, 31, 0x1ADAA4u);
    ctx->pc = 0x1ADAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA9Cu;
    // 0x1adaa0: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE430u, 0x1ADA9Cu, 0x1ADAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADAA4u;
label_1adaa4:
    // 0x1adaa4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1adaa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adaa8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1adaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1adaac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1adaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1adab0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1adab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1adab4: 0x45182b  sltu        $v1, $v0, $a1
    ctx->pc = 0x1adab4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1adab8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1ADAB8u;
    {
        const bool branch_taken_0x1adab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAB8u;
        // 0x1adabc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adab8) {
            ctx->pc = 0x1ADAE8u;
            goto label_1adae8;
        }
    }
    ctx->pc = 0x1ADAC0u;
    // 0x1adac0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1adac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1adac4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1adac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1adac8: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1adac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1adacc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ADACCu;
    {
        const bool branch_taken_0x1adacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ADAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADACCu;
        // 0x1adad0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adacc) {
            ctx->pc = 0x1ADAE0u;
            goto label_1adae0;
        }
    }
    ctx->pc = 0x1ADAD4u;
    // 0x1adad4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1adad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1adad8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADAD8u;
    {
        const bool branch_taken_0x1adad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAD8u;
        // 0x1adadc: 0xae050010  sw          $a1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1adad8) {
            ctx->pc = 0x1ADAE8u;
            goto label_1adae8;
        }
    }
    ctx->pc = 0x1ADAE0u;
label_1adae0:
    // 0x1adae0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1adae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1adae4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1adae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_1adae8:
    // 0x1adae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1adae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adaec: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1adaecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adaf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adaf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADAF4u;
        // 0x1adaf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADAFCu;
}
