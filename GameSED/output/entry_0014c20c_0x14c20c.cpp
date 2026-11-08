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

// Function: entry_0014c20c
// Address: 0x14c20c - 0x14c21c
void entry_0014c20c_0x14c20c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c20c_0x14c20c");
#endif

    ctx->pc = 0x14c20cu;

    // 0x14c20c: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x14c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x14c210: 0x2403f7ff  addiu       $v1, $zero, -0x801
    ctx->pc = 0x14c210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x14c214: 0x8e240244  lw          $a0, 0x244($s1)
    ctx->pc = 0x14c214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x14c218: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14c218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    ctx->pc = 0x14c21cu;
}
