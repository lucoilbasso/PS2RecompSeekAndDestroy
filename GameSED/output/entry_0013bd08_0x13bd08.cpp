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

// Function: entry_0013bd08
// Address: 0x13bd08 - 0x13bd18
void entry_0013bd08_0x13bd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013bd08_0x13bd08");
#endif

    ctx->pc = 0x13bd08u;

    // 0x13bd08: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13bd0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13bd0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bd10: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13bd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x13bd14: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13bd14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13bd18u;
}
