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

// Function: entry_00156630
// Address: 0x156630 - 0x15663c
void entry_00156630_0x156630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156630_0x156630");
#endif

    ctx->pc = 0x156630u;

    // 0x156630: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x156630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x156634: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x156634u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156638: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x15663cu;
}
