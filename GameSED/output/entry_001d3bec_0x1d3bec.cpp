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

// Function: entry_001d3bec
// Address: 0x1d3bec - 0x1d3c10
void entry_001d3bec_0x1d3bec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3bec_0x1d3bec");
#endif

    switch (ctx->pc) {
        case 0x1d3c08u: goto label_1d3c08;
        default: break;
    }

    ctx->pc = 0x1d3becu;

    // 0x1d3bec: 0x528023  subu        $s0, $v0, $s2
    ctx->pc = 0x1d3becu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1d3bf0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1D3BF0u;
    {
        const bool branch_taken_0x1d3bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3bf0) {
            ctx->pc = 0x1D3BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3BF0u;
            // 0x1d3bf4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3C24u;
            return;
        }
    }
    ctx->pc = 0x1D3BF8u;
    // 0x1d3bf8: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x1d3bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1d3bfc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d3bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c00: 0xc07566e  jal         func_1D59B8
    ctx->pc = 0x1D3C00u;
    SET_GPR_U32(ctx, 31, 0x1D3C08u);
    ctx->pc = 0x1D3C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C00u;
    // 0x1d3c04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59B8u, 0x1D3C00u, 0x1D3C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C08u;
label_1d3c08:
    // 0x1d3c08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3C08u;
    {
        const bool branch_taken_0x1d3c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3C08u;
        // 0x1d3c0c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3c08) {
            ctx->pc = 0x1D3C20u;
            return;
        }
    }
    ctx->pc = 0x1D3C10u;
}
