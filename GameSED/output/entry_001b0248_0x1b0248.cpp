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

// Function: entry_001b0248
// Address: 0x1b0248 - 0x1b0274
void entry_001b0248_0x1b0248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0248_0x1b0248");
#endif

    ctx->pc = 0x1b0248u;

    // 0x1b0248: 0x1880004f  blez        $a0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1B0248u;
    {
        const bool branch_taken_0x1b0248 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0248u;
        // 0x1b024c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0248) {
            ctx->pc = 0x1B0388u;
            return;
        }
    }
    ctx->pc = 0x1B0250u;
    // 0x1b0250: 0x52000019  beql        $s0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B0250u;
    {
        const bool branch_taken_0x1b0250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0250) {
            ctx->pc = 0x1B0254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0250u;
            // 0x1b0254: 0x8e320014  lw          $s2, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B02B8u;
            return;
        }
    }
    ctx->pc = 0x1B0258u;
    // 0x1b0258: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1b0258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1b025c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b0260: 0x2c420141  sltiu       $v0, $v0, 0x141
    ctx->pc = 0x1b0260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)321) ? 1 : 0);
    // 0x1b0264: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0264u;
    {
        const bool branch_taken_0x1b0264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0264u;
        // 0x1b0268: 0x3c040026  lui         $a0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0264) {
            ctx->pc = 0x1B0274u;
            return;
        }
    }
    ctx->pc = 0x1B026Cu;
    // 0x1b026c: 0xc06c3e2  jal         func_1B0F88
    ctx->pc = 0x1B026Cu;
    SET_GPR_U32(ctx, 31, 0x1B0274u);
    ctx->pc = 0x1B0270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B026Cu;
    // 0x1b0270: 0x2484aa48  addiu       $a0, $a0, -0x55B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0F88u, 0x1B026Cu, 0x1B0274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0274u;
}
