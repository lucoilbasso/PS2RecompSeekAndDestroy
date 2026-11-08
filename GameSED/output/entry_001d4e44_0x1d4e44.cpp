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

// Function: entry_001d4e44
// Address: 0x1d4e44 - 0x1d4e50
void entry_001d4e44_0x1d4e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4e44_0x1d4e44");
#endif

    ctx->pc = 0x1d4e44u;

    // 0x1d4e44: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d4e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d4e48: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1d4e48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d4e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x1d4e50u;
}
