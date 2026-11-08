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

// Function: entry_001a2ab4
// Address: 0x1a2ab4 - 0x1a2ae0
void entry_001a2ab4_0x1a2ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2ab4_0x1a2ab4");
#endif

    ctx->pc = 0x1a2ab4u;

    // 0x1a2ab4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1a2ab8: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A2AB8u;
    {
        const bool branch_taken_0x1a2ab8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2AB8u;
        // 0x1a2abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ab8) {
            ctx->pc = 0x1A2AE0u;
            return;
        }
    }
    ctx->pc = 0x1A2AC0u;
    // 0x1a2ac0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2ac0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a2ac4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a2ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2acc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1a2accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2ad0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a2ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2ad4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a2ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2ad8: 0x80688f4  j           func_1A23D0
    ctx->pc = 0x1A2AD8u;
    ctx->pc = 0x1A2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2AD8u;
    // 0x1a2adc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A23D0u;
    BMotionLinerMove__FP11BMotionCtrlP11BMotionWorki_0x1a23d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A2AE0u;
}
