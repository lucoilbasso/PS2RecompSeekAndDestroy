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

// Function: entry_0017bcbc
// Address: 0x17bcbc - 0x17bcc0
void entry_0017bcbc_0x17bcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bcbc_0x17bcbc");
#endif

    ctx->pc = 0x17bcbcu;

    // 0x17bcbc: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x17bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x17bcc0u;
}
