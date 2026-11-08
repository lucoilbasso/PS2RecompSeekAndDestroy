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

// Function: entry_00116738
// Address: 0x116738 - 0x116758
void entry_00116738_0x116738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116738_0x116738");
#endif

    ctx->pc = 0x116738u;

    // 0x116738: 0x24031268  addiu       $v1, $zero, 0x1268
    ctx->pc = 0x116738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4712));
    // 0x11673c: 0x97a40004  lhu         $a0, 0x4($sp)
    ctx->pc = 0x11673cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x116740: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x116740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x116744: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x116744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x116748: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x116748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x11674c: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11674cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x116750: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x116750u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x116754: 0xa424d530  sh          $a0, -0x2AD0($at)
    ctx->pc = 0x116754u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294956336), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x116758u;
}
