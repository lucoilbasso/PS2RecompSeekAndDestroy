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

// Function: entry_001b130c
// Address: 0x1b130c - 0x1b1318
void entry_001b130c_0x1b130c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b130c_0x1b130c");
#endif

    ctx->pc = 0x1b130cu;

    // 0x1b130c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x1b130cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1b1310: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b1310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1b1318u;
}
