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

// Function: TankCheck__14ApItemTankListi
// Address: 0x118d80 - 0x118dbc
void TankCheck__14ApItemTankListi_0x118d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankCheck__14ApItemTankListi_0x118d80");
#endif

    switch (ctx->pc) {
        case 0x118da4u: goto label_118da4;
        default: break;
    }

    ctx->pc = 0x118d80u;

    // 0x118d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118d88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x118d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d94: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x118d94u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x118d98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118d9c: 0xc046370  jal         func_118DC0
    ctx->pc = 0x118D9Cu;
    SET_GPR_U32(ctx, 31, 0x118DA4u);
    ctx->pc = 0x118DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D9Cu;
    // 0x118da0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC0u, 0x118D9Cu, 0x118DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118DA4u;
label_118da4:
    // 0x118da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118da8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x118da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x118dac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118dacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118db4: 0x3e00008  jr          $ra
    ctx->pc = 0x118DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118DB4u;
        // 0x118db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118DBCu;
}
