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

// Function: entry_00115944
// Address: 0x115944 - 0x115964
void entry_00115944_0x115944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115944_0x115944");
#endif

    ctx->pc = 0x115944u;

    // 0x115944: 0x172840  sll         $a1, $s7, 1
    ctx->pc = 0x115944u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x115948: 0x2442c0a8  addiu       $v0, $v0, -0x3F58
    ctx->pc = 0x115948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951080));
    // 0x11594c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x11594cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x115950: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x115950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x115954: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x115954u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x115958: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x115958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11595c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x11595Cu;
    {
        const bool branch_taken_0x11595c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11595Cu;
        // 0x115960: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11595c) {
            ctx->pc = 0x1158A8u;
            return;
        }
    }
    ctx->pc = 0x115964u;
}
