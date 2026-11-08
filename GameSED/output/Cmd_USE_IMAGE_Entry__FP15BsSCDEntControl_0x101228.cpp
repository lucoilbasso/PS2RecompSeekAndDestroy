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

// Function: Cmd_USE_IMAGE_Entry__FP15BsSCDEntControl
// Address: 0x101228 - 0x10145c
void Cmd_USE_IMAGE_Entry__FP15BsSCDEntControl_0x101228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_USE_IMAGE_Entry__FP15BsSCDEntControl_0x101228");
#endif

    switch (ctx->pc) {
        case 0x101228u: goto label_101228;
        case 0x10122cu: goto label_10122c;
        case 0x101230u: goto label_101230;
        case 0x101234u: goto label_101234;
        case 0x101238u: goto label_101238;
        case 0x10123cu: goto label_10123c;
        case 0x101240u: goto label_101240;
        case 0x101244u: goto label_101244;
        case 0x101248u: goto label_101248;
        case 0x10124cu: goto label_10124c;
        case 0x101250u: goto label_101250;
        case 0x101254u: goto label_101254;
        case 0x101258u: goto label_101258;
        case 0x10125cu: goto label_10125c;
        case 0x101260u: goto label_101260;
        case 0x101264u: goto label_101264;
        case 0x101268u: goto label_101268;
        case 0x10126cu: goto label_10126c;
        case 0x101270u: goto label_101270;
        case 0x101274u: goto label_101274;
        case 0x101278u: goto label_101278;
        case 0x10127cu: goto label_10127c;
        case 0x101280u: goto label_101280;
        case 0x101284u: goto label_101284;
        case 0x101288u: goto label_101288;
        case 0x10128cu: goto label_10128c;
        case 0x101290u: goto label_101290;
        case 0x101294u: goto label_101294;
        case 0x101298u: goto label_101298;
        case 0x10129cu: goto label_10129c;
        case 0x1012a0u: goto label_1012a0;
        case 0x1012a4u: goto label_1012a4;
        case 0x1012a8u: goto label_1012a8;
        case 0x1012acu: goto label_1012ac;
        case 0x1012b0u: goto label_1012b0;
        case 0x1012b4u: goto label_1012b4;
        case 0x1012b8u: goto label_1012b8;
        case 0x1012bcu: goto label_1012bc;
        case 0x1012c0u: goto label_1012c0;
        case 0x1012c4u: goto label_1012c4;
        case 0x1012c8u: goto label_1012c8;
        case 0x1012ccu: goto label_1012cc;
        case 0x1012d0u: goto label_1012d0;
        case 0x1012d4u: goto label_1012d4;
        case 0x1012d8u: goto label_1012d8;
        case 0x1012dcu: goto label_1012dc;
        case 0x1012e0u: goto label_1012e0;
        case 0x1012e4u: goto label_1012e4;
        case 0x1012e8u: goto label_1012e8;
        case 0x1012ecu: goto label_1012ec;
        case 0x1012f0u: goto label_1012f0;
        case 0x1012f4u: goto label_1012f4;
        case 0x1012f8u: goto label_1012f8;
        case 0x1012fcu: goto label_1012fc;
        case 0x101300u: goto label_101300;
        case 0x101304u: goto label_101304;
        case 0x101308u: goto label_101308;
        case 0x10130cu: goto label_10130c;
        case 0x101310u: goto label_101310;
        case 0x101314u: goto label_101314;
        case 0x101318u: goto label_101318;
        case 0x10131cu: goto label_10131c;
        case 0x101320u: goto label_101320;
        case 0x101324u: goto label_101324;
        case 0x101328u: goto label_101328;
        case 0x10132cu: goto label_10132c;
        case 0x101330u: goto label_101330;
        case 0x101334u: goto label_101334;
        case 0x101338u: goto label_101338;
        case 0x10133cu: goto label_10133c;
        case 0x101340u: goto label_101340;
        case 0x101344u: goto label_101344;
        case 0x101348u: goto label_101348;
        case 0x10134cu: goto label_10134c;
        case 0x101350u: goto label_101350;
        case 0x101354u: goto label_101354;
        case 0x101358u: goto label_101358;
        case 0x10135cu: goto label_10135c;
        case 0x101360u: goto label_101360;
        case 0x101364u: goto label_101364;
        case 0x101368u: goto label_101368;
        case 0x10136cu: goto label_10136c;
        case 0x101370u: goto label_101370;
        case 0x101374u: goto label_101374;
        case 0x101378u: goto label_101378;
        case 0x10137cu: goto label_10137c;
        case 0x101380u: goto label_101380;
        case 0x101384u: goto label_101384;
        case 0x101388u: goto label_101388;
        case 0x10138cu: goto label_10138c;
        case 0x101390u: goto label_101390;
        case 0x101394u: goto label_101394;
        case 0x101398u: goto label_101398;
        case 0x10139cu: goto label_10139c;
        case 0x1013a0u: goto label_1013a0;
        case 0x1013a4u: goto label_1013a4;
        case 0x1013a8u: goto label_1013a8;
        case 0x1013acu: goto label_1013ac;
        case 0x1013b0u: goto label_1013b0;
        case 0x1013b4u: goto label_1013b4;
        case 0x1013b8u: goto label_1013b8;
        case 0x1013bcu: goto label_1013bc;
        case 0x1013c0u: goto label_1013c0;
        case 0x1013c4u: goto label_1013c4;
        case 0x1013c8u: goto label_1013c8;
        case 0x1013ccu: goto label_1013cc;
        case 0x1013d0u: goto label_1013d0;
        case 0x1013d4u: goto label_1013d4;
        case 0x1013d8u: goto label_1013d8;
        case 0x1013dcu: goto label_1013dc;
        case 0x1013e0u: goto label_1013e0;
        case 0x1013e4u: goto label_1013e4;
        case 0x1013e8u: goto label_1013e8;
        case 0x1013ecu: goto label_1013ec;
        case 0x1013f0u: goto label_1013f0;
        case 0x1013f4u: goto label_1013f4;
        case 0x1013f8u: goto label_1013f8;
        case 0x1013fcu: goto label_1013fc;
        case 0x101400u: goto label_101400;
        case 0x101404u: goto label_101404;
        case 0x101408u: goto label_101408;
        case 0x10140cu: goto label_10140c;
        case 0x101410u: goto label_101410;
        case 0x101414u: goto label_101414;
        case 0x101418u: goto label_101418;
        case 0x10141cu: goto label_10141c;
        case 0x101420u: goto label_101420;
        case 0x101424u: goto label_101424;
        case 0x101428u: goto label_101428;
        case 0x10142cu: goto label_10142c;
        case 0x101430u: goto label_101430;
        case 0x101434u: goto label_101434;
        case 0x101438u: goto label_101438;
        case 0x10143cu: goto label_10143c;
        case 0x101440u: goto label_101440;
        case 0x101444u: goto label_101444;
        case 0x101448u: goto label_101448;
        case 0x10144cu: goto label_10144c;
        case 0x101450u: goto label_101450;
        case 0x101454u: goto label_101454;
        case 0x101458u: goto label_101458;
        default: break;
    }

    ctx->pc = 0x101228u;

label_101228:
    // 0x101228: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x101228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_10122c:
    // 0x10122c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10122cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101230:
    // 0x101230: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x101230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_101234:
    // 0x101234: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x101234u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101238:
    // 0x101238: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x101238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_10123c:
    // 0x10123c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10123cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_101240:
    // 0x101240: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x101240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_101244:
    // 0x101244: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x101244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_101248:
    // 0x101248: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x101248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_10124c:
    // 0x10124c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_101250:
    // 0x101250: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x101250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_101254:
    // 0x101254: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x101254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_101258:
    // 0x101258: 0x8c700044  lw          $s0, 0x44($v1)
    ctx->pc = 0x101258u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_10125c:
    // 0x10125c: 0x14a20050  bne         $a1, $v0, . + 4 + (0x50 << 2)
label_101260:
    if (ctx->pc == 0x101260u) {
        ctx->pc = 0x101260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10125Cu;
        // 0x101260: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101264u;
        goto label_101264;
    }
    ctx->pc = 0x10125Cu;
    {
        const bool branch_taken_0x10125c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x101260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10125Cu;
        // 0x101260: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10125c) {
            ctx->pc = 0x1013A0u;
            goto label_1013a0;
        }
    }
    ctx->pc = 0x101264u;
label_101264:
    // 0x101264: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x101264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_101268:
    // 0x101268: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_10126c:
    if (ctx->pc == 0x10126Cu) {
        ctx->pc = 0x10126Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101268u;
        // 0x10126c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101270u;
        goto label_101270;
    }
    ctx->pc = 0x101268u;
    {
        const bool branch_taken_0x101268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101268) {
            ctx->pc = 0x10126Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101268u;
            // 0x10126c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1012F8u;
            goto label_1012f8;
        }
    }
    ctx->pc = 0x101270u;
label_101270:
    // 0x101270: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x101270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101274:
    // 0x101274: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x101274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_101278:
    // 0x101278: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
label_10127c:
    if (ctx->pc == 0x10127Cu) {
        ctx->pc = 0x10127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101278u;
        // 0x10127c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101280u;
        goto label_101280;
    }
    ctx->pc = 0x101278u;
    {
        const bool branch_taken_0x101278 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101278u;
        // 0x10127c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101278) {
            ctx->pc = 0x1012E8u;
            goto label_1012e8;
        }
    }
    ctx->pc = 0x101280u;
label_101280:
    // 0x101280: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x101280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_101284:
    // 0x101284: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x101284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_101288:
    // 0x101288: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x101288u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_10128c:
    // 0x10128c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x10128cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_101290:
    // 0x101290: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x101290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_101294:
    // 0x101294: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x101294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101298:
    // 0x101298: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_10129c:
    if (ctx->pc == 0x10129Cu) {
        ctx->pc = 0x10129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101298u;
        // 0x10129c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012A0u;
        goto label_1012a0;
    }
    ctx->pc = 0x101298u;
    {
        const bool branch_taken_0x101298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101298u;
        // 0x10129c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101298) {
            ctx->pc = 0x1012A8u;
            goto label_1012a8;
        }
    }
    ctx->pc = 0x1012A0u;
label_1012a0:
    // 0x1012a0: 0xc067f04  jal         func_19FC10
label_1012a4:
    if (ctx->pc == 0x1012A4u) {
        ctx->pc = 0x1012A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012A0u;
        // 0x1012a4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012A8u;
        goto label_1012a8;
    }
    ctx->pc = 0x1012A0u;
    SET_GPR_U32(ctx, 31, 0x1012A8u);
    ctx->pc = 0x1012A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012A0u;
    // 0x1012a4: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1012A0u, 0x1012A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012A8u;
label_1012a8:
    // 0x1012a8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1012a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1012ac:
    // 0x1012ac: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1012b0:
    if (ctx->pc == 0x1012B0u) {
        ctx->pc = 0x1012B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012ACu;
        // 0x1012b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012B4u;
        goto label_1012b4;
    }
    ctx->pc = 0x1012ACu;
    {
        const bool branch_taken_0x1012ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1012B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012ACu;
        // 0x1012b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012ac) {
            ctx->pc = 0x1012CCu;
            goto label_1012cc;
        }
    }
    ctx->pc = 0x1012B4u;
label_1012b4:
    // 0x1012b4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1012b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1012b8:
    // 0x1012b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1012b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1012bc:
    // 0x1012bc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1012bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1012c0:
    // 0x1012c0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1012c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1012c4:
    // 0x1012c4: 0x60f809  jalr        $v1
label_1012c8:
    if (ctx->pc == 0x1012C8u) {
        ctx->pc = 0x1012C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012C4u;
        // 0x1012c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012CCu;
        goto label_1012cc;
    }
    ctx->pc = 0x1012C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1012CCu);
        ctx->pc = 0x1012C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012C4u;
        // 0x1012c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1012C4u, 0x1012CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1012CCu;
label_1012cc:
    // 0x1012cc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1012ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1012d0:
    // 0x1012d0: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1012d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1012d4:
    // 0x1012d4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1012d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1012d8:
    // 0x1012d8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1012d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1012dc:
    // 0x1012dc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1012dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1012e0:
    // 0x1012e0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1012e4:
    if (ctx->pc == 0x1012E4u) {
        ctx->pc = 0x1012E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012E0u;
        // 0x1012e4: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012E8u;
        goto label_1012e8;
    }
    ctx->pc = 0x1012E0u;
    {
        const bool branch_taken_0x1012e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1012E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012E0u;
        // 0x1012e4: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1012e0) {
            ctx->pc = 0x101280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101280;
        }
    }
    ctx->pc = 0x1012E8u;
label_1012e8:
    // 0x1012e8: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x1012e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1012ec:
    // 0x1012ec: 0xc067f04  jal         func_19FC10
label_1012f0:
    if (ctx->pc == 0x1012F0u) {
        ctx->pc = 0x1012F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012ECu;
        // 0x1012f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1012F4u;
        goto label_1012f4;
    }
    ctx->pc = 0x1012ECu;
    SET_GPR_U32(ctx, 31, 0x1012F4u);
    ctx->pc = 0x1012F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012ECu;
    // 0x1012f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1012ECu, 0x1012F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1012F4u;
label_1012f4:
    // 0x1012f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1012f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1012f8:
    // 0x1012f8: 0xc06a26e  jal         func_1A89B8
label_1012fc:
    if (ctx->pc == 0x1012FCu) {
        ctx->pc = 0x1012FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1012F8u;
        // 0x1012fc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101300u;
        goto label_101300;
    }
    ctx->pc = 0x1012F8u;
    SET_GPR_U32(ctx, 31, 0x101300u);
    ctx->pc = 0x1012FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1012F8u;
    // 0x1012fc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1012F8u, 0x101300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101300u;
label_101300:
    // 0x101300: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x101300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101304:
    // 0x101304: 0xaea20024  sw          $v0, 0x24($s5)
    ctx->pc = 0x101304u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 2));
label_101308:
    // 0x101308: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_10130c:
    if (ctx->pc == 0x10130Cu) {
        ctx->pc = 0x10130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101308u;
        // 0x10130c: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101310u;
        goto label_101310;
    }
    ctx->pc = 0x101308u;
    {
        const bool branch_taken_0x101308 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101308u;
        // 0x10130c: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101308) {
            ctx->pc = 0x101314u;
            goto label_101314;
        }
    }
    ctx->pc = 0x101310u;
label_101310:
    // 0x101310: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x101310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_101314:
    // 0x101314: 0xc068086  jal         func_1A0218
label_101318:
    if (ctx->pc == 0x101318u) {
        ctx->pc = 0x10131Cu;
        goto label_10131c;
    }
    ctx->pc = 0x101314u;
    SET_GPR_U32(ctx, 31, 0x10131Cu);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x101314u, 0x10131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10131Cu;
label_10131c:
    // 0x10131c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_101320:
    if (ctx->pc == 0x101320u) {
        ctx->pc = 0x101320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10131Cu;
        // 0x101320: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101324u;
        goto label_101324;
    }
    ctx->pc = 0x10131Cu;
    {
        const bool branch_taken_0x10131c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10131Cu;
        // 0x101320: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10131c) {
            ctx->pc = 0x101338u;
            goto label_101338;
        }
    }
    ctx->pc = 0x101324u;
label_101324:
    // 0x101324: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x101324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_101328:
    // 0x101328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10132c:
    // 0x10132c: 0x24a51a28  addiu       $a1, $a1, 0x1A28
    ctx->pc = 0x10132cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6696));
label_101330:
    // 0x101330: 0xc068186  jal         func_1A0618
label_101334:
    if (ctx->pc == 0x101334u) {
        ctx->pc = 0x101334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101330u;
        // 0x101334: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101338u;
        goto label_101338;
    }
    ctx->pc = 0x101330u;
    SET_GPR_U32(ctx, 31, 0x101338u);
    ctx->pc = 0x101334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101330u;
    // 0x101334: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x101330u, 0x101338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101338u;
label_101338:
    // 0x101338: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x101338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_10133c:
    // 0x10133c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
label_101340:
    if (ctx->pc == 0x101340u) {
        ctx->pc = 0x101340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10133Cu;
        // 0x101340: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101344u;
        goto label_101344;
    }
    ctx->pc = 0x10133Cu;
    {
        const bool branch_taken_0x10133c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x101340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10133Cu;
        // 0x101340: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10133c) {
            ctx->pc = 0x10136Cu;
            goto label_10136c;
        }
    }
    ctx->pc = 0x101344u;
label_101344:
    // 0x101344: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x101344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_101348:
    // 0x101348: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x101348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_10134c:
    // 0x10134c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10134cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_101350:
    // 0x101350: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_101354:
    // 0x101354: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x101354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_101358:
    // 0x101358: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x101358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_10135c:
    // 0x10135c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x10135cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_101360:
    // 0x101360: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x101360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_101364:
    // 0x101364: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_101368:
    if (ctx->pc == 0x101368u) {
        ctx->pc = 0x101368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101364u;
        // 0x101368: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10136Cu;
        goto label_10136c;
    }
    ctx->pc = 0x101364u;
    {
        const bool branch_taken_0x101364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101364u;
        // 0x101368: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101364) {
            ctx->pc = 0x101348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101348;
        }
    }
    ctx->pc = 0x10136Cu;
label_10136c:
    // 0x10136c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x10136cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_101370:
    // 0x101370: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x101370u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_101374:
    // 0x101374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_101378:
    // 0x101378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10137c:
    // 0x10137c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10137cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_101380:
    // 0x101380: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x101380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101384:
    // 0x101384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_101388:
    // 0x101388: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_10138c:
    // 0x10138c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10138cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_101390:
    // 0x101390: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_101394:
    // 0x101394: 0x804039c  j           func_100E70
label_101398:
    if (ctx->pc == 0x101398u) {
        ctx->pc = 0x101398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101394u;
        // 0x101398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10139Cu;
        goto label_10139c;
    }
    ctx->pc = 0x101394u;
    ctx->pc = 0x101398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101394u;
    // 0x101398: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100E70u;
    ImagePageInfoAlloc__9ApcObjRscii_0x100e70(rdram, ctx, runtime); return;
    ctx->pc = 0x10139Cu;
label_10139c:
    // 0x10139c: 0x0  nop
    ctx->pc = 0x10139cu;
    // NOP
label_1013a0:
    // 0x1013a0: 0xc06a26e  jal         func_1A89B8
label_1013a4:
    if (ctx->pc == 0x1013A4u) {
        ctx->pc = 0x1013A8u;
        goto label_1013a8;
    }
    ctx->pc = 0x1013A0u;
    SET_GPR_U32(ctx, 31, 0x1013A8u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1013A0u, 0x1013A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013A8u;
label_1013a8:
    // 0x1013a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1013a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1013ac:
    // 0x1013ac: 0xc06a26e  jal         func_1A89B8
label_1013b0:
    if (ctx->pc == 0x1013B0u) {
        ctx->pc = 0x1013B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013ACu;
        // 0x1013b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013B4u;
        goto label_1013b4;
    }
    ctx->pc = 0x1013ACu;
    SET_GPR_U32(ctx, 31, 0x1013B4u);
    ctx->pc = 0x1013B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013ACu;
    // 0x1013b0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x1013ACu, 0x1013B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013B4u;
label_1013b4:
    // 0x1013b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1013b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1013b8:
    // 0x1013b8: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_1013bc:
    if (ctx->pc == 0x1013BCu) {
        ctx->pc = 0x1013BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013B8u;
        // 0x1013bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013C0u;
        goto label_1013c0;
    }
    ctx->pc = 0x1013B8u;
    {
        const bool branch_taken_0x1013b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1013BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013B8u;
        // 0x1013bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013b8) {
            ctx->pc = 0x101418u;
            goto label_101418;
        }
    }
    ctx->pc = 0x1013C0u;
label_1013c0:
    // 0x1013c0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1013c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1013c4:
    // 0x1013c4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1013c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1013c8:
    // 0x1013c8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1013c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1013cc:
    // 0x1013cc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1013ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1013d0:
    // 0x1013d0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1013d4:
    if (ctx->pc == 0x1013D4u) {
        ctx->pc = 0x1013D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013D0u;
        // 0x1013d4: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013D8u;
        goto label_1013d8;
    }
    ctx->pc = 0x1013D0u;
    {
        const bool branch_taken_0x1013d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1013d0) {
            ctx->pc = 0x1013D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1013D0u;
            // 0x1013d4: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1013E4u;
            goto label_1013e4;
        }
    }
    ctx->pc = 0x1013D8u;
label_1013d8:
    // 0x1013d8: 0xc067f04  jal         func_19FC10
label_1013dc:
    if (ctx->pc == 0x1013DCu) {
        ctx->pc = 0x1013DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013D8u;
        // 0x1013dc: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013E0u;
        goto label_1013e0;
    }
    ctx->pc = 0x1013D8u;
    SET_GPR_U32(ctx, 31, 0x1013E0u);
    ctx->pc = 0x1013DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1013D8u;
    // 0x1013dc: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1013D8u, 0x1013E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1013E0u;
label_1013e0:
    // 0x1013e0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1013e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1013e4:
    // 0x1013e4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1013e8:
    if (ctx->pc == 0x1013E8u) {
        ctx->pc = 0x1013E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013E4u;
        // 0x1013e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013ECu;
        goto label_1013ec;
    }
    ctx->pc = 0x1013E4u;
    {
        const bool branch_taken_0x1013e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1013E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013E4u;
        // 0x1013e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013e4) {
            ctx->pc = 0x101404u;
            goto label_101404;
        }
    }
    ctx->pc = 0x1013ECu;
label_1013ec:
    // 0x1013ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1013ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1013f0:
    // 0x1013f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1013f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1013f4:
    // 0x1013f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1013f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1013f8:
    // 0x1013f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1013f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1013fc:
    // 0x1013fc: 0x60f809  jalr        $v1
label_101400:
    if (ctx->pc == 0x101400u) {
        ctx->pc = 0x101400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013FCu;
        // 0x101400: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101404u;
        goto label_101404;
    }
    ctx->pc = 0x1013FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x101404u);
        ctx->pc = 0x101400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013FCu;
        // 0x101400: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1013FCu, 0x101404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101404u;
label_101404:
    // 0x101404: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x101404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_101408:
    // 0x101408: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x101408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_10140c:
    // 0x10140c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10140cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_101410:
    // 0x101410: 0x10000009  b           . + 4 + (0x9 << 2)
label_101414:
    if (ctx->pc == 0x101414u) {
        ctx->pc = 0x101414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101410u;
        // 0x101414: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101418u;
        goto label_101418;
    }
    ctx->pc = 0x101410u;
    {
        const bool branch_taken_0x101410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101410u;
        // 0x101414: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101410) {
            ctx->pc = 0x101438u;
            goto label_101438;
        }
    }
    ctx->pc = 0x101418u;
label_101418:
    // 0x101418: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_10141c:
    if (ctx->pc == 0x10141Cu) {
        ctx->pc = 0x10141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101418u;
        // 0x10141c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101420u;
        goto label_101420;
    }
    ctx->pc = 0x101418u;
    {
        const bool branch_taken_0x101418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101418u;
        // 0x10141c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101418) {
            ctx->pc = 0x10143Cu;
            goto label_10143c;
        }
    }
    ctx->pc = 0x101420u;
label_101420:
    // 0x101420: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x101420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_101424:
    // 0x101424: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x101424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_101428:
    // 0x101428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10142c:
    // 0x10142c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x10142cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_101430:
    // 0x101430: 0xc04171a  jal         func_105C68
label_101434:
    if (ctx->pc == 0x101434u) {
        ctx->pc = 0x101434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101430u;
        // 0x101434: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x101438u;
        goto label_101438;
    }
    ctx->pc = 0x101430u;
    SET_GPR_U32(ctx, 31, 0x101438u);
    ctx->pc = 0x101434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101430u;
    // 0x101434: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x101430u, 0x101438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101438u;
label_101438:
    // 0x101438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10143c:
    // 0x10143c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10143cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_101440:
    // 0x101440: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x101440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_101444:
    // 0x101444: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x101444u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_101448:
    // 0x101448: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x101448u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10144c:
    // 0x10144c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10144cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_101450:
    // 0x101450: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_101454:
    // 0x101454: 0x3e00008  jr          $ra
label_101458:
    if (ctx->pc == 0x101458u) {
        ctx->pc = 0x101458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101454u;
        // 0x101458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10145Cu;
        goto label_fallthrough_0x101454;
    }
    ctx->pc = 0x101454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101454u;
        // 0x101458: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x101454:
    ctx->pc = 0x10145Cu;
}
