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

// Function: caseD_2e
// Address: 0x1cba18 - 0x1cba38
void caseD_2e_0x1cba18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2e_0x1cba18");
#endif

    switch (ctx->pc) {
        case 0x1cba24u: goto label_1cba24;
        default: break;
    }

    ctx->pc = 0x1cba18u;

    // 0x1cba18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba1c: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CBA1Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA24u);
    ctx->pc = 0x1CBA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA1Cu;
    // 0x1cba20: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CBA1Cu, 0x1CBA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA24u;
label_1cba24:
    // 0x1cba24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cba24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cba28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cba28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cba2c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CBA2Cu;
    {
        const bool branch_taken_0x1cba2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA2Cu;
        // 0x1cba30: 0xfe220018  sd          $v0, 0x18($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cba2c) {
            ctx->pc = 0x1CBA90u;
            return;
        }
    }
    ctx->pc = 0x1CBA34u;
    // 0x1cba34: 0x0  nop
    ctx->pc = 0x1cba34u;
    // NOP
    ctx->pc = 0x1cba38u;
}
