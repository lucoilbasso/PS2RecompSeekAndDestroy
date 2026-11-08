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

// Function: entry_0019f958
// Address: 0x19f958 - 0x19f970
void entry_0019f958_0x19f958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f958_0x19f958");
#endif

    ctx->pc = 0x19f958u;

    // 0x19f958: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F958u;
    {
        const bool branch_taken_0x19f958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f958) {
            ctx->pc = 0x19F95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F958u;
            // 0x19f95c: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F970u;
            return;
        }
    }
    ctx->pc = 0x19F960u;
    // 0x19f960: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x19f960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x19f964: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x19f964u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x19f968: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19f968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x19f96c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x19f970u;
}
