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

// Function: entry_0014e544
// Address: 0x14e544 - 0x14e558
void entry_0014e544_0x14e544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014e544_0x14e544");
#endif

    switch (ctx->pc) {
        case 0x14e550u: goto label_14e550;
        default: break;
    }

    ctx->pc = 0x14e544u;

    // 0x14e544: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14e544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e548: 0xc056f3e  jal         func_15BCF8
    ctx->pc = 0x14E548u;
    SET_GPR_U32(ctx, 31, 0x14E550u);
    ctx->pc = 0x14E54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E548u;
    // 0x14e54c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF8u, 0x14E548u, 0x14E550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E550u;
label_14e550:
    // 0x14e550: 0x10000127  b           . + 4 + (0x127 << 2)
    ctx->pc = 0x14E550u;
    {
        const bool branch_taken_0x14e550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E550u;
        // 0x14e554: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e550) {
            ctx->pc = 0x14E9F0u;
            return;
        }
    }
    ctx->pc = 0x14E558u;
}
