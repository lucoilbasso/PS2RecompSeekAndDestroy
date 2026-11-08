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

// Function: LoadPoint__7WcSheet
// Address: 0x1df798 - 0x1df888
void LoadPoint__7WcSheet_0x1df798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadPoint__7WcSheet_0x1df798");
#endif

    switch (ctx->pc) {
        case 0x1df7d0u: goto label_1df7d0;
        case 0x1df7f0u: goto label_1df7f0;
        case 0x1df808u: goto label_1df808;
        default: break;
    }

    ctx->pc = 0x1df798u;

    // 0x1df798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1df798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1df79c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1df79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1df7a0: 0x249101d0  addiu       $s1, $a0, 0x1D0
    ctx->pc = 0x1df7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    // 0x1df7a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1df7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1df7a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1df7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1df7ac: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1df7acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df7b0: 0x54a00026  bnel        $a1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DF7B0u;
    {
        const bool branch_taken_0x1df7b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df7b0) {
            ctx->pc = 0x1DF7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF7B0u;
            // 0x1df7b4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF84Cu;
            goto label_1df84c;
        }
    }
    ctx->pc = 0x1DF7B8u;
    // 0x1df7b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df7bc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF7BCu;
    {
        const bool branch_taken_0x1df7bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7BCu;
        // 0x1df7c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7bc) {
            ctx->pc = 0x1DF7C8u;
            goto label_1df7c8;
        }
    }
    ctx->pc = 0x1DF7C4u;
    // 0x1df7c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1df7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1df7c8:
    // 0x1df7c8: 0xc068086  jal         func_1A0218
    ctx->pc = 0x1DF7C8u;
    SET_GPR_U32(ctx, 31, 0x1DF7D0u);
    ctx->pc = 0x1DF7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF7C8u;
    // 0x1df7cc: 0x240507f0  addiu       $a1, $zero, 0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x1DF7C8u, 0x1DF7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF7D0u;
label_1df7d0:
    // 0x1df7d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1df7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df7d4: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DF7D4u;
    {
        const bool branch_taken_0x1df7d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df7d4) {
            ctx->pc = 0x1DF7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF7D4u;
            // 0x1df7d8: 0xaca007e0  sw          $zero, 0x7E0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF7F8u;
            goto label_1df7f8;
        }
    }
    ctx->pc = 0x1DF7DCu;
    // 0x1df7dc: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1df7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1df7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df7e4: 0x24a581b0  addiu       $a1, $a1, -0x7E50
    ctx->pc = 0x1df7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
    // 0x1df7e8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DF7E8u;
    SET_GPR_U32(ctx, 31, 0x1DF7F0u);
    ctx->pc = 0x1DF7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF7E8u;
    // 0x1df7ec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DF7E8u, 0x1DF7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF7F0u;
label_1df7f0:
    // 0x1df7f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1DF7F0u;
    {
        const bool branch_taken_0x1df7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF7F0u;
        // 0x1df7f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7f0) {
            ctx->pc = 0x1DF844u;
            goto label_1df844;
        }
    }
    ctx->pc = 0x1DF7F8u;
label_1df7f8:
    // 0x1df7f8: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x1df7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1df7fc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1df7fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df800: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1df800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df804: 0x0  nop
    ctx->pc = 0x1df804u;
    // NOP
label_1df808:
    // 0x1df808: 0x54800002  bnel        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DF808u;
    {
        const bool branch_taken_0x1df808 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df808) {
            ctx->pc = 0x1DF80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DF808u;
            // 0x1df80c: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DF814u;
            goto label_1df814;
        }
    }
    ctx->pc = 0x1DF810u;
    // 0x1df810: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1df810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1df814:
    // 0x1df814: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x1df814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x1df818: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1df818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1df81c: 0x2882003f  slti        $v0, $a0, 0x3F
    ctx->pc = 0x1df81cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)63) ? 1 : 0);
    // 0x1df820: 0x0  nop
    ctx->pc = 0x1df820u;
    // NOP
    // 0x1df824: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DF824u;
    {
        const bool branch_taken_0x1df824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF824u;
        // 0x1df828: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df824) {
            ctx->pc = 0x1DF808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1df808;
        }
    }
    ctx->pc = 0x1DF82Cu;
    // 0x1df82c: 0x2462ffe0  addiu       $v0, $v1, -0x20
    ctx->pc = 0x1df82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x1df830: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1df830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1df834: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1df834u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1df838: 0xaca307e0  sw          $v1, 0x7E0($a1)
    ctx->pc = 0x1df838u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2016), GPR_U32(ctx, 3));
    // 0x1df83c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1df83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1df840: 0xae250004  sw          $a1, 0x4($s1)
    ctx->pc = 0x1df840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
label_1df844:
    // 0x1df844: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1df844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df848: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1df848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1df84c:
    // 0x1df84c: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x1df84cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x1df850: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1df850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1df854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1df854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1df858: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1df858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1df85c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1df85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1df860: 0x8c82d630  lw          $v0, -0x29D0($a0)
    ctx->pc = 0x1df860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x25D630u));
    // 0x1df864: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x1df864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x1df868: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1df868u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x1df86c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1df86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1df870: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1df870u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1df874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1df878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1df878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1df87c: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x1df87cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x1df880: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DF880u;
        // 0x1df884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DF880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DF888u;
}
