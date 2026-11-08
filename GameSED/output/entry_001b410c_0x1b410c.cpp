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

// Function: entry_001b410c
// Address: 0x1b410c - 0x1b412c
void entry_001b410c_0x1b410c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b410c_0x1b410c");
#endif

    switch (ctx->pc) {
        case 0x1b4114u: goto label_1b4114;
        default: break;
    }

    ctx->pc = 0x1b410cu;

    // 0x1b410c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B410Cu;
    SET_GPR_U32(ctx, 31, 0x1B4114u);
    ctx->pc = 0x1B4110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B410Cu;
    // 0x1b4110: 0x8e04aa10  lw          $a0, -0x55F0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B410Cu, 0x1B4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4114u;
label_1b4114:
    // 0x1b4114: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x1b4114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x1b4118: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1b4118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1b411c: 0x2463af80  addiu       $v1, $v1, -0x5080
    ctx->pc = 0x1b411cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946688));
    // 0x1b4120: 0x8e04aa10  lw          $a0, -0x55F0($s0)
    ctx->pc = 0x1b4120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945296)));
    // 0x1b4124: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x1b4124u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1b4128: 0x38903  sra         $s1, $v1, 4
    ctx->pc = 0x1b4128u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 4));
    ctx->pc = 0x1b412cu;
}
