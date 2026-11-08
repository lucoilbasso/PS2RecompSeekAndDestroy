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

// Function: entry_0012d174
// Address: 0x12d174 - 0x12d17c
void entry_0012d174_0x12d174(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d174_0x12d174");
#endif

    ctx->pc = 0x12d174u;

    // 0x12d174: 0xaeb00158  sw          $s0, 0x158($s5)
    ctx->pc = 0x12d174u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 344), GPR_U32(ctx, 16));
    // 0x12d178: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12d178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12d17cu;
}
