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

// Function: entry_00131ed8
// Address: 0x131ed8 - 0x131ef4
void entry_00131ed8_0x131ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131ed8_0x131ed8");
#endif

    ctx->pc = 0x131ed8u;

    // 0x131ed8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x131ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x131edc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x131edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x131ee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x131ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x131ee4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x131ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x131ee8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x131ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x131eec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x131eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x131ef0: 0x8c63a258  lw          $v1, -0x5DA8($v1)
    ctx->pc = 0x131ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943320)));
    ctx->pc = 0x131ef4u;
}
