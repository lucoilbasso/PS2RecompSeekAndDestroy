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

// Function: UseTankSet__20ApItemGameInfomationi
// Address: 0x1188b0 - 0x1188e8
void UseTankSet__20ApItemGameInfomationi_0x1188b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UseTankSet__20ApItemGameInfomationi_0x1188b0");
#endif

    switch (ctx->pc) {
        case 0x1188d0u: goto label_1188d0;
        default: break;
    }

    ctx->pc = 0x1188b0u;

    // 0x1188b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1188b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1188b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1188b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1188b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1188b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1188bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1188c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1188c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1188c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1188c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1188c8: 0xc04697e  jal         func_11A5F8
    ctx->pc = 0x1188C8u;
    SET_GPR_U32(ctx, 31, 0x1188D0u);
    ctx->pc = 0x1188CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1188C8u;
    // 0x1188cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A5F8u, 0x1188C8u, 0x1188D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1188D0u;
label_1188d0:
    // 0x1188d0: 0xae300fe8  sw          $s0, 0xFE8($s1)
    ctx->pc = 0x1188d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4072), GPR_U32(ctx, 16));
    // 0x1188d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1188d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1188d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1188d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1188dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1188dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1188e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1188E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1188E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1188E0u;
        // 0x1188e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1188E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1188E8u;
}
