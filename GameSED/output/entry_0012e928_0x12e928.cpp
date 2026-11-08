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

// Function: entry_0012e928
// Address: 0x12e928 - 0x12e93c
void entry_0012e928_0x12e928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e928_0x12e928");
#endif

    ctx->pc = 0x12e928u;

    // 0x12e928: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E928u;
    {
        const bool branch_taken_0x12e928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E928u;
        // 0x12e92c: 0x2602ffff  addiu       $v0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e928) {
            ctx->pc = 0x12E950u;
            return;
        }
    }
    ctx->pc = 0x12E930u;
    // 0x12e930: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12e930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12e934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12e934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e938: 0x24a56018  addiu       $a1, $a1, 0x6018
    ctx->pc = 0x12e938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24600));
    ctx->pc = 0x12e93cu;
}
