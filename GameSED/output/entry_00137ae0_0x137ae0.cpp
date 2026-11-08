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

// Function: entry_00137ae0
// Address: 0x137ae0 - 0x137b04
void entry_00137ae0_0x137ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137ae0_0x137ae0");
#endif

    ctx->pc = 0x137ae0u;

label_137ae0:
    // 0x137ae0: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x137ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x137ae4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x137ae4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137ae8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x137ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x137aec: 0x8e440400  lw          $a0, 0x400($s2)
    ctx->pc = 0x137aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1024)));
    // 0x137af0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x137af0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x137af4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x137af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x137af8: 0x204202a  slt         $a0, $s0, $a0
    ctx->pc = 0x137af8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x137afc: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x137AFCu;
    {
        const bool branch_taken_0x137afc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x137B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137AFCu;
        // 0x137b00: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137afc) {
            ctx->pc = 0x137AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137ae0;
        }
    }
    ctx->pc = 0x137B04u;
}
