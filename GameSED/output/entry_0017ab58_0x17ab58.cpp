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

// Function: entry_0017ab58
// Address: 0x17ab58 - 0x17ab70
void entry_0017ab58_0x17ab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ab58_0x17ab58");
#endif

    ctx->pc = 0x17ab58u;

    // 0x17ab58: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x17ab58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x17ab5c: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x17ab5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x17ab60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x17AB60u;
    {
        const bool branch_taken_0x17ab60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB60u;
        // 0x17ab64: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab60) {
            ctx->pc = 0x17AB38u;
            return;
        }
    }
    ctx->pc = 0x17AB68u;
    // 0x17ab68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17ab68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab6c: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x17ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    ctx->pc = 0x17ab70u;
}
