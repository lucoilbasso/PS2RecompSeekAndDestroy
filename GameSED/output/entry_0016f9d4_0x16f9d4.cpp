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

// Function: entry_0016f9d4
// Address: 0x16f9d4 - 0x16f9dc
void entry_0016f9d4_0x16f9d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f9d4_0x16f9d4");
#endif

    ctx->pc = 0x16f9d4u;

    // 0x16f9d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16f9d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16f9d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x16f9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16f9dcu;
}
