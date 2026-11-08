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

// Function: entry_0016fb74
// Address: 0x16fb74 - 0x16fb9c
void entry_0016fb74_0x16fb74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fb74_0x16fb74");
#endif

    ctx->pc = 0x16fb74u;

    // 0x16fb74: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16FB74u;
    {
        const bool branch_taken_0x16fb74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB74u;
        // 0x16fb78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb74) {
            ctx->pc = 0x16FBC8u;
            return;
        }
    }
    ctx->pc = 0x16FB7Cu;
    // 0x16fb7c: 0x8f828b68  lw          $v0, -0x7498($gp)
    ctx->pc = 0x16fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x16fb80: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x16fb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16fb84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16FB84u;
    {
        const bool branch_taken_0x16fb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FB84u;
        // 0x16fb88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb84) {
            ctx->pc = 0x16FB9Cu;
            return;
        }
    }
    ctx->pc = 0x16FB8Cu;
    // 0x16fb8c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16fb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16fb90: 0x24a57590  addiu       $a1, $a1, 0x7590
    ctx->pc = 0x16fb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30096));
    // 0x16fb94: 0xc068186  jal         func_1A0618
    ctx->pc = 0x16FB94u;
    SET_GPR_U32(ctx, 31, 0x16FB9Cu);
    ctx->pc = 0x16FB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FB94u;
    // 0x16fb98: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x16FB94u, 0x16FB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FB9Cu;
}
