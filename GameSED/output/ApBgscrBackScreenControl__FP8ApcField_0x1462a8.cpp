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

// Function: ApBgscrBackScreenControl__FP8ApcField
// Address: 0x1462a8 - 0x1465ac
void ApBgscrBackScreenControl__FP8ApcField_0x1462a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApBgscrBackScreenControl__FP8ApcField_0x1462a8");
#endif

    switch (ctx->pc) {
        case 0x14655cu: goto label_14655c;
        case 0x14657cu: goto label_14657c;
        case 0x146598u: goto label_146598;
        default: break;
    }

    ctx->pc = 0x1462a8u;

    // 0x1462a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1462a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1462ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1462acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1462b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1462b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1462b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1462b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1462b8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1462b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1462bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1462bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1462c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1462c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1462c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1462c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1462c8: 0x245026c0  addiu       $s0, $v0, 0x26C0
    ctx->pc = 0x1462c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
    // 0x1462cc: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1462ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x2626C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2626C0u, _value); } while (0);
    // 0x1462d0: 0x8e270164  lw          $a3, 0x164($s1)
    ctx->pc = 0x1462d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x1462d4: 0xc4e10154  lwc1        $f1, 0x154($a3)
    ctx->pc = 0x1462d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1462d8: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x1462d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1462dc: 0x0  nop
    ctx->pc = 0x1462dcu;
    // NOP
    // 0x1462e0: 0x0  nop
    ctx->pc = 0x1462e0u;
    // NOP
    // 0x1462e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1462e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1462e8: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x1462e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x2626D8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2626D8u, _value); } while (0); }
    // 0x1462ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1462ECu;
    {
        const bool branch_taken_0x1462ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1462F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462ECu;
        // 0x1462f0: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462ec) {
            ctx->pc = 0x146300u;
            goto label_146300;
        }
    }
    ctx->pc = 0x1462F4u;
    // 0x1462f4: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1462f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1462f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1462F8u;
    {
        const bool branch_taken_0x1462f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1462FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462F8u;
        // 0x1462fc: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1462f8) {
            ctx->pc = 0x146304u;
            goto label_146304;
        }
    }
    ctx->pc = 0x146300u;
label_146300:
    // 0x146300: 0x24e40030  addiu       $a0, $a3, 0x30
    ctx->pc = 0x146300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
label_146304:
    // 0x146304: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x146304u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x146308: 0xfe0204e0  sd          $v0, 0x4E0($s0)
    ctx->pc = 0x146308u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1248), GPR_U64(ctx, 2));
    // 0x14630c: 0x8e0304e0  lw          $v1, 0x4E0($s0)
    ctx->pc = 0x14630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1248)));
    // 0x146310: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x146310u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x146314: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x146314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x146318: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x146318u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x14631c: 0x24628000  addiu       $v0, $v1, -0x8000
    ctx->pc = 0x14631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x146320: 0x28644000  slti        $a0, $v1, 0x4000
    ctx->pc = 0x146320u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x146324: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x146324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146328: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x146328u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x14632c: 0x28c22001  slti        $v0, $a2, 0x2001
    ctx->pc = 0x14632cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x146330: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x146330u;
    {
        const bool branch_taken_0x146330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146330u;
        // 0x146334: 0xfe0504e8  sd          $a1, 0x4E8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 1256), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146330) {
            ctx->pc = 0x146348u;
            goto label_146348;
        }
    }
    ctx->pc = 0x146338u;
    // 0x146338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14633c: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x14633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x146340: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x146340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x146344: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x146344u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_146348:
    // 0x146348: 0x28c2e000  slti        $v0, $a2, -0x2000
    ctx->pc = 0x146348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294959104) ? 1 : 0);
    // 0x14634c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14634Cu;
    {
        const bool branch_taken_0x14634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14634Cu;
        // 0x146350: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14634c) {
            ctx->pc = 0x146360u;
            goto label_146360;
        }
    }
    ctx->pc = 0x146354u;
    // 0x146354: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x146354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x146358: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x146358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x14635c: 0x663023  subu        $a2, $v1, $a2
    ctx->pc = 0x14635cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_146360:
    // 0x146360: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x146360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
    // 0x146364: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x146364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146368: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x146368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14636c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x14636cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146370: 0x28a42001  slti        $a0, $a1, 0x2001
    ctx->pc = 0x146370u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x146374: 0x8e0204e4  lw          $v0, 0x4E4($s0)
    ctx->pc = 0x146374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1252)));
    // 0x146378: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x146378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14637c: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x14637cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x146380: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x146380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x146384: 0x8f838a74  lw          $v1, -0x758C($gp)
    ctx->pc = 0x146384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937204)));
    // 0x146388: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x146388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x14638c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14638cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x146390: 0x30487fff  andi        $t0, $v0, 0x7FFF
    ctx->pc = 0x146390u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x146394: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x146394u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x146398: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146398u;
    {
        const bool branch_taken_0x146398 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146398u;
        // 0x14639c: 0xae080004  sw          $t0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146398) {
            ctx->pc = 0x1463A8u;
            goto label_1463a8;
        }
    }
    ctx->pc = 0x1463A0u;
    // 0x1463a0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x1463a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x1463a4: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x1463a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1463a8:
    // 0x1463a8: 0x28a2e000  slti        $v0, $a1, -0x2000
    ctx->pc = 0x1463a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294959104) ? 1 : 0);
    // 0x1463ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1463ACu;
    {
        const bool branch_taken_0x1463ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1463B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1463ACu;
        // 0x1463b0: 0x240218e3  addiu       $v0, $zero, 0x18E3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6371));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1463ac) {
            ctx->pc = 0x1463C0u;
            goto label_1463c0;
        }
    }
    ctx->pc = 0x1463B4u;
    // 0x1463b4: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x1463b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x1463b8: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x1463b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1463bc: 0x240218e3  addiu       $v0, $zero, 0x18E3
    ctx->pc = 0x1463bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6371));
label_1463c0:
    // 0x1463c0: 0x70a210e8  pminw       $v0, $a1, $v0
    ctx->pc = 0x1463c0u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x1463c4: 0x22800  sll         $a1, $v0, 0
    ctx->pc = 0x1463c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1463c8: 0x2403e71d  addiu       $v1, $zero, -0x18E3
    ctx->pc = 0x1463c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294960925));
    // 0x1463cc: 0x70a318c8  pmaxw       $v1, $a1, $v1
    ctx->pc = 0x1463ccu;
    SET_GPR_VEC(ctx, 3, PS2_PMAXW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x1463d0: 0x32800  sll         $a1, $v1, 0
    ctx->pc = 0x1463d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 0));
    // 0x1463d4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1463d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1463d8: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x1463d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x1463dc: 0x2446f640  addiu       $a2, $v0, -0x9C0
    ctx->pc = 0x1463dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x1463e0: 0x24a22000  addiu       $v0, $a1, 0x2000
    ctx->pc = 0x1463e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
    // 0x1463e4: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x1463e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x1463e8: 0x263021  addu        $a2, $at, $a2
    ctx->pc = 0x1463e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x1463ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1463ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1463f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1463f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1463f4: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x1463f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x1463f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1463f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1463fc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1463fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146400: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x146400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x146404: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x146404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146408: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x146408u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x14640c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14640cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x146410: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x146410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x146414: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x146414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146418: 0x0  nop
    ctx->pc = 0x146418u;
    // NOP
    // 0x14641c: 0x0  nop
    ctx->pc = 0x14641cu;
    // NOP
    // 0x146420: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x146420u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x146424: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x146424u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x146428: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x146428u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x14642c: 0x8e0204e8  lw          $v0, 0x4E8($s0)
    ctx->pc = 0x14642cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1256)));
    // 0x146430: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x146430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x146434: 0x21023  negu        $v0, $v0
    ctx->pc = 0x146434u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x146438: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x146438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x14643c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14643Cu;
    {
        const bool branch_taken_0x14643c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x146440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14643Cu;
        // 0x146440: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14643c) {
            ctx->pc = 0x14645Cu;
            goto label_14645c;
        }
    }
    ctx->pc = 0x146444u;
    // 0x146444: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x146444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x146448: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x146448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14644c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x14644cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x146450: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x146450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x146454: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x146454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x146458: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x146458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_14645c:
    // 0x14645c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14645cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x146460: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x146460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146464: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x146464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14646c: 0x24622000  addiu       $v0, $v1, 0x2000
    ctx->pc = 0x14646cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x146470: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x146470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x146474: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x146474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x146478: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14647c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14647cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x146480: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x146480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x146484: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x146484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x146488: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x146488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14648c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14648cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146490: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x146490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x146494: 0x46020142  mul.s       $f5, $f0, $f2
    ctx->pc = 0x146494u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x146498: 0x46020902  mul.s       $f4, $f1, $f2
    ctx->pc = 0x146498u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14649c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x14649cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1464a0: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1464a0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1464a4: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1464a4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1464a8: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1464a8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1464ac: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x1464acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1464b0: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x1464b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1464b4: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x1464b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1464b8: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x1464b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1464bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1464bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1464c0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1464C0u;
    {
        const bool branch_taken_0x1464c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1464c0) {
            ctx->pc = 0x1464C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1464C0u;
            // 0x1464c4: 0x46002087  neg.s       $f2, $f4 (Delay Slot)
            ctx->f[2] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1464F8u;
            goto label_1464f8;
        }
    }
    ctx->pc = 0x1464C8u;
    // 0x1464c8: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x1464c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x1464cc: 0xc7828178  lwc1        $f2, -0x7E88($gp)
    ctx->pc = 0x1464ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1464d0: 0xc780817c  lwc1        $f0, -0x7E84($gp)
    ctx->pc = 0x1464d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1464d4: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x1464d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1464d8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1464d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1464dc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1464dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1464e0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1464e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1464e4: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x1464e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1464e8: 0xe6040044  swc1        $f4, 0x44($s0)
    ctx->pc = 0x1464e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1464ec: 0xe6010040  swc1        $f1, 0x40($s0)
    ctx->pc = 0x1464ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x1464f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1464F0u;
    {
        const bool branch_taken_0x1464f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1464F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1464F0u;
        // 0x1464f4: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1464f0) {
            ctx->pc = 0x146520u;
            goto label_146520;
        }
    }
    ctx->pc = 0x1464F8u;
label_1464f8:
    // 0x1464f8: 0xc7808180  lwc1        $f0, -0x7E80($gp)
    ctx->pc = 0x1464f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1464fc: 0xc7818184  lwc1        $f1, -0x7E7C($gp)
    ctx->pc = 0x1464fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146500: 0x460028c2  mul.s       $f3, $f5, $f0
    ctx->pc = 0x146500u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x146504: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x146504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x146508: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x146508u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x14650c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x14650cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x146510: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x146510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x146514: 0xe6030040  swc1        $f3, 0x40($s0)
    ctx->pc = 0x146514u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x146518: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x146518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x14651c: 0xe6020044  swc1        $f2, 0x44($s0)
    ctx->pc = 0x14651cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_146520:
    // 0x146520: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x146520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x146524: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x146524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146528: 0xc4a301b8  lwc1        $f3, 0x1B8($a1)
    ctx->pc = 0x146528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14652c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x14652cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x146530: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x146530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146534: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x146534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x146538: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x146538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14653c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x14653cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x146540: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x146540u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x146544: 0xe4810060  swc1        $f1, 0x60($a0)
    ctx->pc = 0x146544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x146548: 0xc4a001bc  lwc1        $f0, 0x1BC($a1)
    ctx->pc = 0x146548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14654c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x14654cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x146550: 0xe4820064  swc1        $f2, 0x64($a0)
    ctx->pc = 0x146550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x146554: 0xc0679ba  jal         func_19E6E8
    ctx->pc = 0x146554u;
    SET_GPR_U32(ctx, 31, 0x14655Cu);
    ctx->pc = 0x146558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146554u;
    // 0x146558: 0xc60d0018  lwc1        $f13, 0x18($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E6E8u, 0x146554u, 0x14655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14655Cu;
label_14655c:
    // 0x14655c: 0xc7818188  lwc1        $f1, -0x7E78($gp)
    ctx->pc = 0x14655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146560: 0x8e0204f0  lw          $v0, 0x4F0($s0)
    ctx->pc = 0x146560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1264)));
    // 0x146564: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x146564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x146568: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x146568u;
    {
        const bool branch_taken_0x146568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146568u;
        // 0x14656c: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x146568) {
            ctx->pc = 0x14657Cu;
            goto label_14657c;
        }
    }
    ctx->pc = 0x146570u;
    // 0x146570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x146570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146574: 0xc051f9a  jal         func_147E68
    ctx->pc = 0x146574u;
    SET_GPR_U32(ctx, 31, 0x14657Cu);
    ctx->pc = 0x146578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146574u;
    // 0x146578: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147E68u, 0x146574u, 0x14657Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14657Cu;
label_14657c:
    // 0x14657c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x14657cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x146580: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x146580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146584: 0x8c432910  lw          $v1, 0x2910($v0)
    ctx->pc = 0x146584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x262910u));
    // 0x146588: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x146588u;
    {
        const bool branch_taken_0x146588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x146588) {
            ctx->pc = 0x14658Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146588u;
            // 0x14658c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14659Cu;
            goto label_14659c;
        }
    }
    ctx->pc = 0x146590u;
    // 0x146590: 0xc051da2  jal         func_147688
    ctx->pc = 0x146590u;
    SET_GPR_U32(ctx, 31, 0x146598u);
    ctx->pc = 0x146594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146590u;
    // 0x146594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147688u, 0x146590u, 0x146598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146598u;
label_146598:
    // 0x146598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14659c:
    // 0x14659c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14659cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1465a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1465a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1465a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1465A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1465A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1465A4u;
        // 0x1465a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1465A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1465ACu;
}
