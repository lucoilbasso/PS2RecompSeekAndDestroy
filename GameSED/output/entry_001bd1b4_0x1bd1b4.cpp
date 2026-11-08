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

// Function: entry_001bd1b4
// Address: 0x1bd1b4 - 0x1bd240
void entry_001bd1b4_0x1bd1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd1b4_0x1bd1b4");
#endif

    switch (ctx->pc) {
        case 0x1bd1c8u: goto label_1bd1c8;
        case 0x1bd1d4u: goto label_1bd1d4;
        case 0x1bd1e0u: goto label_1bd1e0;
        case 0x1bd1ecu: goto label_1bd1ec;
        case 0x1bd1f8u: goto label_1bd1f8;
        case 0x1bd204u: goto label_1bd204;
        case 0x1bd210u: goto label_1bd210;
        default: break;
    }

    ctx->pc = 0x1bd1b4u;

    // 0x1bd1b4: 0x16e20022  bne         $s7, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BD1B4u;
    {
        const bool branch_taken_0x1bd1b4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD1B4u;
        // 0x1bd1b8: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd1b4) {
            ctx->pc = 0x1BD240u;
            return;
        }
    }
    ctx->pc = 0x1BD1BCu;
    // 0x1bd1bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1c0: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD1C0u;
    SET_GPR_U32(ctx, 31, 0x1BD1C8u);
    ctx->pc = 0x1BD1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1C0u;
    // 0x1bd1c4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD1C0u, 0x1BD1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1C8u;
label_1bd1c8:
    // 0x1bd1c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1cc: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD1CCu;
    SET_GPR_U32(ctx, 31, 0x1BD1D4u);
    ctx->pc = 0x1BD1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1CCu;
    // 0x1bd1d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD1CCu, 0x1BD1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1D4u;
label_1bd1d4:
    // 0x1bd1d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bd1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1d8: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BD1D8u;
    SET_GPR_U32(ctx, 31, 0x1BD1E0u);
    ctx->pc = 0x1BD1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1D8u;
    // 0x1bd1dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BD1D8u, 0x1BD1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1E0u;
label_1bd1e0:
    // 0x1bd1e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1e4: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD1E4u;
    SET_GPR_U32(ctx, 31, 0x1BD1ECu);
    ctx->pc = 0x1BD1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1E4u;
    // 0x1bd1e8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD1E4u, 0x1BD1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1ECu;
label_1bd1ec:
    // 0x1bd1ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bd1ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1f0: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BD1F0u;
    SET_GPR_U32(ctx, 31, 0x1BD1F8u);
    ctx->pc = 0x1BD1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1F0u;
    // 0x1bd1f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BD1F0u, 0x1BD1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD1F8u;
label_1bd1f8:
    // 0x1bd1f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1bd1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1fc: 0xc071038  jal         func_1C40E0
    ctx->pc = 0x1BD1FCu;
    SET_GPR_U32(ctx, 31, 0x1BD204u);
    ctx->pc = 0x1BD200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD1FCu;
    // 0x1bd200: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C40E0u, 0x1BD1FCu, 0x1BD204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD204u;
label_1bd204:
    // 0x1bd204: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bd204u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd208: 0xc07104c  jal         func_1C4130
    ctx->pc = 0x1BD208u;
    SET_GPR_U32(ctx, 31, 0x1BD210u);
    ctx->pc = 0x1BD20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD208u;
    // 0x1bd20c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4130u, 0x1BD208u, 0x1BD210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD210u;
label_1bd210:
    // 0x1bd210: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x1bd210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x1bd214: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x1bd214u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x1bd218: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x1bd218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x1bd21c: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x1bd21cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x1bd220: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1bd220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1bd224: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1bd224u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1bd228: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bd228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bd22c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1bd22cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1bd230: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bd230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bd234: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1bd234u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1bd238: 0xfe900018  sd          $s0, 0x18($s4)
    ctx->pc = 0x1bd238u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 16));
    // 0x1bd23c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1bd23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->pc = 0x1bd240u;
}
