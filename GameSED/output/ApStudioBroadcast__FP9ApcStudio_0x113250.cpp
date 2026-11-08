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

// Function: ApStudioBroadcast__FP9ApcStudio
// Address: 0x113250 - 0x1134c0
void ApStudioBroadcast__FP9ApcStudio_0x113250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApStudioBroadcast__FP9ApcStudio_0x113250");
#endif

    switch (ctx->pc) {
        case 0x113250u: goto label_113250;
        case 0x113254u: goto label_113254;
        case 0x113258u: goto label_113258;
        case 0x11325cu: goto label_11325c;
        case 0x113260u: goto label_113260;
        case 0x113264u: goto label_113264;
        case 0x113268u: goto label_113268;
        case 0x11326cu: goto label_11326c;
        case 0x113270u: goto label_113270;
        case 0x113274u: goto label_113274;
        case 0x113278u: goto label_113278;
        case 0x11327cu: goto label_11327c;
        case 0x113280u: goto label_113280;
        case 0x113284u: goto label_113284;
        case 0x113288u: goto label_113288;
        case 0x11328cu: goto label_11328c;
        case 0x113290u: goto label_113290;
        case 0x113294u: goto label_113294;
        case 0x113298u: goto label_113298;
        case 0x11329cu: goto label_11329c;
        case 0x1132a0u: goto label_1132a0;
        case 0x1132a4u: goto label_1132a4;
        case 0x1132a8u: goto label_1132a8;
        case 0x1132acu: goto label_1132ac;
        case 0x1132b0u: goto label_1132b0;
        case 0x1132b4u: goto label_1132b4;
        case 0x1132b8u: goto label_1132b8;
        case 0x1132bcu: goto label_1132bc;
        case 0x1132c0u: goto label_1132c0;
        case 0x1132c4u: goto label_1132c4;
        case 0x1132c8u: goto label_1132c8;
        case 0x1132ccu: goto label_1132cc;
        case 0x1132d0u: goto label_1132d0;
        case 0x1132d4u: goto label_1132d4;
        case 0x1132d8u: goto label_1132d8;
        case 0x1132dcu: goto label_1132dc;
        case 0x1132e0u: goto label_1132e0;
        case 0x1132e4u: goto label_1132e4;
        case 0x1132e8u: goto label_1132e8;
        case 0x1132ecu: goto label_1132ec;
        case 0x1132f0u: goto label_1132f0;
        case 0x1132f4u: goto label_1132f4;
        case 0x1132f8u: goto label_1132f8;
        case 0x1132fcu: goto label_1132fc;
        case 0x113300u: goto label_113300;
        case 0x113304u: goto label_113304;
        case 0x113308u: goto label_113308;
        case 0x11330cu: goto label_11330c;
        case 0x113310u: goto label_113310;
        case 0x113314u: goto label_113314;
        case 0x113318u: goto label_113318;
        case 0x11331cu: goto label_11331c;
        case 0x113320u: goto label_113320;
        case 0x113324u: goto label_113324;
        case 0x113328u: goto label_113328;
        case 0x11332cu: goto label_11332c;
        case 0x113330u: goto label_113330;
        case 0x113334u: goto label_113334;
        case 0x113338u: goto label_113338;
        case 0x11333cu: goto label_11333c;
        case 0x113340u: goto label_113340;
        case 0x113344u: goto label_113344;
        case 0x113348u: goto label_113348;
        case 0x11334cu: goto label_11334c;
        case 0x113350u: goto label_113350;
        case 0x113354u: goto label_113354;
        case 0x113358u: goto label_113358;
        case 0x11335cu: goto label_11335c;
        case 0x113360u: goto label_113360;
        case 0x113364u: goto label_113364;
        case 0x113368u: goto label_113368;
        case 0x11336cu: goto label_11336c;
        case 0x113370u: goto label_113370;
        case 0x113374u: goto label_113374;
        case 0x113378u: goto label_113378;
        case 0x11337cu: goto label_11337c;
        case 0x113380u: goto label_113380;
        case 0x113384u: goto label_113384;
        case 0x113388u: goto label_113388;
        case 0x11338cu: goto label_11338c;
        case 0x113390u: goto label_113390;
        case 0x113394u: goto label_113394;
        case 0x113398u: goto label_113398;
        case 0x11339cu: goto label_11339c;
        case 0x1133a0u: goto label_1133a0;
        case 0x1133a4u: goto label_1133a4;
        case 0x1133a8u: goto label_1133a8;
        case 0x1133acu: goto label_1133ac;
        case 0x1133b0u: goto label_1133b0;
        case 0x1133b4u: goto label_1133b4;
        case 0x1133b8u: goto label_1133b8;
        case 0x1133bcu: goto label_1133bc;
        case 0x1133c0u: goto label_1133c0;
        case 0x1133c4u: goto label_1133c4;
        case 0x1133c8u: goto label_1133c8;
        case 0x1133ccu: goto label_1133cc;
        case 0x1133d0u: goto label_1133d0;
        case 0x1133d4u: goto label_1133d4;
        case 0x1133d8u: goto label_1133d8;
        case 0x1133dcu: goto label_1133dc;
        case 0x1133e0u: goto label_1133e0;
        case 0x1133e4u: goto label_1133e4;
        case 0x1133e8u: goto label_1133e8;
        case 0x1133ecu: goto label_1133ec;
        case 0x1133f0u: goto label_1133f0;
        case 0x1133f4u: goto label_1133f4;
        case 0x1133f8u: goto label_1133f8;
        case 0x1133fcu: goto label_1133fc;
        case 0x113400u: goto label_113400;
        case 0x113404u: goto label_113404;
        case 0x113408u: goto label_113408;
        case 0x11340cu: goto label_11340c;
        case 0x113410u: goto label_113410;
        case 0x113414u: goto label_113414;
        case 0x113418u: goto label_113418;
        case 0x11341cu: goto label_11341c;
        case 0x113420u: goto label_113420;
        case 0x113424u: goto label_113424;
        case 0x113428u: goto label_113428;
        case 0x11342cu: goto label_11342c;
        case 0x113430u: goto label_113430;
        case 0x113434u: goto label_113434;
        case 0x113438u: goto label_113438;
        case 0x11343cu: goto label_11343c;
        case 0x113440u: goto label_113440;
        case 0x113444u: goto label_113444;
        case 0x113448u: goto label_113448;
        case 0x11344cu: goto label_11344c;
        case 0x113450u: goto label_113450;
        case 0x113454u: goto label_113454;
        case 0x113458u: goto label_113458;
        case 0x11345cu: goto label_11345c;
        case 0x113460u: goto label_113460;
        case 0x113464u: goto label_113464;
        case 0x113468u: goto label_113468;
        case 0x11346cu: goto label_11346c;
        case 0x113470u: goto label_113470;
        case 0x113474u: goto label_113474;
        case 0x113478u: goto label_113478;
        case 0x11347cu: goto label_11347c;
        case 0x113480u: goto label_113480;
        case 0x113484u: goto label_113484;
        case 0x113488u: goto label_113488;
        case 0x11348cu: goto label_11348c;
        case 0x113490u: goto label_113490;
        case 0x113494u: goto label_113494;
        case 0x113498u: goto label_113498;
        case 0x11349cu: goto label_11349c;
        case 0x1134a0u: goto label_1134a0;
        case 0x1134a4u: goto label_1134a4;
        case 0x1134a8u: goto label_1134a8;
        case 0x1134acu: goto label_1134ac;
        case 0x1134b0u: goto label_1134b0;
        case 0x1134b4u: goto label_1134b4;
        case 0x1134b8u: goto label_1134b8;
        case 0x1134bcu: goto label_1134bc;
        default: break;
    }

    ctx->pc = 0x113250u;

label_113250:
    // 0x113250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x113250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_113254:
    // 0x113254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_113258:
    // 0x113258: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x113258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_11325c:
    // 0x11325c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11325cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_113260:
    // 0x113260: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x113260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_113264:
    // 0x113264: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x113264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_113268:
    // 0x113268: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x113268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_11326c:
    // 0x11326c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11326cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_113270:
    // 0x113270: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x113270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_113274:
    // 0x113274: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x113274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_113278:
    // 0x113278: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x113278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_11327c:
    // 0x11327c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x11327cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_113280:
    // 0x113280: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x113280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_113284:
    // 0x113284: 0x0  nop
    ctx->pc = 0x113284u;
    // NOP
label_113288:
    // 0x113288: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x113288u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11328c:
    // 0x11328c: 0xc044d30  jal         func_1134C0
label_113290:
    if (ctx->pc == 0x113290u) {
        ctx->pc = 0x113290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11328Cu;
        // 0x113290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113294u;
        goto label_113294;
    }
    ctx->pc = 0x11328Cu;
    SET_GPR_U32(ctx, 31, 0x113294u);
    ctx->pc = 0x113290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11328Cu;
    // 0x113290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1134C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1134C0u, 0x11328Cu, 0x113294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113294u;
label_113294:
    // 0x113294: 0x8e223410  lw          $v0, 0x3410($s1)
    ctx->pc = 0x113294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13328)));
label_113298:
    // 0x113298: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
label_11329c:
    if (ctx->pc == 0x11329Cu) {
        ctx->pc = 0x11329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113298u;
        // 0x11329c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1132A0u;
        goto label_1132a0;
    }
    ctx->pc = 0x113298u;
    {
        const bool branch_taken_0x113298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113298u;
        // 0x11329c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113298) {
            ctx->pc = 0x113288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113288;
        }
    }
    ctx->pc = 0x1132A0u;
label_1132a0:
    // 0x1132a0: 0x8e220168  lw          $v0, 0x168($s1)
    ctx->pc = 0x1132a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
label_1132a4:
    // 0x1132a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1132a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1132a8:
    // 0x1132a8: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_1132ac:
    if (ctx->pc == 0x1132ACu) {
        ctx->pc = 0x1132ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132A8u;
        // 0x1132ac: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1132B0u;
        goto label_1132b0;
    }
    ctx->pc = 0x1132A8u;
    {
        const bool branch_taken_0x1132a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1132a8) {
            ctx->pc = 0x1132ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1132A8u;
            // 0x1132ac: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11328Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11328c;
        }
    }
    ctx->pc = 0x1132B0u;
label_1132b0:
    // 0x1132b0: 0x26353410  addiu       $s5, $s1, 0x3410
    ctx->pc = 0x1132b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 13328));
label_1132b4:
    // 0x1132b4: 0x3c170025  lui         $s7, 0x25
    ctx->pc = 0x1132b4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)37 << 16));
label_1132b8:
    // 0x1132b8: 0x8e24038c  lw          $a0, 0x38C($s1)
    ctx->pc = 0x1132b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_1132bc:
    // 0x1132bc: 0x0  nop
    ctx->pc = 0x1132bcu;
    // NOP
label_1132c0:
    // 0x1132c0: 0xc060e88  jal         func_183A20
label_1132c4:
    if (ctx->pc == 0x1132C4u) {
        ctx->pc = 0x1132C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132C0u;
        // 0x1132c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1132C8u;
        goto label_1132c8;
    }
    ctx->pc = 0x1132C0u;
    SET_GPR_U32(ctx, 31, 0x1132C8u);
    ctx->pc = 0x1132C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1132C0u;
    // 0x1132c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x1132C0u, 0x1132C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132C8u;
label_1132c8:
    // 0x1132c8: 0x8e240390  lw          $a0, 0x390($s1)
    ctx->pc = 0x1132c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 912)));
label_1132cc:
    // 0x1132cc: 0xc060e88  jal         func_183A20
label_1132d0:
    if (ctx->pc == 0x1132D0u) {
        ctx->pc = 0x1132D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132CCu;
        // 0x1132d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1132D4u;
        goto label_1132d4;
    }
    ctx->pc = 0x1132CCu;
    SET_GPR_U32(ctx, 31, 0x1132D4u);
    ctx->pc = 0x1132D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1132CCu;
    // 0x1132d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x1132CCu, 0x1132D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132D4u;
label_1132d4:
    // 0x1132d4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1132d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1132d8:
    // 0x1132d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1132dc:
    if (ctx->pc == 0x1132DCu) {
        ctx->pc = 0x1132DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132D8u;
        // 0x1132dc: 0x26263410  addiu       $a2, $s1, 0x3410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 13328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1132E0u;
        goto label_1132e0;
    }
    ctx->pc = 0x1132D8u;
    {
        const bool branch_taken_0x1132d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1132DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132D8u;
        // 0x1132dc: 0x26263410  addiu       $a2, $s1, 0x3410 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 13328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132d8) {
            ctx->pc = 0x113320u;
            goto label_113320;
        }
    }
    ctx->pc = 0x1132E0u;
label_1132e0:
    // 0x1132e0: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
label_1132e4:
    if (ctx->pc == 0x1132E4u) {
        ctx->pc = 0x1132E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132E0u;
        // 0x1132e4: 0x262433f0  addiu       $a0, $s1, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 13296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1132E8u;
        goto label_1132e8;
    }
    ctx->pc = 0x1132E0u;
    {
        const bool branch_taken_0x1132e0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1132E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132E0u;
        // 0x1132e4: 0x262433f0  addiu       $a0, $s1, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 13296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1132e0) {
            ctx->pc = 0x113300u;
            goto label_113300;
        }
    }
    ctx->pc = 0x1132E8u;
label_1132e8:
    // 0x1132e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1132e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1132ec:
    // 0x1132ec: 0x26e54230  addiu       $a1, $s7, 0x4230
    ctx->pc = 0x1132ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 16944));
label_1132f0:
    // 0x1132f0: 0xc068186  jal         func_1A0618
label_1132f4:
    if (ctx->pc == 0x1132F4u) {
        ctx->pc = 0x1132F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1132F0u;
        // 0x1132f4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1132F8u;
        goto label_1132f8;
    }
    ctx->pc = 0x1132F0u;
    SET_GPR_U32(ctx, 31, 0x1132F8u);
    ctx->pc = 0x1132F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1132F0u;
    // 0x1132f4: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1132F0u, 0x1132F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1132F8u;
label_1132f8:
    // 0x1132f8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1132f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1132fc:
    // 0x1132fc: 0x262433f0  addiu       $a0, $s1, 0x33F0
    ctx->pc = 0x1132fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 13296));
label_113300:
    // 0x113300: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x113300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_113304:
    // 0x113304: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x113304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_113308:
    // 0x113308: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x113308u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_11330c:
    // 0x11330c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x11330cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_113310:
    // 0x113310: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x113310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_113314:
    // 0x113314: 0xc06723e  jal         func_19C8F8
label_113318:
    if (ctx->pc == 0x113318u) {
        ctx->pc = 0x113318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113314u;
        // 0x113318: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11331Cu;
        goto label_11331c;
    }
    ctx->pc = 0x113314u;
    SET_GPR_U32(ctx, 31, 0x11331Cu);
    ctx->pc = 0x113318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113314u;
    // 0x113318: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x113314u, 0x11331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11331Cu;
label_11331c:
    // 0x11331c: 0x26263410  addiu       $a2, $s1, 0x3410
    ctx->pc = 0x11331cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 13328));
label_113320:
    // 0x113320: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x113320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_113324:
    // 0x113324: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x113324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_113328:
    // 0x113328: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_11332c:
    if (ctx->pc == 0x11332Cu) {
        ctx->pc = 0x11332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113328u;
        // 0x11332c: 0x263433f0  addiu       $s4, $s1, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 13296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113330u;
        goto label_113330;
    }
    ctx->pc = 0x113328u;
    {
        const bool branch_taken_0x113328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113328u;
        // 0x11332c: 0x263433f0  addiu       $s4, $s1, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 13296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113328) {
            ctx->pc = 0x113358u;
            goto label_113358;
        }
    }
    ctx->pc = 0x113330u;
label_113330:
    // 0x113330: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x113330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_113334:
    // 0x113334: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x113334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_113338:
    // 0x113338: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x113338u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_11333c:
    // 0x11333c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x11333cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_113340:
    // 0x113340: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x113340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_113344:
    // 0x113344: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x113344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_113348:
    // 0x113348: 0xc06723e  jal         func_19C8F8
label_11334c:
    if (ctx->pc == 0x11334Cu) {
        ctx->pc = 0x11334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113348u;
        // 0x11334c: 0x24840108  addiu       $a0, $a0, 0x108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113350u;
        goto label_113350;
    }
    ctx->pc = 0x113348u;
    SET_GPR_U32(ctx, 31, 0x113350u);
    ctx->pc = 0x11334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113348u;
    // 0x11334c: 0x24840108  addiu       $a0, $a0, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x113348u, 0x113350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113350u;
label_113350:
    // 0x113350: 0x10000010  b           . + 4 + (0x10 << 2)
label_113354:
    if (ctx->pc == 0x113354u) {
        ctx->pc = 0x113354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113350u;
        // 0x113354: 0x263233f0  addiu       $s2, $s1, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 13296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113358u;
        goto label_113358;
    }
    ctx->pc = 0x113350u;
    {
        const bool branch_taken_0x113350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113350u;
        // 0x113354: 0x263233f0  addiu       $s2, $s1, 0x33F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 13296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113350) {
            ctx->pc = 0x113394u;
            goto label_113394;
        }
    }
    ctx->pc = 0x113358u;
label_113358:
    // 0x113358: 0x26303518  addiu       $s0, $s1, 0x3518
    ctx->pc = 0x113358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 13592));
label_11335c:
    // 0x11335c: 0x26333538  addiu       $s3, $s1, 0x3538
    ctx->pc = 0x11335cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 13624));
label_113360:
    // 0x113360: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x113360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_113364:
    // 0x113364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113368:
    // 0x113368: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x113368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_11336c:
    // 0x11336c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x11336cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_113370:
    // 0x113370: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x113370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_113374:
    // 0x113374: 0xc06723e  jal         func_19C8F8
label_113378:
    if (ctx->pc == 0x113378u) {
        ctx->pc = 0x113378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113374u;
        // 0x113378: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11337Cu;
        goto label_11337c;
    }
    ctx->pc = 0x113374u;
    SET_GPR_U32(ctx, 31, 0x11337Cu);
    ctx->pc = 0x113378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113374u;
    // 0x113378: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x113374u, 0x11337Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11337Cu;
label_11337c:
    // 0x11337c: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
label_113380:
    if (ctx->pc == 0x113380u) {
        ctx->pc = 0x113380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11337Cu;
        // 0x113380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113384u;
        goto label_113384;
    }
    ctx->pc = 0x11337Cu;
    {
        const bool branch_taken_0x11337c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x113380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11337Cu;
        // 0x113380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11337c) {
            ctx->pc = 0x113368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113368;
        }
    }
    ctx->pc = 0x113384u;
label_113384:
    // 0x113384: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x113384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_113388:
    // 0x113388: 0xc06723e  jal         func_19C8F8
label_11338c:
    if (ctx->pc == 0x11338Cu) {
        ctx->pc = 0x11338Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113388u;
        // 0x11338c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113390u;
        goto label_113390;
    }
    ctx->pc = 0x113388u;
    SET_GPR_U32(ctx, 31, 0x113390u);
    ctx->pc = 0x11338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113388u;
    // 0x11338c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8F8u, 0x113388u, 0x113390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113390u;
label_113390:
    // 0x113390: 0x263233f0  addiu       $s2, $s1, 0x33F0
    ctx->pc = 0x113390u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 13296));
label_113394:
    // 0x113394: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113398:
    // 0x113398: 0xc045084  jal         func_114210
label_11339c:
    if (ctx->pc == 0x11339Cu) {
        ctx->pc = 0x11339Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113398u;
        // 0x11339c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133A0u;
        goto label_1133a0;
    }
    ctx->pc = 0x113398u;
    SET_GPR_U32(ctx, 31, 0x1133A0u);
    ctx->pc = 0x11339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113398u;
    // 0x11339c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114210u, 0x113398u, 0x1133A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133A0u;
label_1133a0:
    // 0x1133a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1133a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1133a4:
    // 0x1133a4: 0x5200ffb8  beql        $s0, $zero, . + 4 + (-0x48 << 2)
label_1133a8:
    if (ctx->pc == 0x1133A8u) {
        ctx->pc = 0x1133A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133A4u;
        // 0x1133a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133ACu;
        goto label_1133ac;
    }
    ctx->pc = 0x1133A4u;
    {
        const bool branch_taken_0x1133a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1133a4) {
            ctx->pc = 0x1133A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1133A4u;
            // 0x1133a8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113288;
        }
    }
    ctx->pc = 0x1133ACu;
label_1133ac:
    // 0x1133ac: 0xc0680f6  jal         func_1A03D8
label_1133b0:
    if (ctx->pc == 0x1133B0u) {
        ctx->pc = 0x1133B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133ACu;
        // 0x1133b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133B4u;
        goto label_1133b4;
    }
    ctx->pc = 0x1133ACu;
    SET_GPR_U32(ctx, 31, 0x1133B4u);
    ctx->pc = 0x1133B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133ACu;
    // 0x1133b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x1133ACu, 0x1133B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133B4u;
label_1133b4:
    // 0x1133b4: 0xc068064  jal         func_1A0190
label_1133b8:
    if (ctx->pc == 0x1133B8u) {
        ctx->pc = 0x1133B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133B4u;
        // 0x1133b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133BCu;
        goto label_1133bc;
    }
    ctx->pc = 0x1133B4u;
    SET_GPR_U32(ctx, 31, 0x1133BCu);
    ctx->pc = 0x1133B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1133B4u;
    // 0x1133b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0190u, 0x1133B4u, 0x1133BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133BCu;
label_1133bc:
    // 0x1133bc: 0xc045138  jal         func_1144E0
label_1133c0:
    if (ctx->pc == 0x1133C0u) {
        ctx->pc = 0x1133C4u;
        goto label_1133c4;
    }
    ctx->pc = 0x1133BCu;
    SET_GPR_U32(ctx, 31, 0x1133C4u);
    ctx->pc = 0x1144E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1144E0u, 0x1133BCu, 0x1133C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133C4u;
label_1133c4:
    // 0x1133c4: 0xc045172  jal         func_1145C8
label_1133c8:
    if (ctx->pc == 0x1133C8u) {
        ctx->pc = 0x1133CCu;
        goto label_1133cc;
    }
    ctx->pc = 0x1133C4u;
    SET_GPR_U32(ctx, 31, 0x1133CCu);
    ctx->pc = 0x1145C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1145C8u, 0x1133C4u, 0x1133CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1133CCu;
label_1133cc:
    // 0x1133cc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1133ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1133d0:
    // 0x1133d0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1133d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1133d4:
    // 0x1133d4: 0x262233f8  addiu       $v0, $s1, 0x33F8
    ctx->pc = 0x1133d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 13304));
label_1133d8:
    // 0x1133d8: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
label_1133dc:
    if (ctx->pc == 0x1133DCu) {
        ctx->pc = 0x1133DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133D8u;
        // 0x1133dc: 0x45280a  movz        $a1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133E0u;
        goto label_1133e0;
    }
    ctx->pc = 0x1133D8u;
    {
        const bool branch_taken_0x1133d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1133DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133D8u;
        // 0x1133dc: 0x45280a  movz        $a1, $v0, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1133d8) {
            ctx->pc = 0x1133E4u;
            goto label_1133e4;
        }
    }
    ctx->pc = 0x1133E0u;
label_1133e0:
    // 0x1133e0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1133e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1133e4:
    // 0x1133e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1133e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1133e8:
    // 0x1133e8: 0x40f809  jalr        $v0
label_1133ec:
    if (ctx->pc == 0x1133ECu) {
        ctx->pc = 0x1133ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133E8u;
        // 0x1133ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1133F0u;
        goto label_1133f0;
    }
    ctx->pc = 0x1133E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1133F0u);
        ctx->pc = 0x1133ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1133E8u;
        // 0x1133ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1133E8u, 0x1133F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1133F0u;
label_1133f0:
    // 0x1133f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1133f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1133f4:
    // 0x1133f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1133f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1133f8:
    // 0x1133f8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1133f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1133fc:
    // 0x1133fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1133fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113400:
    // 0x113400: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x113400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_113404:
    // 0x113404: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_113408:
    // 0x113408: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x113408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_11340c:
    // 0x11340c: 0x60f809  jalr        $v1
label_113410:
    if (ctx->pc == 0x113410u) {
        ctx->pc = 0x113410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11340Cu;
        // 0x113410: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113414u;
        goto label_113414;
    }
    ctx->pc = 0x11340Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113414u);
        ctx->pc = 0x113410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11340Cu;
        // 0x113410: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11340Cu, 0x113414u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113414u;
label_113414:
    // 0x113414: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x113414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_113418:
    // 0x113418: 0xc04523e  jal         func_1148F8
label_11341c:
    if (ctx->pc == 0x11341Cu) {
        ctx->pc = 0x11341Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113418u;
        // 0x11341c: 0x2484039c  addiu       $a0, $a0, 0x39C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 924));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113420u;
        goto label_113420;
    }
    ctx->pc = 0x113418u;
    SET_GPR_U32(ctx, 31, 0x113420u);
    ctx->pc = 0x11341Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113418u;
    // 0x11341c: 0x2484039c  addiu       $a0, $a0, 0x39C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 924));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1148F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1148F8u, 0x113418u, 0x113420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113420u;
label_113420:
    // 0x113420: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x113420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_113424:
    // 0x113424: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x113424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_113428:
    // 0x113428: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_11342c:
    // 0x11342c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x11342cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113430:
    // 0x113430: 0x60f809  jalr        $v1
label_113434:
    if (ctx->pc == 0x113434u) {
        ctx->pc = 0x113434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113430u;
        // 0x113434: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113438u;
        goto label_113438;
    }
    ctx->pc = 0x113430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113438u);
        ctx->pc = 0x113434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113430u;
        // 0x113434: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113430u, 0x113438u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113438u;
label_113438:
    // 0x113438: 0x8e27361c  lw          $a3, 0x361C($s1)
    ctx->pc = 0x113438u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13852)));
label_11343c:
    // 0x11343c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x11343cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_113440:
    // 0x113440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x113440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_113444:
    // 0x113444: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x113444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_113448:
    // 0x113448: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x113448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_11344c:
    // 0x11344c: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x11344cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_113450:
    // 0x113450: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x113450u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_113454:
    // 0x113454: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x113454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_113458:
    // 0x113458: 0xae27361c  sw          $a3, 0x361C($s1)
    ctx->pc = 0x113458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 13852), GPR_U32(ctx, 7));
label_11345c:
    // 0x11345c: 0x60f809  jalr        $v1
label_113460:
    if (ctx->pc == 0x113460u) {
        ctx->pc = 0x113460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11345Cu;
        // 0x113460: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113464u;
        goto label_113464;
    }
    ctx->pc = 0x11345Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113464u);
        ctx->pc = 0x113460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11345Cu;
        // 0x113460: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11345Cu, 0x113464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113464u;
label_113464:
    // 0x113464: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x113464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_113468:
    // 0x113468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x113468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11346c:
    // 0x11346c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x11346cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_113470:
    // 0x113470: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x113470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_113474:
    // 0x113474: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x113474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_113478:
    // 0x113478: 0x60f809  jalr        $v1
label_11347c:
    if (ctx->pc == 0x11347Cu) {
        ctx->pc = 0x11347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113478u;
        // 0x11347c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113480u;
        goto label_113480;
    }
    ctx->pc = 0x113478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113480u);
        ctx->pc = 0x11347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113478u;
        // 0x11347c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113478u, 0x113480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113480u;
label_113480:
    // 0x113480: 0x8e24038c  lw          $a0, 0x38C($s1)
    ctx->pc = 0x113480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
label_113484:
    // 0x113484: 0xc060e88  jal         func_183A20
label_113488:
    if (ctx->pc == 0x113488u) {
        ctx->pc = 0x113488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113484u;
        // 0x113488: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11348Cu;
        goto label_11348c;
    }
    ctx->pc = 0x113484u;
    SET_GPR_U32(ctx, 31, 0x11348Cu);
    ctx->pc = 0x113488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113484u;
    // 0x113488: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183A20u, 0x113484u, 0x11348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11348Cu;
label_11348c:
    // 0x11348c: 0xc0680f6  jal         func_1A03D8
label_113490:
    if (ctx->pc == 0x113490u) {
        ctx->pc = 0x113490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11348Cu;
        // 0x113490: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113494u;
        goto label_113494;
    }
    ctx->pc = 0x11348Cu;
    SET_GPR_U32(ctx, 31, 0x113494u);
    ctx->pc = 0x113490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11348Cu;
    // 0x113490: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A03D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A03D8u, 0x11348Cu, 0x113494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113494u;
label_113494:
    // 0x113494: 0xc068064  jal         func_1A0190
label_113498:
    if (ctx->pc == 0x113498u) {
        ctx->pc = 0x113498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113494u;
        // 0x113498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11349Cu;
        goto label_11349c;
    }
    ctx->pc = 0x113494u;
    SET_GPR_U32(ctx, 31, 0x11349Cu);
    ctx->pc = 0x113498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113494u;
    // 0x113498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0190u, 0x113494u, 0x11349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11349Cu;
label_11349c:
    // 0x11349c: 0x8e223410  lw          $v0, 0x3410($s1)
    ctx->pc = 0x11349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13328)));
label_1134a0:
    // 0x1134a0: 0x1040ff79  beqz        $v0, . + 4 + (-0x87 << 2)
label_1134a4:
    if (ctx->pc == 0x1134A4u) {
        ctx->pc = 0x1134A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134A0u;
        // 0x1134a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1134A8u;
        goto label_1134a8;
    }
    ctx->pc = 0x1134A0u;
    {
        const bool branch_taken_0x1134a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134A0u;
        // 0x1134a4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134a0) {
            ctx->pc = 0x113288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113288;
        }
    }
    ctx->pc = 0x1134A8u;
label_1134a8:
    // 0x1134a8: 0x8e220168  lw          $v0, 0x168($s1)
    ctx->pc = 0x1134a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
label_1134ac:
    // 0x1134ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1134acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1134b0:
    // 0x1134b0: 0x5440ff76  bnel        $v0, $zero, . + 4 + (-0x8A << 2)
label_1134b4:
    if (ctx->pc == 0x1134B4u) {
        ctx->pc = 0x1134B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134B0u;
        // 0x1134b4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1134B8u;
        goto label_1134b8;
    }
    ctx->pc = 0x1134B0u;
    {
        const bool branch_taken_0x1134b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1134b0) {
            ctx->pc = 0x1134B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1134B0u;
            // 0x1134b4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11328Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11328c;
        }
    }
    ctx->pc = 0x1134B8u;
label_1134b8:
    // 0x1134b8: 0x1000ff81  b           . + 4 + (-0x7F << 2)
label_1134bc:
    if (ctx->pc == 0x1134BCu) {
        ctx->pc = 0x1134BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134B8u;
        // 0x1134bc: 0x8e24038c  lw          $a0, 0x38C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1134C0u;
        goto label_fallthrough_0x1134b8;
    }
    ctx->pc = 0x1134B8u;
    {
        const bool branch_taken_0x1134b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1134BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1134B8u;
        // 0x1134bc: 0x8e24038c  lw          $a0, 0x38C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 908)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1134b8) {
            ctx->pc = 0x1132C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1132c0;
        }
    }
label_fallthrough_0x1134b8:
    ctx->pc = 0x1134C0u;
}
