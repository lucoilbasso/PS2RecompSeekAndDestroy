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

// Function: Cmd_MIDI_SETUP_Entry__FP15BsSCDEntControl
// Address: 0x11d198 - 0x11d26c
void Cmd_MIDI_SETUP_Entry__FP15BsSCDEntControl_0x11d198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MIDI_SETUP_Entry__FP15BsSCDEntControl_0x11d198");
#endif

    switch (ctx->pc) {
        case 0x11d1b8u: goto label_11d1b8;
        case 0x11d1e4u: goto label_11d1e4;
        case 0x11d204u: goto label_11d204;
        case 0x11d210u: goto label_11d210;
        case 0x11d218u: goto label_11d218;
        case 0x11d248u: goto label_11d248;
        case 0x11d258u: goto label_11d258;
        default: break;
    }

    ctx->pc = 0x11d198u;

    // 0x11d198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d19c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d1a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11d1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11d1a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11d1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11d1ac: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x11d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x11d1b0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11D1B0u;
    SET_GPR_U32(ctx, 31, 0x11D1B8u);
    ctx->pc = 0x11D1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1B0u;
    // 0x11d1b4: 0x8c510044  lw          $s1, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11D1B0u, 0x11D1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1B8u;
label_11d1b8:
    // 0x11d1b8: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x11d1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11d1bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x11d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x11d1c0: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x11d1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x11d1c4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x11d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x11d1c8: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x11d1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11d1cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1d4: 0x10e30004  beq         $a3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D1D4u;
    {
        const bool branch_taken_0x11d1d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x11D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D1D4u;
        // 0x11d1d8: 0xc28821  addu        $s1, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1d4) {
            ctx->pc = 0x11D1E8u;
            goto label_11d1e8;
        }
    }
    ctx->pc = 0x11D1DCu;
    // 0x11d1dc: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11D1DCu;
    SET_GPR_U32(ctx, 31, 0x11D1E4u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11D1DCu, 0x11D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1E4u;
label_11d1e4:
    // 0x11d1e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11d1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d1e8:
    // 0x11d1e8: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d1ec: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x11d1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x11d1f0: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11d1f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x11d1f4: 0x24216fe0  addiu       $at, $at, 0x6FE0
    ctx->pc = 0x11d1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28640));
    // 0x11d1f8: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x11d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x11d1fc: 0xc04776a  jal         func_11DDA8
    ctx->pc = 0x11D1FCu;
    SET_GPR_U32(ctx, 31, 0x11D204u);
    ctx->pc = 0x11D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1FCu;
    // 0x11d200: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DDA8u, 0x11D1FCu, 0x11D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D204u;
label_11d204:
    // 0x11d204: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x11d204u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11d208: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x11D208u;
    SET_GPR_U32(ctx, 31, 0x11D210u);
    ctx->pc = 0x11D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D208u;
    // 0x11d20c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x11D208u, 0x11D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D210u;
label_11d210:
    // 0x11d210: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x11D210u;
    SET_GPR_U32(ctx, 31, 0x11D218u);
    ctx->pc = 0x11D214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D210u;
    // 0x11d214: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x11D210u, 0x11D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D218u;
label_11d218:
    // 0x11d218: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11d218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11d21c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11d220: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11D220u;
    {
        const bool branch_taken_0x11d220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D220u;
        // 0x11d224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d220) {
            ctx->pc = 0x11D22Cu;
            goto label_11d22c;
        }
    }
    ctx->pc = 0x11D228u;
    // 0x11d228: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x11d228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_11d22c:
    // 0x11d22c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x11d22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11d230: 0x54c00001  bnel        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11D230u;
    {
        const bool branch_taken_0x11d230 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d230) {
            ctx->pc = 0x11D234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11D230u;
            // 0x11d234: 0x8cc30014  lw          $v1, 0x14($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11D238u;
            goto label_11d238;
        }
    }
    ctx->pc = 0x11D238u;
label_11d238:
    // 0x11d238: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d23c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11d23cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d240: 0xc04777a  jal         func_11DDE8
    ctx->pc = 0x11D240u;
    SET_GPR_U32(ctx, 31, 0x11D248u);
    ctx->pc = 0x11D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D240u;
    // 0x11d244: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DDE8u, 0x11D240u, 0x11D248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D248u;
label_11d248:
    // 0x11d248: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d24c: 0x24053333  addiu       $a1, $zero, 0x3333
    ctx->pc = 0x11d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13107));
    // 0x11d250: 0xc0477a2  jal         func_11DE88
    ctx->pc = 0x11D250u;
    SET_GPR_U32(ctx, 31, 0x11D258u);
    ctx->pc = 0x11D254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D250u;
    // 0x11d254: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DE88u, 0x11D250u, 0x11D258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D258u;
label_11d258:
    // 0x11d258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d25c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11d25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11d260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d264: 0x3e00008  jr          $ra
    ctx->pc = 0x11D264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D264u;
        // 0x11d268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D26Cu;
}
