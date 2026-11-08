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

// Function: entry_001a1288
// Address: 0x1a1288 - 0x1a1294
void entry_001a1288_0x1a1288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1288_0x1a1288");
#endif

    ctx->pc = 0x1a1288u;

    // 0x1a1288: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a1288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a128c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a128cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x1a1294u;
}
