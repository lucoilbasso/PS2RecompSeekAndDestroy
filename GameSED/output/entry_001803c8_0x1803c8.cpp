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

// Function: entry_001803c8
// Address: 0x1803c8 - 0x1803d0
void entry_001803c8_0x1803c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001803c8_0x1803c8");
#endif

    ctx->pc = 0x1803c8u;

    // 0x1803c8: 0x94990002  lhu         $t9, 0x2($a0)
    ctx->pc = 0x1803c8u;
    SET_GPR_ZE32(ctx, 25, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1803cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1803ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1803d0u;
}
