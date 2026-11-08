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

// Function: entry_001833dc
// Address: 0x1833dc - 0x1833e8
void entry_001833dc_0x1833dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001833dc_0x1833dc");
#endif

    ctx->pc = 0x1833dcu;

    // 0x1833dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1833dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1833e0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1833e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1833e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1833e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    ctx->pc = 0x1833e8u;
}
