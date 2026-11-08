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

// Function: caseD_e
// Address: 0x134608 - 0x134618
void caseD_e_0x134608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x134608");
#endif

    switch (ctx->pc) {
        case 0x134610u: goto label_134610;
        default: break;
    }

    ctx->pc = 0x134608u;

    // 0x134608: 0xc04e4d4  jal         func_139350
    ctx->pc = 0x134608u;
    SET_GPR_U32(ctx, 31, 0x134610u);
    ctx->pc = 0x13460Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134608u;
    // 0x13460c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139350u, 0x134608u, 0x134610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134610u;
label_134610:
    // 0x134610: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x134610u;
    {
        const bool branch_taken_0x134610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134610u;
        // 0x134614: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134610) {
            ctx->pc = 0x134684u;
            return;
        }
    }
    ctx->pc = 0x134618u;
}
