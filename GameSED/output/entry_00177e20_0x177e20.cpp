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

// Function: entry_00177e20
// Address: 0x177e20 - 0x177e24
void entry_00177e20_0x177e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177e20_0x177e20");
#endif

    ctx->pc = 0x177e20u;

    // 0x177e20: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x177e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x177e24u;
}
