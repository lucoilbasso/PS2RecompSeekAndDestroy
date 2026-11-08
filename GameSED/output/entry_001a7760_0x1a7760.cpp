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

// Function: entry_001a7760
// Address: 0x1a7760 - 0x1a7780
void entry_001a7760_0x1a7760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7760_0x1a7760");
#endif

    ctx->pc = 0x1a7760u;

    // 0x1a7760: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a7760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1a7764: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a7764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7768: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7768u;
    {
        const bool branch_taken_0x1a7768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7768u;
        // 0x1a776c: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7768) {
            ctx->pc = 0x1A7780u;
            return;
        }
    }
    ctx->pc = 0x1A7770u;
    // 0x1a7770: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a7770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a7774: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a7774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7778: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7778u;
    SET_GPR_U32(ctx, 31, 0x1A7780u);
    ctx->pc = 0x1A777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7778u;
    // 0x1a777c: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7778u, 0x1A7780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7780u;
}
