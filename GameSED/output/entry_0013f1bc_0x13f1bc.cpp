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

// Function: entry_0013f1bc
// Address: 0x13f1bc - 0x13f1e8
void entry_0013f1bc_0x13f1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f1bc_0x13f1bc");
#endif

    ctx->pc = 0x13f1bcu;

    // 0x13f1bc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13f1c0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x13f1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x13f1c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13f1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f1c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f1cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13f1d0: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x13f1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x13f1d4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F1D4u;
    {
        const bool branch_taken_0x13f1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x13F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1D4u;
        // 0x13f1d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1d4) {
            ctx->pc = 0x13F1E8u;
            return;
        }
    }
    ctx->pc = 0x13F1DCu;
    // 0x13f1dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x13F1DCu;
    {
        const bool branch_taken_0x13f1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F1DCu;
        // 0x13f1e0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f1dc) {
            ctx->pc = 0x13F218u;
            return;
        }
    }
    ctx->pc = 0x13F1E4u;
    // 0x13f1e4: 0x0  nop
    ctx->pc = 0x13f1e4u;
    // NOP
    ctx->pc = 0x13f1e8u;
}
