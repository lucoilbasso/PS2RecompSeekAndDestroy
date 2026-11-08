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

// Function: entry_0010c9c0
// Address: 0x10c9c0 - 0x10c9f4
void entry_0010c9c0_0x10c9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c9c0_0x10c9c0");
#endif

    switch (ctx->pc) {
        case 0x10c9d4u: goto label_10c9d4;
        default: break;
    }

    ctx->pc = 0x10c9c0u;

    // 0x10c9c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10c9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10c9c4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x10c9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x10c9c8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10c9cc: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C9CCu;
    SET_GPR_U32(ctx, 31, 0x10C9D4u);
    ctx->pc = 0x10C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9CCu;
    // 0x10c9d0: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C9CCu, 0x10C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9D4u;
label_10c9d4:
    // 0x10c9d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10c9d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9dc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C9DCu;
    {
        const bool branch_taken_0x10c9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9DCu;
        // 0x10c9e0: 0x24050166  addiu       $a1, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9dc) {
            ctx->pc = 0x10C9F4u;
            return;
        }
    }
    ctx->pc = 0x10C9E4u;
    // 0x10c9e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c9e8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10c9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10c9ec: 0x10450002  beq         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C9ECu;
    {
        const bool branch_taken_0x10c9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9ECu;
        // 0x10c9f0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9ec) {
            ctx->pc = 0x10C9F8u;
            return;
        }
    }
    ctx->pc = 0x10C9F4u;
}
