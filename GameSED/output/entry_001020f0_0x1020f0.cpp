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

// Function: entry_001020f0
// Address: 0x1020f0 - 0x102118
void entry_001020f0_0x1020f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001020f0_0x1020f0");
#endif

    ctx->pc = 0x1020f0u;

    // 0x1020f0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x1020f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1020f4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1020f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1020f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1020F8u;
    {
        const bool branch_taken_0x1020f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1020FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1020F8u;
        // 0x1020fc: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020f8) {
            ctx->pc = 0x102118u;
            return;
        }
    }
    ctx->pc = 0x102100u;
    // 0x102100: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x102100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x102104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x102104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102108: 0x24a51ac8  addiu       $a1, $a1, 0x1AC8
    ctx->pc = 0x102108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6856));
    // 0x10210c: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x10210cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x102110: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x102110u;
    SET_GPR_U32(ctx, 31, 0x102118u);
    ctx->pc = 0x102114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102110u;
    // 0x102114: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x102110u, 0x102118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102118u;
}
