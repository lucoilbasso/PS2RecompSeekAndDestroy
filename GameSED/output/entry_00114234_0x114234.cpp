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

// Function: entry_00114234
// Address: 0x114234 - 0x11424c
void entry_00114234_0x114234(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114234_0x114234");
#endif

    ctx->pc = 0x114234u;

    // 0x114234: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x114234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x114238: 0x0  nop
    ctx->pc = 0x114238u;
    // NOP
    // 0x11423c: 0x0  nop
    ctx->pc = 0x11423cu;
    // NOP
    // 0x114240: 0x0  nop
    ctx->pc = 0x114240u;
    // NOP
    // 0x114244: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x114244u;
    {
        const bool branch_taken_0x114244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114244) {
            ctx->pc = 0x114248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114244u;
            // 0x114248: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114228u;
            return;
        }
    }
    ctx->pc = 0x11424Cu;
}
