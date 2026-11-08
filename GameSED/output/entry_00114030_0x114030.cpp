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

// Function: entry_00114030
// Address: 0x114030 - 0x114038
void entry_00114030_0x114030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114030_0x114030");
#endif

    ctx->pc = 0x114030u;

    // 0x114030: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x114030u;
    {
        const bool branch_taken_0x114030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114030u;
        // 0x114034: 0x90660012  lbu         $a2, 0x12($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114030) {
            ctx->pc = 0x11403Cu;
            return;
        }
    }
    ctx->pc = 0x114038u;
}
