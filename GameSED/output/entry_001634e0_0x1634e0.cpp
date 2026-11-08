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

// Function: entry_001634e0
// Address: 0x1634e0 - 0x163528
void entry_001634e0_0x1634e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001634e0_0x1634e0");
#endif

    ctx->pc = 0x1634e0u;

label_1634e0:
    // 0x1634e0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x1634e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1634e4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1634e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1634e8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1634e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1634ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1634ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1634f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1634f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1634f4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1634f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x1634f8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x1634f8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x1634fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1634fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x163500: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x163500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x163504: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x163504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163508: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x163508u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x16350c: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x16350cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x163510: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x163510u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x163514: 0x8e43016c  lw          $v1, 0x16C($s2)
    ctx->pc = 0x163514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 364)));
    // 0x163518: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x163518u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x16351c: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x16351cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x163520: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x163520u;
    {
        const bool branch_taken_0x163520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x163524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163520u;
        // 0x163524: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163520) {
            ctx->pc = 0x1634E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1634e0;
        }
    }
    ctx->pc = 0x163528u;
}
