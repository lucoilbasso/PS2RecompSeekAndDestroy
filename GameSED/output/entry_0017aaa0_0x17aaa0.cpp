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

// Function: entry_0017aaa0
// Address: 0x17aaa0 - 0x17aab4
void entry_0017aaa0_0x17aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017aaa0_0x17aaa0");
#endif

    ctx->pc = 0x17aaa0u;

    // 0x17aaa0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17aaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x17aaa4: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x17aaa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17aaa8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17AAA8u;
    {
        const bool branch_taken_0x17aaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAA8u;
        // 0x17aaac: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aaa8) {
            ctx->pc = 0x17AA80u;
            return;
        }
    }
    ctx->pc = 0x17AAB0u;
    // 0x17aab0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17aab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17aab4u;
}
