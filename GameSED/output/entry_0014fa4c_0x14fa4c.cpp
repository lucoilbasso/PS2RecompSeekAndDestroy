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

// Function: entry_0014fa4c
// Address: 0x14fa4c - 0x14fa78
void entry_0014fa4c_0x14fa4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fa4c_0x14fa4c");
#endif

    ctx->pc = 0x14fa4cu;

    // 0x14fa4c: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x14FA4Cu;
    {
        const bool branch_taken_0x14fa4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fa4c) {
            ctx->pc = 0x14FA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FA4Cu;
            // 0x14fa50: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FB14u;
            return;
        }
    }
    ctx->pc = 0x14FA54u;
    // 0x14fa54: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x14fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x14fa58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14FA58u;
    {
        const bool branch_taken_0x14fa58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA58u;
        // 0x14fa5c: 0x8e030690  lw          $v1, 0x690($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa58) {
            ctx->pc = 0x14FA78u;
            return;
        }
    }
    ctx->pc = 0x14FA60u;
    // 0x14fa60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x14fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14fa64: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x14fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x14fa68: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x14fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x14fa6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14FA6Cu;
    {
        const bool branch_taken_0x14fa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FA6Cu;
        // 0x14fa70: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa6c) {
            ctx->pc = 0x14FA7Cu;
            return;
        }
    }
    ctx->pc = 0x14FA74u;
    // 0x14fa74: 0x0  nop
    ctx->pc = 0x14fa74u;
    // NOP
    ctx->pc = 0x14fa78u;
}
