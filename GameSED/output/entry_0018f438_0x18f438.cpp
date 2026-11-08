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

// Function: entry_0018f438
// Address: 0x18f438 - 0x18f458
void entry_0018f438_0x18f438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f438_0x18f438");
#endif

    ctx->pc = 0x18f438u;

label_18f438:
    // 0x18f438: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x18f438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18f43c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x18f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18f440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18f440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f444: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x18f444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x18f448: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18f448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18f44c: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x18f44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x18f450: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x18F450u;
    {
        const bool branch_taken_0x18f450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f450) {
            ctx->pc = 0x18F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18F450u;
            // 0x18f454: 0x8e0201cc  lw          $v0, 0x1CC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18F438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f438;
        }
    }
    ctx->pc = 0x18F458u;
}
