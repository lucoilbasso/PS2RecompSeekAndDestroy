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

// Function: entry_001aef3c
// Address: 0x1aef3c - 0x1aef4c
void entry_001aef3c_0x1aef3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aef3c_0x1aef3c");
#endif

    ctx->pc = 0x1aef3cu;

    // 0x1aef3c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1aef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1aef40: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1aef40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1aef44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AEF44u;
    {
        const bool branch_taken_0x1aef44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aef44) {
            ctx->pc = 0x1AEF30u;
            return;
        }
    }
    ctx->pc = 0x1AEF4Cu;
}
