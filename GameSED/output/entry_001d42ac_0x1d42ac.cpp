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

// Function: entry_001d42ac
// Address: 0x1d42ac - 0x1d42e0
void entry_001d42ac_0x1d42ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d42ac_0x1d42ac");
#endif

    ctx->pc = 0x1d42acu;

    // 0x1d42ac: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x1d42acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1d42b0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D42B0u;
    {
        const bool branch_taken_0x1d42b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42B0u;
        // 0x1d42b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42b0) {
            ctx->pc = 0x1D432Cu;
            return;
        }
    }
    ctx->pc = 0x1D42B8u;
    // 0x1d42b8: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x1d42b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1d42bc: 0x1240001b  beqz        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D42BCu;
    {
        const bool branch_taken_0x1d42bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42BCu;
        // 0x1d42c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42bc) {
            ctx->pc = 0x1D432Cu;
            return;
        }
    }
    ctx->pc = 0x1D42C4u;
    // 0x1d42c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d42c8: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1d42c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1d42cc: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x1d42ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x1d42d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D42D0u;
    {
        const bool branch_taken_0x1d42d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42D0u;
        // 0x1d42d4: 0x528023  subu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42d0) {
            ctx->pc = 0x1D42F8u;
            return;
        }
    }
    ctx->pc = 0x1D42D8u;
    // 0x1d42d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D42D8u;
    {
        const bool branch_taken_0x1d42d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42D8u;
        // 0x1d42dc: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42d8) {
            ctx->pc = 0x1D42F8u;
            return;
        }
    }
    ctx->pc = 0x1D42E0u;
}
