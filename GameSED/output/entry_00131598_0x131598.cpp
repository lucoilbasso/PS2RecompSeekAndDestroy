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

// Function: entry_00131598
// Address: 0x131598 - 0x1315b4
void entry_00131598_0x131598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131598_0x131598");
#endif

    ctx->pc = 0x131598u;

    // 0x131598: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x131598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x13159c: 0x0  nop
    ctx->pc = 0x13159cu;
    // NOP
    // 0x1315a0: 0x0  nop
    ctx->pc = 0x1315a0u;
    // NOP
    // 0x1315a4: 0x0  nop
    ctx->pc = 0x1315a4u;
    // NOP
    // 0x1315a8: 0x0  nop
    ctx->pc = 0x1315a8u;
    // NOP
    // 0x1315ac: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1315ACu;
    {
        const bool branch_taken_0x1315ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1315ac) {
            ctx->pc = 0x1315B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1315ACu;
            // 0x1315b0: 0x8c620110  lw          $v0, 0x110($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131590u;
            return;
        }
    }
    ctx->pc = 0x1315B4u;
}
