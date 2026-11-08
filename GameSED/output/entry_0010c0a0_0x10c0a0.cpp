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

// Function: entry_0010c0a0
// Address: 0x10c0a0 - 0x10c0ac
void entry_0010c0a0_0x10c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c0a0_0x10c0a0");
#endif

    ctx->pc = 0x10c0a0u;

    // 0x10c0a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10c0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10c0a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10c0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x10c0acu;
}
