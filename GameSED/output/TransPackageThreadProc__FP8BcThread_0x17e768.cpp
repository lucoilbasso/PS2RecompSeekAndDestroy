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

// Function: TransPackageThreadProc__FP8BcThread
// Address: 0x17e768 - 0x17e7c0
void TransPackageThreadProc__FP8BcThread_0x17e768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TransPackageThreadProc__FP8BcThread_0x17e768");
#endif

    switch (ctx->pc) {
        case 0x17e768u: goto label_17e768;
        case 0x17e76cu: goto label_17e76c;
        case 0x17e770u: goto label_17e770;
        case 0x17e774u: goto label_17e774;
        case 0x17e778u: goto label_17e778;
        case 0x17e77cu: goto label_17e77c;
        case 0x17e780u: goto label_17e780;
        case 0x17e784u: goto label_17e784;
        case 0x17e788u: goto label_17e788;
        case 0x17e78cu: goto label_17e78c;
        case 0x17e790u: goto label_17e790;
        case 0x17e794u: goto label_17e794;
        case 0x17e798u: goto label_17e798;
        case 0x17e79cu: goto label_17e79c;
        case 0x17e7a0u: goto label_17e7a0;
        case 0x17e7a4u: goto label_17e7a4;
        case 0x17e7a8u: goto label_17e7a8;
        case 0x17e7acu: goto label_17e7ac;
        case 0x17e7b0u: goto label_17e7b0;
        case 0x17e7b4u: goto label_17e7b4;
        case 0x17e7b8u: goto label_17e7b8;
        case 0x17e7bcu: goto label_17e7bc;
        default: break;
    }

    ctx->pc = 0x17e768u;

label_17e768:
    // 0x17e768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17e76c:
    // 0x17e76c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17e770:
    // 0x17e770: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17e770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17e774:
    // 0x17e774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17e778:
    // 0x17e778: 0x48000  sll         $s0, $a0, 0
    ctx->pc = 0x17e778u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
label_17e77c:
    // 0x17e77c: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x17e77cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17e780:
    // 0x17e780: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x17e780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_17e784:
    // 0x17e784: 0xc05f72a  jal         func_17DCA8
label_17e788:
    if (ctx->pc == 0x17E788u) {
        ctx->pc = 0x17E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E784u;
        // 0x17e788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E78Cu;
        goto label_17e78c;
    }
    ctx->pc = 0x17E784u;
    SET_GPR_U32(ctx, 31, 0x17E78Cu);
    ctx->pc = 0x17E788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E784u;
    // 0x17e788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DCA8u, 0x17E784u, 0x17E78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E78Cu;
label_17e78c:
    // 0x17e78c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x17e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_17e790:
    // 0x17e790: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x17e790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_17e794:
    // 0x17e794: 0x40f809  jalr        $v0
label_17e798:
    if (ctx->pc == 0x17E798u) {
        ctx->pc = 0x17E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E794u;
        // 0x17e798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E79Cu;
        goto label_17e79c;
    }
    ctx->pc = 0x17E794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17E79Cu);
        ctx->pc = 0x17E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E794u;
        // 0x17e798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E794u, 0x17E79Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E79Cu;
label_17e79c:
    // 0x17e79c: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x17e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_17e7a0:
    // 0x17e7a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e7a4:
    // 0x17e7a4: 0xc06866c  jal         func_1A19B0
label_17e7a8:
    if (ctx->pc == 0x17E7A8u) {
        ctx->pc = 0x17E7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7A4u;
        // 0x17e7a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E7ACu;
        goto label_17e7ac;
    }
    ctx->pc = 0x17E7A4u;
    SET_GPR_U32(ctx, 31, 0x17E7ACu);
    ctx->pc = 0x17E7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E7A4u;
    // 0x17e7a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x17E7A4u, 0x17E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E7ACu;
label_17e7ac:
    // 0x17e7ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e7b0:
    // 0x17e7b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e7b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17e7b4:
    // 0x17e7b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17e7b8:
    // 0x17e7b8: 0x3e00008  jr          $ra
label_17e7bc:
    if (ctx->pc == 0x17E7BCu) {
        ctx->pc = 0x17E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7B8u;
        // 0x17e7bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E7C0u;
        goto label_fallthrough_0x17e7b8;
    }
    ctx->pc = 0x17E7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7B8u;
        // 0x17e7bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E7B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17e7b8:
    ctx->pc = 0x17E7C0u;
}
