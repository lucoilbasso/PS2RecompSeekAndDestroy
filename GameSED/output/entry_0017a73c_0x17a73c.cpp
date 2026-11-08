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

// Function: entry_0017a73c
// Address: 0x17a73c - 0x17a740
void entry_0017a73c_0x17a73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a73c_0x17a73c");
#endif

    ctx->pc = 0x17a73cu;

    // 0x17a73c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17a73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    ctx->pc = 0x17a740u;
}
