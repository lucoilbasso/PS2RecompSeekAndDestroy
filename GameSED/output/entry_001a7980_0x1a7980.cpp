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

// Function: entry_001a7980
// Address: 0x1a7980 - 0x1a79a0
void entry_001a7980_0x1a7980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7980_0x1a7980");
#endif

    ctx->pc = 0x1a7980u;

    // 0x1a7980: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a7980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a7984: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a7984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a7988: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7988u;
    {
        const bool branch_taken_0x1a7988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A798Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7988u;
        // 0x1a798c: 0x8e440028  lw          $a0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7988) {
            ctx->pc = 0x1A79A0u;
            return;
        }
    }
    ctx->pc = 0x1A7990u;
    // 0x1a7990: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a7990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a7994: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a7994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7998: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7998u;
    SET_GPR_U32(ctx, 31, 0x1A79A0u);
    ctx->pc = 0x1A799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7998u;
    // 0x1a799c: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7998u, 0x1A79A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A79A0u;
}
