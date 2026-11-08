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

// Function: Cmd_RNDF_Entry__FP15BsSCDEntControl
// Address: 0x1a6338 - 0x1a6434
void Cmd_RNDF_Entry__FP15BsSCDEntControl_0x1a6338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_RNDF_Entry__FP15BsSCDEntControl_0x1a6338");
#endif

    switch (ctx->pc) {
        case 0x1a6368u: goto label_1a6368;
        case 0x1a639cu: goto label_1a639c;
        case 0x1a63e0u: goto label_1a63e0;
        case 0x1a6414u: goto label_1a6414;
        default: break;
    }

    ctx->pc = 0x1a6338u;

    // 0x1a6338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a633c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a633cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6340: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6344: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6348: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a6348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a634c: 0x2630001c  addiu       $s0, $s1, 0x1C
    ctx->pc = 0x1a634cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a6350: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a6350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a6354: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6358: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1a6358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a635c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a635cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6360: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6360u;
    SET_GPR_U32(ctx, 31, 0x1A6368u);
    ctx->pc = 0x1A6364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6360u;
    // 0x1a6364: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6360u, 0x1A6368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6368u;
label_1a6368:
    // 0x1a6368: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a636c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a636cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6370: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a6370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a6374: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a6374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a6378: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a6378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a637c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a637cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a6380: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a6380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a6384: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a6388: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a6388u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a638c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A638Cu;
    {
        const bool branch_taken_0x1a638c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A638Cu;
        // 0x1a6390: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a638c) {
            ctx->pc = 0x1A63A8u;
            goto label_1a63a8;
        }
    }
    ctx->pc = 0x1A6394u;
    // 0x1a6394: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A6394u;
    SET_GPR_U32(ctx, 31, 0x1A639Cu);
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A6394u, 0x1A639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A639Cu;
label_1a639c:
    // 0x1a639c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A639Cu;
    {
        const bool branch_taken_0x1a639c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A639Cu;
        // 0x1a63a0: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a639c) {
            ctx->pc = 0x1A63ACu;
            goto label_1a63ac;
        }
    }
    ctx->pc = 0x1A63A4u;
    // 0x1a63a4: 0x0  nop
    ctx->pc = 0x1a63a4u;
    // NOP
label_1a63a8:
    // 0x1a63a8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a63a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a63ac:
    // 0x1a63ac: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1a63acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1a63b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a63b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a63b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a63b8: 0x3c037ffe  lui         $v1, 0x7FFE
    ctx->pc = 0x1a63b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32766 << 16));
    // 0x1a63bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a63bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a63c0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a63c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a63c4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a63c8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a63c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a63cc: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1a63ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1a63d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A63D0u;
    {
        const bool branch_taken_0x1a63d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63D0u;
        // 0x1a63d4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63d0) {
            ctx->pc = 0x1A63E8u;
            goto label_1a63e8;
        }
    }
    ctx->pc = 0x1A63D8u;
    // 0x1a63d8: 0xc06966c  jal         func_1A59B0
    ctx->pc = 0x1A63D8u;
    SET_GPR_U32(ctx, 31, 0x1A63E0u);
    ctx->pc = 0x1A63DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A63D8u;
    // 0x1a63dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A59B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A59B0u, 0x1A63D8u, 0x1A63E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A63E0u;
label_1a63e0:
    // 0x1a63e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A63E0u;
    {
        const bool branch_taken_0x1a63e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A63E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A63E0u;
        // 0x1a63e4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a63e0) {
            ctx->pc = 0x1A63ECu;
            goto label_1a63ec;
        }
    }
    ctx->pc = 0x1A63E8u;
label_1a63e8:
    // 0x1a63e8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1a63e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a63ec:
    // 0x1a63ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a63ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a63f0: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x1a63f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1a63f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A63F4u;
    {
        const bool branch_taken_0x1a63f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a63f4) {
            ctx->pc = 0x1A63F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A63F4u;
            // 0x1a63f8: 0xb02023  subu        $a0, $a1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A640Cu;
            goto label_1a640c;
        }
    }
    ctx->pc = 0x1A63FCu;
    // 0x1a63fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a63fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6400: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a6400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6404: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a6404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6408: 0xb02023  subu        $a0, $a1, $s0
    ctx->pc = 0x1a6408u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_1a640c:
    // 0x1a640c: 0xc066eea  jal         func_19BBA8
    ctx->pc = 0x1A640Cu;
    SET_GPR_U32(ctx, 31, 0x1A6414u);
    ctx->pc = 0x1A6410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A640Cu;
    // 0x1a6410: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x1A640Cu, 0x1A6414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6414u;
label_1a6414:
    // 0x1a6414: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a641c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a641cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a6420: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6424: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a6424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6428: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a6428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a642c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A642Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A642Cu;
        // 0x1a6430: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A642Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6434u;
}
