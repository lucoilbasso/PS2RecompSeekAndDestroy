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

// Function: entry_00170280
// Address: 0x170280 - 0x1702e0
void entry_00170280_0x170280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170280_0x170280");
#endif

    switch (ctx->pc) {
        case 0x170288u: goto label_170288;
        case 0x1702acu: goto label_1702ac;
        case 0x1702c8u: goto label_1702c8;
        case 0x1702d4u: goto label_1702d4;
        default: break;
    }

    ctx->pc = 0x170280u;

    // 0x170280: 0xc05c332  jal         func_170CC8
    ctx->pc = 0x170280u;
    SET_GPR_U32(ctx, 31, 0x170288u);
    ctx->pc = 0x170284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170280u;
    // 0x170284: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170CC8u, 0x170280u, 0x170288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170288u;
label_170288:
    // 0x170288: 0x1ac00018  blez        $s6, . + 4 + (0x18 << 2)
    ctx->pc = 0x170288u;
    {
        const bool branch_taken_0x170288 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x17028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170288u;
        // 0x17028c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170288) {
            ctx->pc = 0x1702ECu;
            return;
        }
    }
    ctx->pc = 0x170290u;
    // 0x170290: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x170290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x170294: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x170294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x170298: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x170298u;
    {
        const bool branch_taken_0x170298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170298u;
        // 0x17029c: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170298) {
            ctx->pc = 0x1702ECu;
            return;
        }
    }
    ctx->pc = 0x1702A0u;
    // 0x1702a0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1702a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1702a4: 0xc05d3d6  jal         func_174F58
    ctx->pc = 0x1702A4u;
    SET_GPR_U32(ctx, 31, 0x1702ACu);
    ctx->pc = 0x1702A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1702A4u;
    // 0x1702a8: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F58u, 0x1702A4u, 0x1702ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702ACu;
label_1702ac:
    // 0x1702ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1702acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1702b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1702b4: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1702B4u;
    {
        const bool branch_taken_0x1702b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1702b4) {
            ctx->pc = 0x1702B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1702B4u;
            // 0x1702b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1702E0u;
            return;
        }
    }
    ctx->pc = 0x1702BCu;
    // 0x1702bc: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x1702bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x1702c0: 0xc05c5fa  jal         func_1717E8
    ctx->pc = 0x1702C0u;
    SET_GPR_U32(ctx, 31, 0x1702C8u);
    ctx->pc = 0x1702C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1702C0u;
    // 0x1702c4: 0x24a41368  addiu       $a0, $a1, 0x1368 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1717E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1717E8u, 0x1702C0u, 0x1702C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702C8u;
label_1702c8:
    // 0x1702c8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1702c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1702cc: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1702CCu;
    SET_GPR_U32(ctx, 31, 0x1702D4u);
    ctx->pc = 0x1702D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1702CCu;
    // 0x1702d0: 0x24447678  addiu       $a0, $v0, 0x7678 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1702CCu, 0x1702D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1702D4u;
label_1702d4:
    // 0x1702d4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1702D4u;
    {
        const bool branch_taken_0x1702d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1702d4) {
            ctx->pc = 0x1703C8u;
            return;
        }
    }
    ctx->pc = 0x1702DCu;
    // 0x1702dc: 0x0  nop
    ctx->pc = 0x1702dcu;
    // NOP
    ctx->pc = 0x1702e0u;
}
