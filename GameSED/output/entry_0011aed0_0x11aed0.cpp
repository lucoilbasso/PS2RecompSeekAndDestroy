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

// Function: entry_0011aed0
// Address: 0x11aed0 - 0x11aee8
void entry_0011aed0_0x11aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011aed0_0x11aed0");
#endif

    ctx->pc = 0x11aed0u;

    // 0x11aed0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11aed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11aed4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11aed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11aedc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11aedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aee0: 0x24423630  addiu       $v0, $v0, 0x3630
    ctx->pc = 0x11aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13872));
    // 0x11aee4: 0x0  nop
    ctx->pc = 0x11aee4u;
    // NOP
    ctx->pc = 0x11aee8u;
}
