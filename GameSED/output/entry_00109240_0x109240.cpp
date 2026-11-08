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

// Function: entry_00109240
// Address: 0x109240 - 0x1092a0
void entry_00109240_0x109240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109240_0x109240");
#endif

    switch (ctx->pc) {
        case 0x10925cu: goto label_10925c;
        case 0x109280u: goto label_109280;
        case 0x109298u: goto label_109298;
        default: break;
    }

    ctx->pc = 0x109240u;

    // 0x109240: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x109240u;
    {
        const bool branch_taken_0x109240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x109244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109240u;
        // 0x109244: 0x2a82000a  slti        $v0, $s4, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109240) {
            ctx->pc = 0x1092C4u;
            return;
        }
    }
    ctx->pc = 0x109248u;
    // 0x109248: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x109248u;
    {
        const bool branch_taken_0x109248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109248u;
        // 0x10924c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109248) {
            ctx->pc = 0x1092A0u;
            return;
        }
    }
    ctx->pc = 0x109250u;
    // 0x109250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109254: 0xc04201a  jal         func_108068
    ctx->pc = 0x109254u;
    SET_GPR_U32(ctx, 31, 0x10925Cu);
    ctx->pc = 0x109258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109254u;
    // 0x109258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108068u, 0x109254u, 0x10925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10925Cu;
label_10925c:
    // 0x10925c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10925cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109260: 0x16600013  bnez        $s3, . + 4 + (0x13 << 2)
    ctx->pc = 0x109260u;
    {
        const bool branch_taken_0x109260 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x109264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109260u;
        // 0x109264: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109260) {
            ctx->pc = 0x1092B0u;
            return;
        }
    }
    ctx->pc = 0x109268u;
    // 0x109268: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x109268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x10926c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10926cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x109270: 0x52020010  beql        $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x109270u;
    {
        const bool branch_taken_0x109270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x109270) {
            ctx->pc = 0x109274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109270u;
            // 0x109274: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1092B4u;
            return;
        }
    }
    ctx->pc = 0x109278u;
    // 0x109278: 0xc04112c  jal         func_1044B0
    ctx->pc = 0x109278u;
    SET_GPR_U32(ctx, 31, 0x109280u);
    ctx->pc = 0x10927Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109278u;
    // 0x10927c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B0u, 0x109278u, 0x109280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109280u;
label_109280:
    // 0x109280: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x109280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x109284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109288: 0x24a53ac0  addiu       $a1, $a1, 0x3AC0
    ctx->pc = 0x109288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15040));
    // 0x10928c: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x10928cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x109290: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x109290u;
    SET_GPR_U32(ctx, 31, 0x109298u);
    ctx->pc = 0x109294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109290u;
    // 0x109294: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x109290u, 0x109298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109298u;
label_109298:
    // 0x109298: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x109298u;
    {
        const bool branch_taken_0x109298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109298u;
        // 0x10929c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109298) {
            ctx->pc = 0x1092B0u;
            return;
        }
    }
    ctx->pc = 0x1092A0u;
}
