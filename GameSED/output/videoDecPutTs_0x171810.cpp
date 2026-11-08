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

// Function: videoDecPutTs
// Address: 0x171810 - 0x17184c
void videoDecPutTs_0x171810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecPutTs_0x171810");
#endif

    switch (ctx->pc) {
        case 0x171840u: goto label_171840;
        default: break;
    }

    ctx->pc = 0x171810u;

    // 0x171810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x171810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x171814: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x171814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x171818: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x171818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17181c: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x17181cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x171820: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x171820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171824: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x171824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x171828: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x171828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x17182c: 0x244413b0  addiu       $a0, $v0, 0x13B0
    ctx->pc = 0x17182cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5040));
    // 0x171830: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x171830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x171834: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x171834u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x171838: 0xc05d742  jal         func_175D08
    ctx->pc = 0x171838u;
    SET_GPR_U32(ctx, 31, 0x171840u);
    ctx->pc = 0x17183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171838u;
    // 0x17183c: 0xafa70010  sw          $a3, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175D08u, 0x171838u, 0x171840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171840u;
label_171840:
    // 0x171840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x171840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171844: 0x3e00008  jr          $ra
    ctx->pc = 0x171844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171844u;
        // 0x171848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17184Cu;
}
