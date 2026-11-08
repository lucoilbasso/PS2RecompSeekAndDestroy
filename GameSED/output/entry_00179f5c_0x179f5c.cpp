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

// Function: entry_00179f5c
// Address: 0x179f5c - 0x179f60
void entry_00179f5c_0x179f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179f5c_0x179f5c");
#endif

    ctx->pc = 0x179f5cu;

    // 0x179f5c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x179f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    ctx->pc = 0x179f60u;
}
