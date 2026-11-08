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

// Function: entry_001041e0
// Address: 0x1041e0 - 0x1041f8
void entry_001041e0_0x1041e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001041e0_0x1041e0");
#endif

    ctx->pc = 0x1041e0u;

    // 0x1041e0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1041E0u;
    {
        const bool branch_taken_0x1041e0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x1041E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1041E0u;
        // 0x1041e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1041e0) {
            ctx->pc = 0x1041F8u;
            return;
        }
    }
    ctx->pc = 0x1041E8u;
    // 0x1041e8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1041e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1041ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1041ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1041f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1041F0u;
    {
        const bool branch_taken_0x1041f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1041f0) {
            ctx->pc = 0x1041FCu;
            return;
        }
    }
    ctx->pc = 0x1041F8u;
}
