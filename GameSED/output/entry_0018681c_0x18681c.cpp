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

// Function: entry_0018681c
// Address: 0x18681c - 0x186828
void entry_0018681c_0x18681c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018681c_0x18681c");
#endif

    ctx->pc = 0x18681cu;

    // 0x18681c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18681cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x186820: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x186820u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186824: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->pc = 0x186828u;
}
