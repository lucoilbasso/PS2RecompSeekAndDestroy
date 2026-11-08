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

// Function: __sfmoreglue
// Address: 0x1d43a8 - 0x1d4420
void ps2___sfmoreglue_0x1d43a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sfmoreglue_0x1d43a8");
#endif

    switch (ctx->pc) {
        case 0x1d43dcu: goto label_1d43dc;
        case 0x1d4404u: goto label_1d4404;
        default: break;
    }

    ctx->pc = 0x1d43a8u;

    // 0x1d43a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d43a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d43ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d43acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d43b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d43b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d43b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d43b8: 0x128040  sll         $s0, $s2, 1
    ctx->pc = 0x1d43b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1d43bc: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1d43bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d43c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d43c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d43c4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1d43c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d43c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d43c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d43cc: 0x2128023  subu        $s0, $s0, $s2
    ctx->pc = 0x1d43ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1d43d0: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x1d43d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1d43d4: 0xc073e1a  jal         func_1CF868
    ctx->pc = 0x1D43D4u;
    SET_GPR_U32(ctx, 31, 0x1D43DCu);
    ctx->pc = 0x1D43D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43D4u;
    // 0x1d43d8: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF868u, 0x1D43D4u, 0x1D43DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D43DCu;
label_1d43dc:
    // 0x1d43dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d43dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d43e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1d43e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43e8: 0x2623000c  addiu       $v1, $s1, 0xC
    ctx->pc = 0x1d43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1d43ec: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D43ECu;
    {
        const bool branch_taken_0x1d43ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43ECu;
        // 0x1d43f0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43ec) {
            ctx->pc = 0x1D4408u;
            goto label_1d4408;
        }
    }
    ctx->pc = 0x1D43F4u;
    // 0x1d43f4: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x1d43f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x1d43f8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1d43f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1d43fc: 0xc074035  jal         func_1D00D4
    ctx->pc = 0x1D43FCu;
    SET_GPR_U32(ctx, 31, 0x1D4404u);
    ctx->pc = 0x1D4400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43FCu;
    // 0x1d4400: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D00D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D00D4u, 0x1D43FCu, 0x1D4404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4404u;
label_1d4404:
    // 0x1d4404: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1d4404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4408:
    // 0x1d4408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d440c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d440cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4410: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d4410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4414: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d4414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d4418: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4418u;
        // 0x1d441c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4420u;
}
