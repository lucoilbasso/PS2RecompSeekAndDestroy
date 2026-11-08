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

// Function: caseD_1a
// Address: 0x108f40 - 0x108f68
void caseD_1a_0x108f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1a_0x108f40");
#endif

    switch (ctx->pc) {
        case 0x108f5cu: goto label_108f5c;
        default: break;
    }

    ctx->pc = 0x108f40u;

    // 0x108f40: 0x29020004  slti        $v0, $t0, 0x4
    ctx->pc = 0x108f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x108f44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108F44u;
    {
        const bool branch_taken_0x108f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108F44u;
        // 0x108f48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108f44) {
            ctx->pc = 0x108F68u;
            return;
        }
    }
    ctx->pc = 0x108F4Cu;
    // 0x108f4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x108f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f50: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x108f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x108f54: 0xc042170  jal         func_1085C0
    ctx->pc = 0x108F54u;
    SET_GPR_U32(ctx, 31, 0x108F5Cu);
    ctx->pc = 0x108F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F54u;
    // 0x108f58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085C0u, 0x108F54u, 0x108F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108F5Cu;
label_108f5c:
    // 0x108f5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x108F5Cu;
    {
        const bool branch_taken_0x108f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108f5c) {
            ctx->pc = 0x108F80u;
            return;
        }
    }
    ctx->pc = 0x108F64u;
    // 0x108f64: 0x0  nop
    ctx->pc = 0x108f64u;
    // NOP
    ctx->pc = 0x108f68u;
}
