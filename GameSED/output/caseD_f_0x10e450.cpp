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

// Function: caseD_f
// Address: 0x10e450 - 0x10e468
void caseD_f_0x10e450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x10e450");
#endif

    ctx->pc = 0x10e450u;

    // 0x10e450: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x10e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x10e454: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10e454u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e458: 0x3063bfff  andi        $v1, $v1, 0xBFFF
    ctx->pc = 0x10e458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49151);
    // 0x10e45c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10E45Cu;
    {
        const bool branch_taken_0x10e45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E45Cu;
        // 0x10e460: 0x34644000  ori         $a0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e45c) {
            ctx->pc = 0x10E478u;
            return;
        }
    }
    ctx->pc = 0x10E464u;
    // 0x10e464: 0x0  nop
    ctx->pc = 0x10e464u;
    // NOP
    ctx->pc = 0x10e468u;
}
