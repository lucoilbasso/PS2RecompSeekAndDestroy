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

// Function: entry_00101128
// Address: 0x101128 - 0x101140
void entry_00101128_0x101128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101128_0x101128");
#endif

    ctx->pc = 0x101128u;

    // 0x101128: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x101128u;
    {
        const bool branch_taken_0x101128 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x10112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101128u;
        // 0x10112c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101128) {
            ctx->pc = 0x101140u;
            return;
        }
    }
    ctx->pc = 0x101130u;
    // 0x101130: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x101130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x101134: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x101134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x101138: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x101138u;
    {
        const bool branch_taken_0x101138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101138) {
            ctx->pc = 0x101144u;
            return;
        }
    }
    ctx->pc = 0x101140u;
}
