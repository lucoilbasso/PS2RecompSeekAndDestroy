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

// Function: entry_0017f358
// Address: 0x17f358 - 0x17f368
void entry_0017f358_0x17f358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f358_0x17f358");
#endif

    ctx->pc = 0x17f358u;

    // 0x17f358: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x17f358u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x17f35c: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x17f35cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x17f360: 0xace50008  sw          $a1, 0x8($a3)
    ctx->pc = 0x17f360u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 5));
    // 0x17f364: 0xace8000c  sw          $t0, 0xC($a3)
    ctx->pc = 0x17f364u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 8));
    ctx->pc = 0x17f368u;
}
