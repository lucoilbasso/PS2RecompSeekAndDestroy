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

// Function: entry_00139168
// Address: 0x139168 - 0x13917c
void entry_00139168_0x139168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139168_0x139168");
#endif

    ctx->pc = 0x139168u;

    // 0x139168: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x139168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x13916c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13916cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139170: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x139170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x139174: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x139174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139178: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x139178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x13917cu;
}
