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

// Function: WCdManBackThreadProgram__FP8BcThread
// Address: 0x178620 - 0x178664
void WCdManBackThreadProgram__FP8BcThread_0x178620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WCdManBackThreadProgram__FP8BcThread_0x178620");
#endif

    switch (ctx->pc) {
        case 0x178620u: goto label_178620;
        case 0x178624u: goto label_178624;
        case 0x178628u: goto label_178628;
        case 0x17862cu: goto label_17862c;
        case 0x178630u: goto label_178630;
        case 0x178634u: goto label_178634;
        case 0x178638u: goto label_178638;
        case 0x17863cu: goto label_17863c;
        case 0x178640u: goto label_178640;
        case 0x178644u: goto label_178644;
        case 0x178648u: goto label_178648;
        case 0x17864cu: goto label_17864c;
        case 0x178650u: goto label_178650;
        case 0x178654u: goto label_178654;
        case 0x178658u: goto label_178658;
        case 0x17865cu: goto label_17865c;
        case 0x178660u: goto label_178660;
        default: break;
    }

    ctx->pc = 0x178620u;

label_178620:
    // 0x178620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_178624:
    // 0x178624: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178628:
    // 0x178628: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x178628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_17862c:
    // 0x17862c: 0x48000  sll         $s0, $a0, 0
    ctx->pc = 0x17862cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
label_178630:
    // 0x178630: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x178630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_178634:
    // 0x178634: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x178634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_178638:
    // 0x178638: 0x40f809  jalr        $v0
label_17863c:
    if (ctx->pc == 0x17863Cu) {
        ctx->pc = 0x178640u;
        goto label_178640;
    }
    ctx->pc = 0x178638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178640u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178638u, 0x178640u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x178640u;
label_178640:
    // 0x178640: 0xc06bd20  jal         func_1AF480
label_178644:
    if (ctx->pc == 0x178644u) {
        ctx->pc = 0x178644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178640u;
        // 0x178644: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178648u;
        goto label_178648;
    }
    ctx->pc = 0x178640u;
    SET_GPR_U32(ctx, 31, 0x178648u);
    ctx->pc = 0x178644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178640u;
    // 0x178644: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x178640u, 0x178648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178648u;
label_178648:
    // 0x178648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17864c:
    // 0x17864c: 0xc06866c  jal         func_1A19B0
label_178650:
    if (ctx->pc == 0x178650u) {
        ctx->pc = 0x178650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17864Cu;
        // 0x178650: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178654u;
        goto label_178654;
    }
    ctx->pc = 0x17864Cu;
    SET_GPR_U32(ctx, 31, 0x178654u);
    ctx->pc = 0x178650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17864Cu;
    // 0x178650: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x17864Cu, 0x178654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178654u;
label_178654:
    // 0x178654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178658:
    // 0x178658: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17865c:
    // 0x17865c: 0x3e00008  jr          $ra
label_178660:
    if (ctx->pc == 0x178660u) {
        ctx->pc = 0x178660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17865Cu;
        // 0x178660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178664u;
        goto label_fallthrough_0x17865c;
    }
    ctx->pc = 0x17865Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17865Cu;
        // 0x178660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17865Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17865c:
    ctx->pc = 0x178664u;
}
