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

// Function: entry_00178214
// Address: 0x178214 - 0x178244
void entry_00178214_0x178214(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178214_0x178214");
#endif

    switch (ctx->pc) {
        case 0x178228u: goto label_178228;
        default: break;
    }

    ctx->pc = 0x178214u;

    // 0x178214: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x178214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x178218: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x178218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17821c: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x17821cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x178220: 0xc06cbb2  jal         func_1B2EC8
    ctx->pc = 0x178220u;
    SET_GPR_U32(ctx, 31, 0x178228u);
    ctx->pc = 0x178224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178220u;
    // 0x178224: 0x632c0  sll         $a2, $a2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2EC8u, 0x178220u, 0x178228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178228u;
label_178228:
    // 0x178228: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x178228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x17822c: 0x24a579a0  addiu       $a1, $a1, 0x79A0
    ctx->pc = 0x17822cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31136));
    // 0x178230: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x178230u;
    {
        const bool branch_taken_0x178230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x178234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178230u;
        // 0x178234: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178230) {
            ctx->pc = 0x178244u;
            return;
        }
    }
    ctx->pc = 0x178238u;
    // 0x178238: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x178238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x17823c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x17823Cu;
    SET_GPR_U32(ctx, 31, 0x178244u);
    ctx->pc = 0x178240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17823Cu;
    // 0x178240: 0x8c440024  lw          $a0, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x17823Cu, 0x178244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178244u;
}
