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

// Function: entry_001055c8
// Address: 0x1055c8 - 0x1055e0
void entry_001055c8_0x1055c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001055c8_0x1055c8");
#endif

    switch (ctx->pc) {
        case 0x1055dcu: goto label_1055dc;
        default: break;
    }

    ctx->pc = 0x1055c8u;

    // 0x1055c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1055c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1055cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1055CCu;
    {
        const bool branch_taken_0x1055cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1055cc) {
            ctx->pc = 0x1055D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1055CCu;
            // 0x1055d0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1055E0u;
            return;
        }
    }
    ctx->pc = 0x1055D4u;
    // 0x1055d4: 0xc041b4e  jal         func_106D38
    ctx->pc = 0x1055D4u;
    SET_GPR_U32(ctx, 31, 0x1055DCu);
    ctx->pc = 0x1055D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1055D4u;
    // 0x1055d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D38u, 0x1055D4u, 0x1055DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1055DCu;
label_1055dc:
    // 0x1055dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1055dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x1055e0u;
}
