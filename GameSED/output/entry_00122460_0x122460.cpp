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

// Function: entry_00122460
// Address: 0x122460 - 0x122488
void entry_00122460_0x122460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122460_0x122460");
#endif

    switch (ctx->pc) {
        case 0x12247cu: goto label_12247c;
        default: break;
    }

    ctx->pc = 0x122460u;

    // 0x122460: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x122460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x122464: 0x8ec50158  lw          $a1, 0x158($s6)
    ctx->pc = 0x122464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 344)));
    // 0x122468: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x122468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12246c: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x12246cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x122470: 0x24845c00  addiu       $a0, $a0, 0x5C00
    ctx->pc = 0x122470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23552));
    // 0x122474: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x122474u;
    SET_GPR_U32(ctx, 31, 0x12247Cu);
    ctx->pc = 0x122478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122474u;
    // 0x122478: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x122474u, 0x12247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12247Cu;
label_12247c:
    // 0x12247c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x12247Cu;
    {
        const bool branch_taken_0x12247c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12247Cu;
        // 0x122480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12247c) {
            ctx->pc = 0x12253Cu;
            return;
        }
    }
    ctx->pc = 0x122484u;
    // 0x122484: 0x0  nop
    ctx->pc = 0x122484u;
    // NOP
    ctx->pc = 0x122488u;
}
