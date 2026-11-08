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

// Function: TransToFBufferThreadProc__FP8BcThread
// Address: 0x17e7c0 - 0x17e814
void TransToFBufferThreadProc__FP8BcThread_0x17e7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TransToFBufferThreadProc__FP8BcThread_0x17e7c0");
#endif

    switch (ctx->pc) {
        case 0x17e7c0u: goto label_17e7c0;
        case 0x17e7c4u: goto label_17e7c4;
        case 0x17e7c8u: goto label_17e7c8;
        case 0x17e7ccu: goto label_17e7cc;
        case 0x17e7d0u: goto label_17e7d0;
        case 0x17e7d4u: goto label_17e7d4;
        case 0x17e7d8u: goto label_17e7d8;
        case 0x17e7dcu: goto label_17e7dc;
        case 0x17e7e0u: goto label_17e7e0;
        case 0x17e7e4u: goto label_17e7e4;
        case 0x17e7e8u: goto label_17e7e8;
        case 0x17e7ecu: goto label_17e7ec;
        case 0x17e7f0u: goto label_17e7f0;
        case 0x17e7f4u: goto label_17e7f4;
        case 0x17e7f8u: goto label_17e7f8;
        case 0x17e7fcu: goto label_17e7fc;
        case 0x17e800u: goto label_17e800;
        case 0x17e804u: goto label_17e804;
        case 0x17e808u: goto label_17e808;
        case 0x17e80cu: goto label_17e80c;
        case 0x17e810u: goto label_17e810;
        default: break;
    }

    ctx->pc = 0x17e7c0u;

label_17e7c0:
    // 0x17e7c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_17e7c4:
    // 0x17e7c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17e7c8:
    // 0x17e7c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17e7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17e7cc:
    // 0x17e7cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17e7d0:
    // 0x17e7d0: 0x48000  sll         $s0, $a0, 0
    ctx->pc = 0x17e7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 0));
label_17e7d4:
    // 0x17e7d4: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x17e7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17e7d8:
    // 0x17e7d8: 0xc05f7be  jal         func_17DEF8
label_17e7dc:
    if (ctx->pc == 0x17E7DCu) {
        ctx->pc = 0x17E7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7D8u;
        // 0x17e7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E7E0u;
        goto label_17e7e0;
    }
    ctx->pc = 0x17E7D8u;
    SET_GPR_U32(ctx, 31, 0x17E7E0u);
    ctx->pc = 0x17E7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E7D8u;
    // 0x17e7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DEF8u, 0x17E7D8u, 0x17E7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E7E0u;
label_17e7e0:
    // 0x17e7e0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x17e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_17e7e4:
    // 0x17e7e4: 0x8e25003c  lw          $a1, 0x3C($s1)
    ctx->pc = 0x17e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_17e7e8:
    // 0x17e7e8: 0x40f809  jalr        $v0
label_17e7ec:
    if (ctx->pc == 0x17E7ECu) {
        ctx->pc = 0x17E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7E8u;
        // 0x17e7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E7F0u;
        goto label_17e7f0;
    }
    ctx->pc = 0x17E7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17E7F0u);
        ctx->pc = 0x17E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7E8u;
        // 0x17e7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E7E8u, 0x17E7F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17E7F0u;
label_17e7f0:
    // 0x17e7f0: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x17e7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
label_17e7f4:
    // 0x17e7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e7f8:
    // 0x17e7f8: 0xc06866c  jal         func_1A19B0
label_17e7fc:
    if (ctx->pc == 0x17E7FCu) {
        ctx->pc = 0x17E7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E7F8u;
        // 0x17e7fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E800u;
        goto label_17e800;
    }
    ctx->pc = 0x17E7F8u;
    SET_GPR_U32(ctx, 31, 0x17E800u);
    ctx->pc = 0x17E7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E7F8u;
    // 0x17e7fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A19B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A19B0u, 0x17E7F8u, 0x17E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E800u;
label_17e800:
    // 0x17e800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17e804:
    // 0x17e804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17e808:
    // 0x17e808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17e80c:
    // 0x17e80c: 0x3e00008  jr          $ra
label_17e810:
    if (ctx->pc == 0x17E810u) {
        ctx->pc = 0x17E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E80Cu;
        // 0x17e810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17E814u;
        goto label_fallthrough_0x17e80c;
    }
    ctx->pc = 0x17E80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E80Cu;
        // 0x17e810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17e80c:
    ctx->pc = 0x17E814u;
}
