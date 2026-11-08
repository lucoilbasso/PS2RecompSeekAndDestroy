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

// Function: entry_0017ac10
// Address: 0x17ac10 - 0x17ac20
void entry_0017ac10_0x17ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ac10_0x17ac10");
#endif

    ctx->pc = 0x17ac10u;

    // 0x17ac10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ac10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ac14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ac14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17ac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17ac1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x17ac20u;
}
