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

// Function: entry_00174c38
// Address: 0x174c38 - 0x174cb8
void entry_00174c38_0x174c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174c38_0x174c38");
#endif

    switch (ctx->pc) {
        case 0x174c50u: goto label_174c50;
        case 0x174c74u: goto label_174c74;
        case 0x174c8cu: goto label_174c8c;
        case 0x174c9cu: goto label_174c9c;
        default: break;
    }

    ctx->pc = 0x174c38u;

    // 0x174c38: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x174c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    // 0x174c3c: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x174c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x174c40: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x174c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x174c44: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x174c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x174c48: 0xc073d56  jal         func_1CF558
    ctx->pc = 0x174C48u;
    SET_GPR_U32(ctx, 31, 0x174C50u);
    ctx->pc = 0x174C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C48u;
    // 0x174c4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF558u, 0x174C48u, 0x174C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C50u;
label_174c50:
    // 0x174c50: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x174c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c54: 0x12200040  beqz        $s1, . + 4 + (0x40 << 2)
    ctx->pc = 0x174C54u;
    {
        const bool branch_taken_0x174c54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x174C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C54u;
        // 0x174c58: 0x27b30100  addiu       $s3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c54) {
            ctx->pc = 0x174D58u;
            return;
        }
    }
    ctx->pc = 0x174C5Cu;
    // 0x174c5c: 0x2348023  subu        $s0, $s1, $s4
    ctx->pc = 0x174c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x174c60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x174c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x174c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x174c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c6c: 0xc07434a  jal         func_1D0D28
    ctx->pc = 0x174C6Cu;
    SET_GPR_U32(ctx, 31, 0x174C74u);
    ctx->pc = 0x174C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C6Cu;
    // 0x174c70: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D28u, 0x174C6Cu, 0x174C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C74u;
label_174c74:
    // 0x174c74: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x174c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x174c78: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x174c78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x174c7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x174c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174c80: 0x24a5d490  addiu       $a1, $a1, -0x2B70
    ctx->pc = 0x174c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956176));
    // 0x174c84: 0xc074266  jal         func_1D0998
    ctx->pc = 0x174C84u;
    SET_GPR_U32(ctx, 31, 0x174C8Cu);
    ctx->pc = 0x174C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C84u;
    // 0x174c88: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x174C84u, 0x174C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C8Cu;
label_174c8c:
    // 0x174c8c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x174C8Cu;
    {
        const bool branch_taken_0x174c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174C8Cu;
        // 0x174c90: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174c8c) {
            ctx->pc = 0x174D38u;
            return;
        }
    }
    ctx->pc = 0x174C94u;
    // 0x174c94: 0xc0742fc  jal         func_1D0BF0
    ctx->pc = 0x174C94u;
    SET_GPR_U32(ctx, 31, 0x174C9Cu);
    ctx->pc = 0x174C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174C94u;
    // 0x174c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF0u, 0x174C94u, 0x174C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C9Cu;
label_174c9c:
    // 0x174c9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ca0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x174ca0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ca4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174ca8: 0x19200016  blez        $t1, . + 4 + (0x16 << 2)
    ctx->pc = 0x174CA8u;
    {
        const bool branch_taken_0x174ca8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x174CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174CA8u;
        // 0x174cac: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174ca8) {
            ctx->pc = 0x174D04u;
            return;
        }
    }
    ctx->pc = 0x174CB0u;
    // 0x174cb0: 0x240b002f  addiu       $t3, $zero, 0x2F
    ctx->pc = 0x174cb0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x174cb4: 0x240a005c  addiu       $t2, $zero, 0x5C
    ctx->pc = 0x174cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    ctx->pc = 0x174cb8u;
}
