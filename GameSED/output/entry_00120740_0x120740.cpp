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

// Function: entry_00120740
// Address: 0x120740 - 0x120750
void entry_00120740_0x120740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00120740_0x120740");
#endif

    ctx->pc = 0x120740u;

    // 0x120740: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x120740u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x120744: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x120744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x120748: 0x27d10010  addiu       $s1, $fp, 0x10
    ctx->pc = 0x120748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x12074c: 0x26d00010  addiu       $s0, $s6, 0x10
    ctx->pc = 0x12074cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    ctx->pc = 0x120750u;
}
