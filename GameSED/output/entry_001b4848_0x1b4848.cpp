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

// Function: entry_001b4848
// Address: 0x1b4848 - 0x1b4868
void entry_001b4848_0x1b4848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4848_0x1b4848");
#endif

    ctx->pc = 0x1b4848u;

    // 0x1b4848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b4848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b484c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b484cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b4850: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B4850u;
    {
        const bool branch_taken_0x1b4850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4850u;
        // 0x1b4854: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4850) {
            ctx->pc = 0x1B4894u;
            return;
        }
    }
    ctx->pc = 0x1B4858u;
    // 0x1b4858: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b4858u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b485c: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b485cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b4860: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b4860u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b4864: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b4864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1b4868u;
}
