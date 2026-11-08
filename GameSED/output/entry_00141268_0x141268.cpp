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

// Function: entry_00141268
// Address: 0x141268 - 0x141270
void entry_00141268_0x141268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141268_0x141268");
#endif

    ctx->pc = 0x141268u;

    // 0x141268: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x141268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14126c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x14126cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    ctx->pc = 0x141270u;
}
