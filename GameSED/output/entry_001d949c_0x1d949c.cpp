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

// Function: entry_001d949c
// Address: 0x1d949c - 0x1d94bc
void entry_001d949c_0x1d949c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d949c_0x1d949c");
#endif

    switch (ctx->pc) {
        case 0x1d94b8u: goto label_1d94b8;
        default: break;
    }

    ctx->pc = 0x1d949cu;

    // 0x1d949c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D949Cu;
    {
        const bool branch_taken_0x1d949c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d949c) {
            ctx->pc = 0x1D94A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D949Cu;
            // 0x1d94a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D94BCu;
            return;
        }
    }
    ctx->pc = 0x1D94A4u;
    // 0x1d94a4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d94a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d94a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d94a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94ac: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x1d94acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1d94b0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D94B0u;
    SET_GPR_U32(ctx, 31, 0x1D94B8u);
    ctx->pc = 0x1D94B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94B0u;
    // 0x1d94b4: 0x24a56c48  addiu       $a1, $a1, 0x6C48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D94B0u, 0x1D94B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94B8u;
label_1d94b8:
    // 0x1d94b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d94b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d94bcu;
}
