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

// Function: entry_00183668
// Address: 0x183668 - 0x183690
void entry_00183668_0x183668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183668_0x183668");
#endif

    ctx->pc = 0x183668u;

label_183668:
    // 0x183668: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x183668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x18366c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x18366cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x183670: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x183670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x183674: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x183674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x183678: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x183678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18367c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x18367cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x183680: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x183680u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x183684: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x183684u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x183688: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x183688u;
    {
        const bool branch_taken_0x183688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183688u;
        // 0x18368c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183688) {
            ctx->pc = 0x183668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183668;
        }
    }
    ctx->pc = 0x183690u;
}
