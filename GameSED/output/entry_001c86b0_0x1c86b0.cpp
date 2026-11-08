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

// Function: entry_001c86b0
// Address: 0x1c86b0 - 0x1c86d0
void entry_001c86b0_0x1c86b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c86b0_0x1c86b0");
#endif

    ctx->pc = 0x1c86b0u;

    // 0x1c86b0: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1c86b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1c86b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C86B4u;
    {
        const bool branch_taken_0x1c86b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C86B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86B4u;
        // 0x1c86b8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c86b4) {
            ctx->pc = 0x1C86D0u;
            return;
        }
    }
    ctx->pc = 0x1C86BCu;
    // 0x1c86bc: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x1c86bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c86c0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c86c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c86c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C86C4u;
    {
        const bool branch_taken_0x1c86c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C86C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C86C4u;
        // 0x1c86c8: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c86c4) {
            ctx->pc = 0x1C86E4u;
            return;
        }
    }
    ctx->pc = 0x1C86CCu;
    // 0x1c86cc: 0x0  nop
    ctx->pc = 0x1c86ccu;
    // NOP
    ctx->pc = 0x1c86d0u;
}
