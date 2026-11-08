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

// Function: caseD_20
// Address: 0x111060 - 0x111094
void caseD_20_0x111060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_20_0x111060");
#endif

    switch (ctx->pc) {
        case 0x111068u: goto label_111068;
        case 0x111090u: goto label_111090;
        default: break;
    }

    ctx->pc = 0x111060u;

    // 0x111060: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x111060u;
    SET_GPR_U32(ctx, 31, 0x111068u);
    ctx->pc = 0x111064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111060u;
    // 0x111064: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x111060u, 0x111068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111068u;
label_111068:
    // 0x111068: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x111068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x11106c: 0x30510fff  andi        $s1, $v0, 0xFFF
    ctx->pc = 0x11106cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x111070: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x111070u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x111074: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x111074u;
    {
        const bool branch_taken_0x111074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x111074) {
            ctx->pc = 0x111078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111074u;
            // 0x111078: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x111094u;
            return;
        }
    }
    ctx->pc = 0x11107Cu;
    // 0x11107c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11107cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x111080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111084: 0x24a53ed0  addiu       $a1, $a1, 0x3ED0
    ctx->pc = 0x111084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16080));
    // 0x111088: 0xc068186  jal         func_1A0618
    ctx->pc = 0x111088u;
    SET_GPR_U32(ctx, 31, 0x111090u);
    ctx->pc = 0x11108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111088u;
    // 0x11108c: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x111088u, 0x111090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111090u;
label_111090:
    // 0x111090: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x111090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->pc = 0x111094u;
}
