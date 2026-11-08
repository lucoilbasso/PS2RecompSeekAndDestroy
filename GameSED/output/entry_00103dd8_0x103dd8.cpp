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

// Function: entry_00103dd8
// Address: 0x103dd8 - 0x103df0
void entry_00103dd8_0x103dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00103dd8_0x103dd8");
#endif

    ctx->pc = 0x103dd8u;

    // 0x103dd8: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x103DD8u;
    {
        const bool branch_taken_0x103dd8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x103DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103DD8u;
        // 0x103ddc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103dd8) {
            ctx->pc = 0x103DF0u;
            return;
        }
    }
    ctx->pc = 0x103DE0u;
    // 0x103de0: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x103de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x103de4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x103de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x103de8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x103DE8u;
    {
        const bool branch_taken_0x103de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103de8) {
            ctx->pc = 0x103DF4u;
            return;
        }
    }
    ctx->pc = 0x103DF0u;
}
