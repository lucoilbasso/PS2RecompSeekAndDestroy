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

// Function: entry_001d7f60
// Address: 0x1d7f60 - 0x1d7f8c
void entry_001d7f60_0x1d7f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d7f60_0x1d7f60");
#endif

    switch (ctx->pc) {
        case 0x1d7f74u: goto label_1d7f74;
        default: break;
    }

    ctx->pc = 0x1d7f60u;

    // 0x1d7f60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d7f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d7f64: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D7F64u;
    {
        const bool branch_taken_0x1d7f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F64u;
        // 0x1d7f68: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f64) {
            ctx->pc = 0x1D7F8Cu;
            return;
        }
    }
    ctx->pc = 0x1D7F6Cu;
    // 0x1d7f6c: 0xc0770a8  jal         func_1DC2A0
    ctx->pc = 0x1D7F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F74u);
    ctx->pc = 0x1DC2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC2A0u, 0x1D7F6Cu, 0x1D7F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F74u;
label_1d7f74:
    // 0x1d7f74: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d7f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d7f78: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d7f78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d7f7c: 0x24a54838  addiu       $a1, $a1, 0x4838
    ctx->pc = 0x1d7f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18488));
    // 0x1d7f80: 0x24c614a0  addiu       $a2, $a2, 0x14A0
    ctx->pc = 0x1d7f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5280));
    // 0x1d7f84: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D7F84u;
    SET_GPR_U32(ctx, 31, 0x1D7F8Cu);
    ctx->pc = 0x1D7F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F84u;
    // 0x1d7f88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D7F84u, 0x1D7F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F8Cu;
}
