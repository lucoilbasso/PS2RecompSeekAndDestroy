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

// Function: ApSCDEntSaveName__FP15BsSCDEntControl
// Address: 0x105af0 - 0x105b2c
void ApSCDEntSaveName__FP15BsSCDEntControl_0x105af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntSaveName__FP15BsSCDEntControl_0x105af0");
#endif

    switch (ctx->pc) {
        case 0x105b0cu: goto label_105b0c;
        case 0x105b1cu: goto label_105b1c;
        default: break;
    }

    ctx->pc = 0x105af0u;

    // 0x105af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x105af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x105af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x105af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x105af8: 0x3c100026  lui         $s0, 0x26
    ctx->pc = 0x105af8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)38 << 16));
    // 0x105afc: 0x2610f1c0  addiu       $s0, $s0, -0xE40
    ctx->pc = 0x105afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963648));
    // 0x105b00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x105b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x105b04: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x105B04u;
    SET_GPR_U32(ctx, 31, 0x105B0Cu);
    ctx->pc = 0x105B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B04u;
    // 0x105b08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x105B04u, 0x105B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B0Cu;
label_105b0c:
    // 0x105b0c: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x105b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x105b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b14: 0xc066e3e  jal         func_19B8F8
    ctx->pc = 0x105B14u;
    SET_GPR_U32(ctx, 31, 0x105B1Cu);
    ctx->pc = 0x105B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B14u;
    // 0x105b18: 0x24a5f180  addiu       $a1, $a1, -0xE80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8F8u, 0x105B14u, 0x105B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B1Cu;
label_105b1c:
    // 0x105b1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x105b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105b20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x105b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x105b24: 0x3e00008  jr          $ra
    ctx->pc = 0x105B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B24u;
        // 0x105b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105B2Cu;
}
