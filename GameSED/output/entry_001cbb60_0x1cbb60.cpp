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

// Function: entry_001cbb60
// Address: 0x1cbb60 - 0x1cbb88
void entry_001cbb60_0x1cbb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cbb60_0x1cbb60");
#endif

    switch (ctx->pc) {
        case 0x1cbb80u: goto label_1cbb80;
        default: break;
    }

    ctx->pc = 0x1cbb60u;

    // 0x1cbb60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cbb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbb64: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1cbb68: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1cbb68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbb6c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBB6Cu;
    {
        const bool branch_taken_0x1cbb6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB6Cu;
        // 0x1cbb70: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb6c) {
            ctx->pc = 0x1CBB88u;
            return;
        }
    }
    ctx->pc = 0x1CBB74u;
    // 0x1cbb74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb78: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CBB78u;
    SET_GPR_U32(ctx, 31, 0x1CBB80u);
    ctx->pc = 0x1CBB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB78u;
    // 0x1cbb7c: 0x27a504a0  addiu       $a1, $sp, 0x4A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CBB78u, 0x1CBB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB80u;
label_1cbb80:
    // 0x1cbb80: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x1cbb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1cbb84: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1cbb84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x1cbb88u;
}
