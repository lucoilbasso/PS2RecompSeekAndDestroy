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

// Function: entry_0013861c
// Address: 0x13861c - 0x138640
void entry_0013861c_0x13861c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013861c_0x13861c");
#endif

    ctx->pc = 0x13861cu;

    // 0x13861c: 0x8f848a2c  lw          $a0, -0x75D4($gp)
    ctx->pc = 0x13861cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937132)));
    // 0x138620: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x138620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x138624: 0x8f868a24  lw          $a2, -0x75DC($gp)
    ctx->pc = 0x138624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937124)));
    // 0x138628: 0x2445a3e0  addiu       $a1, $v0, -0x5C20
    ctx->pc = 0x138628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943712));
    // 0x13862c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x13862cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x138630: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x138630u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138634: 0x3c010020  lui         $at, 0x20
    ctx->pc = 0x138634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32 << 16));
    // 0x138638: 0x2421a408  addiu       $at, $at, -0x5BF8
    ctx->pc = 0x138638u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294943752));
    // 0x13863c: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x13863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    ctx->pc = 0x138640u;
}
