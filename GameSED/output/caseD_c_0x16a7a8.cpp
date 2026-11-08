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

// Function: caseD_c
// Address: 0x16a7a8 - 0x16a7b8
void caseD_c_0x16a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x16a7a8");
#endif

    ctx->pc = 0x16a7a8u;

    // 0x16a7a8: 0x8e250c10  lw          $a1, 0xC10($s1)
    ctx->pc = 0x16a7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3088)));
    // 0x16a7ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a7b0: 0x8e2201b4  lw          $v0, 0x1B4($s1)
    ctx->pc = 0x16a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x16a7b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x16a7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x16a7b8u;
}
