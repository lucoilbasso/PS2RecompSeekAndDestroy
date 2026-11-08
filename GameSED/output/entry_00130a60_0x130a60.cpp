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

// Function: entry_00130a60
// Address: 0x130a60 - 0x130a78
void entry_00130a60_0x130a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130a60_0x130a60");
#endif

    ctx->pc = 0x130a60u;

    // 0x130a60: 0x2cc2000e  sltiu       $v0, $a2, 0xE
    ctx->pc = 0x130a60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x130a64: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x130A64u;
    {
        const bool branch_taken_0x130a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130a64) {
            ctx->pc = 0x130A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130A64u;
            // 0x130a68: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130A78u;
            return;
        }
    }
    ctx->pc = 0x130A6Cu;
    // 0x130a6c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x130A6Cu;
    {
        const bool branch_taken_0x130a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130A6Cu;
        // 0x130a70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130a6c) {
            ctx->pc = 0x130C04u;
            return;
        }
    }
    ctx->pc = 0x130A74u;
    // 0x130a74: 0x0  nop
    ctx->pc = 0x130a74u;
    // NOP
    ctx->pc = 0x130a78u;
}
