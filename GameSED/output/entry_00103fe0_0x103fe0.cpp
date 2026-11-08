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

// Function: entry_00103fe0
// Address: 0x103fe0 - 0x103ff8
void entry_00103fe0_0x103fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103fe0_0x103fe0");
#endif

    ctx->pc = 0x103fe0u;

    // 0x103fe0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x103FE0u;
    {
        const bool branch_taken_0x103fe0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x103FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103FE0u;
        // 0x103fe4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103fe0) {
            ctx->pc = 0x103FF8u;
            return;
        }
    }
    ctx->pc = 0x103FE8u;
    // 0x103fe8: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x103fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x103fec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x103fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x103ff0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x103FF0u;
    {
        const bool branch_taken_0x103ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103ff0) {
            ctx->pc = 0x103FFCu;
            return;
        }
    }
    ctx->pc = 0x103FF8u;
}
