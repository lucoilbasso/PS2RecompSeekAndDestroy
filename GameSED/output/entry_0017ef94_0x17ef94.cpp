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

// Function: entry_0017ef94
// Address: 0x17ef94 - 0x17efa4
void entry_0017ef94_0x17ef94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ef94_0x17ef94");
#endif

    ctx->pc = 0x17ef94u;

    // 0x17ef94: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17ef94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17ef98: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x17ef98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x17ef9c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x17EF9Cu;
    {
        const bool branch_taken_0x17ef9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF9Cu;
        // 0x17efa0: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef9c) {
            ctx->pc = 0x17EF40u;
            return;
        }
    }
    ctx->pc = 0x17EFA4u;
}
