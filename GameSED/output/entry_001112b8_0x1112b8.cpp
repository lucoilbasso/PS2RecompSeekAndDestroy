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

// Function: entry_001112b8
// Address: 0x1112b8 - 0x1112d0
void entry_001112b8_0x1112b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001112b8_0x1112b8");
#endif

    ctx->pc = 0x1112b8u;

    // 0x1112b8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1112b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1112bc: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x1112bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x1112c0: 0x4420032  bltzl       $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1112C0u;
    {
        const bool branch_taken_0x1112c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1112c0) {
            ctx->pc = 0x1112C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1112C0u;
            // 0x1112c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11138Cu;
            return;
        }
    }
    ctx->pc = 0x1112C8u;
    // 0x1112c8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1112C8u;
    {
        const bool branch_taken_0x1112c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112C8u;
        // 0x1112cc: 0x8ea301b4  lw          $v1, 0x1B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112c8) {
            ctx->pc = 0x111384u;
            return;
        }
    }
    ctx->pc = 0x1112D0u;
}
