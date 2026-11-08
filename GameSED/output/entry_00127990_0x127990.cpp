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

// Function: entry_00127990
// Address: 0x127990 - 0x1279ac
void entry_00127990_0x127990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127990_0x127990");
#endif

    ctx->pc = 0x127990u;

label_127990:
    // 0x127990: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x127990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x127994: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x127994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x127998: 0x0  nop
    ctx->pc = 0x127998u;
    // NOP
    // 0x12799c: 0x0  nop
    ctx->pc = 0x12799cu;
    // NOP
    // 0x1279a0: 0x0  nop
    ctx->pc = 0x1279a0u;
    // NOP
    // 0x1279a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1279A4u;
    {
        const bool branch_taken_0x1279a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1279A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1279A4u;
        // 0x1279a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1279a4) {
            ctx->pc = 0x127990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127990;
        }
    }
    ctx->pc = 0x1279ACu;
}
