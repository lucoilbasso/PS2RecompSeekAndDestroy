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

// Function: entry_00193cb0
// Address: 0x193cb0 - 0x193cd8
void entry_00193cb0_0x193cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193cb0_0x193cb0");
#endif

    switch (ctx->pc) {
        case 0x193cd4u: goto label_193cd4;
        default: break;
    }

    ctx->pc = 0x193cb0u;

    // 0x193cb0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x193cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x193cb4: 0x2c420400  sltiu       $v0, $v0, 0x400
    ctx->pc = 0x193cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x193cb8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x193CB8u;
    {
        const bool branch_taken_0x193cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193cb8) {
            ctx->pc = 0x193CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193CB8u;
            // 0x193cbc: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193CD8u;
            return;
        }
    }
    ctx->pc = 0x193CC0u;
    // 0x193cc0: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x193cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x193cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x193cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193cc8: 0x24a58220  addiu       $a1, $a1, -0x7DE0
    ctx->pc = 0x193cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935072));
    // 0x193ccc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x193CCCu;
    SET_GPR_U32(ctx, 31, 0x193CD4u);
    ctx->pc = 0x193CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193CCCu;
    // 0x193cd0: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x193CCCu, 0x193CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193CD4u;
label_193cd4:
    // 0x193cd4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x193cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->pc = 0x193cd8u;
}
