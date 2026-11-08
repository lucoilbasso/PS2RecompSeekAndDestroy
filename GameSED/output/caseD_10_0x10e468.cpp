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

// Function: caseD_10
// Address: 0x10e468 - 0x10e478
void caseD_10_0x10e468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x10e468");
#endif

    ctx->pc = 0x10e468u;

    // 0x10e468: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x10e468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x10e46c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10e46cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e470: 0x3063efff  andi        $v1, $v1, 0xEFFF
    ctx->pc = 0x10e470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61439);
    // 0x10e474: 0x34641000  ori         $a0, $v1, 0x1000
    ctx->pc = 0x10e474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    ctx->pc = 0x10e478u;
}
