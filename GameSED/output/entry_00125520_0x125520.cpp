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

// Function: entry_00125520
// Address: 0x125520 - 0x125534
void entry_00125520_0x125520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125520_0x125520");
#endif

    ctx->pc = 0x125520u;

    // 0x125520: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x125520u;
    {
        const bool branch_taken_0x125520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x125524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125520u;
        // 0x125524: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125520) {
            ctx->pc = 0x125538u;
            return;
        }
    }
    ctx->pc = 0x125528u;
    // 0x125528: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x125528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x12552c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12552cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125530: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x125530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x125534u;
}
