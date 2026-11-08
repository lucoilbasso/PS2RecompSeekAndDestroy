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

// Function: entry_001751e8
// Address: 0x1751e8 - 0x17522c
void entry_001751e8_0x1751e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001751e8_0x1751e8");
#endif

    ctx->pc = 0x1751e8u;

label_1751e8:
    // 0x1751e8: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x1751e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1751ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1751ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1751f0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1751f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1751f4: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1751f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x1751f8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1751f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x1751fc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1751fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x175200: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x175200u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x175204: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x175204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x175208: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x175208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17520c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x17520cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x175210: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x175210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x175214: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x175214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x175218: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x175218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x17521c: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x17521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x175220: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x175220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x175224: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x175224u;
    {
        const bool branch_taken_0x175224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175224u;
        // 0x175228: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175224) {
            ctx->pc = 0x1751E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1751e8;
        }
    }
    ctx->pc = 0x17522Cu;
}
