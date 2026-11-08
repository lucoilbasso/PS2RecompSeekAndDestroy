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

// Function: entry_00161d9c
// Address: 0x161d9c - 0x161db0
void entry_00161d9c_0x161d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161d9c_0x161d9c");
#endif

    ctx->pc = 0x161d9cu;

    // 0x161d9c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x161d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x161da0: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x161da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x161da4: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x161DA4u;
    {
        const bool branch_taken_0x161da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161DA4u;
        // 0x161da8: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161da4) {
            ctx->pc = 0x1620F0u;
            return;
        }
    }
    ctx->pc = 0x161DACu;
    // 0x161dac: 0x0  nop
    ctx->pc = 0x161dacu;
    // NOP
    ctx->pc = 0x161db0u;
}
