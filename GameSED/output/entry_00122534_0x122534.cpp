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

// Function: entry_00122534
// Address: 0x122534 - 0x12253c
void entry_00122534_0x122534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122534_0x122534");
#endif

    ctx->pc = 0x122534u;

    // 0x122534: 0xaed00158  sw          $s0, 0x158($s6)
    ctx->pc = 0x122534u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 344), GPR_U32(ctx, 16));
    // 0x122538: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x122538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12253cu;
}
