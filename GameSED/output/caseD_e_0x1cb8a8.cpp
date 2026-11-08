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
// Address: 0x1cb8a8 - 0x1cb8c8
void caseD_e_0x1cb8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x1cb8a8");
#endif

    switch (ctx->pc) {
        case 0x1cb8b4u: goto label_1cb8b4;
        default: break;
    }

    ctx->pc = 0x1cb8a8u;

    // 0x1cb8a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8ac: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CB8ACu;
    SET_GPR_U32(ctx, 31, 0x1CB8B4u);
    ctx->pc = 0x1CB8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8ACu;
    // 0x1cb8b0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CB8ACu, 0x1CB8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8B4u;
label_1cb8b4:
    // 0x1cb8b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cb8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cb8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8bc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1CB8BCu;
    {
        const bool branch_taken_0x1cb8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8BCu;
        // 0x1cb8c0: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8bc) {
            ctx->pc = 0x1CBA90u;
            return;
        }
    }
    ctx->pc = 0x1CB8C4u;
    // 0x1cb8c4: 0x0  nop
    ctx->pc = 0x1cb8c4u;
    // NOP
    ctx->pc = 0x1cb8c8u;
}
