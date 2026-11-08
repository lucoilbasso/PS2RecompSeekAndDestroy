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

// Function: entry_0016e2cc
// Address: 0x16e2cc - 0x16e2e8
void entry_0016e2cc_0x16e2cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e2cc_0x16e2cc");
#endif

    ctx->pc = 0x16e2ccu;

    // 0x16e2cc: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x16e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x16e2d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x16e2d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e2d4: 0x2449d470  addiu       $t1, $v0, -0x2B90
    ctx->pc = 0x16e2d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956144));
    // 0x16e2d8: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x16e2d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e2dc: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x16e2dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16e2e0: 0x262702cc  addiu       $a3, $s1, 0x2CC
    ctx->pc = 0x16e2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 716));
    // 0x16e2e4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x16e2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->pc = 0x16e2e8u;
}
