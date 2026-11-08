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

// Function: entry_00141e5c
// Address: 0x141e5c - 0x141e64
void entry_00141e5c_0x141e5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141e5c_0x141e5c");
#endif

    ctx->pc = 0x141e5cu;

    // 0x141e5c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x141e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x141e60: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x141e60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x141e64u;
}
