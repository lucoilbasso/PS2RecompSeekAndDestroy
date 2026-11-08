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

// Function: entry_00112d78
// Address: 0x112d78 - 0x112d88
void entry_00112d78_0x112d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112d78_0x112d78");
#endif

    ctx->pc = 0x112d78u;

    // 0x112d78: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x112d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x112d7c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x112d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x112d80: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x112d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x112d84: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x112d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    ctx->pc = 0x112d88u;
}
