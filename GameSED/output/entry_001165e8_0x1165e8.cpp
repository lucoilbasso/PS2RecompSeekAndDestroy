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

// Function: entry_001165e8
// Address: 0x1165e8 - 0x116650
void entry_001165e8_0x1165e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001165e8_0x1165e8");
#endif

    switch (ctx->pc) {
        case 0x11660cu: goto label_11660c;
        case 0x11661cu: goto label_11661c;
        default: break;
    }

    ctx->pc = 0x1165e8u;

label_1165e8:
    // 0x1165e8: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x1165e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
label_1165ec:
    // 0x1165ec: 0x240224d0  addiu       $v0, $zero, 0x24D0
    ctx->pc = 0x1165ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
label_1165f0:
    // 0x1165f0: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x1165f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1165f4:
    // 0x1165f4: 0x38202  srl         $s0, $v1, 8
    ctx->pc = 0x1165f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_1165f8:
    // 0x1165f8: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x1165f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1165fc:
    // 0x1165fc: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x1165fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_116600:
    // 0x116600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116604:
    // 0x116604: 0xc045360  jal         func_114D80
label_116608:
    if (ctx->pc == 0x116608u) {
        ctx->pc = 0x116608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116604u;
        // 0x116608: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11660Cu;
        goto label_11660c;
    }
    ctx->pc = 0x116604u;
    SET_GPR_U32(ctx, 31, 0x11660Cu);
    ctx->pc = 0x116608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116604u;
    // 0x116608: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x116604u, 0x11660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11660Cu;
label_11660c:
    // 0x11660c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11660cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116610:
    // 0x116610: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x116610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_116614:
    // 0x116614: 0xc045360  jal         func_114D80
label_116618:
    if (ctx->pc == 0x116618u) {
        ctx->pc = 0x116618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116614u;
        // 0x116618: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11661Cu;
        goto label_11661c;
    }
    ctx->pc = 0x116614u;
    SET_GPR_U32(ctx, 31, 0x11661Cu);
    ctx->pc = 0x116618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116614u;
    // 0x116618: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x116614u, 0x11661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11661Cu;
label_11661c:
    // 0x11661c: 0x2e02000b  sltiu       $v0, $s0, 0xB
    ctx->pc = 0x11661cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_116620:
    // 0x116620: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x116620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
label_116624:
    // 0x116624: 0x2421d190  addiu       $at, $at, -0x2E70
    ctx->pc = 0x116624u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294955408));
label_116628:
    // 0x116628: 0x318821  addu        $s1, $at, $s1
    ctx->pc = 0x116628u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
label_11662c:
    // 0x11662c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_116630:
    if (ctx->pc == 0x116630u) {
        ctx->pc = 0x116630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11662Cu;
        // 0x116630: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116634u;
        goto label_116634;
    }
    ctx->pc = 0x11662Cu;
    {
        const bool branch_taken_0x11662c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11662Cu;
        // 0x116630: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11662c) {
            ctx->pc = 0x1166A4u;
            return;
        }
    }
    ctx->pc = 0x116634u;
label_116634:
    // 0x116634: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x116634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_116638:
    // 0x116638: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x116638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_11663c:
    // 0x11663c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11663cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_116640:
    // 0x116640: 0x8c634590  lw          $v1, 0x4590($v1)
    ctx->pc = 0x116640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17808)));
label_116644:
    // 0x116644: 0x600008  jr          $v1
label_116648:
    if (ctx->pc == 0x116648u) {
        ctx->pc = 0x11664Cu;
        goto label_11664c;
    }
    ctx->pc = 0x116644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116644u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11664Cu;
label_11664c:
    // 0x11664c: 0x0  nop
    ctx->pc = 0x11664cu;
    // NOP
    ctx->pc = 0x116650u;
}
