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

// Function: entry_00102378
// Address: 0x102378 - 0x1023c0
void entry_00102378_0x102378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102378_0x102378");
#endif

    switch (ctx->pc) {
        case 0x102380u: goto label_102380;
        case 0x102388u: goto label_102388;
        default: break;
    }

    ctx->pc = 0x102378u;

    // 0x102378: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x102378u;
    SET_GPR_U32(ctx, 31, 0x102380u);
    ctx->pc = 0x10237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102378u;
    // 0x10237c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x102378u, 0x102380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102380u;
label_102380:
    // 0x102380: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x102380u;
    SET_GPR_U32(ctx, 31, 0x102388u);
    ctx->pc = 0x102384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102380u;
    // 0x102384: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x102380u, 0x102388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102388u;
label_102388:
    // 0x102388: 0x141980  sll         $v1, $s4, 6
    ctx->pc = 0x102388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x10238c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x102390: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
    ctx->pc = 0x102390u;
    {
        const bool branch_taken_0x102390 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x102394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102390u;
        // 0x102394: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102390) {
            ctx->pc = 0x102460u;
            return;
        }
    }
    ctx->pc = 0x102398u;
    // 0x102398: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x102398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10239c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10239cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1023a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1023A0u;
    {
        const bool branch_taken_0x1023a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1023A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1023A0u;
        // 0x1023a4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1023a0) {
            ctx->pc = 0x1023C0u;
            return;
        }
    }
    ctx->pc = 0x1023A8u;
    // 0x1023a8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1023a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1023ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1023acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1023b0: 0x24a51a10  addiu       $a1, $a1, 0x1A10
    ctx->pc = 0x1023b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6672));
    // 0x1023b4: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1023b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1023b8: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x1023B8u;
    SET_GPR_U32(ctx, 31, 0x1023C0u);
    ctx->pc = 0x1023BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1023B8u;
    // 0x1023bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x1023B8u, 0x1023C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1023C0u;
}
