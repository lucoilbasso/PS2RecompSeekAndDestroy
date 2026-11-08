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

// Function: entry_00152c94
// Address: 0x152c94 - 0x152cc0
void entry_00152c94_0x152c94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152c94_0x152c94");
#endif

    switch (ctx->pc) {
        case 0x152cb8u: goto label_152cb8;
        default: break;
    }

    ctx->pc = 0x152c94u;

    // 0x152c94: 0x1682000a  bne         $s4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x152C94u;
    {
        const bool branch_taken_0x152c94 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x152C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C94u;
        // 0x152c98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c94) {
            ctx->pc = 0x152CC0u;
            return;
        }
    }
    ctx->pc = 0x152C9Cu;
    // 0x152c9c: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x152C9Cu;
    {
        const bool branch_taken_0x152c9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x152c9c) {
            ctx->pc = 0x152CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152C9Cu;
            // 0x152ca0: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152CC4u;
            return;
        }
    }
    ctx->pc = 0x152CA4u;
    // 0x152ca4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x152ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152ca8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x152CA8u;
    {
        const bool branch_taken_0x152ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152ca8) {
            ctx->pc = 0x152CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152CA8u;
            // 0x152cac: 0x8e640010  lw          $a0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152CC4u;
            return;
        }
    }
    ctx->pc = 0x152CB0u;
    // 0x152cb0: 0xc054b5a  jal         func_152D68
    ctx->pc = 0x152CB0u;
    SET_GPR_U32(ctx, 31, 0x152CB8u);
    ctx->pc = 0x152CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152CB0u;
    // 0x152cb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152D68u, 0x152CB0u, 0x152CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152CB8u;
label_152cb8:
    // 0x152cb8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x152CB8u;
    {
        const bool branch_taken_0x152cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152cb8) {
            ctx->pc = 0x152CDCu;
            return;
        }
    }
    ctx->pc = 0x152CC0u;
}
