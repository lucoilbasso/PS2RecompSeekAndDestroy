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

// Function: entry_001a8048
// Address: 0x1a8048 - 0x1a8070
void entry_001a8048_0x1a8048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8048_0x1a8048");
#endif

    ctx->pc = 0x1a8048u;

label_1a8048:
    // 0x1a8048: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x1a8048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a804c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a804cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a8050: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x1a8050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1a8054: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x1a8054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1a8058: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x1a8058u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a805c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1a805cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1a8060: 0x48300a  movz        $a2, $v0, $t0
    ctx->pc = 0x1a8060u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1a8064: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1a8064u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8068: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A8068u;
    {
        const bool branch_taken_0x1a8068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8068u;
        // 0x1a806c: 0x30880003  andi        $t0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8068) {
            ctx->pc = 0x1A8048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8048;
        }
    }
    ctx->pc = 0x1A8070u;
}
