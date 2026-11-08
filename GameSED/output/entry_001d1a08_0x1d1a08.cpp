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

// Function: entry_001d1a08
// Address: 0x1d1a08 - 0x1d1a1c
void entry_001d1a08_0x1d1a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1a08_0x1d1a08");
#endif

    ctx->pc = 0x1d1a08u;

    // 0x1d1a08: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x1d1a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x1d1a0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D1A0Cu;
    {
        const bool branch_taken_0x1d1a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1A0Cu;
        // 0x1d1a10: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1a0c) {
            ctx->pc = 0x1D1A1Cu;
            return;
        }
    }
    ctx->pc = 0x1D1A14u;
    // 0x1d1a14: 0x36e20002  ori         $v0, $s7, 0x2
    ctx->pc = 0x1d1a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)2);
    // 0x1d1a18: 0x50b80b  movn        $s7, $v0, $s0
    ctx->pc = 0x1d1a18u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
    ctx->pc = 0x1d1a1cu;
}
