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

// Function: entry_001a9bb4
// Address: 0x1a9bb4 - 0x1a9bb8
void entry_001a9bb4_0x1a9bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9bb4_0x1a9bb4");
#endif

    ctx->pc = 0x1a9bb4u;

    // 0x1a9bb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a9bb8u;
}
