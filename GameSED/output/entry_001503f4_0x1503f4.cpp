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

// Function: entry_001503f4
// Address: 0x1503f4 - 0x150400
void entry_001503f4_0x1503f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001503f4_0x1503f4");
#endif

    ctx->pc = 0x1503f4u;

    // 0x1503f4: 0x265e01d0  addiu       $fp, $s2, 0x1D0
    ctx->pc = 0x1503f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
    // 0x1503f8: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x1503f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503fc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1503fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x150400u;
}
