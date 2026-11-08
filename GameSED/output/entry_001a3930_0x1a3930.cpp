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

// Function: entry_001a3930
// Address: 0x1a3930 - 0x1a3940
void entry_001a3930_0x1a3930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3930_0x1a3930");
#endif

    ctx->pc = 0x1a3930u;

    // 0x1a3930: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1a3930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1a3934: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a3934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3938: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1a3938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1a393c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1a393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    ctx->pc = 0x1a3940u;
}
