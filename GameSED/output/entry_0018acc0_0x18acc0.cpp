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

// Function: entry_0018acc0
// Address: 0x18acc0 - 0x18acf0
void entry_0018acc0_0x18acc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018acc0_0x18acc0");
#endif

    ctx->pc = 0x18acc0u;

    // 0x18acc0: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x18ACC0u;
    {
        const bool branch_taken_0x18acc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACC0u;
        // 0x18acc4: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acc0) {
            ctx->pc = 0x18ACF0u;
            return;
        }
    }
    ctx->pc = 0x18ACC8u;
    // 0x18acc8: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x18acc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x18accc: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18ACCCu;
    {
        const bool branch_taken_0x18accc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACCCu;
        // 0x18acd0: 0xdf848c90  ld          $a0, -0x7370($gp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18accc) {
            ctx->pc = 0x18ACF4u;
            return;
        }
    }
    ctx->pc = 0x18ACD4u;
    // 0x18acd4: 0xdf838c80  ld          $v1, -0x7380($gp)
    ctx->pc = 0x18acd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
    // 0x18acd8: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x18acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18acdc: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x18acdcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x18ace0: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x18ace0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18ace4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18ACE4u;
    {
        const bool branch_taken_0x18ace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACE4u;
        // 0x18ace8: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ace4) {
            ctx->pc = 0x18AD08u;
            return;
        }
    }
    ctx->pc = 0x18ACECu;
    // 0x18acec: 0x0  nop
    ctx->pc = 0x18acecu;
    // NOP
    ctx->pc = 0x18acf0u;
}
