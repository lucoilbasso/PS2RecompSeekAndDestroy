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

// Function: entry_00170a9c
// Address: 0x170a9c - 0x170aa0
void entry_00170a9c_0x170a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170a9c_0x170a9c");
#endif

    ctx->pc = 0x170a9cu;

    // 0x170a9c: 0x3c130041  lui         $s3, 0x41
    ctx->pc = 0x170a9cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x170aa0u;
}
