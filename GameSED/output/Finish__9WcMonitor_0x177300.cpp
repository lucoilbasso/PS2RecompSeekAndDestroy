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

// Function: Finish__9WcMonitor
// Address: 0x177300 - 0x17733c
void Finish__9WcMonitor_0x177300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Finish__9WcMonitor_0x177300");
#endif

    switch (ctx->pc) {
        case 0x17731cu: goto label_17731c;
        case 0x177324u: goto label_177324;
        case 0x17732cu: goto label_17732c;
        default: break;
    }

    ctx->pc = 0x177300u;

    // 0x177300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17730c: 0x8f848c98  lw          $a0, -0x7368($gp)
    ctx->pc = 0x17730cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937752)));
    // 0x177310: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x177314: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x177314u;
    SET_GPR_U32(ctx, 31, 0x17731Cu);
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x177314u, 0x17731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17731Cu;
label_17731c:
    // 0x17731c: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x17731Cu;
    SET_GPR_U32(ctx, 31, 0x177324u);
    ctx->pc = 0x177320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17731Cu;
    // 0x177320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x17731Cu, 0x177324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177324u;
label_177324:
    // 0x177324: 0xc068396  jal         func_1A0E58
    ctx->pc = 0x177324u;
    SET_GPR_U32(ctx, 31, 0x17732Cu);
    ctx->pc = 0x177328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177324u;
    // 0x177328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0E58u, 0x177324u, 0x17732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17732Cu;
label_17732c:
    // 0x17732c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17732cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177330: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x177330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177334: 0x3e00008  jr          $ra
    ctx->pc = 0x177334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177334u;
        // 0x177338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17733Cu;
}
