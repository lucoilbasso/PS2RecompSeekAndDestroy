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

// Function: entry_001c25ac
// Address: 0x1c25ac - 0x1c26f4
void entry_001c25ac_0x1c25ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c25ac_0x1c25ac");
#endif

    switch (ctx->pc) {
        case 0x1c25b8u: goto label_1c25b8;
        case 0x1c25c8u: goto label_1c25c8;
        case 0x1c25d8u: goto label_1c25d8;
        case 0x1c25e8u: goto label_1c25e8;
        case 0x1c2618u: goto label_1c2618;
        case 0x1c2648u: goto label_1c2648;
        case 0x1c2678u: goto label_1c2678;
        case 0x1c2688u: goto label_1c2688;
        case 0x1c2694u: goto label_1c2694;
        case 0x1c26a4u: goto label_1c26a4;
        case 0x1c26b8u: goto label_1c26b8;
        case 0x1c26c4u: goto label_1c26c4;
        case 0x1c26d0u: goto label_1c26d0;
        case 0x1c26dcu: goto label_1c26dc;
        default: break;
    }

    ctx->pc = 0x1c25acu;

    // 0x1c25ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c25acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25b0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C25B0u;
    SET_GPR_U32(ctx, 31, 0x1C25B8u);
    ctx->pc = 0x1C25B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25B0u;
    // 0x1c25b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C25B0u, 0x1C25B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25B8u;
label_1c25b8:
    // 0x1c25b8: 0xae020178  sw          $v0, 0x178($s0)
    ctx->pc = 0x1c25b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 2));
    // 0x1c25bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c25bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25c0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C25C0u;
    SET_GPR_U32(ctx, 31, 0x1C25C8u);
    ctx->pc = 0x1C25C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25C0u;
    // 0x1c25c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C25C0u, 0x1C25C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25C8u;
label_1c25c8:
    // 0x1c25c8: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x1c25c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    // 0x1c25cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c25ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25d0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C25D0u;
    SET_GPR_U32(ctx, 31, 0x1C25D8u);
    ctx->pc = 0x1C25D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25D0u;
    // 0x1c25d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C25D0u, 0x1C25D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25D8u;
label_1c25d8:
    // 0x1c25d8: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x1c25d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x1c25dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c25dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c25e0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C25E0u;
    SET_GPR_U32(ctx, 31, 0x1C25E8u);
    ctx->pc = 0x1C25E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C25E0u;
    // 0x1c25e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C25E0u, 0x1C25E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25E8u;
label_1c25e8:
    // 0x1c25e8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1c25e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1c25ec: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x1c25ecu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c25f0: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x1c25f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x1c25f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c25f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c25f8: 0x21580  sll         $v0, $v0, 22
    ctx->pc = 0x1c25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x1c25fc: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1c25fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c2600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2604: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1c2604u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1c2608: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c2608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c260c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1c260cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1c2610: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2610u;
    SET_GPR_U32(ctx, 31, 0x1C2618u);
    ctx->pc = 0x1C2614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2610u;
    // 0x1c2614: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2610u, 0x1C2618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2618u;
label_1c2618:
    // 0x1c2618: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1c2618u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1c261c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x1c261cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c2620: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x1c2620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x1c2624: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c2624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c2628: 0x21540  sll         $v0, $v0, 21
    ctx->pc = 0x1c2628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x1c262c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1c262cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c2630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2634: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1c2634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1c2638: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c2638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c263c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1c263cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1c2640: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2640u;
    SET_GPR_U32(ctx, 31, 0x1C2648u);
    ctx->pc = 0x1C2644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2640u;
    // 0x1c2644: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2640u, 0x1C2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2648u;
label_1c2648:
    // 0x1c2648: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x1c2648u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x1c264c: 0x8cc62010  lw          $a2, 0x2010($a2)
    ctx->pc = 0x1c264cu;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1c2650: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x1c2650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x1c2654: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c2654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c2658: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x1c2658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1c265c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1c265cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c2660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2664: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1c2664u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1c2668: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c2668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c266c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1c266cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1c2670: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2670u;
    SET_GPR_U32(ctx, 31, 0x1C2678u);
    ctx->pc = 0x1C2674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2670u;
    // 0x1c2674: 0xac262010  sw          $a2, 0x2010($at) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2670u, 0x1C2678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2678u;
label_1c2678:
    // 0x1c2678: 0xae020184  sw          $v0, 0x184($s0)
    ctx->pc = 0x1c2678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
    // 0x1c267c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c267cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2680: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C2680u;
    SET_GPR_U32(ctx, 31, 0x1C2688u);
    ctx->pc = 0x1C2684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2680u;
    // 0x1c2684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C2680u, 0x1C2688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2688u;
label_1c2688:
    // 0x1c2688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c268c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C268Cu;
    SET_GPR_U32(ctx, 31, 0x1C2694u);
    ctx->pc = 0x1C2690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C268Cu;
    // 0x1c2690: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C268Cu, 0x1C2694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2694u;
label_1c2694:
    // 0x1c2694: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x1c2694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x1c2698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c269c: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C269Cu;
    SET_GPR_U32(ctx, 31, 0x1C26A4u);
    ctx->pc = 0x1C26A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C269Cu;
    // 0x1c26a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C269Cu, 0x1C26A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C26A4u;
label_1c26a4:
    // 0x1c26a4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C26A4u;
    {
        const bool branch_taken_0x1c26a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C26A4u;
        // 0x1c26a8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c26a4) {
            ctx->pc = 0x1C26F4u;
            return;
        }
    }
    ctx->pc = 0x1C26ACu;
    // 0x1c26ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c26acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26b0: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C26B0u;
    SET_GPR_U32(ctx, 31, 0x1C26B8u);
    ctx->pc = 0x1C26B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C26B0u;
    // 0x1c26b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C26B0u, 0x1C26B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C26B8u;
label_1c26b8:
    // 0x1c26b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c26b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26bc: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C26BCu;
    SET_GPR_U32(ctx, 31, 0x1C26C4u);
    ctx->pc = 0x1C26C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C26BCu;
    // 0x1c26c0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C26BCu, 0x1C26C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C26C4u;
label_1c26c4:
    // 0x1c26c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c26c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26c8: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C26C8u;
    SET_GPR_U32(ctx, 31, 0x1C26D0u);
    ctx->pc = 0x1C26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C26C8u;
    // 0x1c26cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C26C8u, 0x1C26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C26D0u;
label_1c26d0:
    // 0x1c26d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c26d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26d4: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C26D4u;
    SET_GPR_U32(ctx, 31, 0x1C26DCu);
    ctx->pc = 0x1C26D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C26D4u;
    // 0x1c26d8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C26D4u, 0x1C26DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C26DCu;
label_1c26dc:
    // 0x1c26dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c26dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c26e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c26e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c26e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c26e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c26e8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1c26e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c26ec: 0x80707f6  j           func_1C1FD8
    ctx->pc = 0x1C26ECu;
    ctx->pc = 0x1C26F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C26ECu;
    // 0x1c26f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    _nextBit_0x1c1fd8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C26F4u;
}
