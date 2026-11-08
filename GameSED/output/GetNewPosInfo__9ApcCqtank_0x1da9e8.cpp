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

// Function: GetNewPosInfo__9ApcCqtank
// Address: 0x1da9e8 - 0x1daa40
void GetNewPosInfo__9ApcCqtank_0x1da9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNewPosInfo__9ApcCqtank_0x1da9e8");
#endif

    switch (ctx->pc) {
        case 0x1daa2cu: goto label_1daa2c;
        default: break;
    }

    ctx->pc = 0x1da9e8u;

    // 0x1da9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da9ec: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1da9ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da9f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da9f4: 0x24670d74  addiu       $a3, $v1, 0xD74
    ctx->pc = 0x1da9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3444));
    // 0x1da9f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da9fc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1da9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1daa00: 0x22940  sll         $a1, $v0, 5
    ctx->pc = 0x1daa00u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1daa04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1daa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1daa08: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1daa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1daa0c: 0x28460021  slti        $a2, $v0, 0x21
    ctx->pc = 0x1daa0cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1daa10: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x1daa10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x1daa14: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DAA14u;
    {
        const bool branch_taken_0x1daa14 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA14u;
        // 0x1daa18: 0x24700d80  addiu       $s0, $v1, 0xD80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa14) {
            ctx->pc = 0x1DAA2Cu;
            goto label_1daa2c;
        }
    }
    ctx->pc = 0x1DAA1Cu;
    // 0x1daa1c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1daa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1daa20: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x1daa20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x1daa24: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1DAA24u;
    SET_GPR_U32(ctx, 31, 0x1DAA2Cu);
    ctx->pc = 0x1DAA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA24u;
    // 0x1daa28: 0x24a56f88  addiu       $a1, $a1, 0x6F88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1DAA24u, 0x1DAA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAA2Cu;
label_1daa2c:
    // 0x1daa2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1daa2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daa30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1daa30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1daa34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1daa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1daa38: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA38u;
        // 0x1daa3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAA40u;
}
