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

// Function: entry_001235cc
// Address: 0x1235cc - 0x1235ec
void entry_001235cc_0x1235cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001235cc_0x1235cc");
#endif

    switch (ctx->pc) {
        case 0x1235d8u: goto label_1235d8;
        default: break;
    }

    ctx->pc = 0x1235ccu;

    // 0x1235cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1235ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1235d0: 0xc04844a  jal         func_121128
    ctx->pc = 0x1235D0u;
    SET_GPR_U32(ctx, 31, 0x1235D8u);
    ctx->pc = 0x1235D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235D0u;
    // 0x1235d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1235D0u, 0x1235D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1235D8u;
label_1235d8:
    // 0x1235d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1235D8u;
    {
        const bool branch_taken_0x1235d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1235d8) {
            ctx->pc = 0x1235DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1235D8u;
            // 0x1235dc: 0x8e030114  lw          $v1, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1235ECu;
            return;
        }
    }
    ctx->pc = 0x1235E0u;
    // 0x1235e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1235e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1235e4: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x1235e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x1235e8: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x1235e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    ctx->pc = 0x1235ecu;
}
