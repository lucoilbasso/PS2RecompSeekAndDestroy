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

// Function: entry_001a0a58
// Address: 0x1a0a58 - 0x1a0a70
void entry_001a0a58_0x1a0a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0a58_0x1a0a58");
#endif

    ctx->pc = 0x1a0a58u;

    // 0x1a0a58: 0x54e20005  bnel        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0A58u;
    {
        const bool branch_taken_0x1a0a58 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a0a58) {
            ctx->pc = 0x1A0A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0A58u;
            // 0x1a0a5c: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0A70u;
            return;
        }
    }
    ctx->pc = 0x1A0A60u;
    // 0x1a0a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0a64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a0a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0a68: 0x805bed8  j           func_16FB60
    ctx->pc = 0x1A0A68u;
    ctx->pc = 0x1A0A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0A68u;
    // 0x1a0a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB60u;
    ApDebugHistoryEnable__Fb_0x16fb60(rdram, ctx, runtime); return;
    ctx->pc = 0x1A0A70u;
}
