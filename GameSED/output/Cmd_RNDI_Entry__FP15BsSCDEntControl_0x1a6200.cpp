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

// Function: Cmd_RNDI_Entry__FP15BsSCDEntControl
// Address: 0x1a6200 - 0x1a6334
void Cmd_RNDI_Entry__FP15BsSCDEntControl_0x1a6200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_RNDI_Entry__FP15BsSCDEntControl_0x1a6200");
#endif

    switch (ctx->pc) {
        case 0x1a6230u: goto label_1a6230;
        case 0x1a6268u: goto label_1a6268;
        case 0x1a627cu: goto label_1a627c;
        case 0x1a62acu: goto label_1a62ac;
        case 0x1a62e0u: goto label_1a62e0;
        case 0x1a6314u: goto label_1a6314;
        default: break;
    }

    ctx->pc = 0x1a6200u;

    // 0x1a6200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6208: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a620c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a620cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6210: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a6214: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a6214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6218: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a621c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6220: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6224: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6228: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6228u;
    SET_GPR_U32(ctx, 31, 0x1A6230u);
    ctx->pc = 0x1A622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6228u;
    // 0x1a622c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6228u, 0x1A6230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6230u;
label_1a6230:
    // 0x1a6230: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1a6230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1a6234: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a6234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6238: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a6238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a623c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A623Cu;
    {
        const bool branch_taken_0x1a623c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A623Cu;
        // 0x1a6240: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a623c) {
            ctx->pc = 0x1A6288u;
            goto label_1a6288;
        }
    }
    ctx->pc = 0x1A6244u;
    // 0x1a6244: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6248: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a624c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a624cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6250: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6254: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a6258: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6258u;
    {
        const bool branch_taken_0x1a6258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A625Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6258u;
        // 0x1a625c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6258) {
            ctx->pc = 0x1A6270u;
            goto label_1a6270;
        }
    }
    ctx->pc = 0x1A6260u;
    // 0x1a6260: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6260u;
    SET_GPR_U32(ctx, 31, 0x1A6268u);
    ctx->pc = 0x1A6264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6260u;
    // 0x1a6264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6260u, 0x1A6268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6268u;
label_1a6268:
    // 0x1a6268: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A6268u;
    {
        const bool branch_taken_0x1a6268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6268u;
        // 0x1a626c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6268) {
            ctx->pc = 0x1A6274u;
            goto label_1a6274;
        }
    }
    ctx->pc = 0x1A6270u;
label_1a6270:
    // 0x1a6270: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a6270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a6274:
    // 0x1a6274: 0xc066eea  jal         func_19BBA8
    ctx->pc = 0x1A6274u;
    SET_GPR_U32(ctx, 31, 0x1A627Cu);
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x1A6274u, 0x1A627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A627Cu;
label_1a627c:
    // 0x1a627c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1A627Cu;
    {
        const bool branch_taken_0x1a627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A627Cu;
        // 0x1a6280: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a627c) {
            ctx->pc = 0x1A631Cu;
            goto label_1a631c;
        }
    }
    ctx->pc = 0x1A6284u;
    // 0x1a6284: 0x0  nop
    ctx->pc = 0x1a6284u;
    // NOP
label_1a6288:
    // 0x1a6288: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a628c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a628cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6290: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a6294: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a6294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6298: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a6298u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a629c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A629Cu;
    {
        const bool branch_taken_0x1a629c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A629Cu;
        // 0x1a62a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a629c) {
            ctx->pc = 0x1A62B0u;
            goto label_1a62b0;
        }
    }
    ctx->pc = 0x1A62A4u;
    // 0x1a62a4: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A62A4u;
    SET_GPR_U32(ctx, 31, 0x1A62ACu);
    ctx->pc = 0x1A62A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62A4u;
    // 0x1a62a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A62A4u, 0x1A62ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62ACu;
label_1a62ac:
    // 0x1a62ac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a62acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a62b0:
    // 0x1a62b0: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a62b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a62b4: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a62b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a62b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a62b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a62bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a62bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a62c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a62c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a62c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a62c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a62c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a62cc: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x1a62ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1a62d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A62D0u;
    {
        const bool branch_taken_0x1a62d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62D0u;
        // 0x1a62d4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62d0) {
            ctx->pc = 0x1A62E8u;
            goto label_1a62e8;
        }
    }
    ctx->pc = 0x1A62D8u;
    // 0x1a62d8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A62D8u;
    SET_GPR_U32(ctx, 31, 0x1A62E0u);
    ctx->pc = 0x1A62DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A62D8u;
    // 0x1a62dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A62D8u, 0x1A62E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A62E0u;
label_1a62e0:
    // 0x1a62e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A62E0u;
    {
        const bool branch_taken_0x1a62e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A62E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62E0u;
        // 0x1a62e4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62e0) {
            ctx->pc = 0x1A62ECu;
            goto label_1a62ec;
        }
    }
    ctx->pc = 0x1A62E8u;
label_1a62e8:
    // 0x1a62e8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1a62e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a62ec:
    // 0x1a62ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a62ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a62f0: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1a62f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a62f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A62F4u;
    {
        const bool branch_taken_0x1a62f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a62f4) {
            ctx->pc = 0x1A62F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A62F4u;
            // 0x1a62f8: 0xb02023  subu        $a0, $a1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A630Cu;
            goto label_1a630c;
        }
    }
    ctx->pc = 0x1A62FCu;
    // 0x1a62fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a62fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6300: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a6300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6304: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a6304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6308: 0xb02023  subu        $a0, $a1, $s0
    ctx->pc = 0x1a6308u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1a630c:
    // 0x1a630c: 0xc066eea  jal         func_19BBA8
    ctx->pc = 0x1A630Cu;
    SET_GPR_U32(ctx, 31, 0x1A6314u);
    ctx->pc = 0x1A6310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A630Cu;
    // 0x1a6310: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x1A630Cu, 0x1A6314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6314u;
label_1a6314:
    // 0x1a6314: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6318: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a6318u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1a631c:
    // 0x1a631c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a631cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6320: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6320u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6324: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6324u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6328: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a6328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a632c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A632Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A632Cu;
        // 0x1a6330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A632Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6334u;
}
