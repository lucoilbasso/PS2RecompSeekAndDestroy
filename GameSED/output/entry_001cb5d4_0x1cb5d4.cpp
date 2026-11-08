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

// Function: entry_001cb5d4
// Address: 0x1cb5d4 - 0x1cb5e8
void entry_001cb5d4_0x1cb5d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb5d4_0x1cb5d4");
#endif

    ctx->pc = 0x1cb5d4u;

    // 0x1cb5d4: 0x3402ff90  ori         $v0, $zero, 0xFF90
    ctx->pc = 0x1cb5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65424);
    // 0x1cb5d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cb5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cb5dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cb5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb5e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB5E0u;
    {
        const bool branch_taken_0x1cb5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5E0u;
        // 0x1cb5e4: 0xa62203f8  sh          $v0, 0x3F8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5e0) {
            ctx->pc = 0x1CB600u;
            return;
        }
    }
    ctx->pc = 0x1CB5E8u;
}
