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

// Function: entry_0018ef6c
// Address: 0x18ef6c - 0x18ef70
void entry_0018ef6c_0x18ef6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ef6c_0x18ef6c");
#endif

    ctx->pc = 0x18ef6cu;

    // 0x18ef6c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x18ef6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    ctx->pc = 0x18ef70u;
}
