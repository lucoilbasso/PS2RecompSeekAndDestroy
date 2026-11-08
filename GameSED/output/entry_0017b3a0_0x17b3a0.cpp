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

// Function: entry_0017b3a0
// Address: 0x17b3a0 - 0x17b3b0
void entry_0017b3a0_0x17b3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b3a0_0x17b3a0");
#endif

    ctx->pc = 0x17b3a0u;

    // 0x17b3a0: 0x26450170  addiu       $a1, $s2, 0x170
    ctx->pc = 0x17b3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 368));
    // 0x17b3a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17b3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3a8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x17b3a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b3ac: 0x0  nop
    ctx->pc = 0x17b3acu;
    // NOP
    ctx->pc = 0x17b3b0u;
}
