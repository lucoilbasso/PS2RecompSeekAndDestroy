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

// Function: caseD_0
// Address: 0x111dd0 - 0x111df0
void caseD_0_0x111dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x111dd0");
#endif

    switch (ctx->pc) {
        case 0x111de4u: goto label_111de4;
        default: break;
    }

    ctx->pc = 0x111dd0u;

    // 0x111dd0: 0x7ea00000  sq          $zero, 0x0($s5)
    ctx->pc = 0x111dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 0));
    // 0x111dd4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x111dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x111dd8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x111dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111ddc: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x111DDCu;
    SET_GPR_U32(ctx, 31, 0x111DE4u);
    ctx->pc = 0x111DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111DDCu;
    // 0x111de0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x111DDCu, 0x111DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111DE4u;
label_111de4:
    // 0x111de4: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x111DE4u;
    {
        const bool branch_taken_0x111de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111DE4u;
        // 0x111de8: 0x2623ffff  addiu       $v1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111de4) {
            ctx->pc = 0x112128u;
            return;
        }
    }
    ctx->pc = 0x111DECu;
    // 0x111dec: 0x0  nop
    ctx->pc = 0x111decu;
    // NOP
    ctx->pc = 0x111df0u;
}
