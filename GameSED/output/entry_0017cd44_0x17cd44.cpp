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

// Function: entry_0017cd44
// Address: 0x17cd44 - 0x17cd50
void entry_0017cd44_0x17cd44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017cd44_0x17cd44");
#endif

    ctx->pc = 0x17cd44u;

    // 0x17cd44: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x17cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x17cd48: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x17cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17cd4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cd4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x17cd50u;
}
