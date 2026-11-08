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

// Function: entry_001662e0
// Address: 0x1662e0 - 0x166314
void entry_001662e0_0x1662e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001662e0_0x1662e0");
#endif

    ctx->pc = 0x1662e0u;

label_1662e0:
    // 0x1662e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1662e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1662e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1662e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1662e8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1662e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1662ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1662ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1662f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1662f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1662f4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1662f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1662f8: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x1662f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x1662fc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1662fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x166300: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x166300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
    // 0x166304: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x166304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x166308: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x166308u;
    {
        const bool branch_taken_0x166308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166308u;
        // 0x16630c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166308) {
            ctx->pc = 0x1662E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1662e0;
        }
    }
    ctx->pc = 0x166310u;
    // 0x166310: 0x8e4211e0  lw          $v0, 0x11E0($s2)
    ctx->pc = 0x166310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4576)));
    ctx->pc = 0x166314u;
}
