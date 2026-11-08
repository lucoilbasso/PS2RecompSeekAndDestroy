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

// Function: entry_00108030
// Address: 0x108030 - 0x108048
void entry_00108030_0x108030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108030_0x108030");
#endif

    switch (ctx->pc) {
        case 0x108040u: goto label_108040;
        default: break;
    }

    ctx->pc = 0x108030u;

    // 0x108030: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x108030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x108034: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x108034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x108038: 0xc067232  jal         func_19C8C8
    ctx->pc = 0x108038u;
    SET_GPR_U32(ctx, 31, 0x108040u);
    ctx->pc = 0x10803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108038u;
    // 0x10803c: 0x2485ffb0  addiu       $a1, $a0, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8C8u, 0x108038u, 0x108040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108040u;
label_108040:
    // 0x108040: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x108040u;
    {
        const bool branch_taken_0x108040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x108040) {
            ctx->pc = 0x108044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108040u;
            // 0x108044: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108054u;
            return;
        }
    }
    ctx->pc = 0x108048u;
}
