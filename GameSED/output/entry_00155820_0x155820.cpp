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

// Function: entry_00155820
// Address: 0x155820 - 0x155848
void entry_00155820_0x155820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155820_0x155820");
#endif

    switch (ctx->pc) {
        case 0x155840u: goto label_155840;
        default: break;
    }

    ctx->pc = 0x155820u;

    // 0x155820: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x155820u;
    {
        const bool branch_taken_0x155820 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x155824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155820u;
        // 0x155824: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155820) {
            ctx->pc = 0x155848u;
            return;
        }
    }
    ctx->pc = 0x155828u;
    // 0x155828: 0x8e050310  lw          $a1, 0x310($s0)
    ctx->pc = 0x155828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x15582c: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x15582cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x155830: 0x70002830  pmfhl.lw    $a1
    ctx->pc = 0x155830u;
    SET_GPR_VEC(ctx, 5, PS2_PMFHL_LW(ctx->hi, ctx->lo));
    // 0x155834: 0x52bfb  dsra        $a1, $a1, 15
    ctx->pc = 0x155834u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> 15);
    // 0x155838: 0xc058528  jal         func_1614A0
    ctx->pc = 0x155838u;
    SET_GPR_U32(ctx, 31, 0x155840u);
    ctx->pc = 0x15583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155838u;
    // 0x15583c: 0x8e040690  lw          $a0, 0x690($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1614A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1614A0u, 0x155838u, 0x155840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155840u;
label_155840:
    // 0x155840: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x155840u;
    {
        const bool branch_taken_0x155840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155840u;
        // 0x155844: 0x8e04076c  lw          $a0, 0x76C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1900)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155840) {
            ctx->pc = 0x155858u;
            return;
        }
    }
    ctx->pc = 0x155848u;
}
