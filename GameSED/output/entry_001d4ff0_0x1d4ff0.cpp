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

// Function: entry_001d4ff0
// Address: 0x1d4ff0 - 0x1d5018
void entry_001d4ff0_0x1d4ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4ff0_0x1d4ff0");
#endif

    switch (ctx->pc) {
        case 0x1d5008u: goto label_1d5008;
        default: break;
    }

    ctx->pc = 0x1d4ff0u;

    // 0x1d4ff0: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x1d4ff0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d4ff4: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4FF4u;
    {
        const bool branch_taken_0x1d4ff4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FF4u;
        // 0x1d4ff8: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ff4) {
            ctx->pc = 0x1D5018u;
            return;
        }
    }
    ctx->pc = 0x1D4FFCu;
    // 0x1d4ffc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d4ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d5000: 0xc0759a8  jal         func_1D66A0
    ctx->pc = 0x1D5000u;
    SET_GPR_U32(ctx, 31, 0x1D5008u);
    ctx->pc = 0x1D5004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5000u;
    // 0x1d5004: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66A0u, 0x1D5000u, 0x1D5008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5008u;
label_1d5008:
    // 0x1d5008: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5008u;
    {
        const bool branch_taken_0x1d5008 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5008u;
        // 0x1d500c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5008) {
            ctx->pc = 0x1D5028u;
            return;
        }
    }
    ctx->pc = 0x1D5010u;
    // 0x1d5010: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d5010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5014: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x1d5014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    ctx->pc = 0x1d5018u;
}
