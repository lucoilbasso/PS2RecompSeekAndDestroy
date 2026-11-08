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

// Function: entry_0013b418
// Address: 0x13b418 - 0x13b434
void entry_0013b418_0x13b418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b418_0x13b418");
#endif

    ctx->pc = 0x13b418u;

    // 0x13b418: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13b418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13b41c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13B41Cu;
    {
        const bool branch_taken_0x13b41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B41Cu;
        // 0x13b420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b41c) {
            ctx->pc = 0x13B434u;
            return;
        }
    }
    ctx->pc = 0x13B424u;
    // 0x13b424: 0x8e440164  lw          $a0, 0x164($s2)
    ctx->pc = 0x13b424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
    // 0x13b428: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13b428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b42c: 0xc04ed34  jal         func_13B4D0
    ctx->pc = 0x13B42Cu;
    SET_GPR_U32(ctx, 31, 0x13B434u);
    ctx->pc = 0x13B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B42Cu;
    // 0x13b430: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B4D0u, 0x13B42Cu, 0x13B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B434u;
}
