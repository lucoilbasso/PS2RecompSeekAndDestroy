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

// Function: entry_0019b0a4
// Address: 0x19b0a4 - 0x19b0b0
void entry_0019b0a4_0x19b0a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b0a4_0x19b0a4");
#endif

    ctx->pc = 0x19b0a4u;

    // 0x19b0a4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x19b0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x19b0a8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19b0a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19b0ac: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x19b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    ctx->pc = 0x19b0b0u;
}
