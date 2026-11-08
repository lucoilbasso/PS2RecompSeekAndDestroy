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

// Function: entry_00111b40
// Address: 0x111b40 - 0x111b4c
void entry_00111b40_0x111b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111b40_0x111b40");
#endif

    ctx->pc = 0x111b40u;

    // 0x111b40: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x111b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x111b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111b48: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x111b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x111b4cu;
}
