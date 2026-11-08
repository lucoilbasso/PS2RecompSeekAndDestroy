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

// Function: entry_001a7734
// Address: 0x1a7734 - 0x1a7760
void entry_001a7734_0x1a7734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7734_0x1a7734");
#endif

    ctx->pc = 0x1a7734u;

    // 0x1a7734: 0x2701024  and         $v0, $s3, $s0
    ctx->pc = 0x1a7734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x1a7738: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A7738u;
    {
        const bool branch_taken_0x1a7738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7738u;
        // 0x1a773c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7738) {
            ctx->pc = 0x1A7798u;
            return;
        }
    }
    ctx->pc = 0x1A7740u;
    // 0x1a7740: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7744: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A7744u;
    {
        const bool branch_taken_0x1a7744 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a7744) {
            ctx->pc = 0x1A7748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7744u;
            // 0x1a7748: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7760u;
            return;
        }
    }
    ctx->pc = 0x1A774Cu;
    // 0x1a774c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x1a774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1a7750: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a7750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a7754: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A7754u;
    {
        const bool branch_taken_0x1a7754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7754u;
        // 0x1a7758: 0xae420018  sw          $v0, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7754) {
            ctx->pc = 0x1A7798u;
            return;
        }
    }
    ctx->pc = 0x1A775Cu;
    // 0x1a775c: 0x0  nop
    ctx->pc = 0x1a775cu;
    // NOP
    ctx->pc = 0x1a7760u;
}
