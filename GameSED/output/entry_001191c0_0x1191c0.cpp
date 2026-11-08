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

// Function: entry_001191c0
// Address: 0x1191c0 - 0x1191d0
void entry_001191c0_0x1191c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001191c0_0x1191c0");
#endif

    ctx->pc = 0x1191c0u;

    // 0x1191c0: 0x0  nop
    ctx->pc = 0x1191c0u;
    // NOP
    // 0x1191c4: 0x0  nop
    ctx->pc = 0x1191c4u;
    // NOP
    // 0x1191c8: 0x0  nop
    ctx->pc = 0x1191c8u;
    // NOP
    // 0x1191cc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1191CCu;
    {
        const bool branch_taken_0x1191cc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1191cc) {
            ctx->pc = 0x1191B8u;
            return;
        }
    }
    ctx->pc = 0x1191D4u;
}
