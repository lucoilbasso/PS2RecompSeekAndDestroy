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

// Function: entry_0015701c
// Address: 0x15701c - 0x157038
void entry_0015701c_0x15701c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015701c_0x15701c");
#endif

    ctx->pc = 0x15701cu;

    // 0x15701c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x15701cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x157020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157024: 0x24701028  addiu       $s0, $v1, 0x1028
    ctx->pc = 0x157024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4136));
    // 0x157028: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15702c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15702cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157030: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x157034: 0x2452f0d0  addiu       $s2, $v0, -0xF30
    ctx->pc = 0x157034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963408));
    ctx->pc = 0x157038u;
}
