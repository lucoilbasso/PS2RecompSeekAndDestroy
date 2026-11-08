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

// Function: entry_0016f49c
// Address: 0x16f49c - 0x16f4a4
void entry_0016f49c_0x16f49c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f49c_0x16f49c");
#endif

    ctx->pc = 0x16f49cu;

    // 0x16f49c: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x16f49cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x16f4a0: 0xffa500c8  sd          $a1, 0xC8($sp)
    ctx->pc = 0x16f4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 5));
    ctx->pc = 0x16f4a4u;
}
