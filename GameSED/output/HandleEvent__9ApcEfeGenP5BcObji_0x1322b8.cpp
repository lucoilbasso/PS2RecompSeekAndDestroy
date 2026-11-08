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

// Function: HandleEvent__9ApcEfeGenP5BcObji
// Address: 0x1322b8 - 0x132310
void HandleEvent__9ApcEfeGenP5BcObji_0x1322b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HandleEvent__9ApcEfeGenP5BcObji_0x1322b8");
#endif

    switch (ctx->pc) {
        case 0x1322e0u: goto label_1322e0;
        case 0x1322ecu: goto label_1322ec;
        default: break;
    }

    ctx->pc = 0x1322b8u;

    // 0x1322b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1322b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1322bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1322bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1322c0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1322c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1322c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1322c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1322c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1322c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1322cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1322ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1322d0: 0x8c900150  lw          $s0, 0x150($a0)
    ctx->pc = 0x1322d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1322d4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1322D4u;
    {
        const bool branch_taken_0x1322d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1322D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322D4u;
        // 0x1322d8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1322d4) {
            ctx->pc = 0x1322F8u;
            goto label_1322f8;
        }
    }
    ctx->pc = 0x1322DCu;
    // 0x1322dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1322dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1322e0:
    // 0x1322e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1322e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1322e4: 0xc04c10a  jal         func_130428
    ctx->pc = 0x1322E4u;
    SET_GPR_U32(ctx, 31, 0x1322ECu);
    ctx->pc = 0x1322E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1322E4u;
    // 0x1322e8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130428u, 0x1322E4u, 0x1322ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1322ECu;
label_1322ec:
    // 0x1322ec: 0x8e100060  lw          $s0, 0x60($s0)
    ctx->pc = 0x1322ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1322f0: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1322F0u;
    {
        const bool branch_taken_0x1322f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1322F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322F0u;
        // 0x1322f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1322f0) {
            ctx->pc = 0x1322E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1322e0;
        }
    }
    ctx->pc = 0x1322F8u;
label_1322f8:
    // 0x1322f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1322f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1322fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1322fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132300: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x132300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132304: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x132304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x132308: 0x3e00008  jr          $ra
    ctx->pc = 0x132308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132308u;
        // 0x13230c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132310u;
}
