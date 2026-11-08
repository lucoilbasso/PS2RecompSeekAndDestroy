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

// Function: entry_0012ecfc
// Address: 0x12ecfc - 0x12ed0c
void entry_0012ecfc_0x12ecfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ecfc_0x12ecfc");
#endif

    ctx->pc = 0x12ecfcu;

    // 0x12ecfc: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x12ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x12ed00: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x12ED00u;
    {
        const bool branch_taken_0x12ed00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ed00) {
            ctx->pc = 0x12ED04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ED00u;
            // 0x12ed04: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ED0Cu;
            return;
        }
    }
    ctx->pc = 0x12ED08u;
    // 0x12ed08: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x12ed08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    ctx->pc = 0x12ed0cu;
}
