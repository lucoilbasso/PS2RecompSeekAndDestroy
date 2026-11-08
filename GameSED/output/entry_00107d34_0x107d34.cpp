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

// Function: entry_00107d34
// Address: 0x107d34 - 0x107d68
void entry_00107d34_0x107d34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107d34_0x107d34");
#endif

    ctx->pc = 0x107d34u;

    // 0x107d34: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x107d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x107d38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x107d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x107d3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107d40: 0x50640090  beql        $v1, $a0, . + 4 + (0x90 << 2)
    ctx->pc = 0x107D40u;
    {
        const bool branch_taken_0x107d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x107d40) {
            ctx->pc = 0x107D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107D40u;
            // 0x107d44: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107F84u;
            return;
        }
    }
    ctx->pc = 0x107D48u;
    // 0x107d48: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x107d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x107d4c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x107D4Cu;
    {
        const bool branch_taken_0x107d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D4Cu;
        // 0x107d50: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d4c) {
            ctx->pc = 0x107E80u;
            return;
        }
    }
    ctx->pc = 0x107D54u;
    // 0x107d54: 0x8e8301b4  lw          $v1, 0x1B4($s4)
    ctx->pc = 0x107d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
    // 0x107d58: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x107d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x107d5c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x107D5Cu;
    {
        const bool branch_taken_0x107d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D5Cu;
        // 0x107d60: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d5c) {
            ctx->pc = 0x107E84u;
            return;
        }
    }
    ctx->pc = 0x107D64u;
    // 0x107d64: 0x0  nop
    ctx->pc = 0x107d64u;
    // NOP
    ctx->pc = 0x107d68u;
}
