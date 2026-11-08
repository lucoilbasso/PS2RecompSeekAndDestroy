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

// Function: ApCMFreeAngleMove__FP16CameraMotionWorkP9DVAngle32if
// Address: 0x13f430 - 0x13f594
void ApCMFreeAngleMove__FP16CameraMotionWorkP9DVAngle32if_0x13f430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMFreeAngleMove__FP16CameraMotionWorkP9DVAngle32if_0x13f430");
#endif

    switch (ctx->pc) {
        case 0x13f4ccu: goto label_13f4cc;
        case 0x13f4ecu: goto label_13f4ec;
        default: break;
    }

    ctx->pc = 0x13f430u;

    // 0x13f430: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13f430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13f434: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x13f434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x13f438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f43c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13f43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f440: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13f440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13f444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f448: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13f448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13f44c: 0x26320040  addiu       $s2, $s1, 0x40
    ctx->pc = 0x13f44cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x13f450: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x13f450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13f454: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x13f454u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f458: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x13f458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x13f45c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x13f45cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x13f460: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13f460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13f464: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x13f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x13f468: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x13f468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x13f46c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13f46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x13f470: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f474: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13f474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13f478: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x13f478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x13f47c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x13f47cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f480: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13f480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f484: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x13f484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x13f488: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x13f488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f48c: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x13f48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x13f490: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x13f490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x13f494: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x13f494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13f498: 0x872026  xor         $a0, $a0, $a3
    ctx->pc = 0x13f498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 7));
    // 0x13f49c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13f49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13f4a0: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x13f4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x13f4a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13f4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13f4a8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x13F4A8u;
    {
        const bool branch_taken_0x13f4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4A8u;
        // 0x13f4ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4a8) {
            ctx->pc = 0x13F564u;
            goto label_13f564;
        }
    }
    ctx->pc = 0x13F4B0u;
    // 0x13f4b0: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x13f4b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x13f4b4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x13f4b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4b8: 0x11130005  beq         $t0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F4B8u;
    {
        const bool branch_taken_0x13f4b8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x13F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4B8u;
        // 0x13f4bc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4b8) {
            ctx->pc = 0x13F4D0u;
            goto label_13f4d0;
        }
    }
    ctx->pc = 0x13F4C0u;
    // 0x13f4c0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x13f4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4c4: 0xc067c32  jal         func_19F0C8
    ctx->pc = 0x13F4C4u;
    SET_GPR_U32(ctx, 31, 0x13F4CCu);
    ctx->pc = 0x13F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4C4u;
    // 0x13f4c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F0C8u, 0x13F4C4u, 0x13F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4CCu;
label_13f4cc:
    // 0x13f4cc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13f4ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f4d0:
    // 0x13f4d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f4d4: 0x10530006  beq         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F4D4u;
    {
        const bool branch_taken_0x13f4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x13F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F4D4u;
        // 0x13f4d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4d4) {
            ctx->pc = 0x13F4F0u;
            goto label_13f4f0;
        }
    }
    ctx->pc = 0x13F4DCu;
    // 0x13f4dc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x13f4dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x13f4e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13f4e4: 0xc067c32  jal         func_19F0C8
    ctx->pc = 0x13F4E4u;
    SET_GPR_U32(ctx, 31, 0x13F4ECu);
    ctx->pc = 0x13F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F4E4u;
    // 0x13f4e8: 0x26240044  addiu       $a0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F0C8u, 0x13F4E4u, 0x13F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F4ECu;
label_13f4ec:
    // 0x13f4ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13f4ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13f4f0:
    // 0x13f4f0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13f4f4: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x13f4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x13f4f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x13f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13f4fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f500: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13f500u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f504: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x13f504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x13f508: 0x28644000  slti        $a0, $v1, 0x4000
    ctx->pc = 0x13f508u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x13f50c: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x13f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x13f510: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x13f510u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x13f514: 0x70031868  pabsw       $v1, $v1
    ctx->pc = 0x13f514u;
    SET_GPR_VEC(ctx, 3, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x13f518: 0x31800  sll         $v1, $v1, 0
    ctx->pc = 0x13f518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x13f51c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x13f51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13f520: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x13f520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x13f524: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x13f524u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13f528: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x13f528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x13f52c: 0x28454000  slti        $a1, $v0, 0x4000
    ctx->pc = 0x13f52cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x13f530: 0x24448000  addiu       $a0, $v0, -0x8000
    ctx->pc = 0x13f530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x13f534: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x13f534u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x13f538: 0x70021068  pabsw       $v0, $v0
    ctx->pc = 0x13f538u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
    // 0x13f53c: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x13f53cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x13f540: 0x706218c8  pmaxw       $v1, $v1, $v0
    ctx->pc = 0x13f540u;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x13f544: 0x34800  sll         $t1, $v1, 0
    ctx->pc = 0x13f544u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x13f548: 0x56c00004  bnel        $s6, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F548u;
    {
        const bool branch_taken_0x13f548 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f548) {
            ctx->pc = 0x13F54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F548u;
            // 0x13f54c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F55Cu;
            goto label_13f55c;
        }
    }
    ctx->pc = 0x13F550u;
    // 0x13f550: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F550u;
    {
        const bool branch_taken_0x13f550 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F550u;
        // 0x13f554: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f550) {
            ctx->pc = 0x13F568u;
            goto label_13f568;
        }
    }
    ctx->pc = 0x13F558u;
    // 0x13f558: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_13f55c:
    // 0x13f55c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x13f55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x13f560: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x13f560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_13f564:
    // 0x13f564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13f568:
    // 0x13f568: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x13f568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f56c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13f56cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f570: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13f570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f574: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13f574u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13f578: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x13f578u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f57c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13f57cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13f580: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x13f580u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f584: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13f584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13f588: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x13f588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13f58c: 0x3e00008  jr          $ra
    ctx->pc = 0x13F58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F58Cu;
        // 0x13f590: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F594u;
}
