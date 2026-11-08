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

// Function: entry_0015da0c
// Address: 0x15da0c - 0x15da18
void entry_0015da0c_0x15da0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015da0c_0x15da0c");
#endif

    ctx->pc = 0x15da0cu;

    // 0x15da0c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x15da0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x15da10: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x15da10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da14: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x15da14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    ctx->pc = 0x15da18u;
}
