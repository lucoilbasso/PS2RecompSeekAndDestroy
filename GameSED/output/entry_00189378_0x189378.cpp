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

// Function: entry_00189378
// Address: 0x189378 - 0x189380
void entry_00189378_0x189378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189378_0x189378");
#endif

    ctx->pc = 0x189378u;

    // 0x189378: 0xac700134  sw          $s0, 0x134($v1)
    ctx->pc = 0x189378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 16));
    // 0x18937c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18937cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x189380u;
}
