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

// Function: caseD_66
// Address: 0x19b1c8 - 0x19b1e8
void caseD_66_0x19b1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_66_0x19b1c8");
#endif

    switch (ctx->pc) {
        case 0x19b1d8u: goto label_19b1d8;
        default: break;
    }

    ctx->pc = 0x19b1c8u;

    // 0x19b1c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19b1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1cc: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x19b1ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19b1d0: 0xc072978  jal         func_1CA5E0
    ctx->pc = 0x19B1D0u;
    SET_GPR_U32(ctx, 31, 0x19B1D8u);
    ctx->pc = 0x19B1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B1D0u;
    // 0x19b1d4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA5E0u, 0x19B1D0u, 0x19B1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B1D8u;
label_19b1d8:
    // 0x19b1d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b1dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x19b1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b1e0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19B1E0u;
    {
        const bool branch_taken_0x19b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B1E0u;
        // 0x19b1e4: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b1e0) {
            ctx->pc = 0x19B254u;
            return;
        }
    }
    ctx->pc = 0x19B1E8u;
}
