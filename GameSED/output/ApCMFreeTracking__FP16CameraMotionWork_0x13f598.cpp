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

// Function: ApCMFreeTracking__FP16CameraMotionWork
// Address: 0x13f598 - 0x13f84c
void ApCMFreeTracking__FP16CameraMotionWork_0x13f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCMFreeTracking__FP16CameraMotionWork_0x13f598");
#endif

    switch (ctx->pc) {
        case 0x13f5c8u: goto label_13f5c8;
        case 0x13f664u: goto label_13f664;
        case 0x13f67cu: goto label_13f67c;
        case 0x13f694u: goto label_13f694;
        case 0x13f6c4u: goto label_13f6c4;
        case 0x13f73cu: goto label_13f73c;
        case 0x13f774u: goto label_13f774;
        case 0x13f7dcu: goto label_13f7dc;
        case 0x13f800u: goto label_13f800;
        default: break;
    }

    ctx->pc = 0x13f598u;

    // 0x13f598: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13f598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13f59c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13f59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13f5a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f5a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5a4: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x13f5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x13f5a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13f5ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13f5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13f5b0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13f5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13f5b4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x13f5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x13f5b8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13f5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x13f5bc: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x13f5bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x13f5c0: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x13F5C0u;
    SET_GPR_U32(ctx, 31, 0x13F5C8u);
    ctx->pc = 0x13F5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F5C0u;
    // 0x13f5c4: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x13F5C0u, 0x13F5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F5C8u;
label_13f5c8:
    // 0x13f5c8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x13f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f5cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13f5ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f5d0: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x13f5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x13f5d4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13F5D4u;
    {
        const bool branch_taken_0x13f5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5D4u;
        // 0x13f5d8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5d4) {
            ctx->pc = 0x13F608u;
            goto label_13f608;
        }
    }
    ctx->pc = 0x13F5DCu;
    // 0x13f5dc: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x13f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13f5e0: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x13f5e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f5e4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13f5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13f5e8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x13f5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f5ec: 0x2402efff  addiu       $v0, $zero, -0x1001
    ctx->pc = 0x13f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x13f5f0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x13f5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x13f5f4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x13f5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13f5f8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x13f5f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f5fc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x13F5FCu;
    {
        const bool branch_taken_0x13f5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F5FCu;
        // 0x13f600: 0xae24001c  sw          $a0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f5fc) {
            ctx->pc = 0x13F6B8u;
            goto label_13f6b8;
        }
    }
    ctx->pc = 0x13F604u;
    // 0x13f604: 0x0  nop
    ctx->pc = 0x13f604u;
    // NOP
label_13f608:
    // 0x13f608: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x13f608u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f60c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13f60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13f610: 0xc6350144  lwc1        $f21, 0x144($s1)
    ctx->pc = 0x13f610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13f614: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x13f614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x13f618: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x13f618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13f61c: 0xc6340140  lwc1        $f20, 0x140($s1)
    ctx->pc = 0x13f61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13f620: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x13f620u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f624: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x13f624u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13f628: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x13f628u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13f62c: 0x4a0002ff  vnop
    ctx->pc = 0x13f62cu;
    // NOP operation, no action needed for VU0
    // 0x13f630: 0x4a0002ff  vnop
    ctx->pc = 0x13f630u;
    // NOP operation, no action needed for VU0
    // 0x13f634: 0x4a0002ff  vnop
    ctx->pc = 0x13f634u;
    // NOP operation, no action needed for VU0
    // 0x13f638: 0x4a0002ff  vnop
    ctx->pc = 0x13f638u;
    // NOP operation, no action needed for VU0
    // 0x13f63c: 0x4a0002ff  vnop
    ctx->pc = 0x13f63cu;
    // NOP operation, no action needed for VU0
    // 0x13f640: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x13f640u;
    SET_GPR_U32(ctx, 2, ctx->vu0_mac_flags);
    // 0x13f644: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x13f644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x13f648: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x13f648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x13f64c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x13F64Cu;
    {
        const bool branch_taken_0x13f64c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F64Cu;
        // 0x13f650: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f64c) {
            ctx->pc = 0x13F6BCu;
            goto label_13f6bc;
        }
    }
    ctx->pc = 0x13F654u;
    // 0x13f654: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x13f654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f658: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x13f658u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x13f65c: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x13F65Cu;
    SET_GPR_U32(ctx, 31, 0x13F664u);
    ctx->pc = 0x13F660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F65Cu;
    // 0x13f660: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x13F65Cu, 0x13F664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F664u;
label_13f664:
    // 0x13f664: 0x26240034  addiu       $a0, $s1, 0x34
    ctx->pc = 0x13f664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x13f668: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x13f668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f66c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x13f66cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x13f670: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x13f670u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x13f674: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x13F674u;
    SET_GPR_U32(ctx, 31, 0x13F67Cu);
    ctx->pc = 0x13F678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F674u;
    // 0x13f678: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x13F674u, 0x13F67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F67Cu;
label_13f67c:
    // 0x13f67c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x13f67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13f680: 0xc64c0008  lwc1        $f12, 0x8($s2)
    ctx->pc = 0x13f680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f684: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x13f684u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x13f688: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x13f688u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x13f68c: 0xc067c0a  jal         func_19F028
    ctx->pc = 0x13F68Cu;
    SET_GPR_U32(ctx, 31, 0x13F694u);
    ctx->pc = 0x13F690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F68Cu;
    // 0x13f690: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F028u, 0x13F68Cu, 0x13F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F694u;
label_13f694:
    // 0x13f694: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F694u;
    {
        const bool branch_taken_0x13f694 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f694) {
            ctx->pc = 0x13F698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F694u;
            // 0x13f698: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F6B0u;
            goto label_13f6b0;
        }
    }
    ctx->pc = 0x13F69Cu;
    // 0x13f69c: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F69Cu;
    {
        const bool branch_taken_0x13f69c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f69c) {
            ctx->pc = 0x13F6A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F69Cu;
            // 0x13f6a0: 0x8e82001c  lw          $v0, 0x1C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F6B0u;
            goto label_13f6b0;
        }
    }
    ctx->pc = 0x13F6A4u;
    // 0x13f6a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F6A4u;
    {
        const bool branch_taken_0x13f6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F6A4u;
        // 0x13f6a8: 0x262500c0  addiu       $a1, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f6a4) {
            ctx->pc = 0x13F6BCu;
            goto label_13f6bc;
        }
    }
    ctx->pc = 0x13F6ACu;
    // 0x13f6ac: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x13f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_13f6b0:
    // 0x13f6b0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x13f6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x13f6b4: 0xae82001c  sw          $v0, 0x1C($s4)
    ctx->pc = 0x13f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 28), GPR_U32(ctx, 2));
label_13f6b8:
    // 0x13f6b8: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x13f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_13f6bc:
    // 0x13f6bc: 0xc050494  jal         func_141250
    ctx->pc = 0x13F6BCu;
    SET_GPR_U32(ctx, 31, 0x13F6C4u);
    ctx->pc = 0x13F6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F6BCu;
    // 0x13f6c0: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141250u, 0x13F6BCu, 0x13F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F6C4u;
label_13f6c4:
    // 0x13f6c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13f6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f6c8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f6cc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x13f6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x13f6d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F6D0u;
    {
        const bool branch_taken_0x13f6d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f6d0) {
            ctx->pc = 0x13F6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F6D0u;
            // 0x13f6d4: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F6E4u;
            goto label_13f6e4;
        }
    }
    ctx->pc = 0x13F6D8u;
    // 0x13f6d8: 0x8e220134  lw          $v0, 0x134($s1)
    ctx->pc = 0x13f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x13f6dc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x13f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x13f6e0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_13f6e4:
    // 0x13f6e4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x13f6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x13f6e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13F6E8u;
    {
        const bool branch_taken_0x13f6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f6e8) {
            ctx->pc = 0x13F6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F6E8u;
            // 0x13f6ec: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F6FCu;
            goto label_13f6fc;
        }
    }
    ctx->pc = 0x13F6F0u;
    // 0x13f6f0: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x13f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x13f6f4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x13f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x13f6f8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_13f6fc:
    // 0x13f6fc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13f6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13f700: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x13F700u;
    {
        const bool branch_taken_0x13f700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f700) {
            ctx->pc = 0x13F704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F700u;
            // 0x13f704: 0x8e26014c  lw          $a2, 0x14C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F730u;
            goto label_13f730;
        }
    }
    ctx->pc = 0x13F708u;
    // 0x13f708: 0x26230040  addiu       $v1, $s1, 0x40
    ctx->pc = 0x13f708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x13f70c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x13f70cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13f710: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x13f710u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x13f714: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x13f714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f718: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x13f718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x13f71c: 0x2403dfff  addiu       $v1, $zero, -0x2001
    ctx->pc = 0x13f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x13f720: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x13f720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x13f724: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x13f724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f728: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13F728u;
    {
        const bool branch_taken_0x13f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F728u;
        // 0x13f72c: 0xae24001c  sw          $a0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f728) {
            ctx->pc = 0x13F73Cu;
            goto label_13f73c;
        }
    }
    ctx->pc = 0x13F730u;
label_13f730:
    // 0x13f730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13f730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f734: 0xc04fd0c  jal         func_13F430
    ctx->pc = 0x13F734u;
    SET_GPR_U32(ctx, 31, 0x13F73Cu);
    ctx->pc = 0x13F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F734u;
    // 0x13f738: 0xc62c0148  lwc1        $f12, 0x148($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F430u, 0x13F734u, 0x13F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F73Cu;
label_13f73c:
    // 0x13f73c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f740: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x13f740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x13f744: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x13F744u;
    {
        const bool branch_taken_0x13f744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f744) {
            ctx->pc = 0x13F748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F744u;
            // 0x13f748: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F808u;
            goto label_13f808;
        }
    }
    ctx->pc = 0x13F74Cu;
    // 0x13f74c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x13f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x13f750: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13f750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f754: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13f754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f758: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x13f758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x13f75c: 0x38420126  xori        $v0, $v0, 0x126
    ctx->pc = 0x13f75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)294);
    // 0x13f760: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x13f760u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x13f764: 0x52000028  beql        $s0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x13F764u;
    {
        const bool branch_taken_0x13f764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f764) {
            ctx->pc = 0x13F768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F764u;
            // 0x13f768: 0x8e230018  lw          $v1, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F808u;
            goto label_13f808;
        }
    }
    ctx->pc = 0x13F76Cu;
    // 0x13f76c: 0xc0503e6  jal         func_140F98
    ctx->pc = 0x13F76Cu;
    SET_GPR_U32(ctx, 31, 0x13F774u);
    ctx->pc = 0x13F770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F76Cu;
    // 0x13f770: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140F98u, 0x13F76Cu, 0x13F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F774u;
label_13f774:
    // 0x13f774: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x13f774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x13f778: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13f778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f77c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x13f77cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13f780: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x13f780u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13f784: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x13f784u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13f788: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x13f788u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13f78c: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x13f78cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13f790: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x13f790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13f794: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13f794u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x13f798: 0x4a0003bf  vwaitq
    ctx->pc = 0x13f798u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13f79c: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x13f79cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13f7a0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x13f7a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13f7a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13f7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13f7a8: 0xc6020154  lwc1        $f2, 0x154($s0)
    ctx->pc = 0x13f7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13f7ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13f7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13f7b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13f7b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f7b4: 0xc601020c  lwc1        $f1, 0x20C($s0)
    ctx->pc = 0x13f7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13f7b8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x13f7b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13f7bc: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x13f7bcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x13f7c0: 0xc6000210  lwc1        $f0, 0x210($s0)
    ctx->pc = 0x13f7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13f7c4: 0x46016328  max.s       $f12, $f12, $f1
    ctx->pc = 0x13f7c4u;
    ctx->f[12] = std::max(ctx->f[12], ctx->f[1]);
    // 0x13f7c8: 0x46006329  min.s       $f12, $f12, $f0
    ctx->pc = 0x13f7c8u;
    ctx->f[12] = std::min(ctx->f[12], ctx->f[0]);
    // 0x13f7cc: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x13f7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x13f7d0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x13f7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13f7d4: 0xc067ba2  jal         func_19EE88
    ctx->pc = 0x13F7D4u;
    SET_GPR_U32(ctx, 31, 0x13F7DCu);
    ctx->pc = 0x13F7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F7D4u;
    // 0x13f7d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE88u, 0x13F7D4u, 0x13F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F7DCu;
label_13f7dc:
    // 0x13f7dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13f7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13f7e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13f7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13f7e4: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x13f7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13f7e8: 0x0  nop
    ctx->pc = 0x13f7e8u;
    // NOP
    // 0x13f7ec: 0x0  nop
    ctx->pc = 0x13f7ecu;
    // NOP
    // 0x13f7f0: 0x460c0843  div.s       $f1, $f1, $f12
    ctx->pc = 0x13f7f0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x13f7f4: 0xe60c0154  swc1        $f12, 0x154($s0)
    ctx->pc = 0x13f7f4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x13f7f8: 0xc067a5e  jal         func_19E978
    ctx->pc = 0x13F7F8u;
    SET_GPR_U32(ctx, 31, 0x13F800u);
    ctx->pc = 0x13F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F7F8u;
    // 0x13f7fc: 0xe601015c  swc1        $f1, 0x15C($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E978u, 0x13F7F8u, 0x13F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F800u;
label_13f800:
    // 0x13f800: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x13f800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x13f804: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x13f804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_13f808:
    // 0x13f808: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f80c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F80Cu;
    {
        const bool branch_taken_0x13f80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F80Cu;
        // 0x13f810: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f80c) {
            ctx->pc = 0x13F828u;
            goto label_13f828;
        }
    }
    ctx->pc = 0x13F814u;
    // 0x13f814: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x13f814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13f818: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x13f818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x13f81c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F81Cu;
    {
        const bool branch_taken_0x13f81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f81c) {
            ctx->pc = 0x13F820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13F81Cu;
            // 0x13f820: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13F828u;
            goto label_13f828;
        }
    }
    ctx->pc = 0x13F824u;
    // 0x13f824: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13f824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13f828:
    // 0x13f828: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13f828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13f82c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13f82cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f830: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13f830u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13f834: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x13f834u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13f838: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x13f838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13f83c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x13f83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13f840: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x13f840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13f844: 0x3e00008  jr          $ra
    ctx->pc = 0x13F844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F844u;
        // 0x13f848: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F84Cu;
}
