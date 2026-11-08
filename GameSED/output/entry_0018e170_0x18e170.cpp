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

// Function: entry_0018e170
// Address: 0x18e170 - 0x18e194
void entry_0018e170_0x18e170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e170_0x18e170");
#endif

    ctx->pc = 0x18e170u;

label_18e170:
    // 0x18e170: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x18e170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18e174: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x18e174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18e178: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18e178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x18e17c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x18e17cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x18e180: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18e180u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x18e184: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x18e184u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e188: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18E188u;
    {
        const bool branch_taken_0x18e188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E188u;
        // 0x18e18c: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e188) {
            ctx->pc = 0x18E170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e170;
        }
    }
    ctx->pc = 0x18E190u;
    // 0x18e190: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x18e190u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->pc = 0x18e194u;
}
