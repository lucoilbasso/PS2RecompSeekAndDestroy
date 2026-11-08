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

// Function: entry_001c1a74
// Address: 0x1c1a74 - 0x1c1a98
void entry_001c1a74_0x1c1a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1a74_0x1c1a74");
#endif

    switch (ctx->pc) {
        case 0x1c1a84u: goto label_1c1a84;
        default: break;
    }

    ctx->pc = 0x1c1a74u;

    // 0x1c1a74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c1a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a78: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1c1a78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1a7c: 0xc0705da  jal         func_1C1768
    ctx->pc = 0x1C1A7Cu;
    SET_GPR_U32(ctx, 31, 0x1C1A84u);
    ctx->pc = 0x1C1A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1A7Cu;
    // 0x1c1a80: 0x26440004  addiu       $a0, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1768u, 0x1C1A7Cu, 0x1C1A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1A84u;
label_1c1a84:
    // 0x1c1a84: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1A84u;
    {
        const bool branch_taken_0x1c1a84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1a84) {
            ctx->pc = 0x1C1A98u;
            return;
        }
    }
    ctx->pc = 0x1C1A8Cu;
    // 0x1c1a8c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1c1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c1a90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1c1a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c1a94: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1c1a94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1c1a98u;
}
