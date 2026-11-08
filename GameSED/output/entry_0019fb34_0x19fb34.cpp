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

// Function: entry_0019fb34
// Address: 0x19fb34 - 0x19fb50
void entry_0019fb34_0x19fb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fb34_0x19fb34");
#endif

    ctx->pc = 0x19fb34u;

    // 0x19fb34: 0x54c0001e  bnel        $a2, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x19FB34u;
    {
        const bool branch_taken_0x19fb34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb34) {
            ctx->pc = 0x19FB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FB34u;
            // 0x19fb38: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FBB0u;
            return;
        }
    }
    ctx->pc = 0x19FB3Cu;
    // 0x19fb3c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x19fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x19fb40: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19fb40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb44: 0x2449f640  addiu       $t1, $v0, -0x9C0
    ctx->pc = 0x19fb44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x19fb48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19fb48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb4c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x19fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x23F640u));
    ctx->pc = 0x19fb50u;
}
