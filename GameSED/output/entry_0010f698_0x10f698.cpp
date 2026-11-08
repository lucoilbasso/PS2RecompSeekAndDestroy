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

// Function: entry_0010f698
// Address: 0x10f698 - 0x10f6b0
void entry_0010f698_0x10f698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f698_0x10f698");
#endif

    ctx->pc = 0x10f698u;

    // 0x10f698: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x10f698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x10f69c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10F69Cu;
    {
        const bool branch_taken_0x10f69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F69Cu;
        // 0x10f6a0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f69c) {
            ctx->pc = 0x10F6B0u;
            return;
        }
    }
    ctx->pc = 0x10F6A4u;
    // 0x10f6a4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x10f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x10f6a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10F6A8u;
    {
        const bool branch_taken_0x10f6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F6A8u;
        // 0x10f6ac: 0x24510030  addiu       $s1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f6a8) {
            ctx->pc = 0x10F6B4u;
            return;
        }
    }
    ctx->pc = 0x10F6B0u;
}
