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

// Function: entry_00199efc
// Address: 0x199efc - 0x199f18
void entry_00199efc_0x199efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199efc_0x199efc");
#endif

    ctx->pc = 0x199efcu;

    // 0x199efc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x199efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x199f00: 0x0  nop
    ctx->pc = 0x199f00u;
    // NOP
    // 0x199f04: 0x0  nop
    ctx->pc = 0x199f04u;
    // NOP
    // 0x199f08: 0x0  nop
    ctx->pc = 0x199f08u;
    // NOP
    // 0x199f0c: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x199F0Cu;
    {
        const bool branch_taken_0x199f0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x199F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F0Cu;
        // 0x199f10: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199f0c) {
            ctx->pc = 0x199EF0u;
            return;
        }
    }
    ctx->pc = 0x199F14u;
    // 0x199f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x199f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x199f18u;
}
