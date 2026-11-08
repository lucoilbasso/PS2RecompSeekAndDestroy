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

// Function: entry_00170088
// Address: 0x170088 - 0x1700d4
void entry_00170088_0x170088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170088_0x170088");
#endif

    switch (ctx->pc) {
        case 0x170090u: goto label_170090;
        case 0x1700a0u: goto label_1700a0;
        case 0x1700a8u: goto label_1700a8;
        default: break;
    }

    ctx->pc = 0x170088u;

label_170088:
    // 0x170088: 0xc05c036  jal         func_1700D8
    ctx->pc = 0x170088u;
    SET_GPR_U32(ctx, 31, 0x170090u);
    ctx->pc = 0x17008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170088u;
    // 0x17008c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1700D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1700D8u, 0x170088u, 0x170090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170090u;
label_170090:
    // 0x170090: 0x5450fffd  bnel        $v0, $s0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x170090u;
    {
        const bool branch_taken_0x170090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x170090) {
            ctx->pc = 0x170094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170090u;
            // 0x170094: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_170088;
        }
    }
    ctx->pc = 0x170098u;
    // 0x170098: 0xc05d042  jal         func_174108
    ctx->pc = 0x170098u;
    SET_GPR_U32(ctx, 31, 0x1700A0u);
    ctx->pc = 0x17009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170098u;
    // 0x17009c: 0x262412d0  addiu       $a0, $s1, 0x12D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174108u, 0x170098u, 0x1700A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1700A0u;
label_1700a0:
    // 0x1700a0: 0xc05c258  jal         func_170960
    ctx->pc = 0x1700A0u;
    SET_GPR_U32(ctx, 31, 0x1700A8u);
    ctx->pc = 0x170960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170960u, 0x1700A0u, 0x1700A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1700A8u;
label_1700a8:
    // 0x1700a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1700a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1700ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1700acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1700b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1700b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1700b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1700b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1700b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1700bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1700bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1700c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1700c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1700c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1700c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1700c8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1700c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1700cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1700CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1700D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1700CCu;
        // 0x1700d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1700CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1700D4u;
}
