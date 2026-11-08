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

// Function: caseD_a
// Address: 0x135110 - 0x135128
void caseD_a_0x135110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x135110");
#endif

    switch (ctx->pc) {
        case 0x135120u: goto label_135120;
        default: break;
    }

    ctx->pc = 0x135110u;

    // 0x135110: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x135110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x135114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135118: 0xc053f80  jal         func_14FE00
    ctx->pc = 0x135118u;
    SET_GPR_U32(ctx, 31, 0x135120u);
    ctx->pc = 0x13511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135118u;
    // 0x13511c: 0x8c45b830  lw          $a1, -0x47D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE00u, 0x135118u, 0x135120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135120u;
label_135120:
    // 0x135120: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x135120u;
    {
        const bool branch_taken_0x135120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135120u;
        // 0x135124: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135120) {
            ctx->pc = 0x135200u;
            return;
        }
    }
    ctx->pc = 0x135128u;
}
