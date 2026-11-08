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

// Function: entry_00170cec
// Address: 0x170cec - 0x170d00
void entry_00170cec_0x170cec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170cec_0x170cec");
#endif

    ctx->pc = 0x170cecu;

    // 0x170cec: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x170cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x170cf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x170cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170cf4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x170cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170cf8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x170cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x170cfc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x170cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x170d00u;
}
