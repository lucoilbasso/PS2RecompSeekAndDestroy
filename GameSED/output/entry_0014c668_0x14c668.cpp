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

// Function: entry_0014c668
// Address: 0x14c668 - 0x14c6c0
void entry_0014c668_0x14c668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c668_0x14c668");
#endif

    switch (ctx->pc) {
        case 0x14c694u: goto label_14c694;
        case 0x14c6a4u: goto label_14c6a4;
        default: break;
    }

    ctx->pc = 0x14c668u;

    // 0x14c668: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c66c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14c66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14c670: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14c670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14c678: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14c678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14c67c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14c67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14c680: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x14c680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    // 0x14c684: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x14c684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x14c688: 0x8c710040  lw          $s1, 0x40($v1)
    ctx->pc = 0x14c688u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x14c68c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x14C68Cu;
    SET_GPR_U32(ctx, 31, 0x14C694u);
    ctx->pc = 0x14C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C68Cu;
    // 0x14c690: 0x8cb30044  lw          $s3, 0x44($a1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x14C68Cu, 0x14C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C694u;
label_14c694:
    // 0x14c694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c69c: 0xc053162  jal         func_14C588
    ctx->pc = 0x14C69Cu;
    SET_GPR_U32(ctx, 31, 0x14C6A4u);
    ctx->pc = 0x14C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C69Cu;
    // 0x14c6a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C588u, 0x14C69Cu, 0x14C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6A4u;
label_14c6a4:
    // 0x14c6a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14c6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c6a8: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x14c6a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14c6ac: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x14c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x14c6b0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C6B0u;
    {
        const bool branch_taken_0x14c6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C6B0u;
        // 0x14c6b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6b0) {
            ctx->pc = 0x14C6C0u;
            return;
        }
    }
    ctx->pc = 0x14C6B8u;
    // 0x14c6b8: 0xc0535b0  jal         func_14D6C0
    ctx->pc = 0x14C6B8u;
    SET_GPR_U32(ctx, 31, 0x14C6C0u);
    ctx->pc = 0x14D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D6C0u, 0x14C6B8u, 0x14C6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6C0u;
}
