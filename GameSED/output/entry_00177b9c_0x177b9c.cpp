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

// Function: entry_00177b9c
// Address: 0x177b9c - 0x177ba0
void entry_00177b9c_0x177b9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177b9c_0x177b9c");
#endif

    ctx->pc = 0x177b9cu;

    // 0x177b9c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x177b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x177ba0u;
}
