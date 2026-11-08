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

// Function: entry_001b5188
// Address: 0x1b5188 - 0x1b5198
void entry_001b5188_0x1b5188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5188_0x1b5188");
#endif

    ctx->pc = 0x1b5188u;

    // 0x1b5188: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1b5188u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b518c: 0x3c150041  lui         $s5, 0x41
    ctx->pc = 0x1b518cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65 << 16));
    // 0x1b5190: 0x3c110041  lui         $s1, 0x41
    ctx->pc = 0x1b5190u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65 << 16));
    // 0x1b5194: 0xae500810  sw          $s0, 0x810($s2)
    ctx->pc = 0x1b5194u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2064), GPR_U32(ctx, 16));
    ctx->pc = 0x1b5198u;
}
