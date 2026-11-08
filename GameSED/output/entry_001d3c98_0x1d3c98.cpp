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

// Function: entry_001d3c98
// Address: 0x1d3c98 - 0x1d3cc0
void entry_001d3c98_0x1d3c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3c98_0x1d3c98");
#endif

    switch (ctx->pc) {
        case 0x1d3cb4u: goto label_1d3cb4;
        default: break;
    }

    ctx->pc = 0x1d3c98u;

    // 0x1d3c98: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D3C98u;
    {
        const bool branch_taken_0x1d3c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C98u;
        // 0x1d3c9c: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c98) {
            ctx->pc = 0x1D3CC0u;
            return;
        }
    }
    ctx->pc = 0x1D3CA0u;
    // 0x1d3ca0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1d3ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d3ca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d3ca8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d3ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3cac: 0xc07558c  jal         func_1D5630
    ctx->pc = 0x1D3CACu;
    SET_GPR_U32(ctx, 31, 0x1D3CB4u);
    ctx->pc = 0x1D3CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3CACu;
    // 0x1d3cb0: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5630u, 0x1D3CACu, 0x1D3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3CB4u;
label_1d3cb4:
    // 0x1d3cb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d3cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d3cb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3CB8u;
    {
        const bool branch_taken_0x1d3cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3CB8u;
        // 0x1d3cbc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3cb8) {
            ctx->pc = 0x1D3CC8u;
            return;
        }
    }
    ctx->pc = 0x1D3CC0u;
}
