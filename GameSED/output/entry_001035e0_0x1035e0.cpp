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

// Function: entry_001035e0
// Address: 0x1035e0 - 0x1035f8
void entry_001035e0_0x1035e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001035e0_0x1035e0");
#endif

    ctx->pc = 0x1035e0u;

    // 0x1035e0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1035E0u;
    {
        const bool branch_taken_0x1035e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1035E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035E0u;
        // 0x1035e4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035e0) {
            ctx->pc = 0x1035F8u;
            return;
        }
    }
    ctx->pc = 0x1035E8u;
    // 0x1035e8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1035e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1035ec: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1035ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1035f0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1035F0u;
    {
        const bool branch_taken_0x1035f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1035F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1035F0u;
        // 0x1035f4: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1035f0) {
            ctx->pc = 0x10364Cu;
            return;
        }
    }
    ctx->pc = 0x1035F8u;
}
