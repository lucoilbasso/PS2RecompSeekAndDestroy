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

// Function: entry_001377fc
// Address: 0x1377fc - 0x13783c
void entry_001377fc_0x1377fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001377fc_0x1377fc");
#endif

    ctx->pc = 0x1377fcu;

    // 0x1377fc: 0x172140  sll         $a0, $s7, 5
    ctx->pc = 0x1377fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x137800: 0x2463bc50  addiu       $v1, $v1, -0x43B0
    ctx->pc = 0x137800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949968));
    // 0x137804: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x137804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x137808: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x137808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
    // 0x13780c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x13780cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x137810: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x137810u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137814: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x137814u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x137818: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x137818u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x13781c: 0x266300f0  addiu       $v1, $s3, 0xF0
    ctx->pc = 0x13781cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 240));
    // 0x137820: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x137820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x137824: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x137824u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137828: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x137828u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13782c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x13782cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x137830: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x137830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x137834: 0x2ae2000f  slti        $v0, $s7, 0xF
    ctx->pc = 0x137834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x137838: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x137838u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
    ctx->pc = 0x13783cu;
}
