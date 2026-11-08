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

// Function: entry_00134260
// Address: 0x134260 - 0x134278
void entry_00134260_0x134260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134260_0x134260");
#endif

    switch (ctx->pc) {
        case 0x13426cu: goto label_13426c;
        default: break;
    }

    ctx->pc = 0x134260u;

    // 0x134260: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x134260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134264: 0xc04e458  jal         func_139160
    ctx->pc = 0x134264u;
    SET_GPR_U32(ctx, 31, 0x13426Cu);
    ctx->pc = 0x134268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134264u;
    // 0x134268: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139160u, 0x134264u, 0x13426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13426Cu;
label_13426c:
    // 0x13426c: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x13426Cu;
    {
        const bool branch_taken_0x13426c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13426Cu;
        // 0x134270: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13426c) {
            ctx->pc = 0x134680u;
            return;
        }
    }
    ctx->pc = 0x134274u;
    // 0x134274: 0x0  nop
    ctx->pc = 0x134274u;
    // NOP
    ctx->pc = 0x134278u;
}
