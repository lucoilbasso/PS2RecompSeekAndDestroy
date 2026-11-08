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

// Function: entry_0019cb18
// Address: 0x19cb18 - 0x19cb20
void entry_0019cb18_0x19cb18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cb18_0x19cb18");
#endif

    ctx->pc = 0x19cb18u;

    // 0x19cb18: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19cb18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb1c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19cb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19cb20u;
}
