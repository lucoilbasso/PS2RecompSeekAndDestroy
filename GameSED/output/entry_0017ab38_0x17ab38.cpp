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

// Function: entry_0017ab38
// Address: 0x17ab38 - 0x17ab58
void entry_0017ab38_0x17ab38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ab38_0x17ab38");
#endif

    switch (ctx->pc) {
        case 0x17ab50u: goto label_17ab50;
        default: break;
    }

    ctx->pc = 0x17ab38u;

    // 0x17ab38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ab3c: 0x14470006  bne         $v0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x17AB3Cu;
    {
        const bool branch_taken_0x17ab3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x17AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB3Cu;
        // 0x17ab40: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab3c) {
            ctx->pc = 0x17AB58u;
            return;
        }
    }
    ctx->pc = 0x17AB44u;
    // 0x17ab44: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x17ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x17ab48: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x17AB48u;
    SET_GPR_U32(ctx, 31, 0x17AB50u);
    ctx->pc = 0x17AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB48u;
    // 0x17ab4c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x17AB48u, 0x17AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB50u;
label_17ab50:
    // 0x17ab50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17AB50u;
    {
        const bool branch_taken_0x17ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB50u;
        // 0x17ab54: 0x8f828d10  lw          $v0, -0x72F0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab50) {
            ctx->pc = 0x17AB70u;
            return;
        }
    }
    ctx->pc = 0x17AB58u;
}
