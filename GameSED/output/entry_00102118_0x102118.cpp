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

// Function: entry_00102118
// Address: 0x102118 - 0x102130
void entry_00102118_0x102118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102118_0x102118");
#endif

    ctx->pc = 0x102118u;

    // 0x102118: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x102118u;
    {
        const bool branch_taken_0x102118 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x10211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102118u;
        // 0x10211c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102118) {
            ctx->pc = 0x102130u;
            return;
        }
    }
    ctx->pc = 0x102120u;
    // 0x102120: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x102120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x102124: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x102124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x102128: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x102128u;
    {
        const bool branch_taken_0x102128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102128) {
            ctx->pc = 0x102134u;
            return;
        }
    }
    ctx->pc = 0x102130u;
}
