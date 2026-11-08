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

// Function: entry_00108ce8
// Address: 0x108ce8 - 0x108cf8
void entry_00108ce8_0x108ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108ce8_0x108ce8");
#endif

    ctx->pc = 0x108ce8u;

    // 0x108ce8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x108ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x108CECu;
    {
        const bool branch_taken_0x108cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108CECu;
        // 0x108cf0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cec) {
            ctx->pc = 0x108D40u;
            return;
        }
    }
    ctx->pc = 0x108CF4u;
    // 0x108cf4: 0x0  nop
    ctx->pc = 0x108cf4u;
    // NOP
    ctx->pc = 0x108cf8u;
}
