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

// Function: entry_001ca6b8
// Address: 0x1ca6b8 - 0x1ca6c4
void entry_001ca6b8_0x1ca6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca6b8_0x1ca6b8");
#endif

    ctx->pc = 0x1ca6b8u;

    // 0x1ca6b8: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1ca6b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca6bc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1ca6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ca6c0: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1ca6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    ctx->pc = 0x1ca6c4u;
}
