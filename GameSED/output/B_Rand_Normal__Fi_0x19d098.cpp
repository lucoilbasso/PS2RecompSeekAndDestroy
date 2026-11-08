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

// Function: B_Rand_Normal__Fi
// Address: 0x19d098 - 0x19d10c
void B_Rand_Normal__Fi_0x19d098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("B_Rand_Normal__Fi_0x19d098");
#endif

    switch (ctx->pc) {
        case 0x19d0c8u: goto label_19d0c8;
        case 0x19d0d4u: goto label_19d0d4;
        default: break;
    }

    ctx->pc = 0x19d098u;

    // 0x19d098: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d09c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19d09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x19d0a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19d0a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0a4: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x19d0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x19d0a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19d0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d0ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d0b0: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x19d0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19d0b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19d0b8: 0x2411000c  addiu       $s1, $zero, 0xC
    ctx->pc = 0x19d0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19d0bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19d0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x19d0c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19d0c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0c4: 0x0  nop
    ctx->pc = 0x19d0c4u;
    // NOP
label_19d0c8:
    // 0x19d0c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19d0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d0cc: 0xc066eea  jal         func_19BBA8
    ctx->pc = 0x19D0CCu;
    SET_GPR_U32(ctx, 31, 0x19D0D4u);
    ctx->pc = 0x19D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D0CCu;
    // 0x19d0d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBA8u, 0x19D0CCu, 0x19D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19D0D4u;
label_19d0d4:
    // 0x19d0d4: 0x1620fffc  bnez        $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x19D0D4u;
    {
        const bool branch_taken_0x19d0d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0D4u;
        // 0x19d0d8: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0d4) {
            ctx->pc = 0x19D0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d0c8;
        }
    }
    ctx->pc = 0x19D0DCu;
    // 0x19d0dc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x19d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19d0e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19d0e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d0e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19d0e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d0ec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x19d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19d0f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19d0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d0f4: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x19d0f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x19d0f8: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x19d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x19d0fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19d0fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d100: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19d100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19d104: 0x3e00008  jr          $ra
    ctx->pc = 0x19D104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D104u;
        // 0x19d108: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D10Cu;
}
