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

// Function: entry_00199a88
// Address: 0x199a88 - 0x199a8c
void entry_00199a88_0x199a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199a88_0x199a88");
#endif

    ctx->pc = 0x199a88u;

    // 0x199a88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x199a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x199a8cu;
}
