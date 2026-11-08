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

// Function: Cmd_SET_SHOCK_LEVEL_Entry__FP15BsSCDEntControl
// Address: 0x11a138 - 0x11a184
void Cmd_SET_SHOCK_LEVEL_Entry__FP15BsSCDEntControl_0x11a138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_SET_SHOCK_LEVEL_Entry__FP15BsSCDEntControl_0x11a138");
#endif

    switch (ctx->pc) {
        case 0x11a150u: goto label_11a150;
        case 0x11a15cu: goto label_11a15c;
        default: break;
    }

    ctx->pc = 0x11a138u;

    // 0x11a138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11a138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11a13c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11a13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11a140: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11a148: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11A148u;
    SET_GPR_U32(ctx, 31, 0x11A150u);
    ctx->pc = 0x11A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A148u;
    // 0x11a14c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11A148u, 0x11A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A150u;
label_11a150:
    // 0x11a150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11a150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a154: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x11A154u;
    SET_GPR_U32(ctx, 31, 0x11A15Cu);
    ctx->pc = 0x11A158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A154u;
    // 0x11a158: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x11A154u, 0x11A15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A15Cu;
label_11a15c:
    // 0x11a15c: 0x240324d0  addiu       $v1, $zero, 0x24D0
    ctx->pc = 0x11a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9424));
    // 0x11a160: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x11a160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x11a164: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11a164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a16c: 0x3c01001f  lui         $at, 0x1F
    ctx->pc = 0x11a16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)31 << 16));
    // 0x11a170: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x11a170u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x11a174: 0xa422d170  sh          $v0, -0x2E90($at)
    ctx->pc = 0x11a174u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294955376), (uint16_t)GPR_U32(ctx, 2));
    // 0x11a178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a17c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A17Cu;
        // 0x11a180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A184u;
}
