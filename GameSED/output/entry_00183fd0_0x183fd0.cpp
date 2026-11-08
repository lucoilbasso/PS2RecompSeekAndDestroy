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

// Function: entry_00183fd0
// Address: 0x183fd0 - 0x183fdc
void entry_00183fd0_0x183fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183fd0_0x183fd0");
#endif

    ctx->pc = 0x183fd0u;

    // 0x183fd0: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x183fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x183fd4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x183FD4u;
    {
        const bool branch_taken_0x183fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183fd4) {
            ctx->pc = 0x184008u;
            return;
        }
    }
    ctx->pc = 0x183FDCu;
}
