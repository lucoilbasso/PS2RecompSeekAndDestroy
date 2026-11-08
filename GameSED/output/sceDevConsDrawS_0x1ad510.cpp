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

// Function: sceDevConsDrawS
// Address: 0x1ad510 - 0x1ad6bc
void sceDevConsDrawS_0x1ad510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevConsDrawS_0x1ad510");
#endif

    switch (ctx->pc) {
        case 0x1ad550u: goto label_1ad550;
        case 0x1ad574u: goto label_1ad574;
        case 0x1ad584u: goto label_1ad584;
        case 0x1ad5a0u: goto label_1ad5a0;
        case 0x1ad5c0u: goto label_1ad5c0;
        case 0x1ad5e4u: goto label_1ad5e4;
        case 0x1ad610u: goto label_1ad610;
        case 0x1ad624u: goto label_1ad624;
        case 0x1ad62cu: goto label_1ad62c;
        case 0x1ad638u: goto label_1ad638;
        case 0x1ad654u: goto label_1ad654;
        case 0x1ad68cu: goto label_1ad68c;
        default: break;
    }

    ctx->pc = 0x1ad510u;

    // 0x1ad510: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1ad510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1ad514: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ad514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ad518: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x1ad518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x1ad51c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ad51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad520: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x1ad520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x1ad524: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1ad524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1ad528: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1ad528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1ad52c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1ad52cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad530: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1ad530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x1ad534: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x1ad534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x1ad538: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x1ad538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x1ad53c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1ad53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1ad540: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x1ad540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x1ad544: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1ad544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1ad548: 0xc06b082  jal         func_1AC208
    ctx->pc = 0x1AD548u;
    SET_GPR_U32(ctx, 31, 0x1AD550u);
    ctx->pc = 0x1AD54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD548u;
    // 0x1ad54c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC208u, 0x1AD548u, 0x1AD550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD550u;
label_1ad550:
    // 0x1ad550: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1ad550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1ad554: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ad554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad558: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ad558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad55c: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1ad55cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1ad560: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ad560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ad564: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x1ad564u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ad568: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1ad568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1ad56c: 0xc06ba44  jal         func_1AE910
    ctx->pc = 0x1AD56Cu;
    SET_GPR_U32(ctx, 31, 0x1AD574u);
    ctx->pc = 0x1AD570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD56Cu;
    // 0x1ad570: 0x8c550008  lw          $s5, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE910u, 0x1AD56Cu, 0x1AD574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD574u;
label_1ad574:
    // 0x1ad574: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x1ad574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x1ad578: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ad578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ad57c: 0xc06ba44  jal         func_1AE910
    ctx->pc = 0x1AD57Cu;
    SET_GPR_U32(ctx, 31, 0x1AD584u);
    ctx->pc = 0x1AD580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD57Cu;
    // 0x1ad580: 0x34a52000  ori         $a1, $a1, 0x2000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE910u, 0x1AD57Cu, 0x1AD584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD584u;
label_1ad584:
    // 0x1ad584: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1ad584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ad588: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ad588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ad58c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1ad58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1ad590: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ad590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ad594: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ad594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ad598: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1AD598u;
    {
        const bool branch_taken_0x1ad598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD598u;
        // 0x1ad59c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad598) {
            ctx->pc = 0x1AD684u;
            goto label_1ad684;
        }
    }
    ctx->pc = 0x1AD5A0u;
label_1ad5a0:
    // 0x1ad5a0: 0x12c00032  beqz        $s6, . + 4 + (0x32 << 2)
    ctx->pc = 0x1AD5A0u;
    {
        const bool branch_taken_0x1ad5a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD5A0u;
        // 0x1ad5a4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad5a0) {
            ctx->pc = 0x1AD66Cu;
            goto label_1ad66c;
        }
    }
    ctx->pc = 0x1AD5A8u;
    // 0x1ad5a8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1ad5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad5ac: 0x27be0004  addiu       $fp, $sp, 0x4
    ctx->pc = 0x1ad5acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1ad5b0: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x1ad5b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ad5b4: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x1ad5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x1ad5b8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x1ad5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x1ad5bc: 0x0  nop
    ctx->pc = 0x1ad5bcu;
    // NOP
label_1ad5c0:
    // 0x1ad5c0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ad5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ad5c4: 0x2d38023  subu        $s0, $s6, $s3
    ctx->pc = 0x1ad5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x1ad5c8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ad5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ad5cc: 0x29100  sll         $s2, $v0, 4
    ctx->pc = 0x1ad5ccu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1ad5d0: 0x3b28821  addu        $s1, $sp, $s2
    ctx->pc = 0x1ad5d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x1ad5d4: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x1ad5d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ad5d8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1ad5d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1ad5dc: 0xc06ba48  jal         func_1AE920
    ctx->pc = 0x1AD5DCu;
    SET_GPR_U32(ctx, 31, 0x1AD5E4u);
    ctx->pc = 0x1AD5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD5DCu;
    // 0x1ad5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE920u, 0x1AD5DCu, 0x1AD5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD5E4u;
label_1ad5e4:
    // 0x1ad5e4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x1ad5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x1ad5e8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1ad5e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5ec: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1ad5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad5f0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1ad5f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1ad5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1ad5f8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ad5f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad5fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1ad5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1ad600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad604: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1ad604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad608: 0xc06b8a0  jal         func_1AE280
    ctx->pc = 0x1AD608u;
    SET_GPR_U32(ctx, 31, 0x1AD610u);
    ctx->pc = 0x1AD60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD608u;
    // 0x1ad60c: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE280u, 0x1AD608u, 0x1AD610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD610u;
label_1ad610:
    // 0x1ad610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ad610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad614: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ad614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ad618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad61c: 0xc06ba80  jal         func_1AEA00
    ctx->pc = 0x1AD61Cu;
    SET_GPR_U32(ctx, 31, 0x1AD624u);
    ctx->pc = 0x1AD620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD61Cu;
    // 0x1ad620: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEA00u, 0x1AD61Cu, 0x1AD624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD624u;
label_1ad624:
    // 0x1ad624: 0xc06ba4c  jal         func_1AE930
    ctx->pc = 0x1AD624u;
    SET_GPR_U32(ctx, 31, 0x1AD62Cu);
    ctx->pc = 0x1AD628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD624u;
    // 0x1ad628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE930u, 0x1AD624u, 0x1AD62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD62Cu;
label_1ad62c:
    // 0x1ad62c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ad62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad630: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1AD630u;
    SET_GPR_U32(ctx, 31, 0x1AD638u);
    ctx->pc = 0x1AD634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD630u;
    // 0x1ad634: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1AD630u, 0x1AD638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD638u;
label_1ad638:
    // 0x1ad638: 0x3d29021  addu        $s2, $fp, $s2
    ctx->pc = 0x1ad638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x1ad63c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ad63cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ad640: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1ad640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ad644: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1ad644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1ad648: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x1ad648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x1ad64c: 0xc06b14e  jal         func_1AC538
    ctx->pc = 0x1AD64Cu;
    SET_GPR_U32(ctx, 31, 0x1AD654u);
    ctx->pc = 0x1AD650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD64Cu;
    // 0x1ad650: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC538u, 0x1AD64Cu, 0x1AD654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD654u;
label_1ad654:
    // 0x1ad654: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1ad654u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1ad658: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x1ad658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x1ad65c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1AD65Cu;
    {
        const bool branch_taken_0x1ad65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD65Cu;
        // 0x1ad660: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad65c) {
            ctx->pc = 0x1AD5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad5c0;
        }
    }
    ctx->pc = 0x1AD664u;
    // 0x1ad664: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD664u;
    {
        const bool branch_taken_0x1ad664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD664u;
        // 0x1ad668: 0x8fa30028  lw          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad664) {
            ctx->pc = 0x1AD674u;
            goto label_1ad674;
        }
    }
    ctx->pc = 0x1AD66Cu;
label_1ad66c:
    // 0x1ad66c: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x1ad66cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1ad670: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ad670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1ad674:
    // 0x1ad674: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x1ad674u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad678: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x1ad678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ad67c: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1AD67Cu;
    {
        const bool branch_taken_0x1ad67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD67Cu;
        // 0x1ad680: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad67c) {
            ctx->pc = 0x1AD5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad5a0;
        }
    }
    ctx->pc = 0x1AD684u;
label_1ad684:
    // 0x1ad684: 0xc06ab98  jal         func_1AAE60
    ctx->pc = 0x1AD684u;
    SET_GPR_U32(ctx, 31, 0x1AD68Cu);
    ctx->pc = 0x1AD688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD684u;
    // 0x1ad688: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAE60u, 0x1AD684u, 0x1AD68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD68Cu;
label_1ad68c:
    // 0x1ad68c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1ad68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ad690: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1ad690u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ad694: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1ad694u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ad698: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1ad698u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ad69c: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1ad69cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ad6a0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1ad6a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ad6a4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1ad6a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ad6a8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1ad6a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ad6ac: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1ad6acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ad6b0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1ad6b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD6B4u;
        // 0x1ad6b8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD6BCu;
}
