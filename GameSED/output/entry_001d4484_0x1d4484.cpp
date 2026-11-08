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

// Function: entry_001d4484
// Address: 0x1d4484 - 0x1d44b8
void entry_001d4484_0x1d4484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4484_0x1d4484");
#endif

    switch (ctx->pc) {
        case 0x1d44a0u: goto label_1d44a0;
        default: break;
    }

    ctx->pc = 0x1d4484u;

    // 0x1d4484: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d4484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4488: 0x0  nop
    ctx->pc = 0x1d4488u;
    // NOP
    // 0x1d448c: 0x5480fff0  bnel        $a0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D448Cu;
    {
        const bool branch_taken_0x1d448c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d448c) {
            ctx->pc = 0x1D4490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D448Cu;
            // 0x1d4490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4450u;
            return;
        }
    }
    ctx->pc = 0x1D4494u;
    // 0x1d4494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4498: 0xc0750ea  jal         func_1D43A8
    ctx->pc = 0x1D4498u;
    SET_GPR_U32(ctx, 31, 0x1D44A0u);
    ctx->pc = 0x1D449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4498u;
    // 0x1d449c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43A8u, 0x1D4498u, 0x1D44A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D44A0u;
label_1d44a0:
    // 0x1d44a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d44a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d44a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1d44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1d44a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D44A8u;
    {
        const bool branch_taken_0x1d44a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44A8u;
        // 0x1d44ac: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44a8) {
            ctx->pc = 0x1D44B8u;
            return;
        }
    }
    ctx->pc = 0x1D44B0u;
    // 0x1d44b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D44B0u;
    {
        const bool branch_taken_0x1d44b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D44B0u;
        // 0x1d44b4: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d44b0) {
            ctx->pc = 0x1D4500u;
            return;
        }
    }
    ctx->pc = 0x1D44B8u;
}
