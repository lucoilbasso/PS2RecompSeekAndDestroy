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

// Function: entry_0014534c
// Address: 0x14534c - 0x145378
void entry_0014534c_0x14534c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014534c_0x14534c");
#endif

    ctx->pc = 0x14534cu;

    // 0x14534c: 0x8ce201e8  lw          $v0, 0x1E8($a3)
    ctx->pc = 0x14534cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
    // 0x145350: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x145350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x145354: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x145354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x145358: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x145358u;
    {
        const bool branch_taken_0x145358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145358u;
        // 0x14535c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145358) {
            ctx->pc = 0x1453CCu;
            return;
        }
    }
    ctx->pc = 0x145360u;
    // 0x145360: 0x8ce301f0  lw          $v1, 0x1F0($a3)
    ctx->pc = 0x145360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 496)));
    // 0x145364: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x145364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x145368: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x145368u;
    {
        const bool branch_taken_0x145368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145368) {
            ctx->pc = 0x14536Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x145368u;
            // 0x14536c: 0x246300d0  addiu       $v1, $v1, 0xD0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
            ctx->in_delay_slot = false;
            ctx->pc = 0x145378u;
            return;
        }
    }
    ctx->pc = 0x145370u;
    // 0x145370: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x145370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x145374: 0x244300d0  addiu       $v1, $v0, 0xD0
    ctx->pc = 0x145374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    ctx->pc = 0x145378u;
}
