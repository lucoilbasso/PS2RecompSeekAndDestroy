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

// Function: entry_0013d598
// Address: 0x13d598 - 0x13d59c
void entry_0013d598_0x13d598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d598_0x13d598");
#endif

    ctx->pc = 0x13d598u;

    // 0x13d598: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13d598u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->pc = 0x13d59cu;
}
