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

// Function: entry_001d4884
// Address: 0x1d4884 - 0x1d48a0
void entry_001d4884_0x1d4884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4884_0x1d4884");
#endif

    ctx->pc = 0x1d4884u;

    // 0x1d4884: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d4884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d4888: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x1d4888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d488c: 0x0  nop
    ctx->pc = 0x1d488cu;
    // NOP
    // 0x1d4890: 0x0  nop
    ctx->pc = 0x1d4890u;
    // NOP
    // 0x1d4894: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D4894u;
    {
        const bool branch_taken_0x1d4894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4894) {
            ctx->pc = 0x1D4898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4894u;
            // 0x1d4898: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4878u;
            return;
        }
    }
    ctx->pc = 0x1D489Cu;
    // 0x1d489c: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x1d489cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    ctx->pc = 0x1d48a0u;
}
