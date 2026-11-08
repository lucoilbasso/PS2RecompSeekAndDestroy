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

// Function: entry_0018f084
// Address: 0x18f084 - 0x18f0a0
void entry_0018f084_0x18f084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f084_0x18f084");
#endif

    ctx->pc = 0x18f084u;

    // 0x18f084: 0x8e050210  lw          $a1, 0x210($s0)
    ctx->pc = 0x18f084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x18f088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f08c: 0x18a00010  blez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x18F08Cu;
    {
        const bool branch_taken_0x18f08c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x18F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F08Cu;
        // 0x18f090: 0x8e040218  lw          $a0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f08c) {
            ctx->pc = 0x18F0D0u;
            return;
        }
    }
    ctx->pc = 0x18F094u;
    // 0x18f094: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18F094u;
    {
        const bool branch_taken_0x18f094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F094u;
        // 0x18f098: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f094) {
            ctx->pc = 0x18F0B4u;
            return;
        }
    }
    ctx->pc = 0x18F09Cu;
    // 0x18f09c: 0x0  nop
    ctx->pc = 0x18f09cu;
    // NOP
    ctx->pc = 0x18f0a0u;
}
