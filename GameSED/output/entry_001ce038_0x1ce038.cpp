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

// Function: entry_001ce038
// Address: 0x1ce038 - 0x1ce054
void entry_001ce038_0x1ce038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ce038_0x1ce038");
#endif

    switch (ctx->pc) {
        case 0x1ce044u: goto label_1ce044;
        default: break;
    }

    ctx->pc = 0x1ce038u;

    // 0x1ce038: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ce038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce03c: 0xc073730  jal         func_1CDCC0
    ctx->pc = 0x1CE03Cu;
    SET_GPR_U32(ctx, 31, 0x1CE044u);
    ctx->pc = 0x1CE040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE03Cu;
    // 0x1ce040: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDCC0u, 0x1CE03Cu, 0x1CE044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE044u;
label_1ce044:
    // 0x1ce044: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1ce044u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce048: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ce048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1ce04c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ce04cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ce050: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1ce050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    ctx->pc = 0x1ce054u;
}
