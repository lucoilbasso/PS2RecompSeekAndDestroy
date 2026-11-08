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

// Function: entry_001c4ba8
// Address: 0x1c4ba8 - 0x1c4bc8
void entry_001c4ba8_0x1c4ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4ba8_0x1c4ba8");
#endif

    ctx->pc = 0x1c4ba8u;

    // 0x1c4ba8: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x1c4ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4bac: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1c4bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4bb0: 0x2584dcc0  addiu       $a0, $t4, -0x2340
    ctx->pc = 0x1c4bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 4294958272));
    // 0x1c4bb4: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x1c4bb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4bb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1c4bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1c4bbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c4bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4bc0: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x1c4bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c4bc4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1c4bc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c4bc8u;
}
