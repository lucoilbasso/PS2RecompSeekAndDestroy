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

// Function: entry_001279e8
// Address: 0x1279e8 - 0x1279f4
void entry_001279e8_0x1279e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001279e8_0x1279e8");
#endif

    ctx->pc = 0x1279e8u;

    // 0x1279e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1279e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1279ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1279ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1279f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1279f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x1279f4u;
}
