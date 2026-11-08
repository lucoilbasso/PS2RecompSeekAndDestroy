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

// Function: entry_001c4838
// Address: 0x1c4838 - 0x1c4864
void entry_001c4838_0x1c4838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4838_0x1c4838");
#endif

    switch (ctx->pc) {
        case 0x1c484cu: goto label_1c484c;
        case 0x1c485cu: goto label_1c485c;
        default: break;
    }

    ctx->pc = 0x1c4838u;

    // 0x1c4838: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1c4838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1c483c: 0x2604dcc0  addiu       $a0, $s0, -0x2340
    ctx->pc = 0x1c483cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958272));
    // 0x1c4840: 0x34a50701  ori         $a1, $a1, 0x701
    ctx->pc = 0x1c4840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1793);
    // 0x1c4844: 0xc06c5a4  jal         func_1B1690
    ctx->pc = 0x1C4844u;
    SET_GPR_U32(ctx, 31, 0x1C484Cu);
    ctx->pc = 0x1C4848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4844u;
    // 0x1c4848: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1690u, 0x1C4844u, 0x1C484Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C484Cu;
label_1c484c:
    // 0x1c484c: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C484Cu;
    {
        const bool branch_taken_0x1c484c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1C4850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C484Cu;
        // 0x1c4850: 0x24022710  addiu       $v0, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c484c) {
            ctx->pc = 0x1C4864u;
            return;
        }
    }
    ctx->pc = 0x1C4854u;
    // 0x1c4854: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1C4854u;
    SET_GPR_U32(ctx, 31, 0x1C485Cu);
    ctx->pc = 0x1C4858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4854u;
    // 0x1c4858: 0x2624b730  addiu       $a0, $s1, -0x48D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1C4854u, 0x1C485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C485Cu;
label_1c485c:
    // 0x1c485c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1C485Cu;
    {
        const bool branch_taken_0x1c485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C485Cu;
        // 0x1c4860: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c485c) {
            ctx->pc = 0x1C489Cu;
            return;
        }
    }
    ctx->pc = 0x1C4864u;
}
