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

// Function: Cmd_WEAPON_PARAM_Entry__FP15BsSCDEntControl
// Address: 0x157318 - 0x1573bc
void Cmd_WEAPON_PARAM_Entry__FP15BsSCDEntControl_0x157318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_WEAPON_PARAM_Entry__FP15BsSCDEntControl_0x157318");
#endif

    switch (ctx->pc) {
        case 0x157360u: goto label_157360;
        case 0x15736cu: goto label_15736c;
        case 0x15737cu: goto label_15737c;
        case 0x157388u: goto label_157388;
        default: break;
    }

    ctx->pc = 0x157318u;

    // 0x157318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15731c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x15731cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x157320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x157320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x157324: 0x24052118  addiu       $a1, $zero, 0x2118
    ctx->pc = 0x157324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x157328: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x157328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15732c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15732cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157330: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x157330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x157334: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x157334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x157338: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x157338u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x15733c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x15733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x157340: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x157340u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157348: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x157348u;
    {
        const bool branch_taken_0x157348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x15734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157348u;
        // 0x15734c: 0x24500270  addiu       $s0, $v0, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157348) {
            ctx->pc = 0x157360u;
            goto label_157360;
        }
    }
    ctx->pc = 0x157350u;
    // 0x157350: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x157350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x157354: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x157354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x157358: 0xc068186  jal         func_1A0618
    ctx->pc = 0x157358u;
    SET_GPR_U32(ctx, 31, 0x157360u);
    ctx->pc = 0x15735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157358u;
    // 0x15735c: 0x24a56e38  addiu       $a1, $a1, 0x6E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x157358u, 0x157360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157360u;
label_157360:
    // 0x157360: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x157360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x157364: 0xc04171a  jal         func_105C68
    ctx->pc = 0x157364u;
    SET_GPR_U32(ctx, 31, 0x15736Cu);
    ctx->pc = 0x157368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157364u;
    // 0x157368: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x157364u, 0x15736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15736Cu;
label_15736c:
    // 0x15736c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x15736Cu;
    {
        const bool branch_taken_0x15736c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15736Cu;
        // 0x157370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15736c) {
            ctx->pc = 0x1573A4u;
            goto label_1573a4;
        }
    }
    ctx->pc = 0x157374u;
    // 0x157374: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x157374u;
    SET_GPR_U32(ctx, 31, 0x15737Cu);
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x157374u, 0x15737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15737Cu;
label_15737c:
    // 0x15737c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15737cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157380: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x157380u;
    SET_GPR_U32(ctx, 31, 0x157388u);
    ctx->pc = 0x157384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157380u;
    // 0x157384: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x157380u, 0x157388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157388u;
label_157388:
    // 0x157388: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x157388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15738c: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15738Cu;
    {
        const bool branch_taken_0x15738c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x157390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15738Cu;
        // 0x157390: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15738c) {
            ctx->pc = 0x157398u;
            goto label_157398;
        }
    }
    ctx->pc = 0x157394u;
    // 0x157394: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x157394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_157398:
    // 0x157398: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x157398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15739c: 0x5c400001  bgtzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x15739Cu;
    {
        const bool branch_taken_0x15739c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x15739c) {
            ctx->pc = 0x1573A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15739Cu;
            // 0x1573a0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1573A4u;
            goto label_1573a4;
        }
    }
    ctx->pc = 0x1573A4u;
label_1573a4:
    // 0x1573a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1573a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1573a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1573a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1573ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1573acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1573b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1573b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1573b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1573B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1573B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573B4u;
        // 0x1573b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1573B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1573BCu;
}
