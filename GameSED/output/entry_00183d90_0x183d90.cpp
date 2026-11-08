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

// Function: entry_00183d90
// Address: 0x183d90 - 0x183da8
void entry_00183d90_0x183d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183d90_0x183d90");
#endif

    ctx->pc = 0x183d90u;

    // 0x183d90: 0x5880000d  blezl       $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x183D90u;
    {
        const bool branch_taken_0x183d90 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x183d90) {
            ctx->pc = 0x183D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183D90u;
            // 0x183d94: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x183DC8u;
            return;
        }
    }
    ctx->pc = 0x183D98u;
    // 0x183d98: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x183d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183da0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x183da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183da4: 0x0  nop
    ctx->pc = 0x183da4u;
    // NOP
    ctx->pc = 0x183da8u;
}
