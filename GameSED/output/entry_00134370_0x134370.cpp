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

// Function: entry_00134370
// Address: 0x134370 - 0x134388
void entry_00134370_0x134370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134370_0x134370");
#endif

    ctx->pc = 0x134370u;

    // 0x134370: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134370u;
    {
        const bool branch_taken_0x134370 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x134374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134370u;
        // 0x134374: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134370) {
            ctx->pc = 0x134388u;
            return;
        }
    }
    ctx->pc = 0x134378u;
    // 0x134378: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x134378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x13437c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13437cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134380: 0x247100d0  addiu       $s1, $v1, 0xD0
    ctx->pc = 0x134380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x134384: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x134388u;
}
