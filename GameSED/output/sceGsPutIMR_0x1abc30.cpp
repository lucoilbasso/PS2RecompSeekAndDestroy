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

// Function: sceGsPutIMR
// Address: 0x1abc30 - 0x1abc6c
void sceGsPutIMR_0x1abc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsPutIMR_0x1abc30");
#endif

    switch (ctx->pc) {
        case 0x1abc48u: goto label_1abc48;
        case 0x1abc54u: goto label_1abc54;
        default: break;
    }

    ctx->pc = 0x1abc30u;

    // 0x1abc30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1abc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1abc34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1abc38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1abc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1abc3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1abc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1abc40: 0xc06bde0  jal         func_1AF780
    ctx->pc = 0x1ABC40u;
    SET_GPR_U32(ctx, 31, 0x1ABC48u);
    ctx->pc = 0x1ABC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC40u;
    // 0x1abc44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF780u, 0x1ABC40u, 0x1ABC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC48u;
label_1abc48:
    // 0x1abc48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1abc48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc4c: 0xc06bde8  jal         func_1AF7A0
    ctx->pc = 0x1ABC4Cu;
    SET_GPR_U32(ctx, 31, 0x1ABC54u);
    ctx->pc = 0x1ABC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABC4Cu;
    // 0x1abc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF7A0u, 0x1ABC4Cu, 0x1ABC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABC54u;
label_1abc54:
    // 0x1abc54: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1abc54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abc58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1abc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abc5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1abc5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abc60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abc60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abc64: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABC64u;
        // 0x1abc68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABC6Cu;
}
