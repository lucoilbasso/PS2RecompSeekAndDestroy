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

// Function: entry_001605f8
// Address: 0x1605f8 - 0x16061c
void entry_001605f8_0x1605f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001605f8_0x1605f8");
#endif

    ctx->pc = 0x1605f8u;

    // 0x1605f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1605f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1605fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1605fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160600: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x160600u;
    {
        const bool branch_taken_0x160600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160600u;
        // 0x160604: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160600) {
            ctx->pc = 0x16061Cu;
            return;
        }
    }
    ctx->pc = 0x160608u;
    // 0x160608: 0x8c4201b0  lw          $v0, 0x1B0($v0)
    ctx->pc = 0x160608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x16060c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16060Cu;
    {
        const bool branch_taken_0x16060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16060Cu;
        // 0x160610: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16060c) {
            ctx->pc = 0x16061Cu;
            return;
        }
    }
    ctx->pc = 0x160614u;
    // 0x160614: 0xc056a3e  jal         func_15A8F8
    ctx->pc = 0x160614u;
    SET_GPR_U32(ctx, 31, 0x16061Cu);
    ctx->pc = 0x160618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160614u;
    // 0x160618: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A8F8u, 0x160614u, 0x16061Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16061Cu;
}
