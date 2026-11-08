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

// Function: entry_00116ba0
// Address: 0x116ba0 - 0x116bb0
void entry_00116ba0_0x116ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116ba0_0x116ba0");
#endif

    ctx->pc = 0x116ba0u;

    // 0x116ba0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x116ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x116ba4: 0x8e820400  lw          $v0, 0x400($s4)
    ctx->pc = 0x116ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1024)));
    // 0x116ba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x116ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116bac: 0xae820400  sw          $v0, 0x400($s4)
    ctx->pc = 0x116bacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1024), GPR_U32(ctx, 2));
    ctx->pc = 0x116bb0u;
}
