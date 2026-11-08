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

// Function: do_upcast__C16__user_type_infoQ216__user_type_info8sub_kindRC9type_infoPvRQ216__user_type_info13upcast_result
// Address: 0x1cbf08 - 0x1cbf68
void do_upcast__C16__user_type_infoQ216__user_type_info8sub_kindRC9type_infoPvRQ216__user_type_info13upcast_result_0x1cbf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("do_upcast__C16__user_type_infoQ216__user_type_info8sub_kindRC9type_infoPvRQ216__user_type_info13upcast_result_0x1cbf08");
#endif

    switch (ctx->pc) {
        case 0x1cbf30u: goto label_1cbf30;
        default: break;
    }

    ctx->pc = 0x1cbf08u;

    // 0x1cbf08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cbf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cbf0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cbf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cbf10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cbf10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1cbf14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cbf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cbf1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cbf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cbf20: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1cbf20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cbf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cbf28: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CBF28u;
    SET_GPR_U32(ctx, 31, 0x1CBF30u);
    ctx->pc = 0x1CBF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBF28u;
    // 0x1cbf2c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CBF28u, 0x1CBF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF30u;
label_1cbf30:
    // 0x1cbf30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBF30u;
    {
        const bool branch_taken_0x1cbf30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF30u;
        // 0x1cbf34: 0x32430006  andi        $v1, $s2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf30) {
            ctx->pc = 0x1CBF50u;
            goto label_1cbf50;
        }
    }
    ctx->pc = 0x1CBF38u;
    // 0x1cbf38: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x1cbf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1cbf3c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1cbf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cbf40: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1cbf40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1cbf44: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1cbf44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1cbf48: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1cbf48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1cbf4c: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1cbf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_1cbf50:
    // 0x1cbf50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbf50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbf54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbf54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cbf58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cbf58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbf5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cbf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cbf60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF60u;
        // 0x1cbf64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBF68u;
}
