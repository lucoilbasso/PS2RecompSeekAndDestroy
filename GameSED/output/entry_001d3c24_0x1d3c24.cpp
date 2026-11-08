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

// Function: entry_001d3c24
// Address: 0x1d3c24 - 0x1d3c4c
void entry_001d3c24_0x1d3c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3c24_0x1d3c24");
#endif

    switch (ctx->pc) {
        case 0x1d3c2cu: goto label_1d3c2c;
        case 0x1d3c48u: goto label_1d3c48;
        default: break;
    }

    ctx->pc = 0x1d3c24u;

    // 0x1d3c24: 0xc0755dc  jal         func_1D5770
    ctx->pc = 0x1D3C24u;
    SET_GPR_U32(ctx, 31, 0x1D3C2Cu);
    ctx->pc = 0x1D3C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C24u;
    // 0x1d3c28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5770u, 0x1D3C24u, 0x1D3C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C2Cu;
label_1d3c2c:
    // 0x1d3c2c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d3c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1d3c30: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D3C30u;
    {
        const bool branch_taken_0x1d3c30 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1D3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C30u;
        // 0x1d3c34: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c30) {
            ctx->pc = 0x1D3C4Cu;
            return;
        }
    }
    ctx->pc = 0x1D3C38u;
    // 0x1d3c38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d3c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c3c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c40: 0xc07566e  jal         func_1D59B8
    ctx->pc = 0x1D3C40u;
    SET_GPR_U32(ctx, 31, 0x1D3C48u);
    ctx->pc = 0x1D3C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C40u;
    // 0x1d3c44: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59B8u, 0x1D3C40u, 0x1D3C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C48u;
label_1d3c48:
    // 0x1d3c48: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1d3c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x1d3c4cu;
}
