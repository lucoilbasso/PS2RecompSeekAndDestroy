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

// Function: $L9
// Address: 0x1d0080 - 0x1d00a0
void ps2__L9_0x1d0080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L9_0x1d0080");
#endif

    ctx->pc = 0x1d0080u;

label_1d0080:
    // 0x1d0080: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1d0080u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d0084: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x1d0084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1d0088: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d0088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1d008c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x1d008cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1d0090: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x1d0090u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x1d0094: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D0094u;
    {
        const bool branch_taken_0x1d0094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0094u;
        // 0x1d0098: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0094) {
            ctx->pc = 0x1D0080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0080;
        }
    }
    ctx->pc = 0x1D009Cu;
    // 0x1d009c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1d009cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1d00a0u;
}
