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

// Function: WHitpolyBarrierHitBlockScan__FP9WcHitpolyP19_BarrierHitScanWork
// Address: 0x181540 - 0x181794
void WHitpolyBarrierHitBlockScan__FP9WcHitpolyP19_BarrierHitScanWork_0x181540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolyBarrierHitBlockScan__FP9WcHitpolyP19_BarrierHitScanWork_0x181540");
#endif

    switch (ctx->pc) {
        case 0x181644u: goto label_181644;
        case 0x181670u: goto label_181670;
        case 0x18169cu: goto label_18169c;
        case 0x1816c8u: goto label_1816c8;
        case 0x181730u: goto label_181730;
        case 0x181740u: goto label_181740;
        case 0x181764u: goto label_181764;
        case 0x181770u: goto label_181770;
        default: break;
    }

    ctx->pc = 0x181540u;

    // 0x181540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x181540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x181544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x181544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181548: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x181548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18154c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x18154cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x181550: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x181550u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x181554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x181558: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x181558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x18155c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x18155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x181560: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x181560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x181564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x181564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x181568: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x181568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x18156c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x18156cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x181570: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x181570u;
    {
        const bool branch_taken_0x181570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181570u;
        // 0x181574: 0x203180a  movz        $v1, $s0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181570) {
            ctx->pc = 0x1815B0u;
            goto label_1815b0;
        }
    }
    ctx->pc = 0x181578u;
    // 0x181578: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x181578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x18157c: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x18157cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x181580: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x181580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x181584: 0x8e120054  lw          $s2, 0x54($s0)
    ctx->pc = 0x181584u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x181588: 0x8e140058  lw          $s4, 0x58($s0)
    ctx->pc = 0x181588u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x18158c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x18158Cu;
    {
        const bool branch_taken_0x18158c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18158Cu;
        // 0x181590: 0x8e15005c  lw          $s5, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18158c) {
            ctx->pc = 0x181630u;
            goto label_181630;
        }
    }
    ctx->pc = 0x181594u;
    // 0x181594: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x181594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x181598: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x181598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x18159c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x18159cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1815a0: 0x8c637d90  lw          $v1, 0x7D90($v1)
    ctx->pc = 0x1815a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32144)));
    // 0x1815a4: 0x600008  jr          $v1
    ctx->pc = 0x1815A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181630u: goto label_181630;
            case 0x18165Cu: goto label_18165c;
            case 0x181688u: goto label_181688;
            case 0x1816B4u: goto label_1816b4;
            case 0x181744u: goto label_181744;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1815A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1815ACu;
    // 0x1815ac: 0x0  nop
    ctx->pc = 0x1815acu;
    // NOP
label_1815b0:
    // 0x1815b0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1815b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1815b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1815b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1815b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1815b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1815bc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1815bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1815c0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1815c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815c4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1815c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1815c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1815c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1815cc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1815ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1815d0: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x1815d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1815d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1815d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1815d8: 0x8e680030  lw          $t0, 0x30($s3)
    ctx->pc = 0x1815d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1815dc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1815dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1815e0: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1815e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1815e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1815e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1815e8: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x1815e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1815ec: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1815ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1815f0: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1815f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1815f4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1815f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1815f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1815f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1815fc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1815fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x181600: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x181600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x181604: 0x1063007  srav        $a2, $a2, $t0
    ctx->pc = 0x181604u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
    // 0x181608: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x181608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18160c: 0x1052807  srav        $a1, $a1, $t0
    ctx->pc = 0x18160cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
    // 0x181610: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x181610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x181614: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x181614u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x181618: 0x122a80a  movz        $s5, $t1, $v0
    ctx->pc = 0x181618u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 9));
    // 0x18161c: 0x123a00a  movz        $s4, $t1, $v1
    ctx->pc = 0x18161cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 9));
    // 0x181620: 0xae15005c  sw          $s5, 0x5C($s0)
    ctx->pc = 0x181620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 21));
    // 0x181624: 0xc79021  addu        $s2, $a2, $a3
    ctx->pc = 0x181624u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x181628: 0xae140058  sw          $s4, 0x58($s0)
    ctx->pc = 0x181628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 20));
    // 0x18162c: 0xa78821  addu        $s1, $a1, $a3
    ctx->pc = 0x18162cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_181630:
    // 0x181630: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181638: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18163c: 0xc0604f4  jal         func_1813D0
    ctx->pc = 0x18163Cu;
    SET_GPR_U32(ctx, 31, 0x181644u);
    ctx->pc = 0x181640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18163Cu;
    // 0x181640: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1813D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1813D0u, 0x18163Cu, 0x181644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181644u;
label_181644:
    // 0x181644: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x181644u;
    {
        const bool branch_taken_0x181644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181644u;
        // 0x181648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181644) {
            ctx->pc = 0x181770u;
            goto label_181770;
        }
    }
    ctx->pc = 0x18164Cu;
    // 0x18164c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x18164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x181650: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x181650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x181654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181658: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x181658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_18165c:
    // 0x18165c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181660: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181664: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181668: 0xc0604f4  jal         func_1813D0
    ctx->pc = 0x181668u;
    SET_GPR_U32(ctx, 31, 0x181670u);
    ctx->pc = 0x18166Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181668u;
    // 0x18166c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1813D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1813D0u, 0x181668u, 0x181670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181670u;
label_181670:
    // 0x181670: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x181670u;
    {
        const bool branch_taken_0x181670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181670u;
        // 0x181674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181670) {
            ctx->pc = 0x181770u;
            goto label_181770;
        }
    }
    ctx->pc = 0x181678u;
    // 0x181678: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x181678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x18167c: 0x2559021  addu        $s2, $s2, $s5
    ctx->pc = 0x18167cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x181680: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181684: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x181684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_181688:
    // 0x181688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18168c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18168cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181690: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181694: 0xc0604f4  jal         func_1813D0
    ctx->pc = 0x181694u;
    SET_GPR_U32(ctx, 31, 0x18169Cu);
    ctx->pc = 0x181698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181694u;
    // 0x181698: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1813D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1813D0u, 0x181694u, 0x18169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18169Cu;
label_18169c:
    // 0x18169c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x18169Cu;
    {
        const bool branch_taken_0x18169c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1816A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18169Cu;
        // 0x1816a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18169c) {
            ctx->pc = 0x181770u;
            goto label_181770;
        }
    }
    ctx->pc = 0x1816A4u;
    // 0x1816a4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1816a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1816a8: 0x2348823  subu        $s1, $s1, $s4
    ctx->pc = 0x1816a8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1816ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1816acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1816b0: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1816b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_1816b4:
    // 0x1816b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1816b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1816b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1816bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1816c0: 0xc0604f4  jal         func_1813D0
    ctx->pc = 0x1816C0u;
    SET_GPR_U32(ctx, 31, 0x1816C8u);
    ctx->pc = 0x1816C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1816C0u;
    // 0x1816c4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1813D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1813D0u, 0x1816C0u, 0x1816C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1816C8u;
label_1816c8:
    // 0x1816c8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1816C8u;
    {
        const bool branch_taken_0x1816c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1816CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816C8u;
        // 0x1816cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816c8) {
            ctx->pc = 0x181770u;
            goto label_181770;
        }
    }
    ctx->pc = 0x1816D0u;
    // 0x1816d0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1816d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1816d4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1816D4u;
    {
        const bool branch_taken_0x1816d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1816D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816D4u;
        // 0x1816d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816d4) {
            ctx->pc = 0x181770u;
            goto label_181770;
        }
    }
    ctx->pc = 0x1816DCu;
    // 0x1816dc: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1816dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1816e0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1816e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1816e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1816e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1816e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1816e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1816ec: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1816ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1816f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1816f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1816f4: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x1816f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1816f8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1816f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1816fc: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x1816fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x181700: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x181700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x181704: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x181704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x181708: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x181708u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18170c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18170cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x181710: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x181710u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x181714: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x181714u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x181718: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x181718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18171c: 0x10910004  beq         $a0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18171Cu;
    {
        const bool branch_taken_0x18171c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x181720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18171Cu;
        // 0x181720: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18171c) {
            ctx->pc = 0x181730u;
            goto label_181730;
        }
    }
    ctx->pc = 0x181724u;
    // 0x181724: 0x2341021  addu        $v0, $s1, $s4
    ctx->pc = 0x181724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x181728: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x181728u;
    {
        const bool branch_taken_0x181728 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x18172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181728u;
        // 0x18172c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181728) {
            ctx->pc = 0x181740u;
            goto label_181740;
        }
    }
    ctx->pc = 0x181730u;
label_181730:
    // 0x181730: 0x1072000e  beq         $v1, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x181730u;
    {
        const bool branch_taken_0x181730 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x181734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181730u;
        // 0x181734: 0x751021  addu        $v0, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181730) {
            ctx->pc = 0x18176Cu;
            goto label_18176c;
        }
    }
    ctx->pc = 0x181738u;
    // 0x181738: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x181738u;
    {
        const bool branch_taken_0x181738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x18173Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181738u;
        // 0x18173c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181738) {
            ctx->pc = 0x18176Cu;
            goto label_18176c;
        }
    }
    ctx->pc = 0x181740u;
label_181740:
    // 0x181740: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x181740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_181744:
    // 0x181744: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x181744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x181748: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x181748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18174c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18174cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181750: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x181750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181754: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x181758: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x181758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18175c: 0xc0604f4  jal         func_1813D0
    ctx->pc = 0x18175Cu;
    SET_GPR_U32(ctx, 31, 0x181764u);
    ctx->pc = 0x181760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18175Cu;
    // 0x181760: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1813D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1813D0u, 0x18175Cu, 0x181764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181764u;
label_181764:
    // 0x181764: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x181764u;
    {
        const bool branch_taken_0x181764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181764u;
        // 0x181768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181764) {
            ctx->pc = 0x181770u;
            goto label_181770;
        }
    }
    ctx->pc = 0x18176Cu;
label_18176c:
    // 0x18176c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18176cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181770:
    // 0x181770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x181774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181778: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x181778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18177c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18177cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x181780: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x181780u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181784: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x181784u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x181788: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x181788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18178c: 0x3e00008  jr          $ra
    ctx->pc = 0x18178Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18178Cu;
        // 0x181790: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18178Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181794u;
}
