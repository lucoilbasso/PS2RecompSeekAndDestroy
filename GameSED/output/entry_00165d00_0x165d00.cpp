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

// Function: entry_00165d00
// Address: 0x165d00 - 0x165d18
void entry_00165d00_0x165d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165d00_0x165d00");
#endif

    ctx->pc = 0x165d00u;

    // 0x165d00: 0x56620007  bnel        $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x165D00u;
    {
        const bool branch_taken_0x165d00 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x165d00) {
            ctx->pc = 0x165D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165D00u;
            // 0x165d04: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165D20u;
            return;
        }
    }
    ctx->pc = 0x165D08u;
    // 0x165d08: 0x8e451264  lw          $a1, 0x1264($s2)
    ctx->pc = 0x165d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4708)));
    // 0x165d0c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x165d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x165d10: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x165d10u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x165d14: 0x8ca3076c  lw          $v1, 0x76C($a1)
    ctx->pc = 0x165d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1900)));
    ctx->pc = 0x165d18u;
}
