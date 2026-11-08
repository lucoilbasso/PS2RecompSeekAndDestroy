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

// Function: entry_0017f990
// Address: 0x17f990 - 0x17f99c
void entry_0017f990_0x17f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f990_0x17f990");
#endif

    ctx->pc = 0x17f990u;

    // 0x17f990: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x17f990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x17f994: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x17f994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x17f998: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x17f998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x17f99cu;
}
