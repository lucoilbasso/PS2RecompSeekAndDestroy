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

// Function: entry_0017e98c
// Address: 0x17e98c - 0x17e990
void entry_0017e98c_0x17e98c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e98c_0x17e98c");
#endif

    ctx->pc = 0x17e98cu;

    // 0x17e98c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17e98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    ctx->pc = 0x17e990u;
}
