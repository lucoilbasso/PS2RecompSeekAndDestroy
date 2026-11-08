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

// Function: entry_0013f298
// Address: 0x13f298 - 0x13f2a4
void entry_0013f298_0x13f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f298_0x13f298");
#endif

    ctx->pc = 0x13f298u;

    // 0x13f298: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f29c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f29cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x13f2a4u;
}
