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

// Function: entry_0017f7ec
// Address: 0x17f7ec - 0x17f7f4
void entry_0017f7ec_0x17f7ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f7ec_0x17f7ec");
#endif

    ctx->pc = 0x17f7ecu;

    // 0x17f7ec: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x17f7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x17f7f0: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x17f7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    ctx->pc = 0x17f7f4u;
}
