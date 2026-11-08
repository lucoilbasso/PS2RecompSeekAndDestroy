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

// Function: Cmd_ACTOR_HIT_ATTR_Entry__FP15BsSCDEntControl
// Address: 0x136250 - 0x136540
void Cmd_ACTOR_HIT_ATTR_Entry__FP15BsSCDEntControl_0x136250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_ACTOR_HIT_ATTR_Entry__FP15BsSCDEntControl_0x136250");
#endif

    switch (ctx->pc) {
        case 0x136250u: goto label_136250;
        case 0x136254u: goto label_136254;
        case 0x136258u: goto label_136258;
        case 0x13625cu: goto label_13625c;
        case 0x136260u: goto label_136260;
        case 0x136264u: goto label_136264;
        case 0x136268u: goto label_136268;
        case 0x13626cu: goto label_13626c;
        case 0x136270u: goto label_136270;
        case 0x136274u: goto label_136274;
        case 0x136278u: goto label_136278;
        case 0x13627cu: goto label_13627c;
        case 0x136280u: goto label_136280;
        case 0x136284u: goto label_136284;
        case 0x136288u: goto label_136288;
        case 0x13628cu: goto label_13628c;
        case 0x136290u: goto label_136290;
        case 0x136294u: goto label_136294;
        case 0x136298u: goto label_136298;
        case 0x13629cu: goto label_13629c;
        case 0x1362a0u: goto label_1362a0;
        case 0x1362a4u: goto label_1362a4;
        case 0x1362a8u: goto label_1362a8;
        case 0x1362acu: goto label_1362ac;
        case 0x1362b0u: goto label_1362b0;
        case 0x1362b4u: goto label_1362b4;
        case 0x1362b8u: goto label_1362b8;
        case 0x1362bcu: goto label_1362bc;
        case 0x1362c0u: goto label_1362c0;
        case 0x1362c4u: goto label_1362c4;
        case 0x1362c8u: goto label_1362c8;
        case 0x1362ccu: goto label_1362cc;
        case 0x1362d0u: goto label_1362d0;
        case 0x1362d4u: goto label_1362d4;
        case 0x1362d8u: goto label_1362d8;
        case 0x1362dcu: goto label_1362dc;
        case 0x1362e0u: goto label_1362e0;
        case 0x1362e4u: goto label_1362e4;
        case 0x1362e8u: goto label_1362e8;
        case 0x1362ecu: goto label_1362ec;
        case 0x1362f0u: goto label_1362f0;
        case 0x1362f4u: goto label_1362f4;
        case 0x1362f8u: goto label_1362f8;
        case 0x1362fcu: goto label_1362fc;
        case 0x136300u: goto label_136300;
        case 0x136304u: goto label_136304;
        case 0x136308u: goto label_136308;
        case 0x13630cu: goto label_13630c;
        case 0x136310u: goto label_136310;
        case 0x136314u: goto label_136314;
        case 0x136318u: goto label_136318;
        case 0x13631cu: goto label_13631c;
        case 0x136320u: goto label_136320;
        case 0x136324u: goto label_136324;
        case 0x136328u: goto label_136328;
        case 0x13632cu: goto label_13632c;
        case 0x136330u: goto label_136330;
        case 0x136334u: goto label_136334;
        case 0x136338u: goto label_136338;
        case 0x13633cu: goto label_13633c;
        case 0x136340u: goto label_136340;
        case 0x136344u: goto label_136344;
        case 0x136348u: goto label_136348;
        case 0x13634cu: goto label_13634c;
        case 0x136350u: goto label_136350;
        case 0x136354u: goto label_136354;
        case 0x136358u: goto label_136358;
        case 0x13635cu: goto label_13635c;
        case 0x136360u: goto label_136360;
        case 0x136364u: goto label_136364;
        case 0x136368u: goto label_136368;
        case 0x13636cu: goto label_13636c;
        case 0x136370u: goto label_136370;
        case 0x136374u: goto label_136374;
        case 0x136378u: goto label_136378;
        case 0x13637cu: goto label_13637c;
        case 0x136380u: goto label_136380;
        case 0x136384u: goto label_136384;
        case 0x136388u: goto label_136388;
        case 0x13638cu: goto label_13638c;
        case 0x136390u: goto label_136390;
        case 0x136394u: goto label_136394;
        case 0x136398u: goto label_136398;
        case 0x13639cu: goto label_13639c;
        case 0x1363a0u: goto label_1363a0;
        case 0x1363a4u: goto label_1363a4;
        case 0x1363a8u: goto label_1363a8;
        case 0x1363acu: goto label_1363ac;
        case 0x1363b0u: goto label_1363b0;
        case 0x1363b4u: goto label_1363b4;
        case 0x1363b8u: goto label_1363b8;
        case 0x1363bcu: goto label_1363bc;
        case 0x1363c0u: goto label_1363c0;
        case 0x1363c4u: goto label_1363c4;
        case 0x1363c8u: goto label_1363c8;
        case 0x1363ccu: goto label_1363cc;
        case 0x1363d0u: goto label_1363d0;
        case 0x1363d4u: goto label_1363d4;
        case 0x1363d8u: goto label_1363d8;
        case 0x1363dcu: goto label_1363dc;
        case 0x1363e0u: goto label_1363e0;
        case 0x1363e4u: goto label_1363e4;
        case 0x1363e8u: goto label_1363e8;
        case 0x1363ecu: goto label_1363ec;
        case 0x1363f0u: goto label_1363f0;
        case 0x1363f4u: goto label_1363f4;
        case 0x1363f8u: goto label_1363f8;
        case 0x1363fcu: goto label_1363fc;
        case 0x136400u: goto label_136400;
        case 0x136404u: goto label_136404;
        case 0x136408u: goto label_136408;
        case 0x13640cu: goto label_13640c;
        case 0x136410u: goto label_136410;
        case 0x136414u: goto label_136414;
        case 0x136418u: goto label_136418;
        case 0x13641cu: goto label_13641c;
        case 0x136420u: goto label_136420;
        case 0x136424u: goto label_136424;
        case 0x136428u: goto label_136428;
        case 0x13642cu: goto label_13642c;
        case 0x136430u: goto label_136430;
        case 0x136434u: goto label_136434;
        case 0x136438u: goto label_136438;
        case 0x13643cu: goto label_13643c;
        case 0x136440u: goto label_136440;
        case 0x136444u: goto label_136444;
        case 0x136448u: goto label_136448;
        case 0x13644cu: goto label_13644c;
        case 0x136450u: goto label_136450;
        case 0x136454u: goto label_136454;
        case 0x136458u: goto label_136458;
        case 0x13645cu: goto label_13645c;
        case 0x136460u: goto label_136460;
        case 0x136464u: goto label_136464;
        case 0x136468u: goto label_136468;
        case 0x13646cu: goto label_13646c;
        case 0x136470u: goto label_136470;
        case 0x136474u: goto label_136474;
        case 0x136478u: goto label_136478;
        case 0x13647cu: goto label_13647c;
        case 0x136480u: goto label_136480;
        case 0x136484u: goto label_136484;
        case 0x136488u: goto label_136488;
        case 0x13648cu: goto label_13648c;
        case 0x136490u: goto label_136490;
        case 0x136494u: goto label_136494;
        case 0x136498u: goto label_136498;
        case 0x13649cu: goto label_13649c;
        case 0x1364a0u: goto label_1364a0;
        case 0x1364a4u: goto label_1364a4;
        case 0x1364a8u: goto label_1364a8;
        case 0x1364acu: goto label_1364ac;
        case 0x1364b0u: goto label_1364b0;
        case 0x1364b4u: goto label_1364b4;
        case 0x1364b8u: goto label_1364b8;
        case 0x1364bcu: goto label_1364bc;
        case 0x1364c0u: goto label_1364c0;
        case 0x1364c4u: goto label_1364c4;
        case 0x1364c8u: goto label_1364c8;
        case 0x1364ccu: goto label_1364cc;
        case 0x1364d0u: goto label_1364d0;
        case 0x1364d4u: goto label_1364d4;
        case 0x1364d8u: goto label_1364d8;
        case 0x1364dcu: goto label_1364dc;
        case 0x1364e0u: goto label_1364e0;
        case 0x1364e4u: goto label_1364e4;
        case 0x1364e8u: goto label_1364e8;
        case 0x1364ecu: goto label_1364ec;
        case 0x1364f0u: goto label_1364f0;
        case 0x1364f4u: goto label_1364f4;
        case 0x1364f8u: goto label_1364f8;
        case 0x1364fcu: goto label_1364fc;
        case 0x136500u: goto label_136500;
        case 0x136504u: goto label_136504;
        case 0x136508u: goto label_136508;
        case 0x13650cu: goto label_13650c;
        case 0x136510u: goto label_136510;
        case 0x136514u: goto label_136514;
        case 0x136518u: goto label_136518;
        case 0x13651cu: goto label_13651c;
        case 0x136520u: goto label_136520;
        case 0x136524u: goto label_136524;
        case 0x136528u: goto label_136528;
        case 0x13652cu: goto label_13652c;
        case 0x136530u: goto label_136530;
        case 0x136534u: goto label_136534;
        case 0x136538u: goto label_136538;
        case 0x13653cu: goto label_13653c;
        default: break;
    }

    ctx->pc = 0x136250u;

label_136250:
    // 0x136250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x136250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_136254:
    // 0x136254: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x136254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_136258:
    // 0x136258: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x136258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_13625c:
    // 0x13625c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13625cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_136260:
    // 0x136260: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x136260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_136264:
    // 0x136264: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x136264u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136268:
    // 0x136268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13626c:
    // 0x13626c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_136270:
    // 0x136270: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_136274:
    // 0x136274: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x136274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_136278:
    // 0x136278: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x136278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_13627c:
    // 0x13627c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13627cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_136280:
    // 0x136280: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x136280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_136284:
    // 0x136284: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x136284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_136288:
    // 0x136288: 0x184000a3  blez        $v0, . + 4 + (0xA3 << 2)
label_13628c:
    if (ctx->pc == 0x13628Cu) {
        ctx->pc = 0x13628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136288u;
        // 0x13628c: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136290u;
        goto label_136290;
    }
    ctx->pc = 0x136288u;
    {
        const bool branch_taken_0x136288 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x13628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136288u;
        // 0x13628c: 0x8c710040  lw          $s1, 0x40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136288) {
            ctx->pc = 0x136518u;
            goto label_136518;
        }
    }
    ctx->pc = 0x136290u;
label_136290:
    // 0x136290: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x136290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_136294:
    // 0x136294: 0x0  nop
    ctx->pc = 0x136294u;
    // NOP
label_136298:
    // 0x136298: 0xc06a26e  jal         func_1A89B8
label_13629c:
    if (ctx->pc == 0x13629Cu) {
        ctx->pc = 0x13629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136298u;
        // 0x13629c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362A0u;
        goto label_1362a0;
    }
    ctx->pc = 0x136298u;
    SET_GPR_U32(ctx, 31, 0x1362A0u);
    ctx->pc = 0x13629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136298u;
    // 0x13629c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x136298u, 0x1362A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1362A0u;
label_1362a0:
    // 0x1362a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1362a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1362a4:
    // 0x1362a4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1362a8:
    if (ctx->pc == 0x1362A8u) {
        ctx->pc = 0x1362A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362A4u;
        // 0x1362a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362ACu;
        goto label_1362ac;
    }
    ctx->pc = 0x1362A4u;
    {
        const bool branch_taken_0x1362a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1362A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362A4u;
        // 0x1362a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362a4) {
            ctx->pc = 0x1362B4u;
            goto label_1362b4;
        }
    }
    ctx->pc = 0x1362ACu;
label_1362ac:
    // 0x1362ac: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1362acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1362b0:
    // 0x1362b0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1362b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1362b4:
    // 0x1362b4: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x1362b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1362b8:
    // 0x1362b8: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
label_1362bc:
    if (ctx->pc == 0x1362BCu) {
        ctx->pc = 0x1362BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362B8u;
        // 0x1362bc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362C0u;
        goto label_1362c0;
    }
    ctx->pc = 0x1362B8u;
    {
        const bool branch_taken_0x1362b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1362BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362B8u;
        // 0x1362bc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362b8) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x1362C0u;
label_1362c0:
    // 0x1362c0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1362c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_1362c4:
    // 0x1362c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1362c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1362c8:
    // 0x1362c8: 0x8c636710  lw          $v1, 0x6710($v1)
    ctx->pc = 0x1362c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26384)));
label_1362cc:
    // 0x1362cc: 0x600008  jr          $v1
label_1362d0:
    if (ctx->pc == 0x1362D0u) {
        ctx->pc = 0x1362D4u;
        goto label_1362d4;
    }
    ctx->pc = 0x1362CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1362D8u: goto label_1362d8;
            case 0x1363D0u: goto label_1363d0;
            case 0x136470u: goto label_136470;
            case 0x136478u: goto label_136478;
            case 0x136480u: goto label_136480;
            case 0x136488u: goto label_136488;
            case 0x136490u: goto label_136490;
            case 0x136498u: goto label_136498;
            case 0x1364A0u: goto label_1364a0;
            case 0x1364A8u: goto label_1364a8;
            case 0x1364B0u: goto label_1364b0;
            case 0x1364B8u: goto label_1364b8;
            case 0x1364C0u: goto label_1364c0;
            case 0x1364C8u: goto label_1364c8;
            case 0x1364D0u: goto label_1364d0;
            case 0x1364D8u: goto label_1364d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1362CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1362D4u;
label_1362d4:
    // 0x1362d4: 0x0  nop
    ctx->pc = 0x1362d4u;
    // NOP
label_1362d8:
    // 0x1362d8: 0x8e900024  lw          $s0, 0x24($s4)
    ctx->pc = 0x1362d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1362dc:
    // 0x1362dc: 0x3c130080  lui         $s3, 0x80
    ctx->pc = 0x1362dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)128 << 16));
label_1362e0:
    // 0x1362e0: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1362e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1362e4:
    // 0x1362e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1362e8:
    if (ctx->pc == 0x1362E8u) {
        ctx->pc = 0x1362E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362E4u;
        // 0x1362e8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1362ECu;
        goto label_1362ec;
    }
    ctx->pc = 0x1362E4u;
    {
        const bool branch_taken_0x1362e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1362E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362E4u;
        // 0x1362e8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362e4) {
            ctx->pc = 0x136304u;
            goto label_136304;
        }
    }
    ctx->pc = 0x1362ECu;
label_1362ec:
    // 0x1362ec: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1362ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1362f0:
    // 0x1362f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1362f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1362f4:
    // 0x1362f4: 0x24a563b8  addiu       $a1, $a1, 0x63B8
    ctx->pc = 0x1362f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25528));
label_1362f8:
    // 0x1362f8: 0xc068186  jal         func_1A0618
label_1362fc:
    if (ctx->pc == 0x1362FCu) {
        ctx->pc = 0x1362FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1362F8u;
        // 0x1362fc: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136300u;
        goto label_136300;
    }
    ctx->pc = 0x1362F8u;
    SET_GPR_U32(ctx, 31, 0x136300u);
    ctx->pc = 0x1362FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1362F8u;
    // 0x1362fc: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1362F8u, 0x136300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136300u;
label_136300:
    // 0x136300: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x136300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_136304:
    // 0x136304: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x136304u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_136308:
    // 0x136308: 0x12000074  beqz        $s0, . + 4 + (0x74 << 2)
label_13630c:
    if (ctx->pc == 0x13630Cu) {
        ctx->pc = 0x136310u;
        goto label_136310;
    }
    ctx->pc = 0x136308u;
    {
        const bool branch_taken_0x136308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x136308) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x136310u;
label_136310:
    // 0x136310: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x136310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_136314:
    // 0x136314: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_136318:
    if (ctx->pc == 0x136318u) {
        ctx->pc = 0x136318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136314u;
        // 0x136318: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13631Cu;
        goto label_13631c;
    }
    ctx->pc = 0x136314u;
    {
        const bool branch_taken_0x136314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136314) {
            ctx->pc = 0x136318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136314u;
            // 0x136318: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13637Cu;
            goto label_13637c;
        }
    }
    ctx->pc = 0x13631Cu;
label_13631c:
    // 0x13631c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x13631cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_136320:
    // 0x136320: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x136320u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_136324:
    // 0x136324: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x136324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_136328:
    // 0x136328: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_13632c:
    if (ctx->pc == 0x13632Cu) {
        ctx->pc = 0x13632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136328u;
        // 0x13632c: 0x3c120010  lui         $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136330u;
        goto label_136330;
    }
    ctx->pc = 0x136328u;
    {
        const bool branch_taken_0x136328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136328u;
        // 0x13632c: 0x3c120010  lui         $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136328) {
            ctx->pc = 0x136378u;
            goto label_136378;
        }
    }
    ctx->pc = 0x136330u;
label_136330:
    // 0x136330: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x136330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_136334:
    // 0x136334: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x136334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_136338:
    // 0x136338: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_13633c:
    if (ctx->pc == 0x13633Cu) {
        ctx->pc = 0x13633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136338u;
        // 0x13633c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136340u;
        goto label_136340;
    }
    ctx->pc = 0x136338u;
    {
        const bool branch_taken_0x136338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136338) {
            ctx->pc = 0x13633Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136338u;
            // 0x13633c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13635Cu;
            goto label_13635c;
        }
    }
    ctx->pc = 0x136340u;
label_136340:
    // 0x136340: 0x260401fc  addiu       $a0, $s0, 0x1FC
    ctx->pc = 0x136340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 508));
label_136344:
    // 0x136344: 0xc0683b6  jal         func_1A0ED8
label_136348:
    if (ctx->pc == 0x136348u) {
        ctx->pc = 0x136348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136344u;
        // 0x136348: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13634Cu;
        goto label_13634c;
    }
    ctx->pc = 0x136344u;
    SET_GPR_U32(ctx, 31, 0x13634Cu);
    ctx->pc = 0x136348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136344u;
    // 0x136348: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x136344u, 0x13634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13634Cu;
label_13634c:
    // 0x13634c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x13634cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_136350:
    // 0x136350: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x136350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_136354:
    // 0x136354: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x136354u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_136358:
    // 0x136358: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x136358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_13635c:
    // 0x13635c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13635cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_136360:
    // 0x136360: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x136360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136364:
    // 0x136364: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x136364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_136368:
    // 0x136368: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x136368u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13636c:
    // 0x13636c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_136370:
    // 0x136370: 0x60f809  jalr        $v1
label_136374:
    if (ctx->pc == 0x136374u) {
        ctx->pc = 0x136374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136370u;
        // 0x136374: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136378u;
        goto label_136378;
    }
    ctx->pc = 0x136370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x136378u);
        ctx->pc = 0x136374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136370u;
        // 0x136374: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136370u, 0x136378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x136378u;
label_136378:
    // 0x136378: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x136378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13637c:
    // 0x13637c: 0x3c120008  lui         $s2, 0x8
    ctx->pc = 0x13637cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8 << 16));
label_136380:
    // 0x136380: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x136380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_136384:
    // 0x136384: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_136388:
    if (ctx->pc == 0x136388u) {
        ctx->pc = 0x136388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136384u;
        // 0x136388: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13638Cu;
        goto label_13638c;
    }
    ctx->pc = 0x136384u;
    {
        const bool branch_taken_0x136384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136384) {
            ctx->pc = 0x136388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136384u;
            // 0x136388: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1363A8u;
            goto label_1363a8;
        }
    }
    ctx->pc = 0x13638Cu;
label_13638c:
    // 0x13638c: 0x26040200  addiu       $a0, $s0, 0x200
    ctx->pc = 0x13638cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_136390:
    // 0x136390: 0xc0683b6  jal         func_1A0ED8
label_136394:
    if (ctx->pc == 0x136394u) {
        ctx->pc = 0x136394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136390u;
        // 0x136394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136398u;
        goto label_136398;
    }
    ctx->pc = 0x136390u;
    SET_GPR_U32(ctx, 31, 0x136398u);
    ctx->pc = 0x136394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136390u;
    // 0x136394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0ED8u, 0x136390u, 0x136398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136398u;
label_136398:
    // 0x136398: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x136398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13639c:
    // 0x13639c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x13639cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
label_1363a0:
    // 0x1363a0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1363a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_1363a4:
    // 0x1363a4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1363a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1363a8:
    // 0x1363a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1363a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1363ac:
    // 0x1363ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1363acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1363b0:
    // 0x1363b0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x1363b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_1363b4:
    // 0x1363b4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1363b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1363b8:
    // 0x1363b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1363b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1363bc:
    // 0x1363bc: 0x60f809  jalr        $v1
label_1363c0:
    if (ctx->pc == 0x1363C0u) {
        ctx->pc = 0x1363C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363BCu;
        // 0x1363c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1363C4u;
        goto label_1363c4;
    }
    ctx->pc = 0x1363BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1363C4u);
        ctx->pc = 0x1363C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363BCu;
        // 0x1363c0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1363BCu, 0x1363C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1363C4u;
label_1363c4:
    // 0x1363c4: 0x10000045  b           . + 4 + (0x45 << 2)
label_1363c8:
    if (ctx->pc == 0x1363C8u) {
        ctx->pc = 0x1363CCu;
        goto label_1363cc;
    }
    ctx->pc = 0x1363C4u;
    {
        const bool branch_taken_0x1363c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1363c4) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x1363CCu;
label_1363cc:
    // 0x1363cc: 0x0  nop
    ctx->pc = 0x1363ccu;
    // NOP
label_1363d0:
    // 0x1363d0: 0x8e900024  lw          $s0, 0x24($s4)
    ctx->pc = 0x1363d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_1363d4:
    // 0x1363d4: 0x3c130080  lui         $s3, 0x80
    ctx->pc = 0x1363d4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)128 << 16));
label_1363d8:
    // 0x1363d8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1363d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1363dc:
    // 0x1363dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1363e0:
    if (ctx->pc == 0x1363E0u) {
        ctx->pc = 0x1363E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363DCu;
        // 0x1363e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1363E4u;
        goto label_1363e4;
    }
    ctx->pc = 0x1363DCu;
    {
        const bool branch_taken_0x1363dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1363E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363DCu;
        // 0x1363e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1363dc) {
            ctx->pc = 0x1363FCu;
            goto label_1363fc;
        }
    }
    ctx->pc = 0x1363E4u;
label_1363e4:
    // 0x1363e4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1363e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_1363e8:
    // 0x1363e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1363e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1363ec:
    // 0x1363ec: 0x24a563b8  addiu       $a1, $a1, 0x63B8
    ctx->pc = 0x1363ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25528));
label_1363f0:
    // 0x1363f0: 0xc068186  jal         func_1A0618
label_1363f4:
    if (ctx->pc == 0x1363F4u) {
        ctx->pc = 0x1363F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1363F0u;
        // 0x1363f4: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1363F8u;
        goto label_1363f8;
    }
    ctx->pc = 0x1363F0u;
    SET_GPR_U32(ctx, 31, 0x1363F8u);
    ctx->pc = 0x1363F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1363F0u;
    // 0x1363f4: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1363F0u, 0x1363F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1363F8u;
label_1363f8:
    // 0x1363f8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1363f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1363fc:
    // 0x1363fc: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x1363fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_136400:
    // 0x136400: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_136404:
    if (ctx->pc == 0x136404u) {
        ctx->pc = 0x136404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136400u;
        // 0x136404: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136408u;
        goto label_136408;
    }
    ctx->pc = 0x136400u;
    {
        const bool branch_taken_0x136400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x136404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136400u;
        // 0x136404: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136400) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x136408u;
label_136408:
    // 0x136408: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x136408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13640c:
    // 0x13640c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13640cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_136410:
    // 0x136410: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_136414:
    if (ctx->pc == 0x136414u) {
        ctx->pc = 0x136414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136410u;
        // 0x136414: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136418u;
        goto label_136418;
    }
    ctx->pc = 0x136410u;
    {
        const bool branch_taken_0x136410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x136410) {
            ctx->pc = 0x136414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136410u;
            // 0x136414: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13643Cu;
            goto label_13643c;
        }
    }
    ctx->pc = 0x136418u;
label_136418:
    // 0x136418: 0x260401fc  addiu       $a0, $s0, 0x1FC
    ctx->pc = 0x136418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 508));
label_13641c:
    // 0x13641c: 0xc068436  jal         func_1A10D8
label_136420:
    if (ctx->pc == 0x136420u) {
        ctx->pc = 0x136420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13641Cu;
        // 0x136420: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136424u;
        goto label_136424;
    }
    ctx->pc = 0x13641Cu;
    SET_GPR_U32(ctx, 31, 0x136424u);
    ctx->pc = 0x136420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13641Cu;
    // 0x136420: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x13641Cu, 0x136424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136424u;
label_136424:
    // 0x136424: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x136424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_136428:
    // 0x136428: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x136428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13642c:
    // 0x13642c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13642cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_136430:
    // 0x136430: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x136430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_136434:
    // 0x136434: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x136434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_136438:
    // 0x136438: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x136438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13643c:
    // 0x13643c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x13643cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_136440:
    // 0x136440: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x136440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_136444:
    // 0x136444: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_136448:
    if (ctx->pc == 0x136448u) {
        ctx->pc = 0x136448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136444u;
        // 0x136448: 0x26040200  addiu       $a0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13644Cu;
        goto label_13644c;
    }
    ctx->pc = 0x136444u;
    {
        const bool branch_taken_0x136444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x136448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136444u;
        // 0x136448: 0x26040200  addiu       $a0, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136444) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x13644Cu;
label_13644c:
    // 0x13644c: 0xc068436  jal         func_1A10D8
label_136450:
    if (ctx->pc == 0x136450u) {
        ctx->pc = 0x136450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13644Cu;
        // 0x136450: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136454u;
        goto label_136454;
    }
    ctx->pc = 0x13644Cu;
    SET_GPR_U32(ctx, 31, 0x136454u);
    ctx->pc = 0x136450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13644Cu;
    // 0x136450: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A10D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A10D8u, 0x13644Cu, 0x136454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136454u;
label_136454:
    // 0x136454: 0x3c02fff7  lui         $v0, 0xFFF7
    ctx->pc = 0x136454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65527 << 16));
label_136458:
    // 0x136458: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x136458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_13645c:
    // 0x13645c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13645cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_136460:
    // 0x136460: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x136460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_136464:
    // 0x136464: 0x1000001d  b           . + 4 + (0x1D << 2)
label_136468:
    if (ctx->pc == 0x136468u) {
        ctx->pc = 0x136468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136464u;
        // 0x136468: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13646Cu;
        goto label_13646c;
    }
    ctx->pc = 0x136464u;
    {
        const bool branch_taken_0x136464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136464u;
        // 0x136468: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136464) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x13646Cu;
label_13646c:
    // 0x13646c: 0x0  nop
    ctx->pc = 0x13646cu;
    // NOP
label_136470:
    // 0x136470: 0x1000001a  b           . + 4 + (0x1A << 2)
label_136474:
    if (ctx->pc == 0x136474u) {
        ctx->pc = 0x136474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136470u;
        // 0x136474: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136478u;
        goto label_136478;
    }
    ctx->pc = 0x136470u;
    {
        const bool branch_taken_0x136470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136470u;
        // 0x136474: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136470) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x136478u;
label_136478:
    // 0x136478: 0x10000018  b           . + 4 + (0x18 << 2)
label_13647c:
    if (ctx->pc == 0x13647Cu) {
        ctx->pc = 0x13647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136478u;
        // 0x13647c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136480u;
        goto label_136480;
    }
    ctx->pc = 0x136478u;
    {
        const bool branch_taken_0x136478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136478u;
        // 0x13647c: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136478) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x136480u;
label_136480:
    // 0x136480: 0x10000016  b           . + 4 + (0x16 << 2)
label_136484:
    if (ctx->pc == 0x136484u) {
        ctx->pc = 0x136484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136480u;
        // 0x136484: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136488u;
        goto label_136488;
    }
    ctx->pc = 0x136480u;
    {
        const bool branch_taken_0x136480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136480u;
        // 0x136484: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136480) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x136488u;
label_136488:
    // 0x136488: 0x10000014  b           . + 4 + (0x14 << 2)
label_13648c:
    if (ctx->pc == 0x13648Cu) {
        ctx->pc = 0x13648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136488u;
        // 0x13648c: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136490u;
        goto label_136490;
    }
    ctx->pc = 0x136488u;
    {
        const bool branch_taken_0x136488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136488u;
        // 0x13648c: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136488) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x136490u;
label_136490:
    // 0x136490: 0x10000012  b           . + 4 + (0x12 << 2)
label_136494:
    if (ctx->pc == 0x136494u) {
        ctx->pc = 0x136494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136490u;
        // 0x136494: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136498u;
        goto label_136498;
    }
    ctx->pc = 0x136490u;
    {
        const bool branch_taken_0x136490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136490u;
        // 0x136494: 0x24130010  addiu       $s3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136490) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x136498u;
label_136498:
    // 0x136498: 0x10000010  b           . + 4 + (0x10 << 2)
label_13649c:
    if (ctx->pc == 0x13649Cu) {
        ctx->pc = 0x13649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136498u;
        // 0x13649c: 0x3c130008  lui         $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1364A0u;
        goto label_1364a0;
    }
    ctx->pc = 0x136498u;
    {
        const bool branch_taken_0x136498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136498u;
        // 0x13649c: 0x3c130008  lui         $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136498) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x1364A0u;
label_1364a0:
    // 0x1364a0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1364a4:
    if (ctx->pc == 0x1364A4u) {
        ctx->pc = 0x1364A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364A0u;
        // 0x1364a4: 0x24130100  addiu       $s3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1364A8u;
        goto label_1364a8;
    }
    ctx->pc = 0x1364A0u;
    {
        const bool branch_taken_0x1364a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364A0u;
        // 0x1364a4: 0x24130100  addiu       $s3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364a0) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x1364A8u;
label_1364a8:
    // 0x1364a8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1364ac:
    if (ctx->pc == 0x1364ACu) {
        ctx->pc = 0x1364ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364A8u;
        // 0x1364ac: 0x24130200  addiu       $s3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1364B0u;
        goto label_1364b0;
    }
    ctx->pc = 0x1364A8u;
    {
        const bool branch_taken_0x1364a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364A8u;
        // 0x1364ac: 0x24130200  addiu       $s3, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364a8) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x1364B0u;
label_1364b0:
    // 0x1364b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1364b4:
    if (ctx->pc == 0x1364B4u) {
        ctx->pc = 0x1364B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364B0u;
        // 0x1364b4: 0x24130400  addiu       $s3, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1364B8u;
        goto label_1364b8;
    }
    ctx->pc = 0x1364B0u;
    {
        const bool branch_taken_0x1364b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364B0u;
        // 0x1364b4: 0x24130400  addiu       $s3, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364b0) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x1364B8u;
label_1364b8:
    // 0x1364b8: 0x10000008  b           . + 4 + (0x8 << 2)
label_1364bc:
    if (ctx->pc == 0x1364BCu) {
        ctx->pc = 0x1364BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364B8u;
        // 0x1364bc: 0x24130800  addiu       $s3, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1364C0u;
        goto label_1364c0;
    }
    ctx->pc = 0x1364B8u;
    {
        const bool branch_taken_0x1364b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364B8u;
        // 0x1364bc: 0x24130800  addiu       $s3, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364b8) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x1364C0u;
label_1364c0:
    // 0x1364c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1364c4:
    if (ctx->pc == 0x1364C4u) {
        ctx->pc = 0x1364C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364C0u;
        // 0x1364c4: 0x24131000  addiu       $s3, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1364C8u;
        goto label_1364c8;
    }
    ctx->pc = 0x1364C0u;
    {
        const bool branch_taken_0x1364c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364C0u;
        // 0x1364c4: 0x24131000  addiu       $s3, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364c0) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x1364C8u;
label_1364c8:
    // 0x1364c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1364cc:
    if (ctx->pc == 0x1364CCu) {
        ctx->pc = 0x1364CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364C8u;
        // 0x1364cc: 0x3c130004  lui         $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1364D0u;
        goto label_1364d0;
    }
    ctx->pc = 0x1364C8u;
    {
        const bool branch_taken_0x1364c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364C8u;
        // 0x1364cc: 0x3c130004  lui         $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364c8) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x1364D0u;
label_1364d0:
    // 0x1364d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1364d4:
    if (ctx->pc == 0x1364D4u) {
        ctx->pc = 0x1364D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364D0u;
        // 0x1364d4: 0x3c130020  lui         $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1364D8u;
        goto label_1364d8;
    }
    ctx->pc = 0x1364D0u;
    {
        const bool branch_taken_0x1364d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364D0u;
        // 0x1364d4: 0x3c130020  lui         $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364d0) {
            ctx->pc = 0x1364DCu;
            goto label_1364dc;
        }
    }
    ctx->pc = 0x1364D8u;
label_1364d8:
    // 0x1364d8: 0x3c130010  lui         $s3, 0x10
    ctx->pc = 0x1364d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16 << 16));
label_1364dc:
    // 0x1364dc: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_1364e0:
    if (ctx->pc == 0x1364E0u) {
        ctx->pc = 0x1364E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364DCu;
        // 0x1364e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1364E4u;
        goto label_1364e4;
    }
    ctx->pc = 0x1364DCu;
    {
        const bool branch_taken_0x1364dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364DCu;
        // 0x1364e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364dc) {
            ctx->pc = 0x136504u;
            goto label_136504;
        }
    }
    ctx->pc = 0x1364E4u;
label_1364e4:
    // 0x1364e4: 0x16a20004  bne         $s5, $v0, . + 4 + (0x4 << 2)
label_1364e8:
    if (ctx->pc == 0x1364E8u) {
        ctx->pc = 0x1364E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364E4u;
        // 0x1364e8: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1364ECu;
        goto label_1364ec;
    }
    ctx->pc = 0x1364E4u;
    {
        const bool branch_taken_0x1364e4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x1364E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364E4u;
        // 0x1364e8: 0x8e2200d4  lw          $v0, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364e4) {
            ctx->pc = 0x1364F8u;
            goto label_1364f8;
        }
    }
    ctx->pc = 0x1364ECu;
label_1364ec:
    // 0x1364ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1364f0:
    if (ctx->pc == 0x1364F0u) {
        ctx->pc = 0x1364F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364ECu;
        // 0x1364f0: 0x531025  or          $v0, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1364F4u;
        goto label_1364f4;
    }
    ctx->pc = 0x1364ECu;
    {
        const bool branch_taken_0x1364ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364ECu;
        // 0x1364f0: 0x531025  or          $v0, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364ec) {
            ctx->pc = 0x136500u;
            goto label_136500;
        }
    }
    ctx->pc = 0x1364F4u;
label_1364f4:
    // 0x1364f4: 0x0  nop
    ctx->pc = 0x1364f4u;
    // NOP
label_1364f8:
    // 0x1364f8: 0x131827  nor         $v1, $zero, $s3
    ctx->pc = 0x1364f8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
label_1364fc:
    // 0x1364fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1364fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_136500:
    // 0x136500: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x136500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_136504:
    // 0x136504: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x136504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_136508:
    // 0x136508: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x136508u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_13650c:
    // 0x13650c: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x13650cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_136510:
    // 0x136510: 0x1440ff61  bnez        $v0, . + 4 + (-0x9F << 2)
label_136514:
    if (ctx->pc == 0x136514u) {
        ctx->pc = 0x136514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136510u;
        // 0x136514: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136518u;
        goto label_136518;
    }
    ctx->pc = 0x136510u;
    {
        const bool branch_taken_0x136510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x136514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136510u;
        // 0x136514: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136510) {
            ctx->pc = 0x136298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136298;
        }
    }
    ctx->pc = 0x136518u;
label_136518:
    // 0x136518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13651c:
    // 0x13651c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13651cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_136520:
    // 0x136520: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x136520u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_136524:
    // 0x136524: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x136524u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_136528:
    // 0x136528: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x136528u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13652c:
    // 0x13652c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x13652cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_136530:
    // 0x136530: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x136530u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_136534:
    // 0x136534: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x136534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_136538:
    // 0x136538: 0x3e00008  jr          $ra
label_13653c:
    if (ctx->pc == 0x13653Cu) {
        ctx->pc = 0x13653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136538u;
        // 0x13653c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x136540u;
        goto label_fallthrough_0x136538;
    }
    ctx->pc = 0x136538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136538u;
        // 0x13653c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x136538:
    ctx->pc = 0x136540u;
}
