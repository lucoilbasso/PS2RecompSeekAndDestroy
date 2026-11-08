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

// Function: _sliceB
// Address: 0x1c21a8 - 0x1c220c
void _sliceB_0x1c21a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sliceB_0x1c21a8");
#endif

    switch (ctx->pc) {
        case 0x1c21c0u: goto label_1c21c0;
        case 0x1c21d0u: goto label_1c21d0;
        case 0x1c21e4u: goto label_1c21e4;
        case 0x1c21f0u: goto label_1c21f0;
        case 0x1c21f8u: goto label_1c21f8;
        default: break;
    }

    ctx->pc = 0x1c21a8u;

    // 0x1c21a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c21a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c21ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1c21acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c21b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c21b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c21b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c21b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c21b8: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C21B8u;
    SET_GPR_U32(ctx, 31, 0x1C21C0u);
    ctx->pc = 0x1C21BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21B8u;
    // 0x1c21bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C21B8u, 0x1C21C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21C0u;
label_1c21c0:
    // 0x1c21c0: 0xae0201b4  sw          $v0, 0x1B4($s0)
    ctx->pc = 0x1c21c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
    // 0x1c21c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21c8: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C21C8u;
    SET_GPR_U32(ctx, 31, 0x1C21D0u);
    ctx->pc = 0x1C21CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21C8u;
    // 0x1c21cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C21C8u, 0x1C21D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21D0u;
label_1c21d0:
    // 0x1c21d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C21D0u;
    {
        const bool branch_taken_0x1c21d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C21D0u;
        // 0x1c21d4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21d0) {
            ctx->pc = 0x1C21FCu;
            goto label_1c21fc;
        }
    }
    ctx->pc = 0x1C21D8u;
    // 0x1c21d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21dc: 0xc0707f6  jal         func_1C1FD8
    ctx->pc = 0x1C21DCu;
    SET_GPR_U32(ctx, 31, 0x1C21E4u);
    ctx->pc = 0x1C21E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21DCu;
    // 0x1c21e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1FD8u, 0x1C21DCu, 0x1C21E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21E4u;
label_1c21e4:
    // 0x1c21e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c21e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21e8: 0xc0707ba  jal         func_1C1EE8
    ctx->pc = 0x1C21E8u;
    SET_GPR_U32(ctx, 31, 0x1C21F0u);
    ctx->pc = 0x1C21ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21E8u;
    // 0x1c21ec: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EE8u, 0x1C21E8u, 0x1C21F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21F0u;
label_1c21f0:
    // 0x1c21f0: 0xc0709c0  jal         func_1C2700
    ctx->pc = 0x1C21F0u;
    SET_GPR_U32(ctx, 31, 0x1C21F8u);
    ctx->pc = 0x1C21F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21F0u;
    // 0x1c21f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2700u, 0x1C21F0u, 0x1C21F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21F8u;
label_1c21f8:
    // 0x1c21f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c21f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c21fc:
    // 0x1c21fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c21fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c2200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2204: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2204u;
        // 0x1c2208: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C220Cu;
}
