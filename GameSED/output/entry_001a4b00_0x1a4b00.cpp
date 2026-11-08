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

// Function: entry_001a4b00
// Address: 0x1a4b00 - 0x1a4b14
void entry_001a4b00_0x1a4b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4b00_0x1a4b00");
#endif

    switch (ctx->pc) {
        case 0x1a4b10u: goto label_1a4b10;
        default: break;
    }

    ctx->pc = 0x1a4b00u;

    // 0x1a4b00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4b04: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1a4b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1a4b08: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A4B08u;
    SET_GPR_U32(ctx, 31, 0x1A4B10u);
    ctx->pc = 0x1A4B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B08u;
    // 0x1a4b0c: 0x24a59220  addiu       $a1, $a1, -0x6DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A4B08u, 0x1A4B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B10u;
label_1a4b10:
    // 0x1a4b10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a4b10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    ctx->pc = 0x1a4b14u;
}
