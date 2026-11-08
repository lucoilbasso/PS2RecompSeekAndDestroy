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

// Function: caseD_1
// Address: 0x111df0 - 0x111e10
void caseD_1_0x111df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x111df0");
#endif

    switch (ctx->pc) {
        case 0x111e08u: goto label_111e08;
        default: break;
    }

    ctx->pc = 0x111df0u;

    // 0x111df0: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x111df0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111df4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x111df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x111df8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111dfc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x111dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111e00: 0xc06a2d4  jal         func_1A8B50
    ctx->pc = 0x111E00u;
    SET_GPR_U32(ctx, 31, 0x111E08u);
    ctx->pc = 0x111E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111E00u;
    // 0x111e04: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B50u, 0x111E00u, 0x111E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111E08u;
label_111e08:
    // 0x111e08: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x111E08u;
    {
        const bool branch_taken_0x111e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E08u;
        // 0x111e0c: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e08) {
            ctx->pc = 0x112128u;
            return;
        }
    }
    ctx->pc = 0x111E10u;
}
