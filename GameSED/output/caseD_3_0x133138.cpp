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

// Function: caseD_3
// Address: 0x133138 - 0x13315c
void caseD_3_0x133138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x133138");
#endif

    ctx->pc = 0x133138u;

    // 0x133138: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x133138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13313c: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x13313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x133140: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x133140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x133144: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x133144u;
    {
        const bool branch_taken_0x133144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x133148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133144u;
        // 0x133148: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133144) {
            ctx->pc = 0x13315Cu;
            return;
        }
    }
    ctx->pc = 0x13314Cu;
    // 0x13314c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13314cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133150: 0x24a56408  addiu       $a1, $a1, 0x6408
    ctx->pc = 0x133150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25608));
    // 0x133154: 0xc068186  jal         func_1A0618
    ctx->pc = 0x133154u;
    SET_GPR_U32(ctx, 31, 0x13315Cu);
    ctx->pc = 0x133158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133154u;
    // 0x133158: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x133154u, 0x13315Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13315Cu;
}
