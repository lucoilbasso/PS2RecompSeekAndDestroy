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

// Function: entry_001c3518
// Address: 0x1c3518 - 0x1c3610
void entry_001c3518_0x1c3518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3518_0x1c3518");
#endif

    switch (ctx->pc) {
        case 0x1c3538u: goto label_1c3538;
        case 0x1c3560u: goto label_1c3560;
        case 0x1c35c8u: goto label_1c35c8;
        case 0x1c3608u: goto label_1c3608;
        default: break;
    }

    ctx->pc = 0x1c3518u;

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
            return;
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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1C3610u;
}
