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

// Function: entry_001b52f0
// Address: 0x1b52f0 - 0x1b5310
void entry_001b52f0_0x1b52f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b52f0_0x1b52f0");
#endif

    ctx->pc = 0x1b52f0u;

    // 0x1b52f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b52f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b52f4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x1b52f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b52f8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B52F8u;
    {
        const bool branch_taken_0x1b52f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B52F8u;
        // 0x1b52fc: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b52f8) {
            ctx->pc = 0x1B533Cu;
            return;
        }
    }
    ctx->pc = 0x1B5300u;
    // 0x1b5300: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b5300u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b5304: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b5304u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b5308: 0x3c140041  lui         $s4, 0x41
    ctx->pc = 0x1b5308u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65 << 16));
    // 0x1b530c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b530cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x1b5310u;
}
