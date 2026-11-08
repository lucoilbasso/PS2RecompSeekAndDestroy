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

// Function: UnitTocEntry__7ApcUniti
// Address: 0x1d9218 - 0x1d9260
void UnitTocEntry__7ApcUniti_0x1d9218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UnitTocEntry__7ApcUniti_0x1d9218");
#endif

    switch (ctx->pc) {
        case 0x1d9248u: goto label_1d9248;
        default: break;
    }

    ctx->pc = 0x1d9218u;

    // 0x1d9218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d921c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1d921cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9224: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d9224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9228: 0x8ce50178  lw          $a1, 0x178($a3)
    ctx->pc = 0x1d9228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 376)));
    // 0x1d922c: 0x4a00009  bltz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D922Cu;
    {
        const bool branch_taken_0x1d922c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D9230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D922Cu;
        // 0x1d9230: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d922c) {
            ctx->pc = 0x1D9254u;
            goto label_1d9254;
        }
    }
    ctx->pc = 0x1D9234u;
    // 0x1d9234: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x1d9234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1d9238: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9238u;
    {
        const bool branch_taken_0x1d9238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D923Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9238u;
        // 0x1d923c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9238) {
            ctx->pc = 0x1D9250u;
            goto label_1d9250;
        }
    }
    ctx->pc = 0x1D9240u;
    // 0x1d9240: 0xc041228  jal         func_1048A0
    ctx->pc = 0x1D9240u;
    SET_GPR_U32(ctx, 31, 0x1D9248u);
    ctx->pc = 0x1D9244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9240u;
    // 0x1d9244: 0x8ce801b4  lw          $t0, 0x1B4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1048A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1048A0u, 0x1D9240u, 0x1D9248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9248u;
label_1d9248:
    // 0x1d9248: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D9248u;
    {
        const bool branch_taken_0x1d9248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9248u;
        // 0x1d924c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9248) {
            ctx->pc = 0x1D9254u;
            goto label_1d9254;
        }
    }
    ctx->pc = 0x1D9250u;
label_1d9250:
    // 0x1d9250: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9254:
    // 0x1d9254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9258: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9258u;
        // 0x1d925c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9260u;
}
