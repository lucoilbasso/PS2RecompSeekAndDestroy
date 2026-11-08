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

// Function: entry_0018cd4c
// Address: 0x18cd4c - 0x18cd64
void entry_0018cd4c_0x18cd4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cd4c_0x18cd4c");
#endif

    ctx->pc = 0x18cd4cu;

    // 0x18cd4c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x18cd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18cd50: 0x96550040  lhu         $s5, 0x40($s2)
    ctx->pc = 0x18cd50u;
    SET_GPR_ZE32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x18cd54: 0x96570044  lhu         $s7, 0x44($s2)
    ctx->pc = 0x18cd54u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x18cd58: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18CD58u;
    {
        const bool branch_taken_0x18cd58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CD58u;
        // 0x18cd5c: 0xae910008  sw          $s1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cd58) {
            ctx->pc = 0x18CD64u;
            return;
        }
    }
    ctx->pc = 0x18CD60u;
    // 0x18cd60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->pc = 0x18cd64u;
}
