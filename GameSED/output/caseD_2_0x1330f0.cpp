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

// Function: caseD_2
// Address: 0x1330f0 - 0x133114
void caseD_2_0x1330f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1330f0");
#endif

    ctx->pc = 0x1330f0u;

    // 0x1330f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1330f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1330f4: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x1330f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1330f8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1330f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1330fc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1330FCu;
    {
        const bool branch_taken_0x1330fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x133100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1330FCu;
        // 0x133100: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1330fc) {
            ctx->pc = 0x133114u;
            return;
        }
    }
    ctx->pc = 0x133104u;
    // 0x133104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133108: 0x24a563f8  addiu       $a1, $a1, 0x63F8
    ctx->pc = 0x133108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25592));
    // 0x13310c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x13310Cu;
    SET_GPR_U32(ctx, 31, 0x133114u);
    ctx->pc = 0x133110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13310Cu;
    // 0x133110: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x13310Cu, 0x133114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133114u;
}
