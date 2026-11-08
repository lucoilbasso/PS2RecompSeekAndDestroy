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

// Function: entry_001d3e48
// Address: 0x1d3e48 - 0x1d3e70
void entry_001d3e48_0x1d3e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3e48_0x1d3e48");
#endif

    switch (ctx->pc) {
        case 0x1d3e68u: goto label_1d3e68;
        default: break;
    }

    ctx->pc = 0x1d3e48u;

    // 0x1d3e48: 0x1080009a  beqz        $a0, . + 4 + (0x9A << 2)
    ctx->pc = 0x1D3E48u;
    {
        const bool branch_taken_0x1d3e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E48u;
        // 0x1d3e4c: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e48) {
            ctx->pc = 0x1D40B4u;
            return;
        }
    }
    ctx->pc = 0x1D3E50u;
    // 0x1d3e50: 0x1a200007  blez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3E50u;
    {
        const bool branch_taken_0x1d3e50 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1D3E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E50u;
        // 0x1d3e54: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e50) {
            ctx->pc = 0x1D3E70u;
            return;
        }
    }
    ctx->pc = 0x1D3E58u;
    // 0x1d3e58: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x1d3e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1d3e5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d3e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e60: 0xc0756ae  jal         func_1D5AB8
    ctx->pc = 0x1D3E60u;
    SET_GPR_U32(ctx, 31, 0x1D3E68u);
    ctx->pc = 0x1D3E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3E60u;
    // 0x1d3e64: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5AB8u, 0x1D3E60u, 0x1D3E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3E68u;
label_1d3e68:
    // 0x1d3e68: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1d3e6c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x1d3e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->pc = 0x1d3e70u;
}
