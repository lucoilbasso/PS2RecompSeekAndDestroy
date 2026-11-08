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

// Function: Cmd_SE_PLAY_Entry__FP15BsSCDEntControl
// Address: 0x11d348 - 0x11d414
void Cmd_SE_PLAY_Entry__FP15BsSCDEntControl_0x11d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SE_PLAY_Entry__FP15BsSCDEntControl_0x11d348");
#endif

    switch (ctx->pc) {
        case 0x11d378u: goto label_11d378;
        case 0x11d384u: goto label_11d384;
        case 0x11d394u: goto label_11d394;
        case 0x11d3a0u: goto label_11d3a0;
        case 0x11d3b0u: goto label_11d3b0;
        case 0x11d3bcu: goto label_11d3bc;
        case 0x11d3ccu: goto label_11d3cc;
        case 0x11d3ecu: goto label_11d3ec;
        default: break;
    }

    ctx->pc = 0x11d348u;

    // 0x11d348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d34c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11d358: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11d358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11d35c: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x11d35cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11d360: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11d360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11d364: 0x34138000  ori         $s3, $zero, 0x8000
    ctx->pc = 0x11d364u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11d368: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11d36c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11d36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x11d370: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D370u;
    SET_GPR_U32(ctx, 31, 0x11D378u);
    ctx->pc = 0x11D374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D370u;
    // 0x11d374: 0x34148000  ori         $s4, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D370u, 0x11D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D378u;
label_11d378:
    // 0x11d378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d37c: 0xc06a3d4  jal         func_1A8F50
    ctx->pc = 0x11D37Cu;
    SET_GPR_U32(ctx, 31, 0x11D384u);
    ctx->pc = 0x11D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D37Cu;
    // 0x11d380: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F50u, 0x11D37Cu, 0x11D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D384u;
label_11d384:
    // 0x11d384: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11D384u;
    {
        const bool branch_taken_0x11d384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D384u;
        // 0x11d388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d384) {
            ctx->pc = 0x11D3D0u;
            goto label_11d3d0;
        }
    }
    ctx->pc = 0x11D38Cu;
    // 0x11d38c: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D38Cu;
    SET_GPR_U32(ctx, 31, 0x11D394u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D38Cu, 0x11D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D394u;
label_11d394:
    // 0x11d394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d398: 0xc06a3d4  jal         func_1A8F50
    ctx->pc = 0x11D398u;
    SET_GPR_U32(ctx, 31, 0x11D3A0u);
    ctx->pc = 0x11D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D398u;
    // 0x11d39c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F50u, 0x11D398u, 0x11D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3A0u;
label_11d3a0:
    // 0x11d3a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11D3A0u;
    {
        const bool branch_taken_0x11d3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3A0u;
        // 0x11d3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3a0) {
            ctx->pc = 0x11D3D0u;
            goto label_11d3d0;
        }
    }
    ctx->pc = 0x11D3A8u;
    // 0x11d3a8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D3A8u;
    SET_GPR_U32(ctx, 31, 0x11D3B0u);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D3A8u, 0x11D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3B0u;
label_11d3b0:
    // 0x11d3b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3b4: 0xc06a3d4  jal         func_1A8F50
    ctx->pc = 0x11D3B4u;
    SET_GPR_U32(ctx, 31, 0x11D3BCu);
    ctx->pc = 0x11D3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3B4u;
    // 0x11d3b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F50u, 0x11D3B4u, 0x11D3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3BCu;
label_11d3bc:
    // 0x11d3bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D3BCu;
    {
        const bool branch_taken_0x11d3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3BCu;
        // 0x11d3c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3bc) {
            ctx->pc = 0x11D3D0u;
            goto label_11d3d0;
        }
    }
    ctx->pc = 0x11D3C4u;
    // 0x11d3c4: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11D3C4u;
    SET_GPR_U32(ctx, 31, 0x11D3CCu);
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11D3C4u, 0x11D3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3CCu;
label_11d3cc:
    // 0x11d3cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11d3ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11d3d0:
    // 0x11d3d0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d3d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11d3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11d3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x11d3dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3e0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11d3e4: 0xc0477ba  jal         func_11DEE8
    ctx->pc = 0x11D3E4u;
    SET_GPR_U32(ctx, 31, 0x11D3ECu);
    ctx->pc = 0x11D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3E4u;
    // 0x11d3e8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DEE8u, 0x11D3E4u, 0x11D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3ECu;
label_11d3ec:
    // 0x11d3ec: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x11d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x11d3f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d3f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11d3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d3f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11d3f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d3fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11d3fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11d400: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11d400u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d404: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11d404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11d408: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x11d408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400C0u, _value); } while (0);
    // 0x11d40c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D40Cu;
        // 0x11d410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D414u;
}
