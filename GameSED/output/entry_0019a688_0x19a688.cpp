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

// Function: entry_0019a688
// Address: 0x19a688 - 0x19a698
void entry_0019a688_0x19a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a688_0x19a688");
#endif

    ctx->pc = 0x19a688u;

    // 0x19a688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a68c: 0x5480fffc  bnel        $a0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19A68Cu;
    {
        const bool branch_taken_0x19a68c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a68c) {
            ctx->pc = 0x19A690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A68Cu;
            // 0x19a690: 0x8c900018  lw          $s0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A680u;
            return;
        }
    }
    ctx->pc = 0x19A694u;
    // 0x19a694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19a698u;
}
