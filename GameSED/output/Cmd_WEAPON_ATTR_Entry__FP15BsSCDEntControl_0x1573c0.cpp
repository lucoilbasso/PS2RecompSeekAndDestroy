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

// Function: Cmd_WEAPON_ATTR_Entry__FP15BsSCDEntControl
// Address: 0x1573c0 - 0x15742c
void Cmd_WEAPON_ATTR_Entry__FP15BsSCDEntControl_0x1573c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_WEAPON_ATTR_Entry__FP15BsSCDEntControl_0x1573c0");
#endif

    switch (ctx->pc) {
        case 0x157404u: goto label_157404;
        case 0x15740cu: goto label_15740c;
        default: break;
    }

    ctx->pc = 0x1573c0u;

    // 0x1573c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1573c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1573c4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1573c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1573c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1573c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1573cc: 0x24062118  addiu       $a2, $zero, 0x2118
    ctx->pc = 0x1573ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x1573d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1573d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1573d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1573d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1573d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1573d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1573dc: 0x8c43b830  lw          $v1, -0x47D0($v0)
    ctx->pc = 0x1573dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1573e0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1573e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1573e4: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x1573e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1573e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1573e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1573ec: 0x10a60005  beq         $a1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1573ECu;
    {
        const bool branch_taken_0x1573ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1573F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1573ECu;
        // 0x1573f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1573ec) {
            ctx->pc = 0x157404u;
            goto label_157404;
        }
    }
    ctx->pc = 0x1573F4u;
    // 0x1573f4: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1573f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1573f8: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x1573f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1573fc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1573FCu;
    SET_GPR_U32(ctx, 31, 0x157404u);
    ctx->pc = 0x157400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1573FCu;
    // 0x157400: 0x24a56e38  addiu       $a1, $a1, 0x6E38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1573FCu, 0x157404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157404u;
label_157404:
    // 0x157404: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x157404u;
    SET_GPR_U32(ctx, 31, 0x15740Cu);
    ctx->pc = 0x157408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157404u;
    // 0x157408: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x157404u, 0x15740Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15740Cu;
label_15740c:
    // 0x15740c: 0x96030266  lhu         $v1, 0x266($s0)
    ctx->pc = 0x15740cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 614)));
    // 0x157410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x157414: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x157414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x157418: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x157418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15741c: 0xa6030266  sh          $v1, 0x266($s0)
    ctx->pc = 0x15741cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 614), (uint16_t)GPR_U32(ctx, 3));
    // 0x157420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157424: 0x3e00008  jr          $ra
    ctx->pc = 0x157424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157424u;
        // 0x157428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15742Cu;
}
