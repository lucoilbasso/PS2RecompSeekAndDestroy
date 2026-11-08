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

// Function: entry_0012363c
// Address: 0x12363c - 0x123648
void entry_0012363c_0x12363c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012363c_0x12363c");
#endif

    ctx->pc = 0x12363cu;

    // 0x12363c: 0xffb100b8  sd          $s1, 0xB8($sp)
    ctx->pc = 0x12363cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 17));
    // 0x123640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123644: 0xffb000b0  sd          $s0, 0xB0($sp)
    ctx->pc = 0x123644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 16));
    ctx->pc = 0x123648u;
}
