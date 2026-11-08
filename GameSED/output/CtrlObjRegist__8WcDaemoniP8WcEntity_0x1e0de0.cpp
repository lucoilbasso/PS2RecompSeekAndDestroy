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

// Function: CtrlObjRegist__8WcDaemoniP8WcEntity
// Address: 0x1e0de0 - 0x1e0e48
void CtrlObjRegist__8WcDaemoniP8WcEntity_0x1e0de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CtrlObjRegist__8WcDaemoniP8WcEntity_0x1e0de0");
#endif

    switch (ctx->pc) {
        case 0x1e0e1cu: goto label_1e0e1c;
        default: break;
    }

    ctx->pc = 0x1e0de0u;

    // 0x1e0de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0de4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e0de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e0de8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e0decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e0df0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e0df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0df4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e0df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e0df8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e0df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0dfc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e0dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e0e00: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1e0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1e0e04: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1e0e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e0e08: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0E08u;
    {
        const bool branch_taken_0x1e0e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E08u;
        // 0x1e0e0c: 0x24060042  addiu       $a2, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e08) {
            ctx->pc = 0x1E0E1Cu;
            goto label_1e0e1c;
        }
    }
    ctx->pc = 0x1E0E10u;
    // 0x1e0e10: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1e0e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1e0e14: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1E0E14u;
    SET_GPR_U32(ctx, 31, 0x1E0E1Cu);
    ctx->pc = 0x1E0E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0E14u;
    // 0x1e0e18: 0x24a584b8  addiu       $a1, $a1, -0x7B48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1E0E14u, 0x1E0E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0E1Cu;
label_1e0e1c:
    // 0x1e0e1c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e0e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1e0e20: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e0e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e0e24: 0xae500144  sw          $s0, 0x144($s2)
    ctx->pc = 0x1e0e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 16));
    // 0x1e0e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e0e2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e0e2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0e30: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1e0e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1e0e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e0e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0e38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e0e38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0e3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e0e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e0e40: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0E40u;
        // 0x1e0e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0E48u;
}
