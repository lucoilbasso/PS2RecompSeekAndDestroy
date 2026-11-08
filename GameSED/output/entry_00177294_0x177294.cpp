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

// Function: entry_00177294
// Address: 0x177294 - 0x1772a0
void entry_00177294_0x177294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177294_0x177294");
#endif

    ctx->pc = 0x177294u;

    // 0x177294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177298: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x177298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17729c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x17729cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    ctx->pc = 0x1772a0u;
}
