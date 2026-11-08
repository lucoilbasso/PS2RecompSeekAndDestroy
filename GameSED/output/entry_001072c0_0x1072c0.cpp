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

// Function: entry_001072c0
// Address: 0x1072c0 - 0x1072d0
void entry_001072c0_0x1072c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001072c0_0x1072c0");
#endif

    ctx->pc = 0x1072c0u;

    // 0x1072c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1072c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1072c4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1072c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1072c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1072c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1072cc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1072ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    ctx->pc = 0x1072d0u;
}
