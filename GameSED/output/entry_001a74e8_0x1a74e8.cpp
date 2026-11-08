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

// Function: entry_001a74e8
// Address: 0x1a74e8 - 0x1a7508
void entry_001a74e8_0x1a74e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a74e8_0x1a74e8");
#endif

    ctx->pc = 0x1a74e8u;

    // 0x1a74e8: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1a74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1a74ec: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1a74ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a74f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A74F0u;
    {
        const bool branch_taken_0x1a74f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74F0u;
        // 0x1a74f4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74f0) {
            ctx->pc = 0x1A7508u;
            return;
        }
    }
    ctx->pc = 0x1A74F8u;
    // 0x1a74f8: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a74f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1a74fc: 0x24060037  addiu       $a2, $zero, 0x37
    ctx->pc = 0x1a74fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1a7500: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A7500u;
    SET_GPR_U32(ctx, 31, 0x1A7508u);
    ctx->pc = 0x1A7504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7500u;
    // 0x1a7504: 0x24a593c8  addiu       $a1, $a1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A7500u, 0x1A7508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7508u;
}
