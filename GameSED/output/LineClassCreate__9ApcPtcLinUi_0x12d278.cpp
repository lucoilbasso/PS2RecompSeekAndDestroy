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

// Function: LineClassCreate__9ApcPtcLinUi
// Address: 0x12d278 - 0x12d338
void LineClassCreate__9ApcPtcLinUi_0x12d278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LineClassCreate__9ApcPtcLinUi_0x12d278");
#endif

    switch (ctx->pc) {
        case 0x12d278u: goto label_12d278;
        case 0x12d27cu: goto label_12d27c;
        case 0x12d280u: goto label_12d280;
        case 0x12d284u: goto label_12d284;
        case 0x12d288u: goto label_12d288;
        case 0x12d28cu: goto label_12d28c;
        case 0x12d290u: goto label_12d290;
        case 0x12d294u: goto label_12d294;
        case 0x12d298u: goto label_12d298;
        case 0x12d29cu: goto label_12d29c;
        case 0x12d2a0u: goto label_12d2a0;
        case 0x12d2a4u: goto label_12d2a4;
        case 0x12d2a8u: goto label_12d2a8;
        case 0x12d2acu: goto label_12d2ac;
        case 0x12d2b0u: goto label_12d2b0;
        case 0x12d2b4u: goto label_12d2b4;
        case 0x12d2b8u: goto label_12d2b8;
        case 0x12d2bcu: goto label_12d2bc;
        case 0x12d2c0u: goto label_12d2c0;
        case 0x12d2c4u: goto label_12d2c4;
        case 0x12d2c8u: goto label_12d2c8;
        case 0x12d2ccu: goto label_12d2cc;
        case 0x12d2d0u: goto label_12d2d0;
        case 0x12d2d4u: goto label_12d2d4;
        case 0x12d2d8u: goto label_12d2d8;
        case 0x12d2dcu: goto label_12d2dc;
        case 0x12d2e0u: goto label_12d2e0;
        case 0x12d2e4u: goto label_12d2e4;
        case 0x12d2e8u: goto label_12d2e8;
        case 0x12d2ecu: goto label_12d2ec;
        case 0x12d2f0u: goto label_12d2f0;
        case 0x12d2f4u: goto label_12d2f4;
        case 0x12d2f8u: goto label_12d2f8;
        case 0x12d2fcu: goto label_12d2fc;
        case 0x12d300u: goto label_12d300;
        case 0x12d304u: goto label_12d304;
        case 0x12d308u: goto label_12d308;
        case 0x12d30cu: goto label_12d30c;
        case 0x12d310u: goto label_12d310;
        case 0x12d314u: goto label_12d314;
        case 0x12d318u: goto label_12d318;
        case 0x12d31cu: goto label_12d31c;
        case 0x12d320u: goto label_12d320;
        case 0x12d324u: goto label_12d324;
        case 0x12d328u: goto label_12d328;
        case 0x12d32cu: goto label_12d32c;
        case 0x12d330u: goto label_12d330;
        case 0x12d334u: goto label_12d334;
        default: break;
    }

    ctx->pc = 0x12d278u;

label_12d278:
    // 0x12d278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12d278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_12d27c:
    // 0x12d27c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12d27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_12d280:
    // 0x12d280: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12d280u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12d284:
    // 0x12d284: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_12d288:
    // 0x12d288: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_12d28c:
    // 0x12d28c: 0xc0682b2  jal         func_1A0AC8
label_12d290:
    if (ctx->pc == 0x12D290u) {
        ctx->pc = 0x12D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D28Cu;
        // 0x12d290: 0x240403f6  addiu       $a0, $zero, 0x3F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1014));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D294u;
        goto label_12d294;
    }
    ctx->pc = 0x12D28Cu;
    SET_GPR_U32(ctx, 31, 0x12D294u);
    ctx->pc = 0x12D290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D28Cu;
    // 0x12d290: 0x240403f6  addiu       $a0, $zero, 0x3F6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1014));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x12D28Cu, 0x12D294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D294u;
label_12d294:
    // 0x12d294: 0xc0682b6  jal         func_1A0AD8
label_12d298:
    if (ctx->pc == 0x12D298u) {
        ctx->pc = 0x12D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D294u;
        // 0x12d298: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D29Cu;
        goto label_12d29c;
    }
    ctx->pc = 0x12D294u;
    SET_GPR_U32(ctx, 31, 0x12D29Cu);
    ctx->pc = 0x12D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D294u;
    // 0x12d298: 0x24040160  addiu       $a0, $zero, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x12D294u, 0x12D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D29Cu;
label_12d29c:
    // 0x12d29c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12d29cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
label_12d2a0:
    // 0x12d2a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12d2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12d2a4:
    // 0x12d2a4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x12d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_12d2a8:
    // 0x12d2a8: 0x2442eae8  addiu       $v0, $v0, -0x1518
    ctx->pc = 0x12d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961896));
label_12d2ac:
    // 0x12d2ac: 0x24a55e58  addiu       $a1, $a1, 0x5E58
    ctx->pc = 0x12d2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24152));
label_12d2b0:
    // 0x12d2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12d2b4:
    // 0x12d2b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x12d2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12d2b8:
    // 0x12d2b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x12d2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_12d2bc:
    // 0x12d2bc: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x12d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
label_12d2c0:
    // 0x12d2c0: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x12d2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_12d2c4:
    // 0x12d2c4: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x12d2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_12d2c8:
    // 0x12d2c8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_12d2cc:
    if (ctx->pc == 0x12D2CCu) {
        ctx->pc = 0x12D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2C8u;
        // 0x12d2cc: 0xae000150  sw          $zero, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D2D0u;
        goto label_12d2d0;
    }
    ctx->pc = 0x12D2C8u;
    {
        const bool branch_taken_0x12d2c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2C8u;
        // 0x12d2cc: 0xae000150  sw          $zero, 0x150($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2c8) {
            ctx->pc = 0x12D2E0u;
            goto label_12d2e0;
        }
    }
    ctx->pc = 0x12D2D0u;
label_12d2d0:
    // 0x12d2d0: 0xc068186  jal         func_1A0618
label_12d2d4:
    if (ctx->pc == 0x12D2D4u) {
        ctx->pc = 0x12D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2D0u;
        // 0x12d2d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D2D8u;
        goto label_12d2d8;
    }
    ctx->pc = 0x12D2D0u;
    SET_GPR_U32(ctx, 31, 0x12D2D8u);
    ctx->pc = 0x12D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D2D0u;
    // 0x12d2d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12D2D0u, 0x12D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D2D8u;
label_12d2d8:
    // 0x12d2d8: 0x10000012  b           . + 4 + (0x12 << 2)
label_12d2dc:
    if (ctx->pc == 0x12D2DCu) {
        ctx->pc = 0x12D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2D8u;
        // 0x12d2dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D2E0u;
        goto label_12d2e0;
    }
    ctx->pc = 0x12D2D8u;
    {
        const bool branch_taken_0x12d2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2D8u;
        // 0x12d2dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2d8) {
            ctx->pc = 0x12D324u;
            goto label_12d324;
        }
    }
    ctx->pc = 0x12D2E0u;
label_12d2e0:
    // 0x12d2e0: 0xc04b362  jal         func_12CD88
label_12d2e4:
    if (ctx->pc == 0x12D2E4u) {
        ctx->pc = 0x12D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2E0u;
        // 0x12d2e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D2E8u;
        goto label_12d2e8;
    }
    ctx->pc = 0x12D2E0u;
    SET_GPR_U32(ctx, 31, 0x12D2E8u);
    ctx->pc = 0x12D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D2E0u;
    // 0x12d2e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CD88u, 0x12D2E0u, 0x12D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D2E8u;
label_12d2e8:
    // 0x12d2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12d2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12d2ec:
    // 0x12d2ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_12d2f0:
    if (ctx->pc == 0x12D2F0u) {
        ctx->pc = 0x12D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2ECu;
        // 0x12d2f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D2F4u;
        goto label_12d2f4;
    }
    ctx->pc = 0x12D2ECu;
    {
        const bool branch_taken_0x12d2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2ECu;
        // 0x12d2f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2ec) {
            ctx->pc = 0x12D318u;
            goto label_12d318;
        }
    }
    ctx->pc = 0x12D2F4u;
label_12d2f4:
    // 0x12d2f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x12d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_12d2f8:
    // 0x12d2f8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x12d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_12d2fc:
    // 0x12d2fc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x12d2fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_12d300:
    // 0x12d300: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x12d300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12d304:
    // 0x12d304: 0x60f809  jalr        $v1
label_12d308:
    if (ctx->pc == 0x12D308u) {
        ctx->pc = 0x12D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D304u;
        // 0x12d308: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D30Cu;
        goto label_12d30c;
    }
    ctx->pc = 0x12D304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12D30Cu);
        ctx->pc = 0x12D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D304u;
        // 0x12d308: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D304u, 0x12D30Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12D30Cu;
label_12d30c:
    // 0x12d30c: 0x10000005  b           . + 4 + (0x5 << 2)
label_12d310:
    if (ctx->pc == 0x12D310u) {
        ctx->pc = 0x12D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D30Cu;
        // 0x12d310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D314u;
        goto label_12d314;
    }
    ctx->pc = 0x12D30Cu;
    {
        const bool branch_taken_0x12d30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D30Cu;
        // 0x12d310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d30c) {
            ctx->pc = 0x12D324u;
            goto label_12d324;
        }
    }
    ctx->pc = 0x12D314u;
label_12d314:
    // 0x12d314: 0x0  nop
    ctx->pc = 0x12d314u;
    // NOP
label_12d318:
    // 0x12d318: 0xc06825c  jal         func_1A0970
label_12d31c:
    if (ctx->pc == 0x12D31Cu) {
        ctx->pc = 0x12D320u;
        goto label_12d320;
    }
    ctx->pc = 0x12D318u;
    SET_GPR_U32(ctx, 31, 0x12D320u);
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x12D318u, 0x12D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D320u;
label_12d320:
    // 0x12d320: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12d320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12d324:
    // 0x12d324: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d324u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12d328:
    // 0x12d328: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12d328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_12d32c:
    // 0x12d32c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12d32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12d330:
    // 0x12d330: 0x3e00008  jr          $ra
label_12d334:
    if (ctx->pc == 0x12D334u) {
        ctx->pc = 0x12D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D330u;
        // 0x12d334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12D338u;
        goto label_fallthrough_0x12d330;
    }
    ctx->pc = 0x12D330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D330u;
        // 0x12d334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12d330:
    ctx->pc = 0x12D338u;
}
