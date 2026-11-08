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

// Function: entry_0016ef98
// Address: 0x16ef98 - 0x16efa4
void entry_0016ef98_0x16ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ef98_0x16ef98");
#endif

    ctx->pc = 0x16ef98u;

    // 0x16ef98: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x16ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x16ef9c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x16ef9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x16efa0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x16efa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    ctx->pc = 0x16efa4u;
}
