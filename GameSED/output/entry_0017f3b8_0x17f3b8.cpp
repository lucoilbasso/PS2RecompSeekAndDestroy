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

// Function: entry_0017f3b8
// Address: 0x17f3b8 - 0x17f3c8
void entry_0017f3b8_0x17f3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f3b8_0x17f3b8");
#endif

    ctx->pc = 0x17f3b8u;

    // 0x17f3b8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x17f3b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x17f3bc: 0x1d2102b  sltu        $v0, $t6, $s2
    ctx->pc = 0x17f3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x17f3c0: 0x1440ff95  bnez        $v0, . + 4 + (-0x6B << 2)
    ctx->pc = 0x17F3C0u;
    {
        const bool branch_taken_0x17f3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F3C0u;
        // 0x17f3c4: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f3c0) {
            ctx->pc = 0x17F218u;
            return;
        }
    }
    ctx->pc = 0x17F3C8u;
}
