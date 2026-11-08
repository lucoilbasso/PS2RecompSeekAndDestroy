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

// Function: EffectLineInit__FPUi
// Address: 0x12c658 - 0x12c71c
void EffectLineInit__FPUi_0x12c658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectLineInit__FPUi_0x12c658");
#endif

    switch (ctx->pc) {
        case 0x12c674u: goto label_12c674;
        case 0x12c690u: goto label_12c690;
        case 0x12c6b0u: goto label_12c6b0;
        case 0x12c6c4u: goto label_12c6c4;
        case 0x12c6d0u: goto label_12c6d0;
        case 0x12c704u: goto label_12c704;
        default: break;
    }

    ctx->pc = 0x12c658u;

    // 0x12c658: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c65c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x12c65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x12c660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c664: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c66c: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C66Cu;
    SET_GPR_U32(ctx, 31, 0x12C674u);
    ctx->pc = 0x12C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C66Cu;
    // 0x12c670: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C66Cu, 0x12C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C674u;
label_12c674:
    // 0x12c674: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c674u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c678: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c67c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x12c67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x12c680: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x12C680u;
    {
        const bool branch_taken_0x12c680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C680u;
        // 0x12c684: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c680) {
            ctx->pc = 0x12C708u;
            goto label_12c708;
        }
    }
    ctx->pc = 0x12C688u;
    // 0x12c688: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C688u;
    SET_GPR_U32(ctx, 31, 0x12C690u);
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C688u, 0x12C690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C690u;
label_12c690:
    // 0x12c690: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x12c690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x12c694: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c694u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c698: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C698u;
    {
        const bool branch_taken_0x12c698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C698u;
        // 0x12c69c: 0x24845df0  addiu       $a0, $a0, 0x5DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c698) {
            ctx->pc = 0x12C6A8u;
            goto label_12c6a8;
        }
    }
    ctx->pc = 0x12C6A0u;
    // 0x12c6a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12C6A0u;
    {
        const bool branch_taken_0x12c6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6A0u;
        // 0x12c6a4: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6a0) {
            ctx->pc = 0x12C6C4u;
            goto label_12c6c4;
        }
    }
    ctx->pc = 0x12C6A8u;
label_12c6a8:
    // 0x12c6a8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x12C6A8u;
    SET_GPR_U32(ctx, 31, 0x12C6B0u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x12C6A8u, 0x12C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6B0u;
label_12c6b0:
    // 0x12c6b0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12c6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12c6b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12c6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6b8: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x12c6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x12c6bc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12C6BCu;
    SET_GPR_U32(ctx, 31, 0x12C6C4u);
    ctx->pc = 0x12C6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6BCu;
    // 0x12c6c0: 0x24a55e08  addiu       $a1, $a1, 0x5E08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12C6BCu, 0x12C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6C4u;
label_12c6c4:
    // 0x12c6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6c8: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C6C8u;
    SET_GPR_U32(ctx, 31, 0x12C6D0u);
    ctx->pc = 0x12C6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6C8u;
    // 0x12c6cc: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C6C8u, 0x12C6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6D0u;
label_12c6d0:
    // 0x12c6d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12c6d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C6D8u;
    {
        const bool branch_taken_0x12c6d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6D8u;
        // 0x12c6dc: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6d8) {
            ctx->pc = 0x12C6E8u;
            goto label_12c6e8;
        }
    }
    ctx->pc = 0x12C6E0u;
    // 0x12c6e0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12C6E0u;
    {
        const bool branch_taken_0x12c6e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C6E0u;
        // 0x12c6e4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c6e0) {
            ctx->pc = 0x12C6FCu;
            goto label_12c6fc;
        }
    }
    ctx->pc = 0x12C6E8u;
label_12c6e8:
    // 0x12c6e8: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x12c6e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12c6ec: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x12c6ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12c6f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x12c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x12c6f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12c6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12c6f8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x12c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_12c6fc:
    // 0x12c6fc: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C6FCu;
    SET_GPR_U32(ctx, 31, 0x12C704u);
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C6FCu, 0x12C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C704u;
label_12c704:
    // 0x12c704: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12c704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_12c708:
    // 0x12c708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c70c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c70cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c710: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c714: 0x3e00008  jr          $ra
    ctx->pc = 0x12C714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C714u;
        // 0x12c718: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C71Cu;
}
