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

// Function: entry_001d30e8
// Address: 0x1d30e8 - 0x1d3128
void entry_001d30e8_0x1d30e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d30e8_0x1d30e8");
#endif

    switch (ctx->pc) {
        case 0x1d30f8u: goto label_1d30f8;
        default: break;
    }

    ctx->pc = 0x1d30e8u;

    // 0x1d30e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d30e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d30ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d30ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d30f0: 0xc072902  jal         func_1CA408
    ctx->pc = 0x1D30F0u;
    SET_GPR_U32(ctx, 31, 0x1D30F8u);
    ctx->pc = 0x1CA408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA408u, 0x1D30F0u, 0x1D30F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D30F8u;
label_1d30f8:
    // 0x1d30f8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D30F8u;
    {
        const bool branch_taken_0x1d30f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D30FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30F8u;
        // 0x1d30fc: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30f8) {
            ctx->pc = 0x1D3130u;
            return;
        }
    }
    ctx->pc = 0x1D3100u;
    // 0x1d3100: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d3100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3108: 0x3c030026  lui         $v1, 0x26
    ctx->pc = 0x1d3108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)38 << 16));
    // 0x1d310c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d310cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d3110: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1d3110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d3114: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D3114u;
    {
        const bool branch_taken_0x1d3114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3114u;
        // 0x1d3118: 0x2475c5e8  addiu       $s5, $v1, -0x3A18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3114) {
            ctx->pc = 0x1D3128u;
            return;
        }
    }
    ctx->pc = 0x1D311Cu;
    // 0x1d311c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1d311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1d3120: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x1d3120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1d3124: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d3124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1d3128u;
}
