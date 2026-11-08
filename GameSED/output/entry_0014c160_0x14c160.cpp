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

// Function: entry_0014c160
// Address: 0x14c160 - 0x14c180
void entry_0014c160_0x14c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c160_0x14c160");
#endif

    ctx->pc = 0x14c160u;

    // 0x14c160: 0x8c430154  lw          $v1, 0x154($v0)
    ctx->pc = 0x14c160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x14c164: 0x8c64009c  lw          $a0, 0x9C($v1)
    ctx->pc = 0x14c164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x14c168: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x14c168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x14c16c: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x14c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x14c170: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x14C170u;
    {
        const bool branch_taken_0x14c170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c170) {
            ctx->pc = 0x14C174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C170u;
            // 0x14c174: 0x8e2201f8  lw          $v0, 0x1F8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C1A8u;
            return;
        }
    }
    ctx->pc = 0x14C178u;
    // 0x14c178: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14c178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c17c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x14c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->pc = 0x14c180u;
}
