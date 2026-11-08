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

// Function: caseD_e
// Address: 0x10e430 - 0x10e440
void caseD_e_0x10e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_e_0x10e430");
#endif

    ctx->pc = 0x10e430u;

    // 0x10e430: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x10e430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x10e434: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x10e434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10e438: 0x3063dfff  andi        $v1, $v1, 0xDFFF
    ctx->pc = 0x10e438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)57343);
    // 0x10e43c: 0x34642000  ori         $a0, $v1, 0x2000
    ctx->pc = 0x10e43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    ctx->pc = 0x10e440u;
}
