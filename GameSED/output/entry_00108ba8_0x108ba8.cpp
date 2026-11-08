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

// Function: entry_00108ba8
// Address: 0x108ba8 - 0x108bb0
void entry_00108ba8_0x108ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108ba8_0x108ba8");
#endif

    ctx->pc = 0x108ba8u;

    // 0x108ba8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x108ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108bac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x108bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x108bb0u;
}
