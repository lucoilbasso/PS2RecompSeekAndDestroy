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

// Function: entry_0018e5f8
// Address: 0x18e5f8 - 0x18e61c
void entry_0018e5f8_0x18e5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e5f8_0x18e5f8");
#endif

    ctx->pc = 0x18e5f8u;

label_18e5f8:
    // 0x18e5f8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x18e5f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e5fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e600: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x18e600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x18e604: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x18e604u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e608: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x18e60c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18e60cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e610: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E610u;
    {
        const bool branch_taken_0x18e610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E610u;
        // 0x18e614: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e610) {
            ctx->pc = 0x18E5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e5f8;
        }
    }
    ctx->pc = 0x18E618u;
    // 0x18e618: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x18e618u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->pc = 0x18e61cu;
}
