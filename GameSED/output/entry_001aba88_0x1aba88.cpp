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

// Function: entry_001aba88
// Address: 0x1aba88 - 0x1abaac
void entry_001aba88_0x1aba88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aba88_0x1aba88");
#endif

    ctx->pc = 0x1aba88u;

label_1aba88:
    // 0x1aba88: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x1aba88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1aba8c: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x1aba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x1aba90: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x1aba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x1aba94: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x1aba94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aba98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1aba98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1aba9c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1abaa0: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x1abaa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1abaa4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1ABAA4u;
    {
        const bool branch_taken_0x1abaa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABAA4u;
        // 0x1abaa8: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abaa4) {
            ctx->pc = 0x1ABA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aba88;
        }
    }
    ctx->pc = 0x1ABAACu;
}
