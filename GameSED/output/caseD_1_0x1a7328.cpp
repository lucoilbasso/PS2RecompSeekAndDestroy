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

// Function: caseD_1
// Address: 0x1a7328 - 0x1a7338
void caseD_1_0x1a7328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1a7328");
#endif

    ctx->pc = 0x1a7328u;

    // 0x1a7328: 0x2051026  xor         $v0, $s0, $a1
    ctx->pc = 0x1a7328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 5));
    // 0x1a732c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A732Cu;
    {
        const bool branch_taken_0x1a732c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A732Cu;
        // 0x1a7330: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a732c) {
            ctx->pc = 0x1A7370u;
            return;
        }
    }
    ctx->pc = 0x1A7334u;
    // 0x1a7334: 0x0  nop
    ctx->pc = 0x1a7334u;
    // NOP
    ctx->pc = 0x1a7338u;
}
