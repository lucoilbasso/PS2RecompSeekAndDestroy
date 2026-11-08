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

// Function: entry_0017c19c
// Address: 0x17c19c - 0x17c1a8
void entry_0017c19c_0x17c19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017c19c_0x17c19c");
#endif

    ctx->pc = 0x17c19cu;

    // 0x17c19c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17c19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17c1a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x17c1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17c1a4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x17c1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    ctx->pc = 0x17c1a8u;
}
