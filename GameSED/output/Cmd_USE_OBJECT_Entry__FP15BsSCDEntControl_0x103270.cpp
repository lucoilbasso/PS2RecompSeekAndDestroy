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

// Function: Cmd_USE_OBJECT_Entry__FP15BsSCDEntControl
// Address: 0x103270 - 0x10339c
void Cmd_USE_OBJECT_Entry__FP15BsSCDEntControl_0x103270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_USE_OBJECT_Entry__FP15BsSCDEntControl_0x103270");
#endif

    switch (ctx->pc) {
        case 0x103270u: goto label_103270;
        case 0x103274u: goto label_103274;
        case 0x103278u: goto label_103278;
        case 0x10327cu: goto label_10327c;
        case 0x103280u: goto label_103280;
        case 0x103284u: goto label_103284;
        case 0x103288u: goto label_103288;
        case 0x10328cu: goto label_10328c;
        case 0x103290u: goto label_103290;
        case 0x103294u: goto label_103294;
        case 0x103298u: goto label_103298;
        case 0x10329cu: goto label_10329c;
        case 0x1032a0u: goto label_1032a0;
        case 0x1032a4u: goto label_1032a4;
        case 0x1032a8u: goto label_1032a8;
        case 0x1032acu: goto label_1032ac;
        case 0x1032b0u: goto label_1032b0;
        case 0x1032b4u: goto label_1032b4;
        case 0x1032b8u: goto label_1032b8;
        case 0x1032bcu: goto label_1032bc;
        case 0x1032c0u: goto label_1032c0;
        case 0x1032c4u: goto label_1032c4;
        case 0x1032c8u: goto label_1032c8;
        case 0x1032ccu: goto label_1032cc;
        case 0x1032d0u: goto label_1032d0;
        case 0x1032d4u: goto label_1032d4;
        case 0x1032d8u: goto label_1032d8;
        case 0x1032dcu: goto label_1032dc;
        case 0x1032e0u: goto label_1032e0;
        case 0x1032e4u: goto label_1032e4;
        case 0x1032e8u: goto label_1032e8;
        case 0x1032ecu: goto label_1032ec;
        case 0x1032f0u: goto label_1032f0;
        case 0x1032f4u: goto label_1032f4;
        case 0x1032f8u: goto label_1032f8;
        case 0x1032fcu: goto label_1032fc;
        case 0x103300u: goto label_103300;
        case 0x103304u: goto label_103304;
        case 0x103308u: goto label_103308;
        case 0x10330cu: goto label_10330c;
        case 0x103310u: goto label_103310;
        case 0x103314u: goto label_103314;
        case 0x103318u: goto label_103318;
        case 0x10331cu: goto label_10331c;
        case 0x103320u: goto label_103320;
        case 0x103324u: goto label_103324;
        case 0x103328u: goto label_103328;
        case 0x10332cu: goto label_10332c;
        case 0x103330u: goto label_103330;
        case 0x103334u: goto label_103334;
        case 0x103338u: goto label_103338;
        case 0x10333cu: goto label_10333c;
        case 0x103340u: goto label_103340;
        case 0x103344u: goto label_103344;
        case 0x103348u: goto label_103348;
        case 0x10334cu: goto label_10334c;
        case 0x103350u: goto label_103350;
        case 0x103354u: goto label_103354;
        case 0x103358u: goto label_103358;
        case 0x10335cu: goto label_10335c;
        case 0x103360u: goto label_103360;
        case 0x103364u: goto label_103364;
        case 0x103368u: goto label_103368;
        case 0x10336cu: goto label_10336c;
        case 0x103370u: goto label_103370;
        case 0x103374u: goto label_103374;
        case 0x103378u: goto label_103378;
        case 0x10337cu: goto label_10337c;
        case 0x103380u: goto label_103380;
        case 0x103384u: goto label_103384;
        case 0x103388u: goto label_103388;
        case 0x10338cu: goto label_10338c;
        case 0x103390u: goto label_103390;
        case 0x103394u: goto label_103394;
        case 0x103398u: goto label_103398;
        default: break;
    }

    ctx->pc = 0x103270u;

label_103270:
    // 0x103270: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_103274:
    // 0x103274: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x103274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_103278:
    // 0x103278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10327c:
    // 0x10327c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_103280:
    // 0x103280: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x103280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_103284:
    // 0x103284: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x103284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_103288:
    // 0x103288: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x103288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_10328c:
    // 0x10328c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x10328cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_103290:
    // 0x103290: 0xc06a26e  jal         func_1A89B8
label_103294:
    if (ctx->pc == 0x103294u) {
        ctx->pc = 0x103294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103290u;
        // 0x103294: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103298u;
        goto label_103298;
    }
    ctx->pc = 0x103290u;
    SET_GPR_U32(ctx, 31, 0x103298u);
    ctx->pc = 0x103294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103290u;
    // 0x103294: 0x8c530044  lw          $s3, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x103290u, 0x103298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103298u;
label_103298:
    // 0x103298: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x103298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10329c:
    // 0x10329c: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x10329cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_1032a0:
    // 0x1032a0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1032a4:
    if (ctx->pc == 0x1032A4u) {
        ctx->pc = 0x1032A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032A0u;
        // 0x1032a4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032A8u;
        goto label_1032a8;
    }
    ctx->pc = 0x1032A0u;
    {
        const bool branch_taken_0x1032a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1032A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032A0u;
        // 0x1032a4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032a0) {
            ctx->pc = 0x103314u;
            goto label_103314;
        }
    }
    ctx->pc = 0x1032A8u;
label_1032a8:
    // 0x1032a8: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x1032a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_1032ac:
    // 0x1032ac: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_1032b0:
    if (ctx->pc == 0x1032B0u) {
        ctx->pc = 0x1032B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032ACu;
        // 0x1032b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032B4u;
        goto label_1032b4;
    }
    ctx->pc = 0x1032ACu;
    {
        const bool branch_taken_0x1032ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1032B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032ACu;
        // 0x1032b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032ac) {
            ctx->pc = 0x103300u;
            goto label_103300;
        }
    }
    ctx->pc = 0x1032B4u;
label_1032b4:
    // 0x1032b4: 0x0  nop
    ctx->pc = 0x1032b4u;
    // NOP
label_1032b8:
    // 0x1032b8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x1032b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_1032bc:
    // 0x1032bc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1032bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1032c0:
    // 0x1032c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1032c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1032c4:
    // 0x1032c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1032c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1032c8:
    // 0x1032c8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1032c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1032cc:
    // 0x1032cc: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1032d0:
    if (ctx->pc == 0x1032D0u) {
        ctx->pc = 0x1032D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032CCu;
        // 0x1032d0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032D4u;
        goto label_1032d4;
    }
    ctx->pc = 0x1032CCu;
    {
        const bool branch_taken_0x1032cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1032D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032CCu;
        // 0x1032d0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032cc) {
            ctx->pc = 0x1032F0u;
            goto label_1032f0;
        }
    }
    ctx->pc = 0x1032D4u;
label_1032d4:
    // 0x1032d4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1032d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1032d8:
    // 0x1032d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1032d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1032dc:
    // 0x1032dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1032dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1032e0:
    // 0x1032e0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1032e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1032e4:
    // 0x1032e4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1032e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1032e8:
    // 0x1032e8: 0x60f809  jalr        $v1
label_1032ec:
    if (ctx->pc == 0x1032ECu) {
        ctx->pc = 0x1032ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032E8u;
        // 0x1032ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1032F0u;
        goto label_1032f0;
    }
    ctx->pc = 0x1032E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1032F0u);
        ctx->pc = 0x1032ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032E8u;
        // 0x1032ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1032E8u, 0x1032F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1032F0u;
label_1032f0:
    // 0x1032f0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1032f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1032f4:
    // 0x1032f4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1032f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1032f8:
    // 0x1032f8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_1032fc:
    if (ctx->pc == 0x1032FCu) {
        ctx->pc = 0x1032FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032F8u;
        // 0x1032fc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103300u;
        goto label_103300;
    }
    ctx->pc = 0x1032F8u;
    {
        const bool branch_taken_0x1032f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1032FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1032F8u;
        // 0x1032fc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1032f8) {
            ctx->pc = 0x1032B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1032b8;
        }
    }
    ctx->pc = 0x103300u;
label_103300:
    // 0x103300: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x103300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_103304:
    // 0x103304: 0xc067f04  jal         func_19FC10
label_103308:
    if (ctx->pc == 0x103308u) {
        ctx->pc = 0x103308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103304u;
        // 0x103308: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10330Cu;
        goto label_10330c;
    }
    ctx->pc = 0x103304u;
    SET_GPR_U32(ctx, 31, 0x10330Cu);
    ctx->pc = 0x103308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103304u;
    // 0x103308: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x103304u, 0x10330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10330Cu;
label_10330c:
    // 0x10330c: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x10330cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_103310:
    // 0x103310: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x103310u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_103314:
    // 0x103314: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x103314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_103318:
    // 0x103318: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x103318u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_10331c:
    // 0x10331c: 0xae140044  sw          $s4, 0x44($s0)
    ctx->pc = 0x10331cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 20));
label_103320:
    // 0x103320: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_103324:
    if (ctx->pc == 0x103324u) {
        ctx->pc = 0x103324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103320u;
        // 0x103324: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103328u;
        goto label_103328;
    }
    ctx->pc = 0x103320u;
    {
        const bool branch_taken_0x103320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x103324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103320u;
        // 0x103324: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103320) {
            ctx->pc = 0x10332Cu;
            goto label_10332c;
        }
    }
    ctx->pc = 0x103328u;
label_103328:
    // 0x103328: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x103328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10332c:
    // 0x10332c: 0xc068086  jal         func_1A0218
label_103330:
    if (ctx->pc == 0x103330u) {
        ctx->pc = 0x103334u;
        goto label_103334;
    }
    ctx->pc = 0x10332Cu;
    SET_GPR_U32(ctx, 31, 0x103334u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x10332Cu, 0x103334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103334u;
label_103334:
    // 0x103334: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_103338:
    if (ctx->pc == 0x103338u) {
        ctx->pc = 0x103338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103334u;
        // 0x103338: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10333Cu;
        goto label_10333c;
    }
    ctx->pc = 0x103334u;
    {
        const bool branch_taken_0x103334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103334u;
        // 0x103338: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103334) {
            ctx->pc = 0x103350u;
            goto label_103350;
        }
    }
    ctx->pc = 0x10333Cu;
label_10333c:
    // 0x10333c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x10333cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_103340:
    // 0x103340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x103340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103344:
    // 0x103344: 0x24a51be0  addiu       $a1, $a1, 0x1BE0
    ctx->pc = 0x103344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7136));
label_103348:
    // 0x103348: 0xc068186  jal         func_1A0618
label_10334c:
    if (ctx->pc == 0x10334Cu) {
        ctx->pc = 0x10334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103348u;
        // 0x10334c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x103350u;
        goto label_103350;
    }
    ctx->pc = 0x103348u;
    SET_GPR_U32(ctx, 31, 0x103350u);
    ctx->pc = 0x10334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103348u;
    // 0x10334c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x103348u, 0x103350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103350u;
label_103350:
    // 0x103350: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x103350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_103354:
    // 0x103354: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
label_103358:
    if (ctx->pc == 0x103358u) {
        ctx->pc = 0x103358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103354u;
        // 0x103358: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10335Cu;
        goto label_10335c;
    }
    ctx->pc = 0x103354u;
    {
        const bool branch_taken_0x103354 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x103354) {
            ctx->pc = 0x103358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103354u;
            // 0x103358: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103380u;
            goto label_103380;
        }
    }
    ctx->pc = 0x10335Cu;
label_10335c:
    // 0x10335c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x10335cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_103360:
    // 0x103360: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x103360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_103364:
    // 0x103364: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x103364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_103368:
    // 0x103368: 0x0  nop
    ctx->pc = 0x103368u;
    // NOP
label_10336c:
    // 0x10336c: 0x0  nop
    ctx->pc = 0x10336cu;
    // NOP
label_103370:
    // 0x103370: 0x0  nop
    ctx->pc = 0x103370u;
    // NOP
label_103374:
    // 0x103374: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_103378:
    if (ctx->pc == 0x103378u) {
        ctx->pc = 0x103378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103374u;
        // 0x103378: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10337Cu;
        goto label_10337c;
    }
    ctx->pc = 0x103374u;
    {
        const bool branch_taken_0x103374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103374u;
        // 0x103378: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103374) {
            ctx->pc = 0x103360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103360;
        }
    }
    ctx->pc = 0x10337Cu;
label_10337c:
    // 0x10337c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10337cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103380:
    // 0x103380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_103384:
    // 0x103384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_103388:
    // 0x103388: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103388u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_10338c:
    // 0x10338c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10338cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_103390:
    // 0x103390: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x103390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_103394:
    // 0x103394: 0x3e00008  jr          $ra
label_103398:
    if (ctx->pc == 0x103398u) {
        ctx->pc = 0x103398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103394u;
        // 0x103398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10339Cu;
        goto label_fallthrough_0x103394;
    }
    ctx->pc = 0x103394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103394u;
        // 0x103398: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x103394:
    ctx->pc = 0x10339Cu;
}
