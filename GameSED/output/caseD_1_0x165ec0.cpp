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
// Address: 0x165ec0 - 0x165ee0
void caseD_1_0x165ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x165ec0");
#endif

    switch (ctx->pc) {
        case 0x165ed4u: goto label_165ed4;
        default: break;
    }

    ctx->pc = 0x165ec0u;

    // 0x165ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ec4: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x165ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x165ec8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x165ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x165ecc: 0xc0596d8  jal         func_165B60
    ctx->pc = 0x165ECCu;
    SET_GPR_U32(ctx, 31, 0x165ED4u);
    ctx->pc = 0x165ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165ECCu;
    // 0x165ed0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165B60u, 0x165ECCu, 0x165ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165ED4u;
label_165ed4:
    // 0x165ed4: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x165ED4u;
    {
        const bool branch_taken_0x165ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165ED4u;
        // 0x165ed8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ed4) {
            ctx->pc = 0x166238u;
            return;
        }
    }
    ctx->pc = 0x165EDCu;
    // 0x165edc: 0x0  nop
    ctx->pc = 0x165edcu;
    // NOP
    ctx->pc = 0x165ee0u;
}
