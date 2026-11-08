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

// Function: entry_0010dc68
// Address: 0x10dc68 - 0x10dc88
void entry_0010dc68_0x10dc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc68_0x10dc68");
#endif

    switch (ctx->pc) {
        case 0x10dc70u: goto label_10dc70;
        default: break;
    }

    ctx->pc = 0x10dc68u;

    // 0x10dc68: 0xc051826  jal         func_146098
    ctx->pc = 0x10DC68u;
    SET_GPR_U32(ctx, 31, 0x10DC70u);
    ctx->pc = 0x10DC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC68u;
    // 0x10dc6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146098u, 0x10DC68u, 0x10DC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DC70u;
label_10dc70:
    // 0x10dc70: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x10dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x10dc74: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x10dc74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc78: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x10dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10dc7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10dc80: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DC80u;
    {
        const bool branch_taken_0x10dc80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x10DC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC80u;
        // 0x10dc84: 0x320200ff  andi        $v0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc80) {
            ctx->pc = 0x10DC98u;
            return;
        }
    }
    ctx->pc = 0x10DC88u;
}
