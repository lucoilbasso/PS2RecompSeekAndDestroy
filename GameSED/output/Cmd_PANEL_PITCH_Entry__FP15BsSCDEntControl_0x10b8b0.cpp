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

// Function: Cmd_PANEL_PITCH_Entry__FP15BsSCDEntControl
// Address: 0x10b8b0 - 0x10ba3c
void Cmd_PANEL_PITCH_Entry__FP15BsSCDEntControl_0x10b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_PANEL_PITCH_Entry__FP15BsSCDEntControl_0x10b8b0");
#endif

    switch (ctx->pc) {
        case 0x10b8dcu: goto label_10b8dc;
        case 0x10b908u: goto label_10b908;
        case 0x10b914u: goto label_10b914;
        default: break;
    }

    ctx->pc = 0x10b8b0u;

    // 0x10b8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b8b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b8b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b8bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b8c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10b8cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x10b8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x10b8d0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x10b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x10b8d4: 0xc04110c  jal         func_104430
    ctx->pc = 0x10B8D4u;
    SET_GPR_U32(ctx, 31, 0x10B8DCu);
    ctx->pc = 0x10B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B8D4u;
    // 0x10b8d8: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10B8D4u, 0x10B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8DCu;
label_10b8dc:
    // 0x10b8dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b8e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10B8E4u;
    {
        const bool branch_taken_0x10b8e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8E4u;
        // 0x10b8e8: 0x24050166  addiu       $a1, $zero, 0x166 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8e4) {
            ctx->pc = 0x10B8FCu;
            goto label_10b8fc;
        }
    }
    ctx->pc = 0x10B8ECu;
    // 0x10b8ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10b8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10b8f0: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x10b8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10b8f4: 0x10450002  beq         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10B8F4u;
    {
        const bool branch_taken_0x10b8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x10B8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8F4u;
        // 0x10b8f8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8f4) {
            ctx->pc = 0x10B900u;
            goto label_10b900;
        }
    }
    ctx->pc = 0x10B8FCu;
label_10b8fc:
    // 0x10b8fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10b8fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b900:
    // 0x10b900: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B900u;
    SET_GPR_U32(ctx, 31, 0x10B908u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B900u, 0x10B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B908u;
label_10b908:
    // 0x10b908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b90c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10B90Cu;
    SET_GPR_U32(ctx, 31, 0x10B914u);
    ctx->pc = 0x10B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B90Cu;
    // 0x10b910: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10B90Cu, 0x10B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B914u;
label_10b914:
    // 0x10b914: 0x26470150  addiu       $a3, $s2, 0x150
    ctx->pc = 0x10b914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 336));
    // 0x10b918: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b918u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b91c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10b91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10b920: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x10b920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x10b924: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x10b924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x10b928: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B928u;
    {
        const bool branch_taken_0x10b928 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B928u;
        // 0x10b92c: 0x24e80030  addiu       $t0, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b928) {
            ctx->pc = 0x10B948u;
            goto label_10b948;
        }
    }
    ctx->pc = 0x10B930u;
    // 0x10b930: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x10b930u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x10b934: 0xc4e10068  lwc1        $f1, 0x68($a3)
    ctx->pc = 0x10b934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10b938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b93c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10b93cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10b940: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10B940u;
    {
        const bool branch_taken_0x10b940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B940u;
        // 0x10b944: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b940) {
            ctx->pc = 0x10B950u;
            goto label_10b950;
        }
    }
    ctx->pc = 0x10B948u;
label_10b948:
    // 0x10b948: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x10b948u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b94c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10b94cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_10b950:
    // 0x10b950: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x10B950u;
    {
        const bool branch_taken_0x10b950 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B950u;
        // 0x10b954: 0xe4e00060  swc1        $f0, 0x60($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b950) {
            ctx->pc = 0x10B970u;
            goto label_10b970;
        }
    }
    ctx->pc = 0x10B958u;
    // 0x10b958: 0x94e20052  lhu         $v0, 0x52($a3)
    ctx->pc = 0x10b958u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x10b95c: 0xc4e1006c  lwc1        $f1, 0x6C($a3)
    ctx->pc = 0x10b95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b960: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10b960u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b964: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10b964u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10b968: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10B968u;
    {
        const bool branch_taken_0x10b968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B968u;
        // 0x10b96c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b968) {
            ctx->pc = 0x10B978u;
            goto label_10b978;
        }
    }
    ctx->pc = 0x10B970u;
label_10b970:
    // 0x10b970: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10b970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b974: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10b974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_10b978:
    // 0x10b978: 0xe4e00064  swc1        $f0, 0x64($a3)
    ctx->pc = 0x10b978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 100), bits); }
    // 0x10b97c: 0x94e20054  lhu         $v0, 0x54($a3)
    ctx->pc = 0x10b97cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x10b980: 0x94e30056  lhu         $v1, 0x56($a3)
    ctx->pc = 0x10b980u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x10b984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x10b984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10b988: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10b988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x10b98c: 0xc4e40064  lwc1        $f4, 0x64($a3)
    ctx->pc = 0x10b98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x10b990: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x10b990u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10b994: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x10b994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x10b998: 0xc4e10060  lwc1        $f1, 0x60($a3)
    ctx->pc = 0x10b998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b99c: 0xa4e0000e  sh          $zero, 0xE($a3)
    ctx->pc = 0x10b99cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x10b9a0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10b9a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10b9a4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x10b9a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x10b9a8: 0x46060882  mul.s       $f2, $f1, $f6
    ctx->pc = 0x10b9a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x10b9ac: 0xe4e10028  swc1        $f1, 0x28($a3)
    ctx->pc = 0x10b9acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
    // 0x10b9b0: 0x46061802  mul.s       $f0, $f3, $f6
    ctx->pc = 0x10b9b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x10b9b4: 0xe4e3002c  swc1        $f3, 0x2C($a3)
    ctx->pc = 0x10b9b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x10b9b8: 0xe4e20020  swc1        $f2, 0x20($a3)
    ctx->pc = 0x10b9b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x10b9bc: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x10b9bcu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x10b9c0: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x10b9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x10b9c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x10b9c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x10b9c8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x10b9c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10b9cc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x10b9ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10b9d0: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x10b9d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10b9d4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10b9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10b9d8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10b9d8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10b9dc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10b9dcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10b9e0: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10b9e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10b9e4: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x10b9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
    // 0x10b9e8: 0xc4e1002c  lwc1        $f1, 0x2C($a3)
    ctx->pc = 0x10b9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10b9ec: 0x24e60040  addiu       $a2, $a3, 0x40
    ctx->pc = 0x10b9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x10b9f0: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x10b9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10b9f4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x10b9f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x10b9f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x10b9f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x10b9fc: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x10b9fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x10ba00: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x10ba00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x10ba04: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x10ba04u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x10ba08: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x10ba08u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x10ba0c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x10ba0cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x10ba10: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x10ba10u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x10ba14: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10ba14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x10ba18: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x10ba18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10ba1c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x10ba1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10ba20: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x10ba20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10ba24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ba24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ba28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10ba28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ba2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10ba2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ba30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x10ba30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10ba34: 0x3e00008  jr          $ra
    ctx->pc = 0x10BA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BA34u;
        // 0x10ba38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BA3Cu;
}
