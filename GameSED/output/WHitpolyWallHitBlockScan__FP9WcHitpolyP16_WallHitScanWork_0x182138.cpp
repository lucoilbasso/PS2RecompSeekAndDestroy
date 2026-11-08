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

// Function: WHitpolyWallHitBlockScan__FP9WcHitpolyP16_WallHitScanWork
// Address: 0x182138 - 0x182650
void WHitpolyWallHitBlockScan__FP9WcHitpolyP16_WallHitScanWork_0x182138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WHitpolyWallHitBlockScan__FP9WcHitpolyP16_WallHitScanWork_0x182138");
#endif

    switch (ctx->pc) {
        case 0x182290u: goto label_182290;
        case 0x182298u: goto label_182298;
        case 0x1822a4u: goto label_1822a4;
        case 0x1822c8u: goto label_1822c8;
        case 0x1822ccu: goto label_1822cc;
        case 0x182344u: goto label_182344;
        case 0x182350u: goto label_182350;
        case 0x18235cu: goto label_18235c;
        case 0x182380u: goto label_182380;
        case 0x182384u: goto label_182384;
        case 0x1823fcu: goto label_1823fc;
        case 0x182408u: goto label_182408;
        case 0x182414u: goto label_182414;
        case 0x182438u: goto label_182438;
        case 0x18243cu: goto label_18243c;
        case 0x1824b4u: goto label_1824b4;
        case 0x1824c0u: goto label_1824c0;
        case 0x1824ccu: goto label_1824cc;
        case 0x1824f0u: goto label_1824f0;
        case 0x1824f4u: goto label_1824f4;
        case 0x1825d8u: goto label_1825d8;
        case 0x1825e0u: goto label_1825e0;
        case 0x1825ecu: goto label_1825ec;
        case 0x182610u: goto label_182610;
        case 0x182614u: goto label_182614;
        default: break;
    }

    ctx->pc = 0x182138u;

    // 0x182138: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x182138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18213c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18213cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182140: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x182140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182144: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x182144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x182148: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x182148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18214c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18214cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x182150: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x182150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x182154: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x182154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x182158: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x182158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x18215c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x18215cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x182160: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x182160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x182164: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x182164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x182168: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x182168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x18216c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x18216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x182170: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x182170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x182174: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x182174u;
    {
        const bool branch_taken_0x182174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182174u;
        // 0x182178: 0x203180a  movz        $v1, $s0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182174) {
            ctx->pc = 0x1821B0u;
            goto label_1821b0;
        }
    }
    ctx->pc = 0x18217Cu;
    // 0x18217c: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x18217cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x182180: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x182180u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x182184: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x182184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x182188: 0x8e120054  lw          $s2, 0x54($s0)
    ctx->pc = 0x182188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x18218c: 0x8e150058  lw          $s5, 0x58($s0)
    ctx->pc = 0x18218cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x182190: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x182190u;
    {
        const bool branch_taken_0x182190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182190u;
        // 0x182194: 0x8e1e005c  lw          $fp, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182190) {
            ctx->pc = 0x182230u;
            goto label_182230;
        }
    }
    ctx->pc = 0x182198u;
    // 0x182198: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x182198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18219c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x18219cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1821a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1821a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1821a4: 0x8c637db0  lw          $v1, 0x7DB0($v1)
    ctx->pc = 0x1821a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32176)));
    // 0x1821a8: 0x600008  jr          $v1
    ctx->pc = 0x1821A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182230u: goto label_182230;
            case 0x1822E4u: goto label_1822e4;
            case 0x18239Cu: goto label_18239c;
            case 0x182454u: goto label_182454;
            case 0x182570u: goto label_182570;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1821A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1821B0u;
label_1821b0:
    // 0x1821b0: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x1821b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x1821b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1821b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1821b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1821b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1821bc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1821bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1821c0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1821c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821c4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1821c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1821c8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1821c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821cc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1821ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1821d0: 0x8e640034  lw          $a0, 0x34($s3)
    ctx->pc = 0x1821d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1821d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1821d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1821d8: 0x8e680030  lw          $t0, 0x30($s3)
    ctx->pc = 0x1821d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1821dc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1821dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1821e0: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1821e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1821e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1821e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1821e8: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x1821e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1821ec: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1821ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1821f0: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1821f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1821f4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1821f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1821f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1821f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1821fc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x1821fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x182200: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x182200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x182204: 0x1063007  srav        $a2, $a2, $t0
    ctx->pc = 0x182204u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
    // 0x182208: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x182208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x18220c: 0x1052807  srav        $a1, $a1, $t0
    ctx->pc = 0x18220cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
    // 0x182210: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x182210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x182214: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x182214u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x182218: 0x122f00a  movz        $fp, $t1, $v0
    ctx->pc = 0x182218u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 9));
    // 0x18221c: 0x123a80a  movz        $s5, $t1, $v1
    ctx->pc = 0x18221cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 9));
    // 0x182220: 0xae1e005c  sw          $fp, 0x5C($s0)
    ctx->pc = 0x182220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 30));
    // 0x182224: 0xc79021  addu        $s2, $a2, $a3
    ctx->pc = 0x182224u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x182228: 0xae150058  sw          $s5, 0x58($s0)
    ctx->pc = 0x182228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 21));
    // 0x18222c: 0xa78821  addu        $s1, $a1, $a3
    ctx->pc = 0x18222cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_182230:
    // 0x182230: 0x2e420080  sltiu       $v0, $s2, 0x80
    ctx->pc = 0x182230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x182234: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x182234u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182238: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x182238u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18223c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x18223Cu;
    {
        const bool branch_taken_0x18223c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18223Cu;
        // 0x182240: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18223c) {
            ctx->pc = 0x1822C8u;
            goto label_1822c8;
        }
    }
    ctx->pc = 0x182244u;
    // 0x182244: 0x6200020  bltz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x182244u;
    {
        const bool branch_taken_0x182244 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x182248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182244u;
        // 0x182248: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182244) {
            ctx->pc = 0x1822C8u;
            goto label_1822c8;
        }
    }
    ctx->pc = 0x18224Cu;
    // 0x18224c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x18224Cu;
    {
        const bool branch_taken_0x18224c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18224Cu;
        // 0x182250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18224c) {
            ctx->pc = 0x1822CCu;
            goto label_1822cc;
        }
    }
    ctx->pc = 0x182254u;
    // 0x182254: 0x1211c0  sll         $v0, $s2, 7
    ctx->pc = 0x182254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x182258: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x182258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18225c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x18225cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x182260: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x182260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x182264: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x182264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x182268: 0x94440038  lhu         $a0, 0x38($v0)
    ctx->pc = 0x182268u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x18226c: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x18226Cu;
    {
        const bool branch_taken_0x18226c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x182270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18226Cu;
        // 0x182270: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18226c) {
            ctx->pc = 0x1822CCu;
            goto label_1822cc;
        }
    }
    ctx->pc = 0x182274u;
    // 0x182274: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x182274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x182278: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x182278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x18227c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18227Cu;
    {
        const bool branch_taken_0x18227c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x182280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18227Cu;
        // 0x182280: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18227c) {
            ctx->pc = 0x182298u;
            goto label_182298;
        }
    }
    ctx->pc = 0x182284u;
    // 0x182284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x182284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182288: 0xc0606e8  jal         func_181BA0
    ctx->pc = 0x182288u;
    SET_GPR_U32(ctx, 31, 0x182290u);
    ctx->pc = 0x18228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182288u;
    // 0x18228c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181BA0u, 0x182288u, 0x182290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182290u;
label_182290:
    // 0x182290: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x182290u;
    {
        const bool branch_taken_0x182290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182290) {
            ctx->pc = 0x1822A4u;
            goto label_1822a4;
        }
    }
    ctx->pc = 0x182298u;
label_182298:
    // 0x182298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x182298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18229c: 0xc060650  jal         func_181940
    ctx->pc = 0x18229Cu;
    SET_GPR_U32(ctx, 31, 0x1822A4u);
    ctx->pc = 0x1822A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18229Cu;
    // 0x1822a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181940u, 0x18229Cu, 0x1822A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1822A4u;
label_1822a4:
    // 0x1822a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1822A4u;
    {
        const bool branch_taken_0x1822a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1822A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822A4u;
        // 0x1822a8: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822a4) {
            ctx->pc = 0x1822C8u;
            goto label_1822c8;
        }
    }
    ctx->pc = 0x1822ACu;
    // 0x1822ac: 0xae960054  sw          $s6, 0x54($s4)
    ctx->pc = 0x1822acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 22));
    // 0x1822b0: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x1822b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1822b4: 0xae970050  sw          $s7, 0x50($s4)
    ctx->pc = 0x1822b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 23));
    // 0x1822b8: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x1822b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x1822bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1822BCu;
    {
        const bool branch_taken_0x1822bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1822C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822BCu;
        // 0x1822c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822bc) {
            ctx->pc = 0x1822CCu;
            goto label_1822cc;
        }
    }
    ctx->pc = 0x1822C4u;
    // 0x1822c4: 0x0  nop
    ctx->pc = 0x1822c4u;
    // NOP
label_1822c8:
    // 0x1822c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1822c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1822cc:
    // 0x1822cc: 0x14a000d4  bnez        $a1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x1822CCu;
    {
        const bool branch_taken_0x1822cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1822D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822CCu;
        // 0x1822d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822cc) {
            ctx->pc = 0x182620u;
            goto label_182620;
        }
    }
    ctx->pc = 0x1822D4u;
    // 0x1822d4: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1822d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1822d8: 0x2358821  addu        $s1, $s1, $s5
    ctx->pc = 0x1822d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1822dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1822dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1822e0: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1822e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_1822e4:
    // 0x1822e4: 0x2e420080  sltiu       $v0, $s2, 0x80
    ctx->pc = 0x1822e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1822e8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1822e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822ec: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x1822ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822f0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1822F0u;
    {
        const bool branch_taken_0x1822f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1822F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822F0u;
        // 0x1822f4: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822f0) {
            ctx->pc = 0x182380u;
            goto label_182380;
        }
    }
    ctx->pc = 0x1822F8u;
    // 0x1822f8: 0x6200021  bltz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1822F8u;
    {
        const bool branch_taken_0x1822f8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1822FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1822F8u;
        // 0x1822fc: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822f8) {
            ctx->pc = 0x182380u;
            goto label_182380;
        }
    }
    ctx->pc = 0x182300u;
    // 0x182300: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x182300u;
    {
        const bool branch_taken_0x182300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182300u;
        // 0x182304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182300) {
            ctx->pc = 0x182384u;
            goto label_182384;
        }
    }
    ctx->pc = 0x182308u;
    // 0x182308: 0x1211c0  sll         $v0, $s2, 7
    ctx->pc = 0x182308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x18230c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18230cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x182310: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x182310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x182314: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x182314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x182318: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x182318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18231c: 0x94440038  lhu         $a0, 0x38($v0)
    ctx->pc = 0x18231cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x182320: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x182320u;
    {
        const bool branch_taken_0x182320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x182324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182320u;
        // 0x182324: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182320) {
            ctx->pc = 0x182384u;
            goto label_182384;
        }
    }
    ctx->pc = 0x182328u;
    // 0x182328: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x182328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x18232c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x18232cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x182330: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x182330u;
    {
        const bool branch_taken_0x182330 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x182334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182330u;
        // 0x182334: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182330) {
            ctx->pc = 0x182350u;
            goto label_182350;
        }
    }
    ctx->pc = 0x182338u;
    // 0x182338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x182338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18233c: 0xc0606e8  jal         func_181BA0
    ctx->pc = 0x18233Cu;
    SET_GPR_U32(ctx, 31, 0x182344u);
    ctx->pc = 0x182340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18233Cu;
    // 0x182340: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181BA0u, 0x18233Cu, 0x182344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182344u;
label_182344:
    // 0x182344: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x182344u;
    {
        const bool branch_taken_0x182344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182344) {
            ctx->pc = 0x18235Cu;
            goto label_18235c;
        }
    }
    ctx->pc = 0x18234Cu;
    // 0x18234c: 0x0  nop
    ctx->pc = 0x18234cu;
    // NOP
label_182350:
    // 0x182350: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x182350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182354: 0xc060650  jal         func_181940
    ctx->pc = 0x182354u;
    SET_GPR_U32(ctx, 31, 0x18235Cu);
    ctx->pc = 0x182358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182354u;
    // 0x182358: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181940u, 0x182354u, 0x18235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18235Cu;
label_18235c:
    // 0x18235c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18235Cu;
    {
        const bool branch_taken_0x18235c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18235Cu;
        // 0x182360: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18235c) {
            ctx->pc = 0x182380u;
            goto label_182380;
        }
    }
    ctx->pc = 0x182364u;
    // 0x182364: 0xae960054  sw          $s6, 0x54($s4)
    ctx->pc = 0x182364u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 22));
    // 0x182368: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x182368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x18236c: 0xae970050  sw          $s7, 0x50($s4)
    ctx->pc = 0x18236cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 23));
    // 0x182370: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x182370u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x182374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x182374u;
    {
        const bool branch_taken_0x182374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182374u;
        // 0x182378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182374) {
            ctx->pc = 0x182384u;
            goto label_182384;
        }
    }
    ctx->pc = 0x18237Cu;
    // 0x18237c: 0x0  nop
    ctx->pc = 0x18237cu;
    // NOP
label_182380:
    // 0x182380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182384:
    // 0x182384: 0x14a000a6  bnez        $a1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x182384u;
    {
        const bool branch_taken_0x182384 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x182388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182384u;
        // 0x182388: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182384) {
            ctx->pc = 0x182620u;
            goto label_182620;
        }
    }
    ctx->pc = 0x18238Cu;
    // 0x18238c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x18238cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x182390: 0x25e9021  addu        $s2, $s2, $fp
    ctx->pc = 0x182390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x182394: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x182394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x182398: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x182398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_18239c:
    // 0x18239c: 0x2e420080  sltiu       $v0, $s2, 0x80
    ctx->pc = 0x18239cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1823a0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1823a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823a4: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x1823a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823a8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1823A8u;
    {
        const bool branch_taken_0x1823a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823A8u;
        // 0x1823ac: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823a8) {
            ctx->pc = 0x182438u;
            goto label_182438;
        }
    }
    ctx->pc = 0x1823B0u;
    // 0x1823b0: 0x6200021  bltz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1823B0u;
    {
        const bool branch_taken_0x1823b0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1823B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823B0u;
        // 0x1823b4: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823b0) {
            ctx->pc = 0x182438u;
            goto label_182438;
        }
    }
    ctx->pc = 0x1823B8u;
    // 0x1823b8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1823B8u;
    {
        const bool branch_taken_0x1823b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823B8u;
        // 0x1823bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823b8) {
            ctx->pc = 0x18243Cu;
            goto label_18243c;
        }
    }
    ctx->pc = 0x1823C0u;
    // 0x1823c0: 0x1211c0  sll         $v0, $s2, 7
    ctx->pc = 0x1823c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x1823c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1823c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1823c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1823c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1823cc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1823ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1823d0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1823d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1823d4: 0x94440038  lhu         $a0, 0x38($v0)
    ctx->pc = 0x1823d4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1823d8: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1823D8u;
    {
        const bool branch_taken_0x1823d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1823DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823D8u;
        // 0x1823dc: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823d8) {
            ctx->pc = 0x18243Cu;
            goto label_18243c;
        }
    }
    ctx->pc = 0x1823E0u;
    // 0x1823e0: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1823e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1823e4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1823e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1823e8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1823E8u;
    {
        const bool branch_taken_0x1823e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1823ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1823E8u;
        // 0x1823ec: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823e8) {
            ctx->pc = 0x182408u;
            goto label_182408;
        }
    }
    ctx->pc = 0x1823F0u;
    // 0x1823f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1823f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1823f4: 0xc0606e8  jal         func_181BA0
    ctx->pc = 0x1823F4u;
    SET_GPR_U32(ctx, 31, 0x1823FCu);
    ctx->pc = 0x1823F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1823F4u;
    // 0x1823f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181BA0u, 0x1823F4u, 0x1823FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1823FCu;
label_1823fc:
    // 0x1823fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1823FCu;
    {
        const bool branch_taken_0x1823fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1823fc) {
            ctx->pc = 0x182414u;
            goto label_182414;
        }
    }
    ctx->pc = 0x182404u;
    // 0x182404: 0x0  nop
    ctx->pc = 0x182404u;
    // NOP
label_182408:
    // 0x182408: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x182408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18240c: 0xc060650  jal         func_181940
    ctx->pc = 0x18240Cu;
    SET_GPR_U32(ctx, 31, 0x182414u);
    ctx->pc = 0x182410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18240Cu;
    // 0x182410: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181940u, 0x18240Cu, 0x182414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182414u;
label_182414:
    // 0x182414: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x182414u;
    {
        const bool branch_taken_0x182414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182414u;
        // 0x182418: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182414) {
            ctx->pc = 0x182438u;
            goto label_182438;
        }
    }
    ctx->pc = 0x18241Cu;
    // 0x18241c: 0xae960054  sw          $s6, 0x54($s4)
    ctx->pc = 0x18241cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 22));
    // 0x182420: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x182420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x182424: 0xae970050  sw          $s7, 0x50($s4)
    ctx->pc = 0x182424u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 23));
    // 0x182428: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x182428u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x18242c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18242Cu;
    {
        const bool branch_taken_0x18242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18242Cu;
        // 0x182430: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18242c) {
            ctx->pc = 0x18243Cu;
            goto label_18243c;
        }
    }
    ctx->pc = 0x182434u;
    // 0x182434: 0x0  nop
    ctx->pc = 0x182434u;
    // NOP
label_182438:
    // 0x182438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18243c:
    // 0x18243c: 0x14a00078  bnez        $a1, . + 4 + (0x78 << 2)
    ctx->pc = 0x18243Cu;
    {
        const bool branch_taken_0x18243c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x182440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18243Cu;
        // 0x182440: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18243c) {
            ctx->pc = 0x182620u;
            goto label_182620;
        }
    }
    ctx->pc = 0x182444u;
    // 0x182444: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x182444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x182448: 0x2358823  subu        $s1, $s1, $s5
    ctx->pc = 0x182448u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x18244c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18244cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x182450: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x182450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_182454:
    // 0x182454: 0x2e420080  sltiu       $v0, $s2, 0x80
    ctx->pc = 0x182454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x182458: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x182458u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18245c: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x18245cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182460: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x182460u;
    {
        const bool branch_taken_0x182460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182460u;
        // 0x182464: 0x240b02d  daddu       $s6, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182460) {
            ctx->pc = 0x1824F0u;
            goto label_1824f0;
        }
    }
    ctx->pc = 0x182468u;
    // 0x182468: 0x6200021  bltz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x182468u;
    {
        const bool branch_taken_0x182468 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x18246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182468u;
        // 0x18246c: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x182468) {
            ctx->pc = 0x1824F0u;
            goto label_1824f0;
        }
    }
    ctx->pc = 0x182470u;
    // 0x182470: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x182470u;
    {
        const bool branch_taken_0x182470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182470u;
        // 0x182474: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182470) {
            ctx->pc = 0x1824F4u;
            goto label_1824f4;
        }
    }
    ctx->pc = 0x182478u;
    // 0x182478: 0x1211c0  sll         $v0, $s2, 7
    ctx->pc = 0x182478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x18247c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x18247cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x182480: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x182480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x182484: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x182484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x182488: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x182488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18248c: 0x94440038  lhu         $a0, 0x38($v0)
    ctx->pc = 0x18248cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x182490: 0x10830018  beq         $a0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x182490u;
    {
        const bool branch_taken_0x182490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x182494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182490u;
        // 0x182494: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182490) {
            ctx->pc = 0x1824F4u;
            goto label_1824f4;
        }
    }
    ctx->pc = 0x182498u;
    // 0x182498: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x182498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x18249c: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x18249cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1824a0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1824A0u;
    {
        const bool branch_taken_0x1824a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1824A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824A0u;
        // 0x1824a4: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824a0) {
            ctx->pc = 0x1824C0u;
            goto label_1824c0;
        }
    }
    ctx->pc = 0x1824A8u;
    // 0x1824a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1824a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824ac: 0xc0606e8  jal         func_181BA0
    ctx->pc = 0x1824ACu;
    SET_GPR_U32(ctx, 31, 0x1824B4u);
    ctx->pc = 0x1824B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824ACu;
    // 0x1824b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181BA0u, 0x1824ACu, 0x1824B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1824B4u;
label_1824b4:
    // 0x1824b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1824B4u;
    {
        const bool branch_taken_0x1824b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1824b4) {
            ctx->pc = 0x1824CCu;
            goto label_1824cc;
        }
    }
    ctx->pc = 0x1824BCu;
    // 0x1824bc: 0x0  nop
    ctx->pc = 0x1824bcu;
    // NOP
label_1824c0:
    // 0x1824c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1824c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824c4: 0xc060650  jal         func_181940
    ctx->pc = 0x1824C4u;
    SET_GPR_U32(ctx, 31, 0x1824CCu);
    ctx->pc = 0x1824C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1824C4u;
    // 0x1824c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181940u, 0x1824C4u, 0x1824CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1824CCu;
label_1824cc:
    // 0x1824cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1824CCu;
    {
        const bool branch_taken_0x1824cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1824D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824CCu;
        // 0x1824d0: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824cc) {
            ctx->pc = 0x1824F0u;
            goto label_1824f0;
        }
    }
    ctx->pc = 0x1824D4u;
    // 0x1824d4: 0xae960054  sw          $s6, 0x54($s4)
    ctx->pc = 0x1824d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 22));
    // 0x1824d8: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x1824d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1824dc: 0xae970050  sw          $s7, 0x50($s4)
    ctx->pc = 0x1824dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 23));
    // 0x1824e0: 0xae820044  sw          $v0, 0x44($s4)
    ctx->pc = 0x1824e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 2));
    // 0x1824e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1824E4u;
    {
        const bool branch_taken_0x1824e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1824E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824E4u;
        // 0x1824e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824e4) {
            ctx->pc = 0x1824F4u;
            goto label_1824f4;
        }
    }
    ctx->pc = 0x1824ECu;
    // 0x1824ec: 0x0  nop
    ctx->pc = 0x1824ecu;
    // NOP
label_1824f0:
    // 0x1824f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1824f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1824f4:
    // 0x1824f4: 0x14a0004a  bnez        $a1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1824F4u;
    {
        const bool branch_taken_0x1824f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1824F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1824F4u;
        // 0x1824f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824f4) {
            ctx->pc = 0x182620u;
            goto label_182620;
        }
    }
    ctx->pc = 0x1824FCu;
    // 0x1824fc: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1824fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x182500: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x182500u;
    {
        const bool branch_taken_0x182500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182500u;
        // 0x182504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182500) {
            ctx->pc = 0x182620u;
            goto label_182620;
        }
    }
    ctx->pc = 0x182508u;
    // 0x182508: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x182508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x18250c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x18250cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x182510: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x182510u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x182514: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x182514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182518: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x182518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18251c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x18251cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x182520: 0x8e640030  lw          $a0, 0x30($s3)
    ctx->pc = 0x182520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x182524: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x182524u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x182528: 0x8e65002c  lw          $a1, 0x2C($s3)
    ctx->pc = 0x182528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x18252c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18252cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x182530: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x182530u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x182534: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x182534u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x182538: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x182538u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x18253c: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x18253cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x182540: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x182540u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x182544: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x182544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x182548: 0x10910004  beq         $a0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x182548u;
    {
        const bool branch_taken_0x182548 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x18254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182548u;
        // 0x18254c: 0x651821  addu        $v1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182548) {
            ctx->pc = 0x18255Cu;
            goto label_18255c;
        }
    }
    ctx->pc = 0x182550u;
    // 0x182550: 0x2351021  addu        $v0, $s1, $s5
    ctx->pc = 0x182550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x182554: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x182554u;
    {
        const bool branch_taken_0x182554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x182558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182554u;
        // 0x182558: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182554) {
            ctx->pc = 0x18256Cu;
            goto label_18256c;
        }
    }
    ctx->pc = 0x18255Cu;
label_18255c:
    // 0x18255c: 0x1072002f  beq         $v1, $s2, . + 4 + (0x2F << 2)
    ctx->pc = 0x18255Cu;
    {
        const bool branch_taken_0x18255c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x182560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18255Cu;
        // 0x182560: 0x7e1021  addu        $v0, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18255c) {
            ctx->pc = 0x18261Cu;
            goto label_18261c;
        }
    }
    ctx->pc = 0x182564u;
    // 0x182564: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x182564u;
    {
        const bool branch_taken_0x182564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x182568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182564u;
        // 0x182568: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182564) {
            ctx->pc = 0x18261Cu;
            goto label_18261c;
        }
    }
    ctx->pc = 0x18256Cu;
label_18256c:
    // 0x18256c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x18256cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_182570:
    // 0x182570: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x182570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x182574: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x182574u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182578: 0x2e830080  sltiu       $v1, $s4, 0x80
    ctx->pc = 0x182578u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x18257c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x18257cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182580: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x182580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x182584: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x182584u;
    {
        const bool branch_taken_0x182584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182584u;
        // 0x182588: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182584) {
            ctx->pc = 0x182610u;
            goto label_182610;
        }
    }
    ctx->pc = 0x18258Cu;
    // 0x18258c: 0x6200020  bltz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x18258Cu;
    {
        const bool branch_taken_0x18258c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x182590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18258Cu;
        // 0x182590: 0x2a220080  slti        $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18258c) {
            ctx->pc = 0x182610u;
            goto label_182610;
        }
    }
    ctx->pc = 0x182594u;
    // 0x182594: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x182594u;
    {
        const bool branch_taken_0x182594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182594u;
        // 0x182598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182594) {
            ctx->pc = 0x182614u;
            goto label_182614;
        }
    }
    ctx->pc = 0x18259Cu;
    // 0x18259c: 0x1411c0  sll         $v0, $s4, 7
    ctx->pc = 0x18259cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
    // 0x1825a0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1825a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1825a4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1825a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1825a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1825a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1825ac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1825acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1825b0: 0x94440038  lhu         $a0, 0x38($v0)
    ctx->pc = 0x1825b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1825b4: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1825B4u;
    {
        const bool branch_taken_0x1825b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1825B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825B4u;
        // 0x1825b8: 0x41980  sll         $v1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825b4) {
            ctx->pc = 0x182614u;
            goto label_182614;
        }
    }
    ctx->pc = 0x1825BCu;
    // 0x1825bc: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x1825bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x1825c0: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x1825c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1825c4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1825C4u;
    {
        const bool branch_taken_0x1825c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1825C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825C4u;
        // 0x1825c8: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825c4) {
            ctx->pc = 0x1825E0u;
            goto label_1825e0;
        }
    }
    ctx->pc = 0x1825CCu;
    // 0x1825cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1825ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825d0: 0xc0606e8  jal         func_181BA0
    ctx->pc = 0x1825D0u;
    SET_GPR_U32(ctx, 31, 0x1825D8u);
    ctx->pc = 0x1825D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1825D0u;
    // 0x1825d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181BA0u, 0x1825D0u, 0x1825D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1825D8u;
label_1825d8:
    // 0x1825d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1825D8u;
    {
        const bool branch_taken_0x1825d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1825d8) {
            ctx->pc = 0x1825ECu;
            goto label_1825ec;
        }
    }
    ctx->pc = 0x1825E0u;
label_1825e0:
    // 0x1825e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1825e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825e4: 0xc060650  jal         func_181940
    ctx->pc = 0x1825E4u;
    SET_GPR_U32(ctx, 31, 0x1825ECu);
    ctx->pc = 0x1825E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1825E4u;
    // 0x1825e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181940u, 0x1825E4u, 0x1825ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1825ECu;
label_1825ec:
    // 0x1825ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1825ECu;
    {
        const bool branch_taken_0x1825ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1825F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1825ECu;
        // 0x1825f0: 0x3c020027  lui         $v0, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825ec) {
            ctx->pc = 0x182610u;
            goto label_182610;
        }
    }
    ctx->pc = 0x1825F4u;
    // 0x1825f4: 0xae540054  sw          $s4, 0x54($s2)
    ctx->pc = 0x1825f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 20));
    // 0x1825f8: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x1825f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x1825fc: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x1825fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
    // 0x182600: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x182600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x182604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x182604u;
    {
        const bool branch_taken_0x182604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182604u;
        // 0x182608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182604) {
            ctx->pc = 0x182614u;
            goto label_182614;
        }
    }
    ctx->pc = 0x18260Cu;
    // 0x18260c: 0x0  nop
    ctx->pc = 0x18260cu;
    // NOP
label_182610:
    // 0x182610: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x182610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182614:
    // 0x182614: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x182614u;
    {
        const bool branch_taken_0x182614 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x182618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182614u;
        // 0x182618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182614) {
            ctx->pc = 0x182620u;
            goto label_182620;
        }
    }
    ctx->pc = 0x18261Cu;
label_18261c:
    // 0x18261c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18261cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182620:
    // 0x182620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x182620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182624: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x182624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182628: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x182628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18262c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18262cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x182630: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x182630u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182634: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x182634u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x182638: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x182638u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18263c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x18263cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x182640: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x182640u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182644: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x182644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x182648: 0x3e00008  jr          $ra
    ctx->pc = 0x182648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182648u;
        // 0x18264c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182650u;
}
