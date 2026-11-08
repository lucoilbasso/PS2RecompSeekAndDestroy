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

// Function: entry_0017b908
// Address: 0x17b908 - 0x17b90c
void entry_0017b908_0x17b908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b908_0x17b908");
#endif

    ctx->pc = 0x17b908u;

    // 0x17b908: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x17b908u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    ctx->pc = 0x17b90cu;
}
