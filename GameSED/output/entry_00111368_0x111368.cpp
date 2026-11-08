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

// Function: entry_00111368
// Address: 0x111368 - 0x111384
void entry_00111368_0x111368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111368_0x111368");
#endif

    ctx->pc = 0x111368u;

    // 0x111368: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x111368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x11136c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11136cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x111370: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x111370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x111374: 0x8c420c0c  lw          $v0, 0xC0C($v0)
    ctx->pc = 0x111374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3084)));
    // 0x111378: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111378u;
    {
        const bool branch_taken_0x111378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x111378) {
            ctx->pc = 0x11137Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x111378u;
            // 0x11137c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11138Cu;
            return;
        }
    }
    ctx->pc = 0x111380u;
    // 0x111380: 0x8ea301b4  lw          $v1, 0x1B4($s5)
    ctx->pc = 0x111380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
    ctx->pc = 0x111384u;
}
