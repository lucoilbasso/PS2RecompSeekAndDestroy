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

// Function: entry_001a534c
// Address: 0x1a534c - 0x1a5354
void entry_001a534c_0x1a534c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a534c_0x1a534c");
#endif

    ctx->pc = 0x1a534cu;

    // 0x1a534c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a534cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a5350: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x1a5350u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    ctx->pc = 0x1a5354u;
}
