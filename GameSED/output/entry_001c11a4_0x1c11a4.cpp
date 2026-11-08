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

// Function: entry_001c11a4
// Address: 0x1c11a4 - 0x1c11c4
void entry_001c11a4_0x1c11a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c11a4_0x1c11a4");
#endif

    switch (ctx->pc) {
        case 0x1c11bcu: goto label_1c11bc;
        default: break;
    }

    ctx->pc = 0x1c11a4u;

    // 0x1c11a4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C11A4u;
    {
        const bool branch_taken_0x1c11a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c11a4) {
            ctx->pc = 0x1C11A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C11A4u;
            // 0x1c11a8: 0x8e020810  lw          $v0, 0x810($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C11C4u;
            return;
        }
    }
    ctx->pc = 0x1C11ACu;
    // 0x1c11ac: 0x8e050810  lw          $a1, 0x810($s0)
    ctx->pc = 0x1c11acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    // 0x1c11b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11b4: 0xc06fe4a  jal         func_1BF928
    ctx->pc = 0x1C11B4u;
    SET_GPR_U32(ctx, 31, 0x1C11BCu);
    ctx->pc = 0x1C11B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11B4u;
    // 0x1c11b8: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF928u, 0x1C11B4u, 0x1C11BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11BCu;
label_1c11bc:
    // 0x1c11bc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1c11bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c11c0: 0x8e020810  lw          $v0, 0x810($s0)
    ctx->pc = 0x1c11c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2064)));
    ctx->pc = 0x1c11c4u;
}
