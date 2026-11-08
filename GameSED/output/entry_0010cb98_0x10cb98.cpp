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

// Function: entry_0010cb98
// Address: 0x10cb98 - 0x10cbd0
void entry_0010cb98_0x10cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cb98_0x10cb98");
#endif

    switch (ctx->pc) {
        case 0x10cbb0u: goto label_10cbb0;
        default: break;
    }

    ctx->pc = 0x10cb98u;

    // 0x10cb98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cb9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10cb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10cba0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cba4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10cba8: 0xc04110c  jal         func_104430
    ctx->pc = 0x10CBA8u;
    SET_GPR_U32(ctx, 31, 0x10CBB0u);
    ctx->pc = 0x10CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBA8u;
    // 0x10cbac: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10CBA8u, 0x10CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBB0u;
label_10cbb0:
    // 0x10cbb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10cbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cbb4: 0x24030166  addiu       $v1, $zero, 0x166
    ctx->pc = 0x10cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x10cbb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CBB8u;
    {
        const bool branch_taken_0x10cbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBB8u;
        // 0x10cbbc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cbb8) {
            ctx->pc = 0x10CBD0u;
            return;
        }
    }
    ctx->pc = 0x10CBC0u;
    // 0x10cbc0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x10cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cbc4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10cbc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10cbc8: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CBC8u;
    {
        const bool branch_taken_0x10cbc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x10cbc8) {
            ctx->pc = 0x10CBD4u;
            return;
        }
    }
    ctx->pc = 0x10CBD0u;
}
