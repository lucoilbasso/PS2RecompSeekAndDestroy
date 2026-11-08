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

// Function: entry_0013202c
// Address: 0x13202c - 0x132048
void entry_0013202c_0x13202c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013202c_0x13202c");
#endif

    ctx->pc = 0x13202cu;

    // 0x13202c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13202cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132030: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132034: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x132034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x132038: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x132038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x13203c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13203Cu;
    {
        const bool branch_taken_0x13203c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13203Cu;
        // 0x132040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13203c) {
            ctx->pc = 0x132064u;
            return;
        }
    }
    ctx->pc = 0x132044u;
    // 0x132044: 0x0  nop
    ctx->pc = 0x132044u;
    // NOP
    ctx->pc = 0x132048u;
}
