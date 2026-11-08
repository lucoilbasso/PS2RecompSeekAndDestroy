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

// Function: BMemPMgrInitialMgr__FP8BMemPoolUii
// Address: 0x19ff00 - 0x19ff54
void BMemPMgrInitialMgr__FP8BMemPoolUii_0x19ff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrInitialMgr__FP8BMemPoolUii_0x19ff00");
#endif

    switch (ctx->pc) {
        case 0x19ff28u: goto label_19ff28;
        default: break;
    }

    ctx->pc = 0x19ff00u;

    // 0x19ff00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ff04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ff08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ff08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff0c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x19ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x19ff10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19ff10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19ff14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ff14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ff18: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19ff18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff1c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x19ff1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x19ff20: 0xc067ff4  jal         func_19FFD0
    ctx->pc = 0x19FF20u;
    SET_GPR_U32(ctx, 31, 0x19FF28u);
    ctx->pc = 0x19FF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FF20u;
    // 0x19ff24: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FFD0u, 0x19FF20u, 0x19FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FF28u;
label_19ff28:
    // 0x19ff28: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x19ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x19ff2c: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x19ff2cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19ff30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19ff30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ff34: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x19ff34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x19ff38: 0x310821  addu        $at, $at, $s1
    ctx->pc = 0x19ff38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 17)));
    // 0x19ff3c: 0xac30f640  sw          $s0, -0x9C0($at)
    ctx->pc = 0x19ff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964800), GPR_U32(ctx, 16));
    // 0x19ff40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ff40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ff44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19ff44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ff48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ff48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ff4c: 0x3e00008  jr          $ra
    ctx->pc = 0x19FF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF4Cu;
        // 0x19ff50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FF54u;
}
