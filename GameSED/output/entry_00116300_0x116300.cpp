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

// Function: entry_00116300
// Address: 0x116300 - 0x116318
void entry_00116300_0x116300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116300_0x116300");
#endif

    ctx->pc = 0x116300u;

    // 0x116300: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x116300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x116304: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x116304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116308: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x116308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11630c: 0x10530002  beq         $v0, $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x11630Cu;
    {
        const bool branch_taken_0x11630c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x116310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11630Cu;
        // 0x116310: 0x285880b  movn        $s1, $s4, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11630c) {
            ctx->pc = 0x116318u;
            return;
        }
    }
    ctx->pc = 0x116314u;
    // 0x116314: 0x86510000  lh          $s1, 0x0($s2)
    ctx->pc = 0x116314u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->pc = 0x116318u;
}
