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

// Function: entry_001d31ec
// Address: 0x1d31ec - 0x1d3210
void entry_001d31ec_0x1d31ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d31ec_0x1d31ec");
#endif

    switch (ctx->pc) {
        case 0x1d31f4u: goto label_1d31f4;
        default: break;
    }

    ctx->pc = 0x1d31ecu;

    // 0x1d31ec: 0xc072916  jal         func_1CA458
    ctx->pc = 0x1D31ECu;
    SET_GPR_U32(ctx, 31, 0x1D31F4u);
    ctx->pc = 0x1D31F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D31ECu;
    // 0x1d31f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA458u, 0x1D31ECu, 0x1D31F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D31F4u;
label_1d31f4:
    // 0x1d31f4: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D31F4u;
    {
        const bool branch_taken_0x1d31f4 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1d31f4) {
            ctx->pc = 0x1D3210u;
            return;
        }
    }
    ctx->pc = 0x1D31FCu;
    // 0x1d31fc: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x1d31fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x1d3200: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x1d3200u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1d3204: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d3204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3208: 0xc0727e0  jal         func_1C9F80
    ctx->pc = 0x1D3208u;
    SET_GPR_U32(ctx, 31, 0x1D3210u);
    ctx->pc = 0x1C9F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9F80u, 0x1D3208u, 0x1D3210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3210u;
}
