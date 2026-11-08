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

// Function: WSeqMAlloc__FUi
// Address: 0x199740 - 0x1997d0
void WSeqMAlloc__FUi_0x199740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSeqMAlloc__FUi_0x199740");
#endif

    switch (ctx->pc) {
        case 0x199778u: goto label_199778;
        case 0x199794u: goto label_199794;
        case 0x1997a8u: goto label_1997a8;
        case 0x1997b4u: goto label_1997b4;
        default: break;
    }

    ctx->pc = 0x199740u;

    // 0x199740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199744: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x199744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x199748: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x199748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19974c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19974cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199754: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x199754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x199758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19975c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x199760: 0x8c500150  lw          $s0, 0x150($v0)
    ctx->pc = 0x199760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x199764: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x199764u;
    {
        const bool branch_taken_0x199764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x199768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199764u;
        // 0x199768: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199764) {
            ctx->pc = 0x199770u;
            goto label_199770;
        }
    }
    ctx->pc = 0x19976Cu;
    // 0x19976c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19976cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_199770:
    // 0x199770: 0xc068086  jal         func_1A0218
    ctx->pc = 0x199770u;
    SET_GPR_U32(ctx, 31, 0x199778u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x199770u, 0x199778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199778u;
label_199778:
    // 0x199778: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x199778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x19977c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19977cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199780: 0x24848440  addiu       $a0, $a0, -0x7BC0
    ctx->pc = 0x199780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935616));
    // 0x199784: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x199784u;
    {
        const bool branch_taken_0x199784 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x199788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199784u;
        // 0x199788: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199784) {
            ctx->pc = 0x1997A8u;
            goto label_1997a8;
        }
    }
    ctx->pc = 0x19978Cu;
    // 0x19978c: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x19978Cu;
    SET_GPR_U32(ctx, 31, 0x199794u);
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x19978Cu, 0x199794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199794u;
label_199794:
    // 0x199794: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x199794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x199798: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x199798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19979c: 0x24a58450  addiu       $a1, $a1, -0x7BB0
    ctx->pc = 0x19979cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935632));
    // 0x1997a0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1997A0u;
    SET_GPR_U32(ctx, 31, 0x1997A8u);
    ctx->pc = 0x1997A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997A0u;
    // 0x1997a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1997A0u, 0x1997A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997A8u;
label_1997a8:
    // 0x1997a8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1997a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1997ac: 0xc0683b6  jal         func_1A0ED8
    ctx->pc = 0x1997ACu;
    SET_GPR_U32(ctx, 31, 0x1997B4u);
    ctx->pc = 0x1997B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1997ACu;
    // 0x1997b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x1997ACu, 0x1997B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1997B4u;
label_1997b4:
    // 0x1997b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1997b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1997b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1997b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1997bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1997bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1997c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1997c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1997c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1997c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1997c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1997C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1997C8u;
        // 0x1997cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1997C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1997D0u;
}
