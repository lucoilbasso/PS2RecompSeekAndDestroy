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

// Function: entry_0011bea4
// Address: 0x11bea4 - 0x11beb0
void entry_0011bea4_0x11bea4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bea4_0x11bea4");
#endif

    ctx->pc = 0x11bea4u;

    // 0x11bea4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11bea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11bea8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x11bea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11beac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x11beacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    ctx->pc = 0x11beb0u;
}
