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

// Function: entry_0017e79c
// Address: 0x17e79c - 0x17e7a0
void entry_0017e79c_0x17e79c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e79c_0x17e79c");
#endif

    ctx->pc = 0x17e79cu;

    // 0x17e79c: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x17e79cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    ctx->pc = 0x17e7a0u;
}
