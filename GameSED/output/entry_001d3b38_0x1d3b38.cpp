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

// Function: entry_001d3b38
// Address: 0x1d3b38 - 0x1d3b5c
void entry_001d3b38_0x1d3b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3b38_0x1d3b38");
#endif

    switch (ctx->pc) {
        case 0x1d3b4cu: goto label_1d3b4c;
        default: break;
    }

    ctx->pc = 0x1d3b38u;

    // 0x1d3b38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3b3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d3b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3b40: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1d3b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1d3b44: 0xc0755dc  jal         func_1D5770
    ctx->pc = 0x1D3B44u;
    SET_GPR_U32(ctx, 31, 0x1D3B4Cu);
    ctx->pc = 0x1D3B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B44u;
    // 0x1d3b48: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5770u, 0x1D3B44u, 0x1D3B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B4Cu;
label_1d3b4c:
    // 0x1d3b4c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1d3b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3b50: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1d3b54: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x1d3b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1d3b58: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1d3b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    ctx->pc = 0x1d3b5cu;
}
