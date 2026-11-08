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

// Function: entry_0016e680
// Address: 0x16e680 - 0x16e698
void entry_0016e680_0x16e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e680_0x16e680");
#endif

    switch (ctx->pc) {
        case 0x16e688u: goto label_16e688;
        default: break;
    }

    ctx->pc = 0x16e680u;

    // 0x16e680: 0xc061422  jal         func_185088
    ctx->pc = 0x16E680u;
    SET_GPR_U32(ctx, 31, 0x16E688u);
    ctx->pc = 0x16E684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E680u;
    // 0x16e684: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x16E680u, 0x16E688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E688u;
label_16e688:
    // 0x16e688: 0x268300e0  addiu       $v1, $s4, 0xE0
    ctx->pc = 0x16e688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x16e68c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16E68Cu;
    {
        const bool branch_taken_0x16e68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E68Cu;
        // 0x16e690: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e68c) {
            ctx->pc = 0x16E6D4u;
            return;
        }
    }
    ctx->pc = 0x16E694u;
    // 0x16e694: 0x0  nop
    ctx->pc = 0x16e694u;
    // NOP
    ctx->pc = 0x16e698u;
}
