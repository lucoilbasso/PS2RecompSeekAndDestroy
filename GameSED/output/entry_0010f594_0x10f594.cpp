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

// Function: entry_0010f594
// Address: 0x10f594 - 0x10f5dc
void entry_0010f594_0x10f594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f594_0x10f594");
#endif

    switch (ctx->pc) {
        case 0x10f5a8u: goto label_10f5a8;
        case 0x10f5c4u: goto label_10f5c4;
        default: break;
    }

    ctx->pc = 0x10f594u;

    // 0x10f594: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10f594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10f598: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x10f598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x10f59c: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x10f59cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x10f5a0: 0xc04110c  jal         func_104430
    ctx->pc = 0x10F5A0u;
    SET_GPR_U32(ctx, 31, 0x10F5A8u);
    ctx->pc = 0x10F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5A0u;
    // 0x10f5a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10F5A0u, 0x10F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5A8u;
label_10f5a8:
    // 0x10f5a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10f5a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5ac: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x10f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x10f5b0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x10f5b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10f5b4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10F5B4u;
    {
        const bool branch_taken_0x10f5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5B4u;
        // 0x10f5b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5b4) {
            ctx->pc = 0x10F5DCu;
            return;
        }
    }
    ctx->pc = 0x10F5BCu;
    // 0x10f5bc: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x10F5BCu;
    SET_GPR_U32(ctx, 31, 0x10F5C4u);
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x10F5BCu, 0x10F5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5C4u;
label_10f5c4:
    // 0x10f5c4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10f5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x10f5c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10f5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f5cc: 0x24a53d68  addiu       $a1, $a1, 0x3D68
    ctx->pc = 0x10f5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15720));
    // 0x10f5d0: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10f5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10f5d4: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x10F5D4u;
    SET_GPR_U32(ctx, 31, 0x10F5DCu);
    ctx->pc = 0x10F5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5D4u;
    // 0x10f5d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x10F5D4u, 0x10F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F5DCu;
}
