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

// Function: entry_001105c0
// Address: 0x1105c0 - 0x1105cc
void entry_001105c0_0x1105c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001105c0_0x1105c0");
#endif

    ctx->pc = 0x1105c0u;

    // 0x1105c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1105c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1105c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1105c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1105c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1105c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    ctx->pc = 0x1105ccu;
}
