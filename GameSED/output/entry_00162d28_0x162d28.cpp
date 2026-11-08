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

// Function: entry_00162d28
// Address: 0x162d28 - 0x162d34
void entry_00162d28_0x162d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162d28_0x162d28");
#endif

    ctx->pc = 0x162d28u;

    // 0x162d28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x162d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x162d2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162d30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x162d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    ctx->pc = 0x162d34u;
}
