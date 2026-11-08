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

// Function: entry_00131ec8
// Address: 0x131ec8 - 0x131ed4
void entry_00131ec8_0x131ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131ec8_0x131ec8");
#endif

    ctx->pc = 0x131ec8u;

    // 0x131ec8: 0x54a0fff1  bnel        $a1, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x131EC8u;
    {
        const bool branch_taken_0x131ec8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x131ec8) {
            ctx->pc = 0x131ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131EC8u;
            // 0x131ecc: 0x8ca2004c  lw          $v0, 0x4C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131E90u;
            return;
        }
    }
    ctx->pc = 0x131ED0u;
    // 0x131ed0: 0x8cc40114  lw          $a0, 0x114($a2)
    ctx->pc = 0x131ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 276)));
    ctx->pc = 0x131ed4u;
}
