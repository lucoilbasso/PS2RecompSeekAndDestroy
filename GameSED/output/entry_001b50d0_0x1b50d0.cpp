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

// Function: entry_001b50d0
// Address: 0x1b50d0 - 0x1b50e8
void entry_001b50d0_0x1b50d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b50d0_0x1b50d0");
#endif

    ctx->pc = 0x1b50d0u;

    // 0x1b50d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b50d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b50d4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b50d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b50d8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B50D8u;
    {
        const bool branch_taken_0x1b50d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B50D8u;
        // 0x1b50dc: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b50d8) {
            ctx->pc = 0x1B5114u;
            return;
        }
    }
    ctx->pc = 0x1B50E0u;
    // 0x1b50e0: 0x2e060401  sltiu       $a2, $s0, 0x401
    ctx->pc = 0x1b50e0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1025) ? 1 : 0);
    // 0x1b50e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b50e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1b50e8u;
}
