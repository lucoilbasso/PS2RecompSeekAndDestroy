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

// Function: entry_0016ab88
// Address: 0x16ab88 - 0x16abac
void entry_0016ab88_0x16ab88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ab88_0x16ab88");
#endif

    switch (ctx->pc) {
        case 0x16ab98u: goto label_16ab98;
        default: break;
    }

    ctx->pc = 0x16ab88u;

    // 0x16ab88: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16ab88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16ab8c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x16ab8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x16ab90: 0xc067232  jal         func_19C8C8
    ctx->pc = 0x16AB90u;
    SET_GPR_U32(ctx, 31, 0x16AB98u);
    ctx->pc = 0x16AB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AB90u;
    // 0x16ab94: 0x2485ffb0  addiu       $a1, $a0, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8C8u, 0x16AB90u, 0x16AB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB98u;
label_16ab98:
    // 0x16ab98: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AB98u;
    {
        const bool branch_taken_0x16ab98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab98) {
            ctx->pc = 0x16AB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AB98u;
            // 0x16ab9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ABACu;
            return;
        }
    }
    ctx->pc = 0x16ABA0u;
    // 0x16aba0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16aba4: 0xac540044  sw          $s4, 0x44($v0)
    ctx->pc = 0x16aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 20));
    // 0x16aba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16aba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x16abacu;
}
