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

// Function: entry_00128fec
// Address: 0x128fec - 0x128ff8
void entry_00128fec_0x128fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128fec_0x128fec");
#endif

    ctx->pc = 0x128fecu;

    // 0x128fec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128FECu;
    {
        const bool branch_taken_0x128fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128FECu;
        // 0x128ff0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128fec) {
            ctx->pc = 0x129010u;
            return;
        }
    }
    ctx->pc = 0x128FF4u;
    // 0x128ff4: 0x0  nop
    ctx->pc = 0x128ff4u;
    // NOP
    ctx->pc = 0x128ff8u;
}
