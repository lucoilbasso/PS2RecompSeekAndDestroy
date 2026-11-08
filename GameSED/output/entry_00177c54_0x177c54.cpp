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

// Function: entry_00177c54
// Address: 0x177c54 - 0x177c60
void entry_00177c54_0x177c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177c54_0x177c54");
#endif

    ctx->pc = 0x177c54u;

    // 0x177c54: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x177c54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x177c58: 0x2610e820  addiu       $s0, $s0, -0x17E0
    ctx->pc = 0x177c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961184));
    // 0x177c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x177c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x177c60u;
}
