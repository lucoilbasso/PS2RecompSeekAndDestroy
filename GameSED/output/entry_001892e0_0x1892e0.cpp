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

// Function: entry_001892e0
// Address: 0x1892e0 - 0x189300
void entry_001892e0_0x1892e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001892e0_0x1892e0");
#endif

    ctx->pc = 0x1892e0u;

label_1892e0:
    // 0x1892e0: 0x24a300a0  addiu       $v1, $a1, 0xA0
    ctx->pc = 0x1892e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x1892e4: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x1892e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1892e8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1892e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x1892ec: 0x24a400d0  addiu       $a0, $a1, 0xD0
    ctx->pc = 0x1892ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
    // 0x1892f0: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x1892f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1892f4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1892f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1892f8: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1892F8u;
    {
        const bool branch_taken_0x1892f8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1892FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1892F8u;
        // 0x1892fc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1892f8) {
            ctx->pc = 0x1892E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1892e0;
        }
    }
    ctx->pc = 0x189300u;
}
