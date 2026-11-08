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

// Function: entry_001b4614
// Address: 0x1b4614 - 0x1b4630
void entry_001b4614_0x1b4614(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4614_0x1b4614");
#endif

    ctx->pc = 0x1b4614u;

    // 0x1b4614: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b4614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b4618: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b4618u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b461c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B461Cu;
    {
        const bool branch_taken_0x1b461c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B461Cu;
        // 0x1b4620: 0xa2620050  sb          $v0, 0x50($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b461c) {
            ctx->pc = 0x1B4658u;
            return;
        }
    }
    ctx->pc = 0x1B4624u;
    // 0x1b4624: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1b4624u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b4628: 0x3c160041  lui         $s6, 0x41
    ctx->pc = 0x1b4628u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65 << 16));
    // 0x1b462c: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b462cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1b4630u;
}
