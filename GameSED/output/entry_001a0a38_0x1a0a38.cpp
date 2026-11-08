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

// Function: entry_001a0a38
// Address: 0x1a0a38 - 0x1a0a58
void entry_001a0a38_0x1a0a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0a38_0x1a0a38");
#endif

    ctx->pc = 0x1a0a38u;

    // 0x1a0a38: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1a0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1a0a3c: 0x54e20006  bnel        $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0A3Cu;
    {
        const bool branch_taken_0x1a0a3c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0a3c) {
            ctx->pc = 0x1A0A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A3Cu;
            // 0x1a0a40: 0x24020101  addiu       $v0, $zero, 0x101 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A58u;
            return;
        }
    }
    ctx->pc = 0x1A0A44u;
    // 0x1a0a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0a48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a0a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a4c: 0x805bed8  j           func_16FB60
    ctx->pc = 0x1A0A4Cu;
    ctx->pc = 0x1A0A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A4Cu;
    // 0x1a0a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB60u;
    ApDebugHistoryEnable__Fb_0x16fb60(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0A54u;
    // 0x1a0a54: 0x0  nop
    ctx->pc = 0x1a0a54u;
    // NOP
    ctx->pc = 0x1a0a58u;
}
