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

// Function: entry_0019b5b8
// Address: 0x19b5b8 - 0x19b5c4
void entry_0019b5b8_0x19b5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b5b8_0x19b5b8");
#endif

    ctx->pc = 0x19b5b8u;

    // 0x19b5b8: 0x28e20009  slti        $v0, $a3, 0x9
    ctx->pc = 0x19b5b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x19b5bc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x19B5BCu;
    {
        const bool branch_taken_0x19b5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5BCu;
        // 0x19b5c0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5bc) {
            ctx->pc = 0x19B560u;
            return;
        }
    }
    ctx->pc = 0x19B5C4u;
}
