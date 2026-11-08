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

// Function: entry_00141190
// Address: 0x141190 - 0x141198
void entry_00141190_0x141190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141190_0x141190");
#endif

    ctx->pc = 0x141190u;

    // 0x141190: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x141190u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141194: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x141194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    ctx->pc = 0x141198u;
}
