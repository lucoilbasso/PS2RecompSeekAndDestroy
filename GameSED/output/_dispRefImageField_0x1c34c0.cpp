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

// Function: _dispRefImageField
// Address: 0x1c34c0 - 0x1c3678
void _dispRefImageField_0x1c34c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dispRefImageField_0x1c34c0");
#endif

    switch (ctx->pc) {
        case 0x1c3538u: goto label_1c3538;
        case 0x1c3560u: goto label_1c3560;
        case 0x1c35c8u: goto label_1c35c8;
        case 0x1c3608u: goto label_1c3608;
        case 0x1c3618u: goto label_1c3618;
        default: break;
    }

    ctx->pc = 0x1c34c0u;

    // 0x1c34c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c34c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1c34c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c34c8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1c34c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1c34cc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1c34ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1c34d0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1c34d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c34d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c34d8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1c34d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34dc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1c34dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1c34e0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1c34e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1c34e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c34e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c34e8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c34e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1c34ec: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1c34ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1c34f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c34f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c34f4: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x1c34f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1c34f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C34F8u;
    {
        const bool branch_taken_0x1c34f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C34FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C34F8u;
        // 0x1c34fc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c34f8) {
            ctx->pc = 0x1C3510u;
            goto label_1c3510;
        }
    }
    ctx->pc = 0x1C3500u;
    // 0x1c3500: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1c3500u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3504: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x1c3504u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3508: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3508u;
    {
        const bool branch_taken_0x1c3508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3508u;
        // 0x1c350c: 0x24160040  addiu       $s6, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3508) {
            ctx->pc = 0x1C3518u;
            goto label_1c3518;
        }
    }
    ctx->pc = 0x1C3510u;
label_1c3510:
    // 0x1c3510: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x1c3510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3514: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1c3514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c3518:
    // 0x1c3518: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x1c3518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1c351c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c351cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3520: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c3520u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3524: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c3524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3528: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x1c3528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1c352c: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x1c352cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x1c3530: 0xc070c88  jal         func_1C3220
    ctx->pc = 0x1C3530u;
    SET_GPR_U32(ctx, 31, 0x1C3538u);
    ctx->pc = 0x1C3534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3530u;
    // 0x1c3534: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3220u, 0x1C3530u, 0x1C3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3538u;
label_1c3538:
    // 0x1c3538: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x1c3538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1c353c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3540: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c3540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3544: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x1c3544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1c3548: 0x24e80038  addiu       $t0, $a3, 0x38
    ctx->pc = 0x1c3548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 56));
    // 0x1c354c: 0x24e60028  addiu       $a2, $a3, 0x28
    ctx->pc = 0x1c354cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x1c3550: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x1c3550u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x1c3554: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x1c3554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x1c3558: 0xc070c88  jal         func_1C3220
    ctx->pc = 0x1C3558u;
    SET_GPR_U32(ctx, 31, 0x1C3560u);
    ctx->pc = 0x1C355Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3558u;
    // 0x1c355c: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3220u, 0x1C3558u, 0x1C3560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3560u;
label_1c3560:
    // 0x1c3560: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x1c3560u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x1c3564: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1c3564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c3568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c356c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c356cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3570: 0x8ce30028  lw          $v1, 0x28($a3)
    ctx->pc = 0x1c3570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x1c3574: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x1c3574u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x1c3578: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x1c3578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x1c357c: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x1c357cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x1c3580: 0x8e66005c  lw          $a2, 0x5C($s3)
    ctx->pc = 0x1c3580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x1c3584: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1c3584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1c3588: 0xdce30038  ld          $v1, 0x38($a3)
    ctx->pc = 0x1c3588u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1c358c: 0xae2600cc  sw          $a2, 0xCC($s1)
    ctx->pc = 0x1c358cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 6));
    // 0x1c3590: 0xfce20020  sd          $v0, 0x20($a3)
    ctx->pc = 0x1c3590u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 2));
    // 0x1c3594: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x1c3594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x1c3598: 0x8e660060  lw          $a2, 0x60($s3)
    ctx->pc = 0x1c3598u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1c359c: 0xfce30038  sd          $v1, 0x38($a3)
    ctx->pc = 0x1c359cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 3));
    // 0x1c35a0: 0xae2600d0  sw          $a2, 0xD0($s1)
    ctx->pc = 0x1c35a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 6));
    // 0x1c35a4: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1c35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x1c35a8: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x1c35a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x1c35ac: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x1c35acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1c35b0: 0xae2300b8  sw          $v1, 0xB8($s1)
    ctx->pc = 0x1c35b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x1c35b4: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x1c35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x1c35b8: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x1c35b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x1c35bc: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x1c35bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1c35c0: 0xc070bb2  jal         func_1C2EC8
    ctx->pc = 0x1C35C0u;
    SET_GPR_U32(ctx, 31, 0x1C35C8u);
    ctx->pc = 0x1C35C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C35C0u;
    // 0x1c35c4: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2EC8u, 0x1C35C0u, 0x1C35C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C35C8u;
label_1c35c8:
    // 0x1c35c8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C35C8u;
    {
        const bool branch_taken_0x1c35c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35C8u;
        // 0x1c35cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35c8) {
            ctx->pc = 0x1C3650u;
            goto label_1c3650;
        }
    }
    ctx->pc = 0x1C35D0u;
    // 0x1c35d0: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1c35d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1c35d4: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C35D4u;
    {
        const bool branch_taken_0x1c35d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C35D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35D4u;
        // 0x1c35d8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35d4) {
            ctx->pc = 0x1C3654u;
            goto label_1c3654;
        }
    }
    ctx->pc = 0x1C35DCu;
    // 0x1c35dc: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x1c35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1c35e0: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C35E0u;
    {
        const bool branch_taken_0x1c35e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C35E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35E0u;
        // 0x1c35e4: 0xdfb60060  ld          $s6, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35e0) {
            ctx->pc = 0x1C3658u;
            goto label_1c3658;
        }
    }
    ctx->pc = 0x1C35E8u;
    // 0x1c35e8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1c35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1c35ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1c35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1c35f0: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1c35f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1c35f4: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x1c35f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x1c35f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C35F8u;
    {
        const bool branch_taken_0x1c35f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C35F8u;
        // 0x1c35fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c35f8) {
            ctx->pc = 0x1C3610u;
            goto label_1c3610;
        }
    }
    ctx->pc = 0x1C3600u;
    // 0x1c3600: 0xc070f5a  jal         func_1C3D68
    ctx->pc = 0x1C3600u;
    SET_GPR_U32(ctx, 31, 0x1C3608u);
    ctx->pc = 0x1C3604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3600u;
    // 0x1c3604: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3D68u, 0x1C3600u, 0x1C3608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3608u;
label_1c3608:
    // 0x1c3608: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3608u;
    {
        const bool branch_taken_0x1c3608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3608u;
        // 0x1c360c: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3608) {
            ctx->pc = 0x1C361Cu;
            goto label_1c361c;
        }
    }
    ctx->pc = 0x1C3610u;
label_1c3610:
    // 0x1c3610: 0xc070bda  jal         func_1C2F68
    ctx->pc = 0x1C3610u;
    SET_GPR_U32(ctx, 31, 0x1C3618u);
    ctx->pc = 0x1C3614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3610u;
    // 0x1c3614: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F68u, 0x1C3610u, 0x1C3618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3618u;
label_1c3618:
    // 0x1c3618: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1c3618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_1c361c:
    // 0x1c361c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c361cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3620: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c3620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c3624: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1c3624u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1c3628: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1c3628u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c362c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1c362cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x1c3630: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1c3630u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3634: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c3634u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3638: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c3638u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c363c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c363cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3640: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c3640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3644: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3648: 0x8070c7e  j           func_1C31F8
    ctx->pc = 0x1C3648u;
    ctx->pc = 0x1C364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3648u;
    // 0x1c364c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C31F8u;
    _markOutput_0x1c31f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C3650u;
label_1c3650:
    // 0x1c3650: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1c3650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1c3654:
    // 0x1c3654: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1c3654u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c3658:
    // 0x1c3658: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1c3658u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c365c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c365cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3660: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1c3660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3664: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c3664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3668: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1c3668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c366c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c366cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3670: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3670u;
        // 0x1c3674: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3678u;
}
