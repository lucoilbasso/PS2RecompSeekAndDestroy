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

// Function: entry_00183f4c
// Address: 0x183f4c - 0x183f70
void entry_00183f4c_0x183f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183f4c_0x183f4c");
#endif

    ctx->pc = 0x183f4cu;

    // 0x183f4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183f50: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x183F50u;
    {
        const bool branch_taken_0x183f50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x183f50) {
            ctx->pc = 0x183FA8u;
            return;
        }
    }
    ctx->pc = 0x183F58u;
    // 0x183f58: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x183f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x183f5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f60: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x183F60u;
    {
        const bool branch_taken_0x183f60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x183F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F60u;
        // 0x183f64: 0x8c830040  lw          $v1, 0x40($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f60) {
            ctx->pc = 0x183FA8u;
            return;
        }
    }
    ctx->pc = 0x183F68u;
    // 0x183f68: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x183f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x183f6c: 0x0  nop
    ctx->pc = 0x183f6cu;
    // NOP
    ctx->pc = 0x183f70u;
}
