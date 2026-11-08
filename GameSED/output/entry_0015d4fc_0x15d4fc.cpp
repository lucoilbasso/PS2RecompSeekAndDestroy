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

// Function: entry_0015d4fc
// Address: 0x15d4fc - 0x15d504
void entry_0015d4fc_0x15d4fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d4fc_0x15d4fc");
#endif

    ctx->pc = 0x15d4fcu;

    // 0x15d4fc: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x15d4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x15d500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15d500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x15d504u;
}
