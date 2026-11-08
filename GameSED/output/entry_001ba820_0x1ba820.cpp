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

// Function: entry_001ba820
// Address: 0x1ba820 - 0x1ba844
void entry_001ba820_0x1ba820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba820_0x1ba820");
#endif

    switch (ctx->pc) {
        case 0x1ba834u: goto label_1ba834;
        default: break;
    }

    ctx->pc = 0x1ba820u;

    // 0x1ba820: 0x8e22c0b0  lw          $v0, -0x3F50($s1)
    ctx->pc = 0x1ba820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951088)));
    // 0x1ba824: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x1BA824u;
    {
        const bool branch_taken_0x1ba824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba824) {
            ctx->pc = 0x1BA818u;
            return;
        }
    }
    ctx->pc = 0x1BA82Cu;
    // 0x1ba82c: 0xc06c694  jal         func_1B1A50
    ctx->pc = 0x1BA82Cu;
    SET_GPR_U32(ctx, 31, 0x1BA834u);
    ctx->pc = 0x1BA830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BA82Cu;
    // 0x1ba830: 0x2604d250  addiu       $a0, $s0, -0x2DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A50u, 0x1BA82Cu, 0x1BA834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA834u;
label_1ba834:
    // 0x1ba834: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BA834u;
    {
        const bool branch_taken_0x1ba834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA834u;
        // 0x1ba838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba834) {
            ctx->pc = 0x1BA818u;
            return;
        }
    }
    ctx->pc = 0x1BA83Cu;
    // 0x1ba83c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BA83Cu;
    {
        const bool branch_taken_0x1ba83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA83Cu;
        // 0x1ba840: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba83c) {
            ctx->pc = 0x1BA870u;
            return;
        }
    }
    ctx->pc = 0x1BA844u;
}
