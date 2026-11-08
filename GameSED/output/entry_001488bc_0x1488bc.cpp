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

// Function: entry_001488bc
// Address: 0x1488bc - 0x1488c8
void entry_001488bc_0x1488bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001488bc_0x1488bc");
#endif

    ctx->pc = 0x1488bcu;

    // 0x1488bc: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1488bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1488c0: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x1488c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x1488c4: 0xac220210  sw          $v0, 0x210($at)
    ctx->pc = 0x1488c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 528), GPR_U32(ctx, 2));
    ctx->pc = 0x1488c8u;
}
