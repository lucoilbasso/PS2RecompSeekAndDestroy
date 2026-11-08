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

// Function: entry_001d18b8
// Address: 0x1d18b8 - 0x1d18d0
void entry_001d18b8_0x1d18b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d18b8_0x1d18b8");
#endif

    ctx->pc = 0x1d18b8u;

    // 0x1d18b8: 0x32e20040  andi        $v0, $s7, 0x40
    ctx->pc = 0x1d18b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)64);
    // 0x1d18bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D18BCu;
    {
        const bool branch_taken_0x1d18bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18BCu;
        // 0x1d18c0: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18bc) {
            ctx->pc = 0x1D18D0u;
            return;
        }
    }
    ctx->pc = 0x1D18C4u;
    // 0x1d18c4: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x1d18c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x1d18c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D18C8u;
    {
        const bool branch_taken_0x1d18c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D18CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D18C8u;
        // 0x1d18cc: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d18c8) {
            ctx->pc = 0x1D18D8u;
            return;
        }
    }
    ctx->pc = 0x1D18D0u;
}
