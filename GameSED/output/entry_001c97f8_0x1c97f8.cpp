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

// Function: entry_001c97f8
// Address: 0x1c97f8 - 0x1c9818
void entry_001c97f8_0x1c97f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c97f8_0x1c97f8");
#endif

    ctx->pc = 0x1c97f8u;

    // 0x1c97f8: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1c97f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1c97fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C97FCu;
    {
        const bool branch_taken_0x1c97fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C97FCu;
        // 0x1c9800: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97fc) {
            ctx->pc = 0x1C9818u;
            return;
        }
    }
    ctx->pc = 0x1C9804u;
    // 0x1c9804: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1c9804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1c9808: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c9808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c980c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C980Cu;
    {
        const bool branch_taken_0x1c980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C980Cu;
        // 0x1c9810: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c980c) {
            ctx->pc = 0x1C982Cu;
            return;
        }
    }
    ctx->pc = 0x1C9814u;
    // 0x1c9814: 0x0  nop
    ctx->pc = 0x1c9814u;
    // NOP
    ctx->pc = 0x1c9818u;
}
