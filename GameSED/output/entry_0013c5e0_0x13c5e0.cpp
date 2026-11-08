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

// Function: entry_0013c5e0
// Address: 0x13c5e0 - 0x13c610
void entry_0013c5e0_0x13c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c5e0_0x13c5e0");
#endif

    switch (ctx->pc) {
        case 0x13c5e8u: goto label_13c5e8;
        default: break;
    }

    ctx->pc = 0x13c5e0u;

    // 0x13c5e0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x13C5E0u;
    SET_GPR_U32(ctx, 31, 0x13C5E8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x13C5E0u, 0x13C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5E8u;
label_13c5e8:
    // 0x13c5e8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x13c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x13c5ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13c5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13c5f0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x13c5f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x13c5f4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13C5F4u;
    {
        const bool branch_taken_0x13c5f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5F4u;
        // 0x13c5f8: 0x32027  nor         $a0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c5f4) {
            ctx->pc = 0x13C610u;
            return;
        }
    }
    ctx->pc = 0x13C5FCu;
    // 0x13c5fc: 0x8e2201e0  lw          $v0, 0x1E0($s1)
    ctx->pc = 0x13c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x13c600: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13c600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13c604: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13C604u;
    {
        const bool branch_taken_0x13c604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C604u;
        // 0x13c608: 0xae2201e0  sw          $v0, 0x1E0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c604) {
            ctx->pc = 0x13C61Cu;
            return;
        }
    }
    ctx->pc = 0x13C60Cu;
    // 0x13c60c: 0x0  nop
    ctx->pc = 0x13c60cu;
    // NOP
    ctx->pc = 0x13c610u;
}
