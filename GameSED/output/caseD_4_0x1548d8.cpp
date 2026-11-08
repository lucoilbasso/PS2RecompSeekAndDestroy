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

// Function: caseD_4
// Address: 0x1548d8 - 0x1548f8
void caseD_4_0x1548d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1548d8");
#endif

    switch (ctx->pc) {
        case 0x1548f4u: goto label_1548f4;
        default: break;
    }

    ctx->pc = 0x1548d8u;

    // 0x1548d8: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x1548d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1548dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1548dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1548e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1548e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1548e4: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1548E4u;
    {
        const bool branch_taken_0x1548e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1548E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548E4u;
        // 0x1548e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548e4) {
            ctx->pc = 0x1548F8u;
            return;
        }
    }
    ctx->pc = 0x1548ECu;
    // 0x1548ec: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x1548ECu;
    SET_GPR_U32(ctx, 31, 0x1548F4u);
    ctx->pc = 0x1548F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548ECu;
    // 0x1548f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1548ECu, 0x1548F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1548F4u;
label_1548f4:
    // 0x1548f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1548f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1548f8u;
}
