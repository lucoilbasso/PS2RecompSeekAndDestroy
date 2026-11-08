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

// Function: DoOTRendering__7WcWorld
// Address: 0x188218 - 0x188564
void DoOTRendering__7WcWorld_0x188218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoOTRendering__7WcWorld_0x188218");
#endif

    switch (ctx->pc) {
        case 0x188218u: goto label_188218;
        case 0x18821cu: goto label_18821c;
        case 0x188220u: goto label_188220;
        case 0x188224u: goto label_188224;
        case 0x188228u: goto label_188228;
        case 0x18822cu: goto label_18822c;
        case 0x188230u: goto label_188230;
        case 0x188234u: goto label_188234;
        case 0x188238u: goto label_188238;
        case 0x18823cu: goto label_18823c;
        case 0x188240u: goto label_188240;
        case 0x188244u: goto label_188244;
        case 0x188248u: goto label_188248;
        case 0x18824cu: goto label_18824c;
        case 0x188250u: goto label_188250;
        case 0x188254u: goto label_188254;
        case 0x188258u: goto label_188258;
        case 0x18825cu: goto label_18825c;
        case 0x188260u: goto label_188260;
        case 0x188264u: goto label_188264;
        case 0x188268u: goto label_188268;
        case 0x18826cu: goto label_18826c;
        case 0x188270u: goto label_188270;
        case 0x188274u: goto label_188274;
        case 0x188278u: goto label_188278;
        case 0x18827cu: goto label_18827c;
        case 0x188280u: goto label_188280;
        case 0x188284u: goto label_188284;
        case 0x188288u: goto label_188288;
        case 0x18828cu: goto label_18828c;
        case 0x188290u: goto label_188290;
        case 0x188294u: goto label_188294;
        case 0x188298u: goto label_188298;
        case 0x18829cu: goto label_18829c;
        case 0x1882a0u: goto label_1882a0;
        case 0x1882a4u: goto label_1882a4;
        case 0x1882a8u: goto label_1882a8;
        case 0x1882acu: goto label_1882ac;
        case 0x1882b0u: goto label_1882b0;
        case 0x1882b4u: goto label_1882b4;
        case 0x1882b8u: goto label_1882b8;
        case 0x1882bcu: goto label_1882bc;
        case 0x1882c0u: goto label_1882c0;
        case 0x1882c4u: goto label_1882c4;
        case 0x1882c8u: goto label_1882c8;
        case 0x1882ccu: goto label_1882cc;
        case 0x1882d0u: goto label_1882d0;
        case 0x1882d4u: goto label_1882d4;
        case 0x1882d8u: goto label_1882d8;
        case 0x1882dcu: goto label_1882dc;
        case 0x1882e0u: goto label_1882e0;
        case 0x1882e4u: goto label_1882e4;
        case 0x1882e8u: goto label_1882e8;
        case 0x1882ecu: goto label_1882ec;
        case 0x1882f0u: goto label_1882f0;
        case 0x1882f4u: goto label_1882f4;
        case 0x1882f8u: goto label_1882f8;
        case 0x1882fcu: goto label_1882fc;
        case 0x188300u: goto label_188300;
        case 0x188304u: goto label_188304;
        case 0x188308u: goto label_188308;
        case 0x18830cu: goto label_18830c;
        case 0x188310u: goto label_188310;
        case 0x188314u: goto label_188314;
        case 0x188318u: goto label_188318;
        case 0x18831cu: goto label_18831c;
        case 0x188320u: goto label_188320;
        case 0x188324u: goto label_188324;
        case 0x188328u: goto label_188328;
        case 0x18832cu: goto label_18832c;
        case 0x188330u: goto label_188330;
        case 0x188334u: goto label_188334;
        case 0x188338u: goto label_188338;
        case 0x18833cu: goto label_18833c;
        case 0x188340u: goto label_188340;
        case 0x188344u: goto label_188344;
        case 0x188348u: goto label_188348;
        case 0x18834cu: goto label_18834c;
        case 0x188350u: goto label_188350;
        case 0x188354u: goto label_188354;
        case 0x188358u: goto label_188358;
        case 0x18835cu: goto label_18835c;
        case 0x188360u: goto label_188360;
        case 0x188364u: goto label_188364;
        case 0x188368u: goto label_188368;
        case 0x18836cu: goto label_18836c;
        case 0x188370u: goto label_188370;
        case 0x188374u: goto label_188374;
        case 0x188378u: goto label_188378;
        case 0x18837cu: goto label_18837c;
        case 0x188380u: goto label_188380;
        case 0x188384u: goto label_188384;
        case 0x188388u: goto label_188388;
        case 0x18838cu: goto label_18838c;
        case 0x188390u: goto label_188390;
        case 0x188394u: goto label_188394;
        case 0x188398u: goto label_188398;
        case 0x18839cu: goto label_18839c;
        case 0x1883a0u: goto label_1883a0;
        case 0x1883a4u: goto label_1883a4;
        case 0x1883a8u: goto label_1883a8;
        case 0x1883acu: goto label_1883ac;
        case 0x1883b0u: goto label_1883b0;
        case 0x1883b4u: goto label_1883b4;
        case 0x1883b8u: goto label_1883b8;
        case 0x1883bcu: goto label_1883bc;
        case 0x1883c0u: goto label_1883c0;
        case 0x1883c4u: goto label_1883c4;
        case 0x1883c8u: goto label_1883c8;
        case 0x1883ccu: goto label_1883cc;
        case 0x1883d0u: goto label_1883d0;
        case 0x1883d4u: goto label_1883d4;
        case 0x1883d8u: goto label_1883d8;
        case 0x1883dcu: goto label_1883dc;
        case 0x1883e0u: goto label_1883e0;
        case 0x1883e4u: goto label_1883e4;
        case 0x1883e8u: goto label_1883e8;
        case 0x1883ecu: goto label_1883ec;
        case 0x1883f0u: goto label_1883f0;
        case 0x1883f4u: goto label_1883f4;
        case 0x1883f8u: goto label_1883f8;
        case 0x1883fcu: goto label_1883fc;
        case 0x188400u: goto label_188400;
        case 0x188404u: goto label_188404;
        case 0x188408u: goto label_188408;
        case 0x18840cu: goto label_18840c;
        case 0x188410u: goto label_188410;
        case 0x188414u: goto label_188414;
        case 0x188418u: goto label_188418;
        case 0x18841cu: goto label_18841c;
        case 0x188420u: goto label_188420;
        case 0x188424u: goto label_188424;
        case 0x188428u: goto label_188428;
        case 0x18842cu: goto label_18842c;
        case 0x188430u: goto label_188430;
        case 0x188434u: goto label_188434;
        case 0x188438u: goto label_188438;
        case 0x18843cu: goto label_18843c;
        case 0x188440u: goto label_188440;
        case 0x188444u: goto label_188444;
        case 0x188448u: goto label_188448;
        case 0x18844cu: goto label_18844c;
        case 0x188450u: goto label_188450;
        case 0x188454u: goto label_188454;
        case 0x188458u: goto label_188458;
        case 0x18845cu: goto label_18845c;
        case 0x188460u: goto label_188460;
        case 0x188464u: goto label_188464;
        case 0x188468u: goto label_188468;
        case 0x18846cu: goto label_18846c;
        case 0x188470u: goto label_188470;
        case 0x188474u: goto label_188474;
        case 0x188478u: goto label_188478;
        case 0x18847cu: goto label_18847c;
        case 0x188480u: goto label_188480;
        case 0x188484u: goto label_188484;
        case 0x188488u: goto label_188488;
        case 0x18848cu: goto label_18848c;
        case 0x188490u: goto label_188490;
        case 0x188494u: goto label_188494;
        case 0x188498u: goto label_188498;
        case 0x18849cu: goto label_18849c;
        case 0x1884a0u: goto label_1884a0;
        case 0x1884a4u: goto label_1884a4;
        case 0x1884a8u: goto label_1884a8;
        case 0x1884acu: goto label_1884ac;
        case 0x1884b0u: goto label_1884b0;
        case 0x1884b4u: goto label_1884b4;
        case 0x1884b8u: goto label_1884b8;
        case 0x1884bcu: goto label_1884bc;
        case 0x1884c0u: goto label_1884c0;
        case 0x1884c4u: goto label_1884c4;
        case 0x1884c8u: goto label_1884c8;
        case 0x1884ccu: goto label_1884cc;
        case 0x1884d0u: goto label_1884d0;
        case 0x1884d4u: goto label_1884d4;
        case 0x1884d8u: goto label_1884d8;
        case 0x1884dcu: goto label_1884dc;
        case 0x1884e0u: goto label_1884e0;
        case 0x1884e4u: goto label_1884e4;
        case 0x1884e8u: goto label_1884e8;
        case 0x1884ecu: goto label_1884ec;
        case 0x1884f0u: goto label_1884f0;
        case 0x1884f4u: goto label_1884f4;
        case 0x1884f8u: goto label_1884f8;
        case 0x1884fcu: goto label_1884fc;
        case 0x188500u: goto label_188500;
        case 0x188504u: goto label_188504;
        case 0x188508u: goto label_188508;
        case 0x18850cu: goto label_18850c;
        case 0x188510u: goto label_188510;
        case 0x188514u: goto label_188514;
        case 0x188518u: goto label_188518;
        case 0x18851cu: goto label_18851c;
        case 0x188520u: goto label_188520;
        case 0x188524u: goto label_188524;
        case 0x188528u: goto label_188528;
        case 0x18852cu: goto label_18852c;
        case 0x188530u: goto label_188530;
        case 0x188534u: goto label_188534;
        case 0x188538u: goto label_188538;
        case 0x18853cu: goto label_18853c;
        case 0x188540u: goto label_188540;
        case 0x188544u: goto label_188544;
        case 0x188548u: goto label_188548;
        case 0x18854cu: goto label_18854c;
        case 0x188550u: goto label_188550;
        case 0x188554u: goto label_188554;
        case 0x188558u: goto label_188558;
        case 0x18855cu: goto label_18855c;
        case 0x188560u: goto label_188560;
        default: break;
    }

    ctx->pc = 0x188218u;

label_188218:
    // 0x188218: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x188218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18821c:
    // 0x18821c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188220:
    // 0x188220: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x188220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_188224:
    // 0x188224: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x188224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
label_188228:
    // 0x188228: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x188228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_18822c:
    // 0x18822c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18822cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188230:
    // 0x188230: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x188230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_188234:
    // 0x188234: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x188234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
label_188238:
    // 0x188238: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x188238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_18823c:
    // 0x18823c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x18823cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_188240:
    // 0x188240: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x188240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_188244:
    // 0x188244: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x188244u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
label_188248:
    // 0x188248: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x188248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_18824c:
    // 0x18824c: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x18824cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
label_188250:
    // 0x188250: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x188250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_188254:
    // 0x188254: 0x24d7d640  addiu       $s7, $a2, -0x29C0
    ctx->pc = 0x188254u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956608));
label_188258:
    // 0x188258: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x188258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_18825c:
    // 0x18825c: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x18825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_188260:
    // 0x188260: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x188260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_188264:
    // 0x188264: 0x8e83015c  lw          $v1, 0x15C($s4)
    ctx->pc = 0x188264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 348)));
label_188268:
    // 0x188268: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x188268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_18826c:
    // 0x18826c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x18826cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_188270:
    // 0x188270: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x188270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_188274:
    // 0x188274: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x188274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_188278:
    // 0x188278: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x188278u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_18827c:
    // 0x18827c: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x18827cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_188280:
    // 0x188280: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x188280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_188284:
    // 0x188284: 0x24720010  addiu       $s2, $v1, 0x10
    ctx->pc = 0x188284u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_188288:
    // 0x188288: 0x8e820154  lw          $v0, 0x154($s4)
    ctx->pc = 0x188288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
label_18828c:
    // 0x18828c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x18828cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_188290:
    // 0x188290: 0x50400093  beql        $v0, $zero, . + 4 + (0x93 << 2)
label_188294:
    if (ctx->pc == 0x188294u) {
        ctx->pc = 0x188294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188290u;
        // 0x188294: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188298u;
        goto label_188298;
    }
    ctx->pc = 0x188290u;
    {
        const bool branch_taken_0x188290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188290) {
            ctx->pc = 0x188294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188290u;
            // 0x188294: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1884E0u;
            goto label_1884e0;
        }
    }
    ctx->pc = 0x188298u;
label_188298:
    // 0x188298: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x188298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_18829c:
    // 0x18829c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1882a0:
    // 0x1882a0: 0x2463d600  addiu       $v1, $v1, -0x2A00
    ctx->pc = 0x1882a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956544));
label_1882a4:
    // 0x1882a4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_1882a8:
    if (ctx->pc == 0x1882A8u) {
        ctx->pc = 0x1882ACu;
        goto label_1882ac;
    }
    ctx->pc = 0x1882A4u;
    {
        const bool branch_taken_0x1882a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1882a4) {
            ctx->pc = 0x1882B8u;
            goto label_1882b8;
        }
    }
    ctx->pc = 0x1882ACu;
label_1882ac:
    // 0x1882ac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1882acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1882b0:
    // 0x1882b0: 0x5040009e  beql        $v0, $zero, . + 4 + (0x9E << 2)
label_1882b4:
    if (ctx->pc == 0x1882B4u) {
        ctx->pc = 0x1882B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882B0u;
        // 0x1882b4: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882B8u;
        goto label_1882b8;
    }
    ctx->pc = 0x1882B0u;
    {
        const bool branch_taken_0x1882b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1882b0) {
            ctx->pc = 0x1882B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1882B0u;
            // 0x1882b4: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18852Cu;
            goto label_18852c;
        }
    }
    ctx->pc = 0x1882B8u;
label_1882b8:
    // 0x1882b8: 0xc06bd28  jal         func_1AF4A0
label_1882bc:
    if (ctx->pc == 0x1882BCu) {
        ctx->pc = 0x1882BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882B8u;
        // 0x1882bc: 0x8ee4000c  lw          $a0, 0xC($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882C0u;
        goto label_1882c0;
    }
    ctx->pc = 0x1882B8u;
    SET_GPR_U32(ctx, 31, 0x1882C0u);
    ctx->pc = 0x1882BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1882B8u;
    // 0x1882bc: 0x8ee4000c  lw          $a0, 0xC($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1882B8u, 0x1882C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1882C0u;
label_1882c0:
    // 0x1882c0: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x1882c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1882c4:
    // 0x1882c4: 0x8e820154  lw          $v0, 0x154($s4)
    ctx->pc = 0x1882c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 340)));
label_1882c8:
    // 0x1882c8: 0x3c072000  lui         $a3, 0x2000
    ctx->pc = 0x1882c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)8192 << 16));
label_1882cc:
    // 0x1882cc: 0x34e70010  ori         $a3, $a3, 0x10
    ctx->pc = 0x1882ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16);
label_1882d0:
    // 0x1882d0: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x1882d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1882d4:
    // 0x1882d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1882d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1882d8:
    // 0x1882d8: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x1882d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
label_1882dc:
    // 0x1882dc: 0x34c60020  ori         $a2, $a2, 0x20
    ctx->pc = 0x1882dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
label_1882e0:
    // 0x1882e0: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1882e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1882e4:
    // 0x1882e4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1882e8:
    if (ctx->pc == 0x1882E8u) {
        ctx->pc = 0x1882E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882E4u;
        // 0x1882e8: 0xaee30004  sw          $v1, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1882ECu;
        goto label_1882ec;
    }
    ctx->pc = 0x1882E4u;
    {
        const bool branch_taken_0x1882e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1882E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1882E4u;
        // 0x1882e8: 0xaee30004  sw          $v1, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1882e4) {
            ctx->pc = 0x188328u;
            goto label_188328;
        }
    }
    ctx->pc = 0x1882ECu;
label_1882ec:
    // 0x1882ec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1882ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1882f0:
    // 0x1882f0: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x1882f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
label_1882f4:
    // 0x1882f4: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x1882f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
label_1882f8:
    // 0x1882f8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1882f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1882fc:
    // 0x1882fc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1882fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_188300:
    // 0x188300: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x188300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_188304:
    // 0x188304: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x188304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_188308:
    // 0x188308: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x188308u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
label_18830c:
    // 0x18830c: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x18830cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
label_188310:
    // 0x188310: 0x34210030  ori         $at, $at, 0x30
    ctx->pc = 0x188310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48);
label_188314:
    // 0x188314: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x188314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_188318:
    // 0x188318: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x188318u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_18831c:
    // 0x18831c: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x18831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_188320:
    // 0x188320: 0x1000000f  b           . + 4 + (0xF << 2)
label_188324:
    if (ctx->pc == 0x188324u) {
        ctx->pc = 0x188324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188320u;
        // 0x188324: 0xdf828c90  ld          $v0, -0x7370($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188328u;
        goto label_188328;
    }
    ctx->pc = 0x188320u;
    {
        const bool branch_taken_0x188320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188320u;
        // 0x188324: 0xdf828c90  ld          $v0, -0x7370($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188320) {
            ctx->pc = 0x188360u;
            goto label_188360;
        }
    }
    ctx->pc = 0x188328u;
label_188328:
    // 0x188328: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x188328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18832c:
    // 0x18832c: 0x3c062000  lui         $a2, 0x2000
    ctx->pc = 0x18832cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8192 << 16));
label_188330:
    // 0x188330: 0x34c60040  ori         $a2, $a2, 0x40
    ctx->pc = 0x188330u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)64);
label_188334:
    // 0x188334: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x188334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_188338:
    // 0x188338: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x188338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_18833c:
    // 0x18833c: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x18833cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_188340:
    // 0x188340: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x188340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_188344:
    // 0x188344: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x188344u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
label_188348:
    // 0x188348: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x188348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
label_18834c:
    // 0x18834c: 0x34210030  ori         $at, $at, 0x30
    ctx->pc = 0x18834cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48);
label_188350:
    // 0x188350: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x188350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_188354:
    // 0x188354: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x188354u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_188358:
    // 0x188358: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x188358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_18835c:
    // 0x18835c: 0xdf828c80  ld          $v0, -0x7380($gp)
    ctx->pc = 0x18835cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937728)));
label_188360:
    // 0x188360: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x188360u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
label_188364:
    // 0x188364: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x188364u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_188368:
    // 0x188368: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x188368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_18836c:
    // 0x18836c: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x18836cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
label_188370:
    // 0x188370: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x188370u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
label_188374:
    // 0x188374: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x188374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_188378:
    // 0x188378: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x188378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_18837c:
    // 0x18837c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x18837cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_188380:
    // 0x188380: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x188380u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_188384:
    // 0x188384: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x188384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_188388:
    // 0x188388: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x188388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
label_18838c:
    // 0x18838c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18838cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_188390:
    // 0x188390: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x188390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_188394:
    // 0x188394: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x188394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_188398:
    // 0x188398: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x188398u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
label_18839c:
    // 0x18839c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_1883a0:
    // 0x1883a0: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x1883a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1883a4:
    // 0x1883a4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x1883a4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
label_1883a8:
    // 0x1883a8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1883a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_1883ac:
    // 0x1883ac: 0x2442d000  addiu       $v0, $v0, -0x3000
    ctx->pc = 0x1883acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955008));
label_1883b0:
    // 0x1883b0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1883b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1883b4:
    // 0x1883b4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1883b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1883b8:
    // 0x1883b8: 0xc52024  and         $a0, $a2, $a1
    ctx->pc = 0x1883b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_1883bc:
    // 0x1883bc: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x1883bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1883c0:
    // 0x1883c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1883c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1883c4:
    // 0x1883c4: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x1883c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1883c8:
    // 0x1883c8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1883c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_1883cc:
    // 0x1883cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1883ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1883d0:
    // 0x1883d0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1883d4:
    if (ctx->pc == 0x1883D4u) {
        ctx->pc = 0x1883D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883D0u;
        // 0x1883d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883D8u;
        goto label_1883d8;
    }
    ctx->pc = 0x1883D0u;
    {
        const bool branch_taken_0x1883d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1883D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883D0u;
        // 0x1883d4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883d0) {
            ctx->pc = 0x1883F8u;
            goto label_1883f8;
        }
    }
    ctx->pc = 0x1883D8u;
label_1883d8:
    // 0x1883d8: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1883d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
label_1883dc:
    // 0x1883dc: 0xc05bd26  jal         func_16F498
label_1883e0:
    if (ctx->pc == 0x1883E0u) {
        ctx->pc = 0x1883E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883DCu;
        // 0x1883e0: 0x24847f18  addiu       $a0, $a0, 0x7F18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883E4u;
        goto label_1883e4;
    }
    ctx->pc = 0x1883DCu;
    SET_GPR_U32(ctx, 31, 0x1883E4u);
    ctx->pc = 0x1883E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883DCu;
    // 0x1883e0: 0x24847f18  addiu       $a0, $a0, 0x7F18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x1883DCu, 0x1883E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883E4u;
label_1883e4:
    // 0x1883e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1883e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1883e8:
    // 0x1883e8: 0xc06825c  jal         func_1A0970
label_1883ec:
    if (ctx->pc == 0x1883ECu) {
        ctx->pc = 0x1883ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883E8u;
        // 0x1883ec: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883F0u;
        goto label_1883f0;
    }
    ctx->pc = 0x1883E8u;
    SET_GPR_U32(ctx, 31, 0x1883F0u);
    ctx->pc = 0x1883ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1883E8u;
    // 0x1883ec: 0x240501ff  addiu       $a1, $zero, 0x1FF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x1883E8u, 0x1883F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1883F0u;
label_1883f0:
    // 0x1883f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1883f4:
    if (ctx->pc == 0x1883F4u) {
        ctx->pc = 0x1883F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883F0u;
        // 0x1883f4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1883F8u;
        goto label_1883f8;
    }
    ctx->pc = 0x1883F0u;
    {
        const bool branch_taken_0x1883f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1883F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1883F0u;
        // 0x1883f4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1883f0) {
            ctx->pc = 0x188400u;
            goto label_188400;
        }
    }
    ctx->pc = 0x1883F8u;
label_1883f8:
    // 0x1883f8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1883f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_1883fc:
    // 0x1883fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1883fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_188400:
    // 0x188400: 0x3c051300  lui         $a1, 0x1300
    ctx->pc = 0x188400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4864 << 16));
label_188404:
    // 0x188404: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x188404u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_188408:
    // 0x188408: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x188408u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
label_18840c:
    // 0x18840c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18840cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_188410:
    // 0x188410: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x188410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_188414:
    // 0x188414: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x188414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
label_188418:
    // 0x188418: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x188418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_18841c:
    // 0x18841c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x18841cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188420:
    // 0x188420: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x188420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_188424:
    // 0x188424: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x188424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_188428:
    // 0x188428: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x188428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18842c:
    // 0x18842c: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x18842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_188430:
    // 0x188430: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x188430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_188434:
    // 0x188434: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x188434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_188438:
    // 0x188438: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x188438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_18843c:
    // 0x18843c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18843cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_188440:
    // 0x188440: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x188440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_188444:
    // 0x188444: 0xc06bd20  jal         func_1AF480
label_188448:
    if (ctx->pc == 0x188448u) {
        ctx->pc = 0x188448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188444u;
        // 0x188448: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18844Cu;
        goto label_18844c;
    }
    ctx->pc = 0x188444u;
    SET_GPR_U32(ctx, 31, 0x18844Cu);
    ctx->pc = 0x188448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188444u;
    // 0x188448: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x188444u, 0x18844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18844Cu;
label_18844c:
    // 0x18844c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x18844cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_188450:
    // 0x188450: 0xc06bd28  jal         func_1AF4A0
label_188454:
    if (ctx->pc == 0x188454u) {
        ctx->pc = 0x188454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188450u;
        // 0x188454: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188458u;
        goto label_188458;
    }
    ctx->pc = 0x188450u;
    SET_GPR_U32(ctx, 31, 0x188458u);
    ctx->pc = 0x188454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188450u;
    // 0x188454: 0x8f848c60  lw          $a0, -0x73A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x188450u, 0x188458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188458u;
label_188458:
    // 0x188458: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x188458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_18845c:
    // 0x18845c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x18845cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
label_188460:
    // 0x188460: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x188460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_188464:
    // 0x188464: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x188464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_188468:
    // 0x188468: 0x0  nop
    ctx->pc = 0x188468u;
    // NOP
label_18846c:
    // 0x18846c: 0x0  nop
    ctx->pc = 0x18846cu;
    // NOP
label_188470:
    // 0x188470: 0x0  nop
    ctx->pc = 0x188470u;
    // NOP
label_188474:
    // 0x188474: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_188478:
    if (ctx->pc == 0x188478u) {
        ctx->pc = 0x18847Cu;
        goto label_18847c;
    }
    ctx->pc = 0x188474u;
    {
        const bool branch_taken_0x188474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188474) {
            ctx->pc = 0x188460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188460;
        }
    }
    ctx->pc = 0x18847Cu;
label_18847c:
    // 0x18847c: 0x0  nop
    ctx->pc = 0x18847cu;
    // NOP
label_188480:
    // 0x188480: 0xc06bd2c  jal         func_1AF4B0
label_188484:
    if (ctx->pc == 0x188484u) {
        ctx->pc = 0x188484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188480u;
        // 0x188484: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188488u;
        goto label_188488;
    }
    ctx->pc = 0x188480u;
    SET_GPR_U32(ctx, 31, 0x188488u);
    ctx->pc = 0x188484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188480u;
    // 0x188484: 0x8f848c68  lw          $a0, -0x7398($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4B0u, 0x188480u, 0x188488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188488u;
label_188488:
    // 0x188488: 0x8f838c68  lw          $v1, -0x7398($gp)
    ctx->pc = 0x188488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_18848c:
    // 0x18848c: 0x1043fffc  beq         $v0, $v1, . + 4 + (-0x4 << 2)
label_188490:
    if (ctx->pc == 0x188490u) {
        ctx->pc = 0x188490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18848Cu;
        // 0x188490: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188494u;
        goto label_188494;
    }
    ctx->pc = 0x18848Cu;
    {
        const bool branch_taken_0x18848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x188490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18848Cu;
        // 0x188490: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18848c) {
            ctx->pc = 0x188480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188480;
        }
    }
    ctx->pc = 0x188494u;
label_188494:
    // 0x188494: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
label_188498:
    if (ctx->pc == 0x188498u) {
        ctx->pc = 0x188498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188494u;
        // 0x188498: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18849Cu;
        goto label_18849c;
    }
    ctx->pc = 0x188494u;
    {
        const bool branch_taken_0x188494 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x188498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188494u;
        // 0x188498: 0xaf828c74  sw          $v0, -0x738C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188494) {
            ctx->pc = 0x1884B0u;
            goto label_1884b0;
        }
    }
    ctx->pc = 0x18849Cu;
label_18849c:
    // 0x18849c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x18849cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1884a0:
    // 0x1884a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1884a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1884a4:
    // 0x1884a4: 0x2041824  and         $v1, $s0, $a0
    ctx->pc = 0x1884a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
label_1884a8:
    // 0x1884a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1884ac:
    if (ctx->pc == 0x1884ACu) {
        ctx->pc = 0x1884ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884A8u;
        // 0x1884ac: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884B0u;
        goto label_1884b0;
    }
    ctx->pc = 0x1884A8u;
    {
        const bool branch_taken_0x1884a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1884ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884A8u;
        // 0x1884ac: 0x628025  or          $s0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1884a8) {
            ctx->pc = 0x1884B8u;
            goto label_1884b8;
        }
    }
    ctx->pc = 0x1884B0u;
label_1884b0:
    // 0x1884b0: 0xc06bdb8  jal         func_1AF6E0
label_1884b4:
    if (ctx->pc == 0x1884B4u) {
        ctx->pc = 0x1884B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884B0u;
        // 0x1884b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884B8u;
        goto label_1884b8;
    }
    ctx->pc = 0x1884B0u;
    SET_GPR_U32(ctx, 31, 0x1884B8u);
    ctx->pc = 0x1884B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1884B0u;
    // 0x1884b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF6E0u, 0x1884B0u, 0x1884B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1884B8u;
label_1884b8:
    // 0x1884b8: 0x8f828c50  lw          $v0, -0x73B0($gp)
    ctx->pc = 0x1884b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
label_1884bc:
    // 0x1884bc: 0x2404fff3  addiu       $a0, $zero, -0xD
    ctx->pc = 0x1884bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_1884c0:
    // 0x1884c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1884c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1884c4:
    // 0x1884c4: 0xac500030  sw          $s0, 0x30($v0)
    ctx->pc = 0x1884c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 16));
label_1884c8:
    // 0x1884c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1884c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1884cc:
    // 0x1884cc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1884ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_1884d0:
    // 0x1884d0: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x1884d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
label_1884d4:
    // 0x1884d4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1884d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_1884d8:
    // 0x1884d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1884d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1884dc:
    // 0x1884dc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1884dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1884e0:
    // 0x1884e0: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_1884e4:
    if (ctx->pc == 0x1884E4u) {
        ctx->pc = 0x1884E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884E0u;
        // 0x1884e4: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884E8u;
        goto label_1884e8;
    }
    ctx->pc = 0x1884E0u;
    {
        const bool branch_taken_0x1884e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1884e0) {
            ctx->pc = 0x1884E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1884E0u;
            // 0x1884e4: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18852Cu;
            goto label_18852c;
        }
    }
    ctx->pc = 0x1884E8u;
label_1884e8:
    // 0x1884e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1884e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1884ec:
    // 0x1884ec: 0x0  nop
    ctx->pc = 0x1884ecu;
    // NOP
label_1884f0:
    // 0x1884f0: 0xc04f9e0  jal         func_13E780
label_1884f4:
    if (ctx->pc == 0x1884F4u) {
        ctx->pc = 0x1884F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1884F0u;
        // 0x1884f4: 0x8e300130  lw          $s0, 0x130($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1884F8u;
        goto label_1884f8;
    }
    ctx->pc = 0x1884F0u;
    SET_GPR_U32(ctx, 31, 0x1884F8u);
    ctx->pc = 0x1884F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1884F0u;
    // 0x1884f4: 0x8e300130  lw          $s0, 0x130($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E780u, 0x1884F0u, 0x1884F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1884F8u;
label_1884f8:
    // 0x1884f8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1884f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1884fc:
    // 0x1884fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1884fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_188500:
    // 0x188500: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x188500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_188504:
    // 0x188504: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x188504u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_188508:
    // 0x188508: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x188508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_18850c:
    // 0x18850c: 0x60f809  jalr        $v1
label_188510:
    if (ctx->pc == 0x188510u) {
        ctx->pc = 0x188510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18850Cu;
        // 0x188510: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188514u;
        goto label_188514;
    }
    ctx->pc = 0x18850Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x188514u);
        ctx->pc = 0x188510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18850Cu;
        // 0x188510: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18850Cu, 0x188514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188514u;
label_188514:
    // 0x188514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x188514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_188518:
    // 0x188518: 0xc04f9e2  jal         func_13E788
label_18851c:
    if (ctx->pc == 0x18851Cu) {
        ctx->pc = 0x18851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188518u;
        // 0x18851c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188520u;
        goto label_188520;
    }
    ctx->pc = 0x188518u;
    SET_GPR_U32(ctx, 31, 0x188520u);
    ctx->pc = 0x18851Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188518u;
    // 0x18851c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E788u, 0x188518u, 0x188520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188520u;
label_188520:
    // 0x188520: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
label_188524:
    if (ctx->pc == 0x188524u) {
        ctx->pc = 0x188528u;
        goto label_188528;
    }
    ctx->pc = 0x188520u;
    {
        const bool branch_taken_0x188520 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x188520) {
            ctx->pc = 0x1884F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1884f0;
        }
    }
    ctx->pc = 0x188528u;
label_188528:
    // 0x188528: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x188528u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_18852c:
    // 0x18852c: 0x6a1ff56  bgez        $s5, . + 4 + (-0xAA << 2)
label_188530:
    if (ctx->pc == 0x188530u) {
        ctx->pc = 0x188530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18852Cu;
        // 0x188530: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188534u;
        goto label_188534;
    }
    ctx->pc = 0x18852Cu;
    {
        const bool branch_taken_0x18852c = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x188530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18852Cu;
        // 0x188530: 0x2652fff8  addiu       $s2, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18852c) {
            ctx->pc = 0x188288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188288;
        }
    }
    ctx->pc = 0x188534u;
label_188534:
    // 0x188534: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x188534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_188538:
    // 0x188538: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x188538u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18853c:
    // 0x18853c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x18853cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_188540:
    // 0x188540: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x188540u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_188544:
    // 0x188544: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x188544u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_188548:
    // 0x188548: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x188548u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_18854c:
    // 0x18854c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x18854cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_188550:
    // 0x188550: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x188550u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_188554:
    // 0x188554: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x188554u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_188558:
    // 0x188558: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x188558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_18855c:
    // 0x18855c: 0x3e00008  jr          $ra
label_188560:
    if (ctx->pc == 0x188560u) {
        ctx->pc = 0x188560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18855Cu;
        // 0x188560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188564u;
        goto label_fallthrough_0x18855c;
    }
    ctx->pc = 0x18855Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18855Cu;
        // 0x188560: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18855Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18855c:
    ctx->pc = 0x188564u;
}
