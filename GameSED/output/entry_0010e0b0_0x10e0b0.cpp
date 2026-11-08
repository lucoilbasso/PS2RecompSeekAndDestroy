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

// Function: entry_0010e0b0
// Address: 0x10e0b0 - 0x10e0c8
void entry_0010e0b0_0x10e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e0b0_0x10e0b0");
#endif

    ctx->pc = 0x10e0b0u;

    // 0x10e0b0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10e0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x10e0b4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E0B4u;
    {
        const bool branch_taken_0x10e0b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0B4u;
        // 0x10e0b8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0b4) {
            ctx->pc = 0x10E0C8u;
            return;
        }
    }
    ctx->pc = 0x10E0BCu;
    // 0x10e0bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10E0BCu;
    {
        const bool branch_taken_0x10e0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E0BCu;
        // 0x10e0c0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e0bc) {
            ctx->pc = 0x10E0CCu;
            return;
        }
    }
    ctx->pc = 0x10E0C4u;
    // 0x10e0c4: 0x0  nop
    ctx->pc = 0x10e0c4u;
    // NOP
    ctx->pc = 0x10e0c8u;
}
