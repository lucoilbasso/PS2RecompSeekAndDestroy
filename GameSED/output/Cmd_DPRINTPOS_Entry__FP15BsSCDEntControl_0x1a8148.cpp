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

// Function: Cmd_DPRINTPOS_Entry__FP15BsSCDEntControl
// Address: 0x1a8148 - 0x1a827c
void Cmd_DPRINTPOS_Entry__FP15BsSCDEntControl_0x1a8148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_DPRINTPOS_Entry__FP15BsSCDEntControl_0x1a8148");
#endif

    switch (ctx->pc) {
        case 0x1a81a8u: goto label_1a81a8;
        case 0x1a81c8u: goto label_1a81c8;
        case 0x1a8200u: goto label_1a8200;
        case 0x1a8218u: goto label_1a8218;
        case 0x1a8224u: goto label_1a8224;
        case 0x1a8240u: goto label_1a8240;
        default: break;
    }

    ctx->pc = 0x1a8148u;

    // 0x1a8148: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a814c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a814cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8150: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8154: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a8154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a8158: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a815c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a815cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a8160: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a8160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a8164: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a8164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a8168: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a8168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a816c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a816cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a8170: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1a8170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a8174: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a8174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a8178: 0x18400035  blez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1A8178u;
    {
        const bool branch_taken_0x1a8178 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1A817Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8178u;
        // 0x1a817c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8178) {
            ctx->pc = 0x1A8250u;
            goto label_1a8250;
        }
    }
    ctx->pc = 0x1A8180u;
    // 0x1a8180: 0x3c147ffe  lui         $s4, 0x7FFE
    ctx->pc = 0x1a8180u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32766 << 16));
    // 0x1a8184: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1a8184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1a8188: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a8188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a818c: 0x2611001c  addiu       $s1, $s0, 0x1C
    ctx->pc = 0x1a818cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a8190: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x1a8190u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x1a8194: 0x3c130026  lui         $s3, 0x26
    ctx->pc = 0x1a8194u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)38 << 16));
    // 0x1a8198: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1a8198u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a819c: 0x3c150026  lui         $s5, 0x26
    ctx->pc = 0x1a819cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)38 << 16));
    // 0x1a81a0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a81a4: 0x0  nop
    ctx->pc = 0x1a81a4u;
    // NOP
label_1a81a8:
    // 0x1a81a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a81a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a81ac: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a81acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a81b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a81b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1a81b4: 0x283102a  slt         $v0, $s4, $v1
    ctx->pc = 0x1a81b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a81b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A81B8u;
    {
        const bool branch_taken_0x1a81b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81B8u;
        // 0x1a81bc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81b8) {
            ctx->pc = 0x1A81CCu;
            goto label_1a81cc;
        }
    }
    ctx->pc = 0x1A81C0u;
    // 0x1a81c0: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A81C0u;
    SET_GPR_U32(ctx, 31, 0x1A81C8u);
    ctx->pc = 0x1A81C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A81C0u;
    // 0x1a81c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A81C0u, 0x1A81C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A81C8u;
label_1a81c8:
    // 0x1a81c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a81c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a81cc:
    // 0x1a81cc: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x1a81ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1a81d0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a81d0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a81d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a81d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a81d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a81d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a81dc: 0x8f829080  lw          $v0, -0x6F80($gp)
    ctx->pc = 0x1a81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938752)));
    // 0x1a81e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1a81e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a81e4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A81E4u;
    {
        const bool branch_taken_0x1a81e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A81E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A81E4u;
        // 0x1a81e8: 0x2664d910  addiu       $a0, $s3, -0x26F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a81e4) {
            ctx->pc = 0x1A8208u;
            goto label_1a8208;
        }
    }
    ctx->pc = 0x1A81ECu;
    // 0x1a81ec: 0x46146002  mul.s       $f0, $f12, $f20
    ctx->pc = 0x1a81ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1a81f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a81f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a81f4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1a81f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a81f8: 0xc05bca8  jal         func_16F2A0
    ctx->pc = 0x1A81F8u;
    SET_GPR_U32(ctx, 31, 0x1A8200u);
    ctx->pc = 0x16F2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2A0u, 0x1A81F8u, 0x1A8200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8200u;
label_1a8200:
    // 0x1a8200: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1A8200u;
    {
        const bool branch_taken_0x1a8200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8200u;
        // 0x1a8204: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8200) {
            ctx->pc = 0x1A8244u;
            goto label_1a8244;
        }
    }
    ctx->pc = 0x1A8208u;
label_1a8208:
    // 0x1a8208: 0x54560009  bnel        $v0, $s6, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8208u;
    {
        const bool branch_taken_0x1a8208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1a8208) {
            ctx->pc = 0x1A820Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8208u;
            // 0x1a820c: 0x46146002  mul.s       $f0, $f12, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8230u;
            goto label_1a8230;
        }
    }
    ctx->pc = 0x1A8210u;
    // 0x1a8210: 0xc072738  jal         func_1C9CE0
    ctx->pc = 0x1A8210u;
    SET_GPR_U32(ctx, 31, 0x1A8218u);
    ctx->pc = 0x1C9CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9CE0u, 0x1A8210u, 0x1A8218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8218u;
label_1a8218:
    // 0x1a8218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a8218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a821c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1A821Cu;
    SET_GPR_U32(ctx, 31, 0x1A8224u);
    ctx->pc = 0x1A8220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A821Cu;
    // 0x1a8220: 0x26a4d918  addiu       $a0, $s5, -0x26E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1A821Cu, 0x1A8224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8224u;
label_1a8224:
    // 0x1a8224: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A8224u;
    {
        const bool branch_taken_0x1a8224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8224u;
        // 0x1a8228: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8224) {
            ctx->pc = 0x1A8244u;
            goto label_1a8244;
        }
    }
    ctx->pc = 0x1A822Cu;
    // 0x1a822c: 0x0  nop
    ctx->pc = 0x1a822cu;
    // NOP
label_1a8230:
    // 0x1a8230: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1a8230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1a8234: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1a8234u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1a8238: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x1A8238u;
    SET_GPR_U32(ctx, 31, 0x1A8240u);
    ctx->pc = 0x1A823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8238u;
    // 0x1a823c: 0x2664d910  addiu       $a0, $s3, -0x26F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1A8238u, 0x1A8240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8240u;
label_1a8240:
    // 0x1a8240: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a8240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a8244:
    // 0x1a8244: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1a8244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a8248: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1A8248u;
    {
        const bool branch_taken_0x1a8248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8248) {
            ctx->pc = 0x1A824Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8248u;
            // 0x1a824c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A81A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a81a8;
        }
    }
    ctx->pc = 0x1A8250u;
label_1a8250:
    // 0x1a8250: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8250u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8254: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8254u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8258: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a8258u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a825c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a825cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a8260: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a8260u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8264: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a8264u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a8268: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a8268u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a826c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a826cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a8270: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1a8270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a8274: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8274u;
        // 0x1a8278: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A827Cu;
}
