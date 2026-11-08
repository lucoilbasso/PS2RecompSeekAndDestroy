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

// Function: entry_0010b8c8
// Address: 0x10b8c8 - 0x10b8fc
void entry_0010b8c8_0x10b8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b8c8_0x10b8c8");
#endif

    switch (ctx->pc) {
        case 0x10b8dcu: goto label_10b8dc;
        default: break;
    }

    ctx->pc = 0x10b8c8u;

    // 0x10b8c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b8cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10b8d0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b8d4: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B8D4u;
    SET_GPR_U32(ctx, 31, 0x10B8DCu);
    ctx->pc = 0x10B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B8D4u;
    // 0x10b8d8: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B8D4u, 0x10B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8DCu;
label_10b8dc:
    // 0x10b8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b8e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B8E4u;
    {
        const bool branch_taken_0x10b8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8E4u;
        // 0x10b8e8: 0x24050166  addiu       $a1, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8e4) {
            ctx->pc = 0x10B8FCu;
            return;
        }
    }
    ctx->pc = 0x10B8ECu;
    // 0x10b8ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b8f0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b8f4: 0x10450002  beq         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B8F4u;
    {
        const bool branch_taken_0x10b8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8F4u;
        // 0x10b8f8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8f4) {
            ctx->pc = 0x10B900u;
            return;
        }
    }
    ctx->pc = 0x10B8FCu;
}
