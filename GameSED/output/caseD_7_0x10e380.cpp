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

// Function: caseD_7
// Address: 0x10e380 - 0x10e390
void caseD_7_0x10e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x10e380");
#endif

    ctx->pc = 0x10e380u;

    // 0x10e380: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10e384: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x10e384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x10e388: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10e388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10e38c: 0x122600  sll         $a0, $s2, 24
    ctx->pc = 0x10e38cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 24));
    ctx->pc = 0x10e390u;
}
