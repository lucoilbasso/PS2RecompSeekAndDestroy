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

// Function: entry_001bb688
// Address: 0x1bb688 - 0x1bb69c
void entry_001bb688_0x1bb688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb688_0x1bb688");
#endif

    ctx->pc = 0x1bb688u;

    // 0x1bb688: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB688u;
    {
        const bool branch_taken_0x1bb688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB688u;
        // 0x1bb68c: 0x1332c0  sll         $a2, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb688) {
            ctx->pc = 0x1BB69Cu;
            return;
        }
    }
    ctx->pc = 0x1BB690u;
    // 0x1bb690: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BB690u;
    {
        const bool branch_taken_0x1bb690 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB690u;
        // 0x1bb694: 0x8ec2c090  lw          $v0, -0x3F70($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294951056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb690) {
            ctx->pc = 0x1BB70Cu;
            return;
        }
    }
    ctx->pc = 0x1BB698u;
    // 0x1bb698: 0x1332c0  sll         $a2, $s3, 11
    ctx->pc = 0x1bb698u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
    ctx->pc = 0x1bb69cu;
}
