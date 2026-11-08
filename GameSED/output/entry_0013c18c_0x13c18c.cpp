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

// Function: entry_0013c18c
// Address: 0x13c18c - 0x13c19c
void entry_0013c18c_0x13c18c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c18c_0x13c18c");
#endif

    ctx->pc = 0x13c18cu;

    // 0x13c18c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c190: 0xace40090  sw          $a0, 0x90($a3)
    ctx->pc = 0x13c190u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 4));
    // 0x13c194: 0xace50094  sw          $a1, 0x94($a3)
    ctx->pc = 0x13c194u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 5));
    // 0x13c198: 0xace0009c  sw          $zero, 0x9C($a3)
    ctx->pc = 0x13c198u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 0));
    ctx->pc = 0x13c19cu;
}
