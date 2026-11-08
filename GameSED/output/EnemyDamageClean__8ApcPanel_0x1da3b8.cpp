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

// Function: EnemyDamageClean__8ApcPanel
// Address: 0x1da3b8 - 0x1da4a4
void EnemyDamageClean__8ApcPanel_0x1da3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnemyDamageClean__8ApcPanel_0x1da3b8");
#endif

    switch (ctx->pc) {
        case 0x1da3b8u: goto label_1da3b8;
        case 0x1da3bcu: goto label_1da3bc;
        case 0x1da3c0u: goto label_1da3c0;
        case 0x1da3c4u: goto label_1da3c4;
        case 0x1da3c8u: goto label_1da3c8;
        case 0x1da3ccu: goto label_1da3cc;
        case 0x1da3d0u: goto label_1da3d0;
        case 0x1da3d4u: goto label_1da3d4;
        case 0x1da3d8u: goto label_1da3d8;
        case 0x1da3dcu: goto label_1da3dc;
        case 0x1da3e0u: goto label_1da3e0;
        case 0x1da3e4u: goto label_1da3e4;
        case 0x1da3e8u: goto label_1da3e8;
        case 0x1da3ecu: goto label_1da3ec;
        case 0x1da3f0u: goto label_1da3f0;
        case 0x1da3f4u: goto label_1da3f4;
        case 0x1da3f8u: goto label_1da3f8;
        case 0x1da3fcu: goto label_1da3fc;
        case 0x1da400u: goto label_1da400;
        case 0x1da404u: goto label_1da404;
        case 0x1da408u: goto label_1da408;
        case 0x1da40cu: goto label_1da40c;
        case 0x1da410u: goto label_1da410;
        case 0x1da414u: goto label_1da414;
        case 0x1da418u: goto label_1da418;
        case 0x1da41cu: goto label_1da41c;
        case 0x1da420u: goto label_1da420;
        case 0x1da424u: goto label_1da424;
        case 0x1da428u: goto label_1da428;
        case 0x1da42cu: goto label_1da42c;
        case 0x1da430u: goto label_1da430;
        case 0x1da434u: goto label_1da434;
        case 0x1da438u: goto label_1da438;
        case 0x1da43cu: goto label_1da43c;
        case 0x1da440u: goto label_1da440;
        case 0x1da444u: goto label_1da444;
        case 0x1da448u: goto label_1da448;
        case 0x1da44cu: goto label_1da44c;
        case 0x1da450u: goto label_1da450;
        case 0x1da454u: goto label_1da454;
        case 0x1da458u: goto label_1da458;
        case 0x1da45cu: goto label_1da45c;
        case 0x1da460u: goto label_1da460;
        case 0x1da464u: goto label_1da464;
        case 0x1da468u: goto label_1da468;
        case 0x1da46cu: goto label_1da46c;
        case 0x1da470u: goto label_1da470;
        case 0x1da474u: goto label_1da474;
        case 0x1da478u: goto label_1da478;
        case 0x1da47cu: goto label_1da47c;
        case 0x1da480u: goto label_1da480;
        case 0x1da484u: goto label_1da484;
        case 0x1da488u: goto label_1da488;
        case 0x1da48cu: goto label_1da48c;
        case 0x1da490u: goto label_1da490;
        case 0x1da494u: goto label_1da494;
        case 0x1da498u: goto label_1da498;
        case 0x1da49cu: goto label_1da49c;
        case 0x1da4a0u: goto label_1da4a0;
        default: break;
    }

    ctx->pc = 0x1da3b8u;

label_1da3b8:
    // 0x1da3b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1da3bc:
    // 0x1da3bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1da3c0:
    // 0x1da3c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1da3c4:
    // 0x1da3c4: 0x24900da0  addiu       $s0, $a0, 0xDA0
    ctx->pc = 0x1da3c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 3488));
label_1da3c8:
    // 0x1da3c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1da3cc:
    // 0x1da3cc: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1da3ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1da3d0:
    // 0x1da3d0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1da3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1da3d4:
    // 0x1da3d4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da3d8:
    if (ctx->pc == 0x1DA3D8u) {
        ctx->pc = 0x1DA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3D4u;
        // 0x1da3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA3DCu;
        goto label_1da3dc;
    }
    ctx->pc = 0x1DA3D4u;
    {
        const bool branch_taken_0x1da3d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3D4u;
        // 0x1da3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3d4) {
            ctx->pc = 0x1DA3F4u;
            goto label_1da3f4;
        }
    }
    ctx->pc = 0x1DA3DCu;
label_1da3dc:
    // 0x1da3dc: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da3e0:
    // 0x1da3e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da3e4:
    // 0x1da3e4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da3e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da3e8:
    // 0x1da3e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da3ec:
    // 0x1da3ec: 0x60f809  jalr        $v1
label_1da3f0:
    if (ctx->pc == 0x1DA3F0u) {
        ctx->pc = 0x1DA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3ECu;
        // 0x1da3f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA3F4u;
        goto label_1da3f4;
    }
    ctx->pc = 0x1DA3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA3F4u);
        ctx->pc = 0x1DA3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3ECu;
        // 0x1da3f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA3ECu, 0x1DA3F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA3F4u;
label_1da3f4:
    // 0x1da3f4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1da3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1da3f8:
    // 0x1da3f8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da3fc:
    if (ctx->pc == 0x1DA3FCu) {
        ctx->pc = 0x1DA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3F8u;
        // 0x1da3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA400u;
        goto label_1da400;
    }
    ctx->pc = 0x1DA3F8u;
    {
        const bool branch_taken_0x1da3f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3F8u;
        // 0x1da3fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3f8) {
            ctx->pc = 0x1DA418u;
            goto label_1da418;
        }
    }
    ctx->pc = 0x1DA400u;
label_1da400:
    // 0x1da400: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da404:
    // 0x1da404: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da408:
    // 0x1da408: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da408u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da40c:
    // 0x1da40c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da410:
    // 0x1da410: 0x60f809  jalr        $v1
label_1da414:
    if (ctx->pc == 0x1DA414u) {
        ctx->pc = 0x1DA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA410u;
        // 0x1da414: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA418u;
        goto label_1da418;
    }
    ctx->pc = 0x1DA410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA418u);
        ctx->pc = 0x1DA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA410u;
        // 0x1da414: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA410u, 0x1DA418u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA418u;
label_1da418:
    // 0x1da418: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1da418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1da41c:
    // 0x1da41c: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da420:
    if (ctx->pc == 0x1DA420u) {
        ctx->pc = 0x1DA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA41Cu;
        // 0x1da420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA424u;
        goto label_1da424;
    }
    ctx->pc = 0x1DA41Cu;
    {
        const bool branch_taken_0x1da41c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA41Cu;
        // 0x1da420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da41c) {
            ctx->pc = 0x1DA43Cu;
            goto label_1da43c;
        }
    }
    ctx->pc = 0x1DA424u;
label_1da424:
    // 0x1da424: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da428:
    // 0x1da428: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da42c:
    // 0x1da42c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da42cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da430:
    // 0x1da430: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da434:
    // 0x1da434: 0x60f809  jalr        $v1
label_1da438:
    if (ctx->pc == 0x1DA438u) {
        ctx->pc = 0x1DA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA434u;
        // 0x1da438: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA43Cu;
        goto label_1da43c;
    }
    ctx->pc = 0x1DA434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA43Cu);
        ctx->pc = 0x1DA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA434u;
        // 0x1da438: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA434u, 0x1DA43Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA43Cu;
label_1da43c:
    // 0x1da43c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1da43cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1da440:
    // 0x1da440: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1da444:
    if (ctx->pc == 0x1DA444u) {
        ctx->pc = 0x1DA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA440u;
        // 0x1da444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA448u;
        goto label_1da448;
    }
    ctx->pc = 0x1DA440u;
    {
        const bool branch_taken_0x1da440 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA440u;
        // 0x1da444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da440) {
            ctx->pc = 0x1DA460u;
            goto label_1da460;
        }
    }
    ctx->pc = 0x1DA448u;
label_1da448:
    // 0x1da448: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1da448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1da44c:
    // 0x1da44c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1da44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1da450:
    // 0x1da450: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1da450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1da454:
    // 0x1da454: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1da454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1da458:
    // 0x1da458: 0x60f809  jalr        $v1
label_1da45c:
    if (ctx->pc == 0x1DA45Cu) {
        ctx->pc = 0x1DA45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA458u;
        // 0x1da45c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA460u;
        goto label_1da460;
    }
    ctx->pc = 0x1DA458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DA460u);
        ctx->pc = 0x1DA45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA458u;
        // 0x1da45c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA458u, 0x1DA460u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DA460u;
label_1da460:
    // 0x1da460: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1da460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1da464:
    // 0x1da464: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1da464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1da468:
    // 0x1da468: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1da468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1da46c:
    // 0x1da46c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1da46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1da470:
    // 0x1da470: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1da470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1da474:
    // 0x1da474: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1da474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_1da478:
    // 0x1da478: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1da478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1da47c:
    // 0x1da47c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1da47cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1da480:
    // 0x1da480: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1da480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1da484:
    // 0x1da484: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1da484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_1da488:
    // 0x1da488: 0x621ffd1  bgez        $s1, . + 4 + (-0x2F << 2)
label_1da48c:
    if (ctx->pc == 0x1DA48Cu) {
        ctx->pc = 0x1DA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA488u;
        // 0x1da48c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA490u;
        goto label_1da490;
    }
    ctx->pc = 0x1DA488u;
    {
        const bool branch_taken_0x1da488 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1DA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA488u;
        // 0x1da48c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da488) {
            ctx->pc = 0x1DA3D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da3d0;
        }
    }
    ctx->pc = 0x1DA490u;
label_1da490:
    // 0x1da490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1da494:
    // 0x1da494: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1da498:
    // 0x1da498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1da49c:
    // 0x1da49c: 0x3e00008  jr          $ra
label_1da4a0:
    if (ctx->pc == 0x1DA4A0u) {
        ctx->pc = 0x1DA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA49Cu;
        // 0x1da4a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DA4A4u;
        goto label_fallthrough_0x1da49c;
    }
    ctx->pc = 0x1DA49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA49Cu;
        // 0x1da4a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1da49c:
    ctx->pc = 0x1DA4A4u;
}
