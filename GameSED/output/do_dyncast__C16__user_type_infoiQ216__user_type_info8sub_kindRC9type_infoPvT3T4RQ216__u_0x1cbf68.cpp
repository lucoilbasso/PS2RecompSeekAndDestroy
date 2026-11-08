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

// Function: do_dyncast__C16__user_type_infoiQ216__user_type_info8sub_kindRC9type_infoPvT3T4RQ216__user_type_info14dyncast_result
// Address: 0x1cbf68 - 0x1cc000
void do_dyncast__C16__user_type_infoiQ216__user_type_info8sub_kindRC9type_infoPvT3T4RQ216__user_type_info14dyncast_result_0x1cbf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("do_dyncast__C16__user_type_infoiQ216__user_type_info8sub_kindRC9type_infoPvT3T4RQ216__user_type_info14dyncast_result_0x1cbf68");
#endif

    switch (ctx->pc) {
        case 0x1cbfa8u: goto label_1cbfa8;
        case 0x1cbfc4u: goto label_1cbfc4;
        default: break;
    }

    ctx->pc = 0x1cbf68u;

    // 0x1cbf68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cbf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cbf6c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1cbf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf70: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cbf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cbf74: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1cbf74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cbf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cbf7c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x1cbf7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cbf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cbf84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cbf84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cbf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cbf8c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1cbf8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cbf90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cbf94: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1cbf94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbf98: 0x168a0007  bne         $s4, $t2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBF98u;
    {
        const bool branch_taken_0x1cbf98 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 10));
        ctx->pc = 0x1CBF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBF98u;
        // 0x1cbf9c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbf98) {
            ctx->pc = 0x1CBFB8u;
            goto label_1cbfb8;
        }
    }
    ctx->pc = 0x1CBFA0u;
    // 0x1cbfa0: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CBFA0u;
    SET_GPR_U32(ctx, 31, 0x1CBFA8u);
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CBFA0u, 0x1CBFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFA8u;
label_1cbfa8:
    // 0x1cbfa8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CBFA8u;
    {
        const bool branch_taken_0x1cbfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFA8u;
        // 0x1cbfac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfa8) {
            ctx->pc = 0x1CBFBCu;
            goto label_1cbfbc;
        }
    }
    ctx->pc = 0x1CBFB0u;
    // 0x1cbfb0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CBFB0u;
    {
        const bool branch_taken_0x1cbfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFB0u;
        // 0x1cbfb4: 0xae130008  sw          $s3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbfb0) {
            ctx->pc = 0x1CBFDCu;
            goto label_1cbfdc;
        }
    }
    ctx->pc = 0x1CBFB8u;
label_1cbfb8:
    // 0x1cbfb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cbfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cbfbc:
    // 0x1cbfbc: 0xc072f28  jal         func_1CBCA0
    ctx->pc = 0x1CBFBCu;
    SET_GPR_U32(ctx, 31, 0x1CBFC4u);
    ctx->pc = 0x1CBFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBFBCu;
    // 0x1cbfc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBCA0u, 0x1CBFBCu, 0x1CBFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFC4u;
label_1cbfc4:
    // 0x1cbfc4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CBFC4u;
    {
        const bool branch_taken_0x1cbfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbfc4) {
            ctx->pc = 0x1CBFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBFC4u;
            // 0x1cbfc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBFE4u;
            goto label_1cbfe4;
        }
    }
    ctx->pc = 0x1CBFCCu;
    // 0x1cbfcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cbfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cbfd0: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x1cbfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x1cbfd4: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1cbfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1cbfd8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1cbfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1cbfdc:
    // 0x1cbfdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cbfdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbfe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbfe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbfe4:
    // 0x1cbfe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbfe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cbfe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cbfe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbfec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cbfecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cbff0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cbff0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cbff4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cbff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cbff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBFF8u;
        // 0x1cbffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC000u;
}
