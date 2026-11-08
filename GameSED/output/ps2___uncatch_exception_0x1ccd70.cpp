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

// Function: __uncatch_exception
// Address: 0x1ccd70 - 0x1ccdd0
void ps2___uncatch_exception_0x1ccd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___uncatch_exception_0x1ccd70");
#endif

    switch (ctx->pc) {
        case 0x1ccd80u: goto label_1ccd80;
        case 0x1ccd88u: goto label_1ccd88;
        case 0x1ccd9cu: goto label_1ccd9c;
        default: break;
    }

    ctx->pc = 0x1ccd70u;

    // 0x1ccd70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccd74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccd78: 0xc0734a6  jal         func_1CD298
    ctx->pc = 0x1CCD78u;
    SET_GPR_U32(ctx, 31, 0x1CCD80u);
    ctx->pc = 0x1CD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD298u, 0x1CCD78u, 0x1CCD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD80u;
label_1ccd80:
    // 0x1ccd80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ccd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccd84: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1ccd84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ccd88:
    // 0x1ccd88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ccd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccd8c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCD8Cu;
    {
        const bool branch_taken_0x1ccd8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd8c) {
            ctx->pc = 0x1CCD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCD8Cu;
            // 0x1ccd90: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCDA0u;
            goto label_1ccda0;
        }
    }
    ctx->pc = 0x1CCD94u;
    // 0x1ccd94: 0xc07329a  jal         func_1CCA68
    ctx->pc = 0x1CCD94u;
    SET_GPR_U32(ctx, 31, 0x1CCD9Cu);
    ctx->pc = 0x1CCA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCA68u, 0x1CCD94u, 0x1CCD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD9Cu;
label_1ccd9c:
    // 0x1ccd9c: 0x0  nop
    ctx->pc = 0x1ccd9cu;
    // NOP
label_1ccda0:
    // 0x1ccda0: 0x5040fff9  beql        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CCDA0u;
    {
        const bool branch_taken_0x1ccda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccda0) {
            ctx->pc = 0x1CCDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCDA0u;
            // 0x1ccda4: 0x24830018  addiu       $v1, $a0, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccd88;
        }
    }
    ctx->pc = 0x1CCDA8u;
    // 0x1ccda8: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCDA8u;
    {
        const bool branch_taken_0x1ccda8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1CCDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDA8u;
        // 0x1ccdac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccda8) {
            ctx->pc = 0x1CCDC4u;
            goto label_1ccdc4;
        }
    }
    ctx->pc = 0x1CCDB0u;
    // 0x1ccdb0: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1ccdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1ccdb4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ccdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ccdb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ccdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ccdbc: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1ccdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1ccdc0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x1ccdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_1ccdc4:
    // 0x1ccdc4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1ccdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1ccdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCDC8u;
        // 0x1ccdcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCDD0u;
}
