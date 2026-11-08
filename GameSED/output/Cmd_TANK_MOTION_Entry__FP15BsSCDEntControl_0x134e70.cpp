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

// Function: Cmd_TANK_MOTION_Entry__FP15BsSCDEntControl
// Address: 0x134e70 - 0x135214
void Cmd_TANK_MOTION_Entry__FP15BsSCDEntControl_0x134e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_TANK_MOTION_Entry__FP15BsSCDEntControl_0x134e70");
#endif

    switch (ctx->pc) {
        case 0x134e70u: goto label_134e70;
        case 0x134e74u: goto label_134e74;
        case 0x134e78u: goto label_134e78;
        case 0x134e7cu: goto label_134e7c;
        case 0x134e80u: goto label_134e80;
        case 0x134e84u: goto label_134e84;
        case 0x134e88u: goto label_134e88;
        case 0x134e8cu: goto label_134e8c;
        case 0x134e90u: goto label_134e90;
        case 0x134e94u: goto label_134e94;
        case 0x134e98u: goto label_134e98;
        case 0x134e9cu: goto label_134e9c;
        case 0x134ea0u: goto label_134ea0;
        case 0x134ea4u: goto label_134ea4;
        case 0x134ea8u: goto label_134ea8;
        case 0x134eacu: goto label_134eac;
        case 0x134eb0u: goto label_134eb0;
        case 0x134eb4u: goto label_134eb4;
        case 0x134eb8u: goto label_134eb8;
        case 0x134ebcu: goto label_134ebc;
        case 0x134ec0u: goto label_134ec0;
        case 0x134ec4u: goto label_134ec4;
        case 0x134ec8u: goto label_134ec8;
        case 0x134eccu: goto label_134ecc;
        case 0x134ed0u: goto label_134ed0;
        case 0x134ed4u: goto label_134ed4;
        case 0x134ed8u: goto label_134ed8;
        case 0x134edcu: goto label_134edc;
        case 0x134ee0u: goto label_134ee0;
        case 0x134ee4u: goto label_134ee4;
        case 0x134ee8u: goto label_134ee8;
        case 0x134eecu: goto label_134eec;
        case 0x134ef0u: goto label_134ef0;
        case 0x134ef4u: goto label_134ef4;
        case 0x134ef8u: goto label_134ef8;
        case 0x134efcu: goto label_134efc;
        case 0x134f00u: goto label_134f00;
        case 0x134f04u: goto label_134f04;
        case 0x134f08u: goto label_134f08;
        case 0x134f0cu: goto label_134f0c;
        case 0x134f10u: goto label_134f10;
        case 0x134f14u: goto label_134f14;
        case 0x134f18u: goto label_134f18;
        case 0x134f1cu: goto label_134f1c;
        case 0x134f20u: goto label_134f20;
        case 0x134f24u: goto label_134f24;
        case 0x134f28u: goto label_134f28;
        case 0x134f2cu: goto label_134f2c;
        case 0x134f30u: goto label_134f30;
        case 0x134f34u: goto label_134f34;
        case 0x134f38u: goto label_134f38;
        case 0x134f3cu: goto label_134f3c;
        case 0x134f40u: goto label_134f40;
        case 0x134f44u: goto label_134f44;
        case 0x134f48u: goto label_134f48;
        case 0x134f4cu: goto label_134f4c;
        case 0x134f50u: goto label_134f50;
        case 0x134f54u: goto label_134f54;
        case 0x134f58u: goto label_134f58;
        case 0x134f5cu: goto label_134f5c;
        case 0x134f60u: goto label_134f60;
        case 0x134f64u: goto label_134f64;
        case 0x134f68u: goto label_134f68;
        case 0x134f6cu: goto label_134f6c;
        case 0x134f70u: goto label_134f70;
        case 0x134f74u: goto label_134f74;
        case 0x134f78u: goto label_134f78;
        case 0x134f7cu: goto label_134f7c;
        case 0x134f80u: goto label_134f80;
        case 0x134f84u: goto label_134f84;
        case 0x134f88u: goto label_134f88;
        case 0x134f8cu: goto label_134f8c;
        case 0x134f90u: goto label_134f90;
        case 0x134f94u: goto label_134f94;
        case 0x134f98u: goto label_134f98;
        case 0x134f9cu: goto label_134f9c;
        case 0x134fa0u: goto label_134fa0;
        case 0x134fa4u: goto label_134fa4;
        case 0x134fa8u: goto label_134fa8;
        case 0x134facu: goto label_134fac;
        case 0x134fb0u: goto label_134fb0;
        case 0x134fb4u: goto label_134fb4;
        case 0x134fb8u: goto label_134fb8;
        case 0x134fbcu: goto label_134fbc;
        case 0x134fc0u: goto label_134fc0;
        case 0x134fc4u: goto label_134fc4;
        case 0x134fc8u: goto label_134fc8;
        case 0x134fccu: goto label_134fcc;
        case 0x134fd0u: goto label_134fd0;
        case 0x134fd4u: goto label_134fd4;
        case 0x134fd8u: goto label_134fd8;
        case 0x134fdcu: goto label_134fdc;
        case 0x134fe0u: goto label_134fe0;
        case 0x134fe4u: goto label_134fe4;
        case 0x134fe8u: goto label_134fe8;
        case 0x134fecu: goto label_134fec;
        case 0x134ff0u: goto label_134ff0;
        case 0x134ff4u: goto label_134ff4;
        case 0x134ff8u: goto label_134ff8;
        case 0x134ffcu: goto label_134ffc;
        case 0x135000u: goto label_135000;
        case 0x135004u: goto label_135004;
        case 0x135008u: goto label_135008;
        case 0x13500cu: goto label_13500c;
        case 0x135010u: goto label_135010;
        case 0x135014u: goto label_135014;
        case 0x135018u: goto label_135018;
        case 0x13501cu: goto label_13501c;
        case 0x135020u: goto label_135020;
        case 0x135024u: goto label_135024;
        case 0x135028u: goto label_135028;
        case 0x13502cu: goto label_13502c;
        case 0x135030u: goto label_135030;
        case 0x135034u: goto label_135034;
        case 0x135038u: goto label_135038;
        case 0x13503cu: goto label_13503c;
        case 0x135040u: goto label_135040;
        case 0x135044u: goto label_135044;
        case 0x135048u: goto label_135048;
        case 0x13504cu: goto label_13504c;
        case 0x135050u: goto label_135050;
        case 0x135054u: goto label_135054;
        case 0x135058u: goto label_135058;
        case 0x13505cu: goto label_13505c;
        case 0x135060u: goto label_135060;
        case 0x135064u: goto label_135064;
        case 0x135068u: goto label_135068;
        case 0x13506cu: goto label_13506c;
        case 0x135070u: goto label_135070;
        case 0x135074u: goto label_135074;
        case 0x135078u: goto label_135078;
        case 0x13507cu: goto label_13507c;
        case 0x135080u: goto label_135080;
        case 0x135084u: goto label_135084;
        case 0x135088u: goto label_135088;
        case 0x13508cu: goto label_13508c;
        case 0x135090u: goto label_135090;
        case 0x135094u: goto label_135094;
        case 0x135098u: goto label_135098;
        case 0x13509cu: goto label_13509c;
        case 0x1350a0u: goto label_1350a0;
        case 0x1350a4u: goto label_1350a4;
        case 0x1350a8u: goto label_1350a8;
        case 0x1350acu: goto label_1350ac;
        case 0x1350b0u: goto label_1350b0;
        case 0x1350b4u: goto label_1350b4;
        case 0x1350b8u: goto label_1350b8;
        case 0x1350bcu: goto label_1350bc;
        case 0x1350c0u: goto label_1350c0;
        case 0x1350c4u: goto label_1350c4;
        case 0x1350c8u: goto label_1350c8;
        case 0x1350ccu: goto label_1350cc;
        case 0x1350d0u: goto label_1350d0;
        case 0x1350d4u: goto label_1350d4;
        case 0x1350d8u: goto label_1350d8;
        case 0x1350dcu: goto label_1350dc;
        case 0x1350e0u: goto label_1350e0;
        case 0x1350e4u: goto label_1350e4;
        case 0x1350e8u: goto label_1350e8;
        case 0x1350ecu: goto label_1350ec;
        case 0x1350f0u: goto label_1350f0;
        case 0x1350f4u: goto label_1350f4;
        case 0x1350f8u: goto label_1350f8;
        case 0x1350fcu: goto label_1350fc;
        case 0x135100u: goto label_135100;
        case 0x135104u: goto label_135104;
        case 0x135108u: goto label_135108;
        case 0x13510cu: goto label_13510c;
        case 0x135110u: goto label_135110;
        case 0x135114u: goto label_135114;
        case 0x135118u: goto label_135118;
        case 0x13511cu: goto label_13511c;
        case 0x135120u: goto label_135120;
        case 0x135124u: goto label_135124;
        case 0x135128u: goto label_135128;
        case 0x13512cu: goto label_13512c;
        case 0x135130u: goto label_135130;
        case 0x135134u: goto label_135134;
        case 0x135138u: goto label_135138;
        case 0x13513cu: goto label_13513c;
        case 0x135140u: goto label_135140;
        case 0x135144u: goto label_135144;
        case 0x135148u: goto label_135148;
        case 0x13514cu: goto label_13514c;
        case 0x135150u: goto label_135150;
        case 0x135154u: goto label_135154;
        case 0x135158u: goto label_135158;
        case 0x13515cu: goto label_13515c;
        case 0x135160u: goto label_135160;
        case 0x135164u: goto label_135164;
        case 0x135168u: goto label_135168;
        case 0x13516cu: goto label_13516c;
        case 0x135170u: goto label_135170;
        case 0x135174u: goto label_135174;
        case 0x135178u: goto label_135178;
        case 0x13517cu: goto label_13517c;
        case 0x135180u: goto label_135180;
        case 0x135184u: goto label_135184;
        case 0x135188u: goto label_135188;
        case 0x13518cu: goto label_13518c;
        case 0x135190u: goto label_135190;
        case 0x135194u: goto label_135194;
        case 0x135198u: goto label_135198;
        case 0x13519cu: goto label_13519c;
        case 0x1351a0u: goto label_1351a0;
        case 0x1351a4u: goto label_1351a4;
        case 0x1351a8u: goto label_1351a8;
        case 0x1351acu: goto label_1351ac;
        case 0x1351b0u: goto label_1351b0;
        case 0x1351b4u: goto label_1351b4;
        case 0x1351b8u: goto label_1351b8;
        case 0x1351bcu: goto label_1351bc;
        case 0x1351c0u: goto label_1351c0;
        case 0x1351c4u: goto label_1351c4;
        case 0x1351c8u: goto label_1351c8;
        case 0x1351ccu: goto label_1351cc;
        case 0x1351d0u: goto label_1351d0;
        case 0x1351d4u: goto label_1351d4;
        case 0x1351d8u: goto label_1351d8;
        case 0x1351dcu: goto label_1351dc;
        case 0x1351e0u: goto label_1351e0;
        case 0x1351e4u: goto label_1351e4;
        case 0x1351e8u: goto label_1351e8;
        case 0x1351ecu: goto label_1351ec;
        case 0x1351f0u: goto label_1351f0;
        case 0x1351f4u: goto label_1351f4;
        case 0x1351f8u: goto label_1351f8;
        case 0x1351fcu: goto label_1351fc;
        case 0x135200u: goto label_135200;
        case 0x135204u: goto label_135204;
        case 0x135208u: goto label_135208;
        case 0x13520cu: goto label_13520c;
        case 0x135210u: goto label_135210;
        default: break;
    }

    ctx->pc = 0x134e70u;

label_134e70:
    // 0x134e70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_134e74:
    // 0x134e74: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x134e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_134e78:
    // 0x134e78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x134e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_134e7c:
    // 0x134e7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x134e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_134e80:
    // 0x134e80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x134e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_134e84:
    // 0x134e84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_134e88:
    // 0x134e88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x134e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_134e8c:
    // 0x134e8c: 0x8c62b830  lw          $v0, -0x47D0($v1)
    ctx->pc = 0x134e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948912)));
label_134e90:
    // 0x134e90: 0xc06a26e  jal         func_1A89B8
label_134e94:
    if (ctx->pc == 0x134E94u) {
        ctx->pc = 0x134E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E90u;
        // 0x134e94: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134E98u;
        goto label_134e98;
    }
    ctx->pc = 0x134E90u;
    SET_GPR_U32(ctx, 31, 0x134E98u);
    ctx->pc = 0x134E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134E90u;
    // 0x134e94: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134E90u, 0x134E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134E98u;
label_134e98:
    // 0x134e98: 0x120000d8  beqz        $s0, . + 4 + (0xD8 << 2)
label_134e9c:
    if (ctx->pc == 0x134E9Cu) {
        ctx->pc = 0x134E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E98u;
        // 0x134e9c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134EA0u;
        goto label_134ea0;
    }
    ctx->pc = 0x134E98u;
    {
        const bool branch_taken_0x134e98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E98u;
        // 0x134e9c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e98) {
            ctx->pc = 0x1351FCu;
            goto label_1351fc;
        }
    }
    ctx->pc = 0x134EA0u;
label_134ea0:
    // 0x134ea0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x134ea0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_134ea4:
    // 0x134ea4: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x134ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
label_134ea8:
    // 0x134ea8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_134eac:
    if (ctx->pc == 0x134EACu) {
        ctx->pc = 0x134EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EA8u;
        // 0x134eac: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134EB0u;
        goto label_134eb0;
    }
    ctx->pc = 0x134EA8u;
    {
        const bool branch_taken_0x134ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x134EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EA8u;
        // 0x134eac: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ea8) {
            ctx->pc = 0x134EC0u;
            goto label_134ec0;
        }
    }
    ctx->pc = 0x134EB0u;
label_134eb0:
    // 0x134eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134eb4:
    // 0x134eb4: 0x24a56580  addiu       $a1, $a1, 0x6580
    ctx->pc = 0x134eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25984));
label_134eb8:
    // 0x134eb8: 0xc068186  jal         func_1A0618
label_134ebc:
    if (ctx->pc == 0x134EBCu) {
        ctx->pc = 0x134EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EB8u;
        // 0x134ebc: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134EC0u;
        goto label_134ec0;
    }
    ctx->pc = 0x134EB8u;
    SET_GPR_U32(ctx, 31, 0x134EC0u);
    ctx->pc = 0x134EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134EB8u;
    // 0x134ebc: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x134EB8u, 0x134EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134EC0u;
label_134ec0:
    // 0x134ec0: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x134ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_134ec4:
    // 0x134ec4: 0x504000ce  beql        $v0, $zero, . + 4 + (0xCE << 2)
label_134ec8:
    if (ctx->pc == 0x134EC8u) {
        ctx->pc = 0x134EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EC4u;
        // 0x134ec8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134ECCu;
        goto label_134ecc;
    }
    ctx->pc = 0x134EC4u;
    {
        const bool branch_taken_0x134ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ec4) {
            ctx->pc = 0x134EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134EC4u;
            // 0x134ec8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135200u;
            goto label_135200;
        }
    }
    ctx->pc = 0x134ECCu;
label_134ecc:
    // 0x134ecc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x134eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_134ed0:
    // 0x134ed0: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x134ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_134ed4:
    // 0x134ed4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x134ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_134ed8:
    // 0x134ed8: 0x8c636590  lw          $v1, 0x6590($v1)
    ctx->pc = 0x134ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26000)));
label_134edc:
    // 0x134edc: 0x600008  jr          $v1
label_134ee0:
    if (ctx->pc == 0x134EE0u) {
        ctx->pc = 0x134EE4u;
        goto label_134ee4;
    }
    ctx->pc = 0x134EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134EE8u: goto label_134ee8;
            case 0x134F08u: goto label_134f08;
            case 0x134F50u: goto label_134f50;
            case 0x134FC8u: goto label_134fc8;
            case 0x134FE0u: goto label_134fe0;
            case 0x135008u: goto label_135008;
            case 0x135070u: goto label_135070;
            case 0x135098u: goto label_135098;
            case 0x1350D0u: goto label_1350d0;
            case 0x1350E0u: goto label_1350e0;
            case 0x135110u: goto label_135110;
            case 0x135128u: goto label_135128;
            case 0x135150u: goto label_135150;
            case 0x135180u: goto label_135180;
            case 0x1351D0u: goto label_1351d0;
            case 0x1351E8u: goto label_1351e8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134EDCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x134EE4u;
label_134ee4:
    // 0x134ee4: 0x0  nop
    ctx->pc = 0x134ee4u;
    // NOP
label_134ee8:
    // 0x134ee8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x134ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_134eec:
    // 0x134eec: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x134eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_134ef0:
    // 0x134ef0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x134ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_134ef4:
    // 0x134ef4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x134ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_134ef8:
    // 0x134ef8: 0x60f809  jalr        $v1
label_134efc:
    if (ctx->pc == 0x134EFCu) {
        ctx->pc = 0x134EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EF8u;
        // 0x134efc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134F00u;
        goto label_134f00;
    }
    ctx->pc = 0x134EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x134F00u);
        ctx->pc = 0x134EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134EF8u;
        // 0x134efc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134EF8u, 0x134F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x134F00u;
label_134f00:
    // 0x134f00: 0x100000bf  b           . + 4 + (0xBF << 2)
label_134f04:
    if (ctx->pc == 0x134F04u) {
        ctx->pc = 0x134F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F00u;
        // 0x134f04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134F08u;
        goto label_134f08;
    }
    ctx->pc = 0x134F00u;
    {
        const bool branch_taken_0x134f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F00u;
        // 0x134f04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f00) {
            ctx->pc = 0x135200u;
            goto label_135200;
        }
    }
    ctx->pc = 0x134F08u;
label_134f08:
    // 0x134f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x134f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_134f0c:
    // 0x134f0c: 0xc06a26e  jal         func_1A89B8
label_134f10:
    if (ctx->pc == 0x134F10u) {
        ctx->pc = 0x134F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F0Cu;
        // 0x134f10: 0x26110370  addiu       $s1, $s0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134F14u;
        goto label_134f14;
    }
    ctx->pc = 0x134F0Cu;
    SET_GPR_U32(ctx, 31, 0x134F14u);
    ctx->pc = 0x134F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F0Cu;
    // 0x134f10: 0x26110370  addiu       $s1, $s0, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134F0Cu, 0x134F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F14u;
label_134f14:
    // 0x134f14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_134f18:
    if (ctx->pc == 0x134F18u) {
        ctx->pc = 0x134F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F14u;
        // 0x134f18: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134F1Cu;
        goto label_134f1c;
    }
    ctx->pc = 0x134F14u;
    {
        const bool branch_taken_0x134f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F14u;
        // 0x134f18: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f14) {
            ctx->pc = 0x134F40u;
            goto label_134f40;
        }
    }
    ctx->pc = 0x134F1Cu;
label_134f1c:
    // 0x134f1c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x134f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_134f20:
    // 0x134f20: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x134f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_134f24:
    // 0x134f24: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x134f24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_134f28:
    // 0x134f28: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x134f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
label_134f2c:
    // 0x134f2c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x134f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_134f30:
    // 0x134f30: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x134f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_134f34:
    // 0x134f34: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x134f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_134f38:
    // 0x134f38: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_134f3c:
    if (ctx->pc == 0x134F3Cu) {
        ctx->pc = 0x134F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F38u;
        // 0x134f3c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134F40u;
        goto label_134f40;
    }
    ctx->pc = 0x134F38u;
    {
        const bool branch_taken_0x134f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F38u;
        // 0x134f3c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f38) {
            ctx->pc = 0x1351FCu;
            goto label_1351fc;
        }
    }
    ctx->pc = 0x134F40u;
label_134f40:
    // 0x134f40: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x134f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_134f44:
    // 0x134f44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x134f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_134f48:
    // 0x134f48: 0x100000ac  b           . + 4 + (0xAC << 2)
label_134f4c:
    if (ctx->pc == 0x134F4Cu) {
        ctx->pc = 0x134F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F48u;
        // 0x134f4c: 0xae020180  sw          $v0, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134F50u;
        goto label_134f50;
    }
    ctx->pc = 0x134F48u;
    {
        const bool branch_taken_0x134f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F48u;
        // 0x134f4c: 0xae020180  sw          $v0, 0x180($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f48) {
            ctx->pc = 0x1351FCu;
            goto label_1351fc;
        }
    }
    ctx->pc = 0x134F50u;
label_134f50:
    // 0x134f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_134f54:
    // 0x134f54: 0xc055666  jal         func_155998
label_134f58:
    if (ctx->pc == 0x134F58u) {
        ctx->pc = 0x134F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F54u;
        // 0x134f58: 0x26120370  addiu       $s2, $s0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134F5Cu;
        goto label_134f5c;
    }
    ctx->pc = 0x134F54u;
    SET_GPR_U32(ctx, 31, 0x134F5Cu);
    ctx->pc = 0x134F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F54u;
    // 0x134f58: 0x26120370  addiu       $s2, $s0, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155998u, 0x134F54u, 0x134F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F5Cu;
label_134f5c:
    // 0x134f5c: 0xc06a26e  jal         func_1A89B8
label_134f60:
    if (ctx->pc == 0x134F60u) {
        ctx->pc = 0x134F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F5Cu;
        // 0x134f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134F64u;
        goto label_134f64;
    }
    ctx->pc = 0x134F5Cu;
    SET_GPR_U32(ctx, 31, 0x134F64u);
    ctx->pc = 0x134F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134F5Cu;
    // 0x134f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x134F5Cu, 0x134F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134F64u;
label_134f64:
    // 0x134f64: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_134f68:
    if (ctx->pc == 0x134F68u) {
        ctx->pc = 0x134F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F64u;
        // 0x134f68: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134F6Cu;
        goto label_134f6c;
    }
    ctx->pc = 0x134F64u;
    {
        const bool branch_taken_0x134f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F64u;
        // 0x134f68: 0x8e020180  lw          $v0, 0x180($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f64) {
            ctx->pc = 0x134F90u;
            goto label_134f90;
        }
    }
    ctx->pc = 0x134F6Cu;
label_134f6c:
    // 0x134f6c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x134f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_134f70:
    // 0x134f70: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x134f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_134f74:
    // 0x134f74: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x134f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_134f78:
    // 0x134f78: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x134f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
label_134f7c:
    // 0x134f7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x134f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_134f80:
    // 0x134f80: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x134f80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_134f84:
    // 0x134f84: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x134f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_134f88:
    // 0x134f88: 0x10000004  b           . + 4 + (0x4 << 2)
label_134f8c:
    if (ctx->pc == 0x134F8Cu) {
        ctx->pc = 0x134F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F88u;
        // 0x134f8c: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134F90u;
        goto label_134f90;
    }
    ctx->pc = 0x134F88u;
    {
        const bool branch_taken_0x134f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134F88u;
        // 0x134f8c: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f88) {
            ctx->pc = 0x134F9Cu;
            goto label_134f9c;
        }
    }
    ctx->pc = 0x134F90u;
label_134f90:
    // 0x134f90: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x134f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
label_134f94:
    // 0x134f94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x134f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_134f98:
    // 0x134f98: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x134f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
label_134f9c:
    // 0x134f9c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x134f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_134fa0:
    // 0x134fa0: 0x26020370  addiu       $v0, $s0, 0x370
    ctx->pc = 0x134fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
label_134fa4:
    // 0x134fa4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x134fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_134fa8:
    // 0x134fa8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x134fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_134fac:
    // 0x134fac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x134facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_134fb0:
    // 0x134fb0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x134fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_134fb4:
    // 0x134fb4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x134fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_134fb8:
    // 0x134fb8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x134fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_134fbc:
    // 0x134fbc: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x134fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_134fc0:
    // 0x134fc0: 0x1000008e  b           . + 4 + (0x8E << 2)
label_134fc4:
    if (ctx->pc == 0x134FC4u) {
        ctx->pc = 0x134FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FC0u;
        // 0x134fc4: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134FC8u;
        goto label_134fc8;
    }
    ctx->pc = 0x134FC0u;
    {
        const bool branch_taken_0x134fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FC0u;
        // 0x134fc4: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134fc0) {
            ctx->pc = 0x1351FCu;
            goto label_1351fc;
        }
    }
    ctx->pc = 0x134FC8u;
label_134fc8:
    // 0x134fc8: 0xc06a282  jal         func_1A8A08
label_134fcc:
    if (ctx->pc == 0x134FCCu) {
        ctx->pc = 0x134FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FC8u;
        // 0x134fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134FD0u;
        goto label_134fd0;
    }
    ctx->pc = 0x134FC8u;
    SET_GPR_U32(ctx, 31, 0x134FD0u);
    ctx->pc = 0x134FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134FC8u;
    // 0x134fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x134FC8u, 0x134FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134FD0u;
label_134fd0:
    // 0x134fd0: 0xc781811c  lwc1        $f1, -0x7EE4($gp)
    ctx->pc = 0x134fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_134fd4:
    // 0x134fd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x134fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_134fd8:
    // 0x134fd8: 0x10000088  b           . + 4 + (0x88 << 2)
label_134fdc:
    if (ctx->pc == 0x134FDCu) {
        ctx->pc = 0x134FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FD8u;
        // 0x134fdc: 0xe6000380  swc1        $f0, 0x380($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 896), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x134FE0u;
        goto label_134fe0;
    }
    ctx->pc = 0x134FD8u;
    {
        const bool branch_taken_0x134fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FD8u;
        // 0x134fdc: 0xe6000380  swc1        $f0, 0x380($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 896), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134fd8) {
            ctx->pc = 0x1351FCu;
            goto label_1351fc;
        }
    }
    ctx->pc = 0x134FE0u;
label_134fe0:
    // 0x134fe0: 0xc06a2ac  jal         func_1A8AB0
label_134fe4:
    if (ctx->pc == 0x134FE4u) {
        ctx->pc = 0x134FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FE0u;
        // 0x134fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x134FE8u;
        goto label_134fe8;
    }
    ctx->pc = 0x134FE0u;
    SET_GPR_U32(ctx, 31, 0x134FE8u);
    ctx->pc = 0x134FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134FE0u;
    // 0x134fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x134FE0u, 0x134FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134FE8u;
label_134fe8:
    // 0x134fe8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x134fe8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_134fec:
    // 0x134fec: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x134fecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_134ff0:
    // 0x134ff0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x134ff0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_134ff4:
    // 0x134ff4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x134ff4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_134ff8:
    // 0x134ff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_134ffc:
    // 0x134ffc: 0x1000007f  b           . + 4 + (0x7F << 2)
label_135000:
    if (ctx->pc == 0x135000u) {
        ctx->pc = 0x135000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FFCu;
        // 0x135000: 0xe6000384  swc1        $f0, 0x384($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 900), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x135004u;
        goto label_135004;
    }
    ctx->pc = 0x134FFCu;
    {
        const bool branch_taken_0x134ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134FFCu;
        // 0x135000: 0xe6000384  swc1        $f0, 0x384($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 900), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ffc) {
            ctx->pc = 0x1351FCu;
            goto label_1351fc;
        }
    }
    ctx->pc = 0x135004u;
label_135004:
    // 0x135004: 0x0  nop
    ctx->pc = 0x135004u;
    // NOP
label_135008:
    // 0x135008: 0xc06a2ac  jal         func_1A8AB0
label_13500c:
    if (ctx->pc == 0x13500Cu) {
        ctx->pc = 0x13500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135008u;
        // 0x13500c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135010u;
        goto label_135010;
    }
    ctx->pc = 0x135008u;
    SET_GPR_U32(ctx, 31, 0x135010u);
    ctx->pc = 0x13500Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135008u;
    // 0x13500c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135008u, 0x135010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135010u;
label_135010:
    // 0x135010: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x135010u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_135014:
    // 0x135014: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x135014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135018:
    // 0x135018: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x135018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_13501c:
    // 0x13501c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13501cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_135020:
    // 0x135020: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_135024:
    if (ctx->pc == 0x135024u) {
        ctx->pc = 0x135024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135020u;
        // 0x135024: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135028u;
        goto label_135028;
    }
    ctx->pc = 0x135020u;
    {
        const bool branch_taken_0x135020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x135024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135020u;
        // 0x135024: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135020) {
            ctx->pc = 0x135034u;
            goto label_135034;
        }
    }
    ctx->pc = 0x135028u;
label_135028:
    // 0x135028: 0xc06a26e  jal         func_1A89B8
label_13502c:
    if (ctx->pc == 0x13502Cu) {
        ctx->pc = 0x13502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135028u;
        // 0x13502c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135030u;
        goto label_135030;
    }
    ctx->pc = 0x135028u;
    SET_GPR_U32(ctx, 31, 0x135030u);
    ctx->pc = 0x13502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135028u;
    // 0x13502c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x135028u, 0x135030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135030u;
label_135030:
    // 0x135030: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x135030u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_135034:
    // 0x135034: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_135038:
    if (ctx->pc == 0x135038u) {
        ctx->pc = 0x135038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135034u;
        // 0x135038: 0x26020370  addiu       $v0, $s0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13503Cu;
        goto label_13503c;
    }
    ctx->pc = 0x135034u;
    {
        const bool branch_taken_0x135034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x135038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135034u;
        // 0x135038: 0x26020370  addiu       $v0, $s0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135034) {
            ctx->pc = 0x135050u;
            goto label_135050;
        }
    }
    ctx->pc = 0x13503Cu;
label_13503c:
    // 0x13503c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13503cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135040:
    // 0x135040: 0xac52001c  sw          $s2, 0x1C($v0)
    ctx->pc = 0x135040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 18));
label_135044:
    // 0x135044: 0x1000006d  b           . + 4 + (0x6D << 2)
label_135048:
    if (ctx->pc == 0x135048u) {
        ctx->pc = 0x135048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135044u;
        // 0x135048: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13504Cu;
        goto label_13504c;
    }
    ctx->pc = 0x135044u;
    {
        const bool branch_taken_0x135044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135044u;
        // 0x135048: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135044) {
            ctx->pc = 0x1351FCu;
            goto label_1351fc;
        }
    }
    ctx->pc = 0x13504Cu;
label_13504c:
    // 0x13504c: 0x0  nop
    ctx->pc = 0x13504cu;
    // NOP
label_135050:
    // 0x135050: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x135050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_135054:
    // 0x135054: 0x26030370  addiu       $v1, $s0, 0x370
    ctx->pc = 0x135054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
label_135058:
    // 0x135058: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x135058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_13505c:
    // 0x13505c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13505cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_135060:
    // 0x135060: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x135060u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_135064:
    // 0x135064: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x135064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_135068:
    // 0x135068: 0x10000064  b           . + 4 + (0x64 << 2)
label_13506c:
    if (ctx->pc == 0x13506Cu) {
        ctx->pc = 0x13506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135068u;
        // 0x13506c: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135070u;
        goto label_135070;
    }
    ctx->pc = 0x135068u;
    {
        const bool branch_taken_0x135068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135068u;
        // 0x13506c: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135068) {
            ctx->pc = 0x1351FCu;
            goto label_1351fc;
        }
    }
    ctx->pc = 0x135070u;
label_135070:
    // 0x135070: 0x26040370  addiu       $a0, $s0, 0x370
    ctx->pc = 0x135070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
label_135074:
    // 0x135074: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x135074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_135078:
    // 0x135078: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x135078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_13507c:
    // 0x13507c: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x13507cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
label_135080:
    // 0x135080: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x135080u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_135084:
    // 0x135084: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x135084u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_135088:
    // 0x135088: 0xfc820030  sd          $v0, 0x30($a0)
    ctx->pc = 0x135088u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 2));
label_13508c:
    // 0x13508c: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x13508cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_135090:
    // 0x135090: 0x1000005a  b           . + 4 + (0x5A << 2)
label_135094:
    if (ctx->pc == 0x135094u) {
        ctx->pc = 0x135094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135090u;
        // 0x135094: 0xfc830038  sd          $v1, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135098u;
        goto label_135098;
    }
    ctx->pc = 0x135090u;
    {
        const bool branch_taken_0x135090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135090u;
        // 0x135094: 0xfc830038  sd          $v1, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135090) {
            ctx->pc = 0x1351FCu;
            goto label_1351fc;
        }
    }
    ctx->pc = 0x135098u;
label_135098:
    // 0x135098: 0xc06a2ac  jal         func_1A8AB0
label_13509c:
    if (ctx->pc == 0x13509Cu) {
        ctx->pc = 0x13509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135098u;
        // 0x13509c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350A0u;
        goto label_1350a0;
    }
    ctx->pc = 0x135098u;
    SET_GPR_U32(ctx, 31, 0x1350A0u);
    ctx->pc = 0x13509Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135098u;
    // 0x13509c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135098u, 0x1350A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350A0u;
label_1350a0:
    // 0x1350a0: 0x26040370  addiu       $a0, $s0, 0x370
    ctx->pc = 0x1350a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
label_1350a4:
    // 0x1350a4: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1350a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
label_1350a8:
    // 0x1350a8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1350a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1350ac:
    // 0x1350ac: 0x8cc5b830  lw          $a1, -0x47D0($a2)
    ctx->pc = 0x1350acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294948912)));
label_1350b0:
    // 0x1350b0: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1350b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_1350b4:
    // 0x1350b4: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1350b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_1350b8:
    // 0x1350b8: 0xfc830030  sd          $v1, 0x30($a0)
    ctx->pc = 0x1350b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 3));
label_1350bc:
    // 0x1350bc: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x1350bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_1350c0:
    // 0x1350c0: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1350c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_1350c4:
    // 0x1350c4: 0x1000004d  b           . + 4 + (0x4D << 2)
label_1350c8:
    if (ctx->pc == 0x1350C8u) {
        ctx->pc = 0x1350C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350C4u;
        // 0x1350c8: 0xfc860038  sd          $a2, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350CCu;
        goto label_1350cc;
    }
    ctx->pc = 0x1350C4u;
    {
        const bool branch_taken_0x1350c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1350C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350C4u;
        // 0x1350c8: 0xfc860038  sd          $a2, 0x38($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350c4) {
            ctx->pc = 0x1351FCu;
            goto label_1351fc;
        }
    }
    ctx->pc = 0x1350CCu;
label_1350cc:
    // 0x1350cc: 0x0  nop
    ctx->pc = 0x1350ccu;
    // NOP
label_1350d0:
    // 0x1350d0: 0xc055666  jal         func_155998
label_1350d4:
    if (ctx->pc == 0x1350D4u) {
        ctx->pc = 0x1350D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350D0u;
        // 0x1350d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350D8u;
        goto label_1350d8;
    }
    ctx->pc = 0x1350D0u;
    SET_GPR_U32(ctx, 31, 0x1350D8u);
    ctx->pc = 0x1350D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1350D0u;
    // 0x1350d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155998u, 0x1350D0u, 0x1350D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350D8u;
label_1350d8:
    // 0x1350d8: 0x10000049  b           . + 4 + (0x49 << 2)
label_1350dc:
    if (ctx->pc == 0x1350DCu) {
        ctx->pc = 0x1350DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350D8u;
        // 0x1350dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350E0u;
        goto label_1350e0;
    }
    ctx->pc = 0x1350D8u;
    {
        const bool branch_taken_0x1350d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1350DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350D8u;
        // 0x1350dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1350d8) {
            ctx->pc = 0x135200u;
            goto label_135200;
        }
    }
    ctx->pc = 0x1350E0u;
label_1350e0:
    // 0x1350e0: 0xc06a2ac  jal         func_1A8AB0
label_1350e4:
    if (ctx->pc == 0x1350E4u) {
        ctx->pc = 0x1350E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1350E0u;
        // 0x1350e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1350E8u;
        goto label_1350e8;
    }
    ctx->pc = 0x1350E0u;
    SET_GPR_U32(ctx, 31, 0x1350E8u);
    ctx->pc = 0x1350E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1350E0u;
    // 0x1350e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1350E0u, 0x1350E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1350E8u;
label_1350e8:
    // 0x1350e8: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1350e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1350ec:
    // 0x1350ec: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1350ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_1350f0:
    // 0x1350f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1350f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1350f4:
    // 0x1350f4: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1350f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1350f8:
    // 0x1350f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1350f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1350fc:
    // 0x1350fc: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x1350fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
label_135100:
    // 0x135100: 0xc0556a2  jal         func_155A88
label_135104:
    if (ctx->pc == 0x135104u) {
        ctx->pc = 0x135104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135100u;
        // 0x135104: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x135108u;
        goto label_135108;
    }
    ctx->pc = 0x135100u;
    SET_GPR_U32(ctx, 31, 0x135108u);
    ctx->pc = 0x135104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135100u;
    // 0x135104: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x155A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A88u, 0x135100u, 0x135108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135108u;
label_135108:
    // 0x135108: 0x1000003d  b           . + 4 + (0x3D << 2)
label_13510c:
    if (ctx->pc == 0x13510Cu) {
        ctx->pc = 0x13510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135108u;
        // 0x13510c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135110u;
        goto label_135110;
    }
    ctx->pc = 0x135108u;
    {
        const bool branch_taken_0x135108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135108u;
        // 0x13510c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135108) {
            ctx->pc = 0x135200u;
            goto label_135200;
        }
    }
    ctx->pc = 0x135110u;
label_135110:
    // 0x135110: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x135110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_135114:
    // 0x135114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135118:
    // 0x135118: 0xc053f80  jal         func_14FE00
label_13511c:
    if (ctx->pc == 0x13511Cu) {
        ctx->pc = 0x13511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135118u;
        // 0x13511c: 0x8c45b830  lw          $a1, -0x47D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135120u;
        goto label_135120;
    }
    ctx->pc = 0x135118u;
    SET_GPR_U32(ctx, 31, 0x135120u);
    ctx->pc = 0x13511Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135118u;
    // 0x13511c: 0x8c45b830  lw          $a1, -0x47D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948912)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE00u, 0x135118u, 0x135120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135120u;
label_135120:
    // 0x135120: 0x10000037  b           . + 4 + (0x37 << 2)
label_135124:
    if (ctx->pc == 0x135124u) {
        ctx->pc = 0x135124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135120u;
        // 0x135124: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135128u;
        goto label_135128;
    }
    ctx->pc = 0x135120u;
    {
        const bool branch_taken_0x135120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135120u;
        // 0x135124: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135120) {
            ctx->pc = 0x135200u;
            goto label_135200;
        }
    }
    ctx->pc = 0x135128u;
label_135128:
    // 0x135128: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x135128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_13512c:
    // 0x13512c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x13512cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_135130:
    // 0x135130: 0x8f858a30  lw          $a1, -0x75D0($gp)
    ctx->pc = 0x135130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
label_135134:
    // 0x135134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135138:
    // 0x135138: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x135138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13513c:
    // 0x13513c: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x13513cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
label_135140:
    // 0x135140: 0xc053f58  jal         func_14FD60
label_135144:
    if (ctx->pc == 0x135144u) {
        ctx->pc = 0x135144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135140u;
        // 0x135144: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135148u;
        goto label_135148;
    }
    ctx->pc = 0x135140u;
    SET_GPR_U32(ctx, 31, 0x135148u);
    ctx->pc = 0x135144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135140u;
    // 0x135144: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD60u, 0x135140u, 0x135148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135148u;
label_135148:
    // 0x135148: 0x1000002d  b           . + 4 + (0x2D << 2)
label_13514c:
    if (ctx->pc == 0x13514Cu) {
        ctx->pc = 0x13514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135148u;
        // 0x13514c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135150u;
        goto label_135150;
    }
    ctx->pc = 0x135148u;
    {
        const bool branch_taken_0x135148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135148u;
        // 0x13514c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135148) {
            ctx->pc = 0x135200u;
            goto label_135200;
        }
    }
    ctx->pc = 0x135150u;
label_135150:
    // 0x135150: 0xc06a2ac  jal         func_1A8AB0
label_135154:
    if (ctx->pc == 0x135154u) {
        ctx->pc = 0x135154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135150u;
        // 0x135154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135158u;
        goto label_135158;
    }
    ctx->pc = 0x135150u;
    SET_GPR_U32(ctx, 31, 0x135158u);
    ctx->pc = 0x135154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135150u;
    // 0x135154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x135150u, 0x135158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135158u;
label_135158:
    // 0x135158: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x135158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_13515c:
    // 0x13515c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x13515cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_135160:
    // 0x135160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135164:
    // 0x135164: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x135164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_135168:
    // 0x135168: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x135168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13516c:
    // 0x13516c: 0xc73026  xor         $a2, $a2, $a3
    ctx->pc = 0x13516cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
label_135170:
    // 0x135170: 0xc0556c8  jal         func_155B20
label_135174:
    if (ctx->pc == 0x135174u) {
        ctx->pc = 0x135174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135170u;
        // 0x135174: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x135178u;
        goto label_135178;
    }
    ctx->pc = 0x135170u;
    SET_GPR_U32(ctx, 31, 0x135178u);
    ctx->pc = 0x135174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135170u;
    // 0x135174: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B20u, 0x135170u, 0x135178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135178u;
label_135178:
    // 0x135178: 0x10000021  b           . + 4 + (0x21 << 2)
label_13517c:
    if (ctx->pc == 0x13517Cu) {
        ctx->pc = 0x13517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135178u;
        // 0x13517c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135180u;
        goto label_135180;
    }
    ctx->pc = 0x135178u;
    {
        const bool branch_taken_0x135178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135178u;
        // 0x13517c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135178) {
            ctx->pc = 0x135200u;
            goto label_135200;
        }
    }
    ctx->pc = 0x135180u;
label_135180:
    // 0x135180: 0xc06a250  jal         func_1A8940
label_135184:
    if (ctx->pc == 0x135184u) {
        ctx->pc = 0x135184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135180u;
        // 0x135184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135188u;
        goto label_135188;
    }
    ctx->pc = 0x135180u;
    SET_GPR_U32(ctx, 31, 0x135188u);
    ctx->pc = 0x135184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135180u;
    // 0x135184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x135180u, 0x135188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135188u;
label_135188:
    // 0x135188: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x135188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_13518c:
    // 0x13518c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x13518cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135190:
    // 0x135190: 0x8e02038c  lw          $v0, 0x38C($s0)
    ctx->pc = 0x135190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
label_135194:
    // 0x135194: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x135194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_135198:
    // 0x135198: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x135198u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_13519c:
    // 0x13519c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x13519cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1351a0:
    // 0x1351a0: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x1351a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1351a4:
    // 0x1351a4: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1351a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1351a8:
    // 0x1351a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1351a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1351ac:
    // 0x1351ac: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1351acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1351b0:
    // 0x1351b0: 0x28444000  slti        $a0, $v0, 0x4000
    ctx->pc = 0x1351b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16384) ? 1 : 0);
label_1351b4:
    // 0x1351b4: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x1351b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
label_1351b8:
    // 0x1351b8: 0x10c70003  beq         $a2, $a3, . + 4 + (0x3 << 2)
label_1351bc:
    if (ctx->pc == 0x1351BCu) {
        ctx->pc = 0x1351BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351B8u;
        // 0x1351bc: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1351C0u;
        goto label_1351c0;
    }
    ctx->pc = 0x1351B8u;
    {
        const bool branch_taken_0x1351b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x1351BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351B8u;
        // 0x1351bc: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351b8) {
            ctx->pc = 0x1351C8u;
            goto label_1351c8;
        }
    }
    ctx->pc = 0x1351C0u;
label_1351c0:
    // 0x1351c0: 0x70021068  pabsw       $v0, $v0
    ctx->pc = 0x1351c0u;
    SET_GPR_VEC(ctx, 2, PS2_PABSW(GPR_VEC(ctx, 0)));
label_1351c4:
    // 0x1351c4: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1351c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_1351c8:
    // 0x1351c8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1351cc:
    if (ctx->pc == 0x1351CCu) {
        ctx->pc = 0x1351CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351C8u;
        // 0x1351cc: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1351D0u;
        goto label_1351d0;
    }
    ctx->pc = 0x1351C8u;
    {
        const bool branch_taken_0x1351c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1351CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351C8u;
        // 0x1351cc: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351c8) {
            ctx->pc = 0x1351FCu;
            goto label_1351fc;
        }
    }
    ctx->pc = 0x1351D0u;
label_1351d0:
    // 0x1351d0: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x1351d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
label_1351d4:
    // 0x1351d4: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1351d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1351d8:
    // 0x1351d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1351d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1351dc:
    // 0x1351dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1351e0:
    if (ctx->pc == 0x1351E0u) {
        ctx->pc = 0x1351E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351DCu;
        // 0x1351e0: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1351E4u;
        goto label_1351e4;
    }
    ctx->pc = 0x1351DCu;
    {
        const bool branch_taken_0x1351dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1351E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351DCu;
        // 0x1351e0: 0xae020184  sw          $v0, 0x184($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351dc) {
            ctx->pc = 0x1351FCu;
            goto label_1351fc;
        }
    }
    ctx->pc = 0x1351E4u;
label_1351e4:
    // 0x1351e4: 0x0  nop
    ctx->pc = 0x1351e4u;
    // NOP
label_1351e8:
    // 0x1351e8: 0xc06a2ac  jal         func_1A8AB0
label_1351ec:
    if (ctx->pc == 0x1351ECu) {
        ctx->pc = 0x1351ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351E8u;
        // 0x1351ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1351F0u;
        goto label_1351f0;
    }
    ctx->pc = 0x1351E8u;
    SET_GPR_U32(ctx, 31, 0x1351F0u);
    ctx->pc = 0x1351ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351E8u;
    // 0x1351ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8AB0u, 0x1351E8u, 0x1351F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351F0u;
label_1351f0:
    // 0x1351f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1351f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1351f4:
    // 0x1351f4: 0xc05562c  jal         func_1558B0
label_1351f8:
    if (ctx->pc == 0x1351F8u) {
        ctx->pc = 0x1351F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351F4u;
        // 0x1351f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1351FCu;
        goto label_1351fc;
    }
    ctx->pc = 0x1351F4u;
    SET_GPR_U32(ctx, 31, 0x1351FCu);
    ctx->pc = 0x1351F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1351F4u;
    // 0x1351f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1558B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1558B0u, 0x1351F4u, 0x1351FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351FCu;
label_1351fc:
    // 0x1351fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1351fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135200:
    // 0x135200: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135204:
    // 0x135204: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135204u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_135208:
    // 0x135208: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x135208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13520c:
    // 0x13520c: 0x3e00008  jr          $ra
label_135210:
    if (ctx->pc == 0x135210u) {
        ctx->pc = 0x135210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13520Cu;
        // 0x135210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135214u;
        goto label_fallthrough_0x13520c;
    }
    ctx->pc = 0x13520Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13520Cu;
        // 0x135210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13520Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13520c:
    ctx->pc = 0x135214u;
}
