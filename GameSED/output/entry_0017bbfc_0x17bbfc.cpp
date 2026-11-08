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

// Function: entry_0017bbfc
// Address: 0x17bbfc - 0x17bc08
void entry_0017bbfc_0x17bbfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bbfc_0x17bbfc");
#endif

    ctx->pc = 0x17bbfcu;

    // 0x17bbfc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x17bc00: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x17bc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x17bc04: 0x8c420800  lw          $v0, 0x800($v0)
    ctx->pc = 0x17bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2048)));
    ctx->pc = 0x17bc08u;
}
