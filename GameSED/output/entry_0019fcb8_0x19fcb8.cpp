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

// Function: entry_0019fcb8
// Address: 0x19fcb8 - 0x19fcdc
void entry_0019fcb8_0x19fcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fcb8_0x19fcb8");
#endif

    ctx->pc = 0x19fcb8u;

    // 0x19fcb8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19FCB8u;
    {
        const bool branch_taken_0x19fcb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCB8u;
        // 0x19fcbc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcb8) {
            ctx->pc = 0x19FCE4u;
            return;
        }
    }
    ctx->pc = 0x19FCC0u;
    // 0x19fcc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19fcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fcc4: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x19fcc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x19fcc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FCC8u;
    {
        const bool branch_taken_0x19fcc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FCC8u;
        // 0x19fccc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fcc8) {
            ctx->pc = 0x19FCDCu;
            return;
        }
    }
    ctx->pc = 0x19FCD0u;
    // 0x19fcd0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19fcd4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19fcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19fcd8: 0xc2282b  sltu        $a1, $a2, $v0
    ctx->pc = 0x19fcd8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x19fcdcu;
}
