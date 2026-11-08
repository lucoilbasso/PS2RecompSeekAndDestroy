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

// Function: entry_001c9c58
// Address: 0x1c9c58 - 0x1c9c78
void entry_001c9c58_0x1c9c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9c58_0x1c9c58");
#endif

    ctx->pc = 0x1c9c58u;

    // 0x1c9c58: 0x4803c  dsll32      $s0, $a0, 0
    ctx->pc = 0x1c9c58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1c9c5c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1c9c5cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1c9c60: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9C60u;
    {
        const bool branch_taken_0x1c9c60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9C60u;
        // 0x1c9c64: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c60) {
            ctx->pc = 0x1C9C8Cu;
            return;
        }
    }
    ctx->pc = 0x1C9C68u;
    // 0x1c9c68: 0x3c11001f  lui         $s1, 0x1F
    ctx->pc = 0x1c9c68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)31 << 16));
    // 0x1c9c6c: 0x2631ab50  addiu       $s1, $s1, -0x54B0
    ctx->pc = 0x1c9c6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945616));
    // 0x1c9c70: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1c9c70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c9c74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1c9c78u;
}
