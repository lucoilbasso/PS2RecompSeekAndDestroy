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

// Function: entry_001c7090
// Address: 0x1c7090 - 0x1c7098
void entry_001c7090_0x1c7090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7090_0x1c7090");
#endif

    ctx->pc = 0x1c7090u;

    // 0x1c7090: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c7090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7094: 0xfe240000  sd          $a0, 0x0($s1)
    ctx->pc = 0x1c7094u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 4));
    ctx->pc = 0x1c7098u;
}
