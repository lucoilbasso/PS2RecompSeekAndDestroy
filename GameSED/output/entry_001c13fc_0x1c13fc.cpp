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

// Function: entry_001c13fc
// Address: 0x1c13fc - 0x1c1410
void entry_001c13fc_0x1c13fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c13fc_0x1c13fc");
#endif

    ctx->pc = 0x1c13fcu;

    // 0x1c13fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c13fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c1400: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1c1400u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1404: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c1404u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1408: 0x38a20002  xori        $v0, $a1, 0x2
    ctx->pc = 0x1c1408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
    // 0x1c140c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x1c140cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    ctx->pc = 0x1c1410u;
}
