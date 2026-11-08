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

// Function: entry_001d3c10
// Address: 0x1d3c10 - 0x1d3c20
void entry_001d3c10_0x1d3c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3c10_0x1d3c10");
#endif

    switch (ctx->pc) {
        case 0x1d3c1cu: goto label_1d3c1c;
        default: break;
    }

    ctx->pc = 0x1d3c10u;

    // 0x1d3c10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d3c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3c14: 0xc07566e  jal         func_1D59B8
    ctx->pc = 0x1D3C14u;
    SET_GPR_U32(ctx, 31, 0x1D3C1Cu);
    ctx->pc = 0x1D3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C14u;
    // 0x1d3c18: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D59B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D59B8u, 0x1D3C14u, 0x1D3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3C1Cu;
label_1d3c1c:
    // 0x1d3c1c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x1d3c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x1d3c20u;
}
