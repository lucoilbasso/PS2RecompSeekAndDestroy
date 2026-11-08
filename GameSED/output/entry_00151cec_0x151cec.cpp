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

// Function: entry_00151cec
// Address: 0x151cec - 0x151cf8
void entry_00151cec_0x151cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151cec_0x151cec");
#endif

    ctx->pc = 0x151cecu;

    // 0x151cec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151CECu;
    {
        const bool branch_taken_0x151cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CECu;
        // 0x151cf0: 0x24439cd0  addiu       $v1, $v0, -0x6330 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151cec) {
            ctx->pc = 0x151CFCu;
            return;
        }
    }
    ctx->pc = 0x151CF4u;
    // 0x151cf4: 0x0  nop
    ctx->pc = 0x151cf4u;
    // NOP
    ctx->pc = 0x151cf8u;
}
