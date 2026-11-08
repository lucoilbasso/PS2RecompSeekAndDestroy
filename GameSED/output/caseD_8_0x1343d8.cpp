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

// Function: caseD_8
// Address: 0x1343d8 - 0x1343f0
void caseD_8_0x1343d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1343d8");
#endif

    switch (ctx->pc) {
        case 0x1343e4u: goto label_1343e4;
        default: break;
    }

    ctx->pc = 0x1343d8u;

    // 0x1343d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1343d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1343dc: 0xc066800  jal         func_19A000
    ctx->pc = 0x1343DCu;
    SET_GPR_U32(ctx, 31, 0x1343E4u);
    ctx->pc = 0x1343E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1343DCu;
    // 0x1343e0: 0x8e510074  lw          $s1, 0x74($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A000u, 0x1343DCu, 0x1343E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1343E4u;
label_1343e4:
    // 0x1343e4: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x1343E4u;
    {
        const bool branch_taken_0x1343e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1343E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1343E4u;
        // 0x1343e8: 0x11202b  sltu        $a0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1343e4) {
            ctx->pc = 0x134684u;
            return;
        }
    }
    ctx->pc = 0x1343ECu;
    // 0x1343ec: 0x0  nop
    ctx->pc = 0x1343ecu;
    // NOP
    ctx->pc = 0x1343f0u;
}
