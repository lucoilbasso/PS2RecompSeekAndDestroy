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

// Function: entry_001082d0
// Address: 0x1082d0 - 0x1082ec
void entry_001082d0_0x1082d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001082d0_0x1082d0");
#endif

    ctx->pc = 0x1082d0u;

    // 0x1082d0: 0x8e040144  lw          $a0, 0x144($s0)
    ctx->pc = 0x1082d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x1082d4: 0x10800089  beqz        $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1082D4u;
    {
        const bool branch_taken_0x1082d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1082D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1082D4u;
        // 0x1082d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1082d4) {
            ctx->pc = 0x1084FCu;
            return;
        }
    }
    ctx->pc = 0x1082DCu;
    // 0x1082dc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x1082dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1082e0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1082e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1082e4: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1082E4u;
    {
        const bool branch_taken_0x1082e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1082e4) {
            ctx->pc = 0x1082E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1082E4u;
            // 0x1082e8: 0x24840088  addiu       $a0, $a0, 0x88 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1082F8u;
            return;
        }
    }
    ctx->pc = 0x1082ECu;
}
