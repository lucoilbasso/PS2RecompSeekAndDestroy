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

// Function: entry_001cb5b0
// Address: 0x1cb5b0 - 0x1cb5c0
void entry_001cb5b0_0x1cb5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb5b0_0x1cb5b0");
#endif

    ctx->pc = 0x1cb5b0u;

    // 0x1cb5b0: 0x3402ffb0  ori         $v0, $zero, 0xFFB0
    ctx->pc = 0x1cb5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65456);
    // 0x1cb5b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1cb5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cb5b8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1CB5B8u;
    {
        const bool branch_taken_0x1cb5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB5B8u;
        // 0x1cb5bc: 0xa62203f8  sh          $v0, 0x3F8($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1016), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb5b8) {
            ctx->pc = 0x1CB648u;
            return;
        }
    }
    ctx->pc = 0x1CB5C0u;
}
