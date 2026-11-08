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

// Function: entry_0012e7f8
// Address: 0x12e7f8 - 0x12e804
void entry_0012e7f8_0x12e7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e7f8_0x12e7f8");
#endif

    ctx->pc = 0x12e7f8u;

    // 0x12e7f8: 0x1600ffe3  bnez        $s0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x12E7F8u;
    {
        const bool branch_taken_0x12e7f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e7f8) {
            ctx->pc = 0x12E788u;
            return;
        }
    }
    ctx->pc = 0x12E800u;
    // 0x12e800: 0x8e240184  lw          $a0, 0x184($s1)
    ctx->pc = 0x12e800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    ctx->pc = 0x12e804u;
}
