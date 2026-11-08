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

// Function: entry_0010411c
// Address: 0x10411c - 0x104134
void entry_0010411c_0x10411c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010411c_0x10411c");
#endif

    ctx->pc = 0x10411cu;

    // 0x10411c: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10411Cu;
    {
        const bool branch_taken_0x10411c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x104120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10411Cu;
        // 0x104120: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10411c) {
            ctx->pc = 0x104134u;
            return;
        }
    }
    ctx->pc = 0x104124u;
    // 0x104124: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x104124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x104128: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x104128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10412c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10412Cu;
    {
        const bool branch_taken_0x10412c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10412c) {
            ctx->pc = 0x104138u;
            return;
        }
    }
    ctx->pc = 0x104134u;
}
