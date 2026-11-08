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

// Function: Cmd_GET_ANGLE_PARAM_Entry__FP15BsSCDEntControl
// Address: 0x112440 - 0x112594
void Cmd_GET_ANGLE_PARAM_Entry__FP15BsSCDEntControl_0x112440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_GET_ANGLE_PARAM_Entry__FP15BsSCDEntControl_0x112440");
#endif

    switch (ctx->pc) {
        case 0x112474u: goto label_112474;
        case 0x112488u: goto label_112488;
        case 0x112490u: goto label_112490;
        case 0x11249cu: goto label_11249c;
        case 0x11257cu: goto label_11257c;
        default: break;
    }

    ctx->pc = 0x112440u;

    // 0x112440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x112440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x112444: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x112444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x112448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11244c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11244cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112450: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x112450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x112454: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x112454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112458: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x112458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11245c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x112460: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x112460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x112464: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x112464u;
    {
        const bool branch_taken_0x112464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x112468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112464u;
        // 0x112468: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112464) {
            ctx->pc = 0x112480u;
            goto label_112480;
        }
    }
    ctx->pc = 0x11246Cu;
    // 0x11246c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x11246Cu;
    SET_GPR_U32(ctx, 31, 0x112474u);
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x11246Cu, 0x112474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112474u;
label_112474:
    // 0x112474: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x112474u;
    {
        const bool branch_taken_0x112474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112474u;
        // 0x112478: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112474) {
            ctx->pc = 0x112494u;
            goto label_112494;
        }
    }
    ctx->pc = 0x11247Cu;
    // 0x11247c: 0x0  nop
    ctx->pc = 0x11247cu;
    // NOP
label_112480:
    // 0x112480: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x112480u;
    SET_GPR_U32(ctx, 31, 0x112488u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x112480u, 0x112488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112488u;
label_112488:
    // 0x112488: 0xc06a2ac  jal         func_1A8AB0
    ctx->pc = 0x112488u;
    SET_GPR_U32(ctx, 31, 0x112490u);
    ctx->pc = 0x11248Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112488u;
    // 0x11248c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x112488u, 0x112490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112490u;
label_112490:
    // 0x112490: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112494:
    // 0x112494: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x112494u;
    SET_GPR_U32(ctx, 31, 0x11249Cu);
    ctx->pc = 0x112498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112494u;
    // 0x112498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x112494u, 0x11249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11249Cu;
label_11249c:
    // 0x11249c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11249cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1124a0: 0x2c62000b  sltiu       $v0, $v1, 0xB
    ctx->pc = 0x1124a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x1124a4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1124A4u;
    {
        const bool branch_taken_0x1124a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124A4u;
        // 0x1124a8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124a4) {
            ctx->pc = 0x112564u;
            goto label_112564;
        }
    }
    ctx->pc = 0x1124ACu;
    // 0x1124ac: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1124acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1124b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1124b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1124b4: 0x8c634160  lw          $v1, 0x4160($v1)
    ctx->pc = 0x1124b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16736)));
    // 0x1124b8: 0x600008  jr          $v1
    ctx->pc = 0x1124B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1124C0u: goto label_1124c0;
            case 0x1124D0u: goto label_1124d0;
            case 0x1124E0u: goto label_1124e0;
            case 0x1124F0u: goto label_1124f0;
            case 0x112500u: goto label_112500;
            case 0x112510u: goto label_112510;
            case 0x112520u: goto label_112520;
            case 0x112538u: goto label_112538;
            case 0x112550u: goto label_112550;
            case 0x112564u: goto label_112564;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1124B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1124C0u;
label_1124c0:
    // 0x1124c0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1124c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1124c4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1124c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1124c8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1124C8u;
    {
        const bool branch_taken_0x1124c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124C8u;
        // 0x1124cc: 0x8c710020  lw          $s1, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124c8) {
            ctx->pc = 0x112564u;
            goto label_112564;
        }
    }
    ctx->pc = 0x1124D0u;
label_1124d0:
    // 0x1124d0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1124d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1124d4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1124d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1124d8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1124D8u;
    {
        const bool branch_taken_0x1124d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124D8u;
        // 0x1124dc: 0x8c710024  lw          $s1, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124d8) {
            ctx->pc = 0x112564u;
            goto label_112564;
        }
    }
    ctx->pc = 0x1124E0u;
label_1124e0:
    // 0x1124e0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1124e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1124e4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1124e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1124e8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1124E8u;
    {
        const bool branch_taken_0x1124e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124E8u;
        // 0x1124ec: 0x8c710028  lw          $s1, 0x28($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124e8) {
            ctx->pc = 0x112564u;
            goto label_112564;
        }
    }
    ctx->pc = 0x1124F0u;
label_1124f0:
    // 0x1124f0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1124f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1124f4: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1124f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1124f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1124F8u;
    {
        const bool branch_taken_0x1124f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1124FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1124F8u;
        // 0x1124fc: 0xac710020  sw          $s1, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1124f8) {
            ctx->pc = 0x112564u;
            goto label_112564;
        }
    }
    ctx->pc = 0x112500u;
label_112500:
    // 0x112500: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x112504: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x112504u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112508: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x112508u;
    {
        const bool branch_taken_0x112508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112508u;
        // 0x11250c: 0xac710024  sw          $s1, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112508) {
            ctx->pc = 0x112564u;
            goto label_112564;
        }
    }
    ctx->pc = 0x112510u;
label_112510:
    // 0x112510: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x112514: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x112514u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112518: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x112518u;
    {
        const bool branch_taken_0x112518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112518u;
        // 0x11251c: 0xac710028  sw          $s1, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112518) {
            ctx->pc = 0x112564u;
            goto label_112564;
        }
    }
    ctx->pc = 0x112520u;
label_112520:
    // 0x112520: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x112524: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x112524u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112528: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x112528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x11252c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x112530: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x112530u;
    {
        const bool branch_taken_0x112530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112530u;
        // 0x112534: 0xac830020  sw          $v1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112530) {
            ctx->pc = 0x112564u;
            goto label_112564;
        }
    }
    ctx->pc = 0x112538u;
label_112538:
    // 0x112538: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x11253c: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x11253cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112540: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x112540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x112544: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x112544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x112548: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112548u;
    {
        const bool branch_taken_0x112548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112548u;
        // 0x11254c: 0xac830024  sw          $v1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112548) {
            ctx->pc = 0x112564u;
            goto label_112564;
        }
    }
    ctx->pc = 0x112550u;
label_112550:
    // 0x112550: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x112550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x112554: 0x8c44b830  lw          $a0, -0x47D0($v0)
    ctx->pc = 0x112554u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x1FB830u));
    // 0x112558: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x112558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x11255c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x11255cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x112560: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x112560u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_112564:
    // 0x112564: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x112564u;
    {
        const bool branch_taken_0x112564 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x112568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112564u;
        // 0x112568: 0x32227fff  andi        $v0, $s1, 0x7FFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32767);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112564) {
            ctx->pc = 0x11257Cu;
            goto label_11257c;
        }
    }
    ctx->pc = 0x11256Cu;
    // 0x11256c: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x11256cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x112570: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x112570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x112574: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x112574u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x112578: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x112578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_11257c:
    // 0x11257c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11257cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112580: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x112580u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112584: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x112584u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112588: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x112588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11258c: 0x3e00008  jr          $ra
    ctx->pc = 0x11258Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11258Cu;
        // 0x112590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11258Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112594u;
}
