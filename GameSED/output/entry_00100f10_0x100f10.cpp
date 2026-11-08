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

// Function: entry_00100f10
// Address: 0x100f10 - 0x100f30
void entry_00100f10_0x100f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100f10_0x100f10");
#endif

    ctx->pc = 0x100f10u;

    // 0x100f10: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x100f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x100f14: 0x132980  sll         $a1, $s3, 6
    ctx->pc = 0x100f14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x100f18: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x100f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x100f1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100f20: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x100f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x100f24: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x100F24u;
    {
        const bool branch_taken_0x100f24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x100F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100F24u;
        // 0x100f28: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f24) {
            ctx->pc = 0x100F30u;
            return;
        }
    }
    ctx->pc = 0x100F2Cu;
    // 0x100f2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x100f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x100f30u;
}
