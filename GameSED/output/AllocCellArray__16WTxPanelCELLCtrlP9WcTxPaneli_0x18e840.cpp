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

// Function: AllocCellArray__16WTxPanelCELLCtrlP9WcTxPaneli
// Address: 0x18e840 - 0x18e8b0
void AllocCellArray__16WTxPanelCELLCtrlP9WcTxPaneli_0x18e840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocCellArray__16WTxPanelCELLCtrlP9WcTxPaneli_0x18e840");
#endif

    switch (ctx->pc) {
        case 0x18e878u: goto label_18e878;
        case 0x18e898u: goto label_18e898;
        default: break;
    }

    ctx->pc = 0x18e840u;

    // 0x18e840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18e848: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18e848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e84c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18e84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18e850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18e850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e854: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x18e854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e85c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18e85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e860: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x18e860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
    // 0x18e864: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18E864u;
    {
        const bool branch_taken_0x18e864 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E864u;
        // 0x18e868: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e864) {
            ctx->pc = 0x18E870u;
            goto label_18e870;
        }
    }
    ctx->pc = 0x18E86Cu;
    // 0x18e86c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18e870:
    // 0x18e870: 0xc068086  jal         func_1A0218
    ctx->pc = 0x18E870u;
    SET_GPR_U32(ctx, 31, 0x18E878u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x18E870u, 0x18E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E878u;
label_18e878:
    // 0x18e878: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x18e878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x18e87c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e880: 0x24a580e8  addiu       $a1, $a1, -0x7F18
    ctx->pc = 0x18e880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934760));
    // 0x18e884: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18e884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e888: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18E888u;
    {
        const bool branch_taken_0x18e888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E888u;
        // 0x18e88c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e888) {
            ctx->pc = 0x18E898u;
            goto label_18e898;
        }
    }
    ctx->pc = 0x18E890u;
    // 0x18e890: 0xc068186  jal         func_1A0618
    ctx->pc = 0x18E890u;
    SET_GPR_U32(ctx, 31, 0x18E898u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x18E890u, 0x18E898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E898u;
label_18e898:
    // 0x18e898: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x18e898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x18e89c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e89cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e8a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18e8a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18e8a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e8a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x18E8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8A8u;
        // 0x18e8ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E8B0u;
}
