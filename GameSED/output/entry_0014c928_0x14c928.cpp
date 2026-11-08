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

// Function: entry_0014c928
// Address: 0x14c928 - 0x14c938
void entry_0014c928_0x14c928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c928_0x14c928");
#endif

    ctx->pc = 0x14c928u;

    // 0x14c928: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x14c928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14c92c: 0xae030854  sw          $v1, 0x854($s0)
    ctx->pc = 0x14c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2132), GPR_U32(ctx, 3));
    // 0x14c930: 0xae020858  sw          $v0, 0x858($s0)
    ctx->pc = 0x14c930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2136), GPR_U32(ctx, 2));
    // 0x14c934: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x14c934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    ctx->pc = 0x14c938u;
}
