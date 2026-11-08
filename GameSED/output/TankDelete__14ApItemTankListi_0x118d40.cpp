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

// Function: TankDelete__14ApItemTankListi
// Address: 0x118d40 - 0x118d7c
void TankDelete__14ApItemTankListi_0x118d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankDelete__14ApItemTankListi_0x118d40");
#endif

    switch (ctx->pc) {
        case 0x118d64u: goto label_118d64;
        default: break;
    }

    ctx->pc = 0x118d40u;

    // 0x118d40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118d44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118d48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x118d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118d50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d54: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x118d54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x118d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118d5c: 0xc046370  jal         func_118DC0
    ctx->pc = 0x118D5Cu;
    SET_GPR_U32(ctx, 31, 0x118D64u);
    ctx->pc = 0x118D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D5Cu;
    // 0x118d60: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC0u, 0x118D5Cu, 0x118D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D64u;
label_118d64:
    // 0x118d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118d68: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x118d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x118d6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118d70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118d74: 0x3e00008  jr          $ra
    ctx->pc = 0x118D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D74u;
        // 0x118d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118D7Cu;
}
