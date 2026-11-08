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

// Function: entry_001bd2f4
// Address: 0x1bd2f4 - 0x1bd310
void entry_001bd2f4_0x1bd2f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd2f4_0x1bd2f4");
#endif

    switch (ctx->pc) {
        case 0x1bd308u: goto label_1bd308;
        default: break;
    }

    ctx->pc = 0x1bd2f4u;

    // 0x1bd2f4: 0x17d50006  bne         $fp, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD2F4u;
    {
        const bool branch_taken_0x1bd2f4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 21));
        ctx->pc = 0x1BD2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD2F4u;
        // 0x1bd2f8: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd2f4) {
            ctx->pc = 0x1BD310u;
            return;
        }
    }
    ctx->pc = 0x1BD2FCu;
    // 0x1bd2fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bd2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd300: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1BD300u;
    SET_GPR_U32(ctx, 31, 0x1BD308u);
    ctx->pc = 0x1BD304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD300u;
    // 0x1bd304: 0x24a5b230  addiu       $a1, $a1, -0x4DD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1BD300u, 0x1BD308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD308u;
label_1bd308:
    // 0x1bd308: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1BD308u;
    {
        const bool branch_taken_0x1bd308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD308u;
        // 0x1bd30c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd308) {
            ctx->pc = 0x1BD4F8u;
            return;
        }
    }
    ctx->pc = 0x1BD310u;
}
