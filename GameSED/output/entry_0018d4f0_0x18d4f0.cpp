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

// Function: entry_0018d4f0
// Address: 0x18d4f0 - 0x18d4f8
void entry_0018d4f0_0x18d4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d4f0_0x18d4f0");
#endif

    ctx->pc = 0x18d4f0u;

    // 0x18d4f0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x18d4f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d4f4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x18d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x18d4f8u;
}
