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

// Function: entry_00131698
// Address: 0x131698 - 0x1316a0
void entry_00131698_0x131698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131698_0x131698");
#endif

    ctx->pc = 0x131698u;

    // 0x131698: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x131698u;
    {
        const bool branch_taken_0x131698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x131698) {
            ctx->pc = 0x13169Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131698u;
            // 0x13169c: 0x8e0200ec  lw          $v0, 0xEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131660u;
            return;
        }
    }
    ctx->pc = 0x1316A0u;
}
