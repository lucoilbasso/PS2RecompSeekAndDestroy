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

// Function: entry_00177e10
// Address: 0x177e10 - 0x177e18
void entry_00177e10_0x177e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177e10_0x177e10");
#endif

    ctx->pc = 0x177e10u;

    // 0x177e10: 0x94c30014  lhu         $v1, 0x14($a2)
    ctx->pc = 0x177e10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x177e14: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x177e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    ctx->pc = 0x177e18u;
}
