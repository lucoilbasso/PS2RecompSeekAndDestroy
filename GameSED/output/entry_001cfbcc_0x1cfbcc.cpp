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

// Function: entry_001cfbcc
// Address: 0x1cfbcc - 0x1cfbe8
void entry_001cfbcc_0x1cfbcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfbcc_0x1cfbcc");
#endif

    ctx->pc = 0x1cfbccu;

    // 0x1cfbcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1cfbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1cfbd0: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1cfbd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cfbd4: 0x0  nop
    ctx->pc = 0x1cfbd4u;
    // NOP
    // 0x1cfbd8: 0x0  nop
    ctx->pc = 0x1cfbd8u;
    // NOP
    // 0x1cfbdc: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CFBDCu;
    {
        const bool branch_taken_0x1cfbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cfbdc) {
            ctx->pc = 0x1CFBE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFBDCu;
            // 0x1cfbe0: 0x8d080008  lw          $t0, 0x8($t0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFBC0u;
            return;
        }
    }
    ctx->pc = 0x1CFBE4u;
    // 0x1cfbe4: 0x8d0b000c  lw          $t3, 0xC($t0)
    ctx->pc = 0x1cfbe4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    ctx->pc = 0x1cfbe8u;
}
