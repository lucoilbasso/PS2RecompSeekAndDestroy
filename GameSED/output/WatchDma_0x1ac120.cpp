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

// Function: WatchDma
// Address: 0x1ac120 - 0x1ac1a4
void WatchDma_0x1ac120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WatchDma_0x1ac120");
#endif

    switch (ctx->pc) {
        case 0x1ac160u: goto label_1ac160;
        case 0x1ac170u: goto label_1ac170;
        case 0x1ac178u: goto label_1ac178;
        default: break;
    }

    ctx->pc = 0x1ac120u;

    // 0x1ac120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ac120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ac124: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ac124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ac128: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ac128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ac12c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ac12cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac130: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ac130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ac134: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ac134u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac138: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ac138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ac13c: 0x3c100100  lui         $s0, 0x100
    ctx->pc = 0x1ac13cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)256 << 16));
    // 0x1ac140: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1ac140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1ac144: 0xc6800b  movn        $s0, $a2, $a2
    ctx->pc = 0x1ac144u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x1ac148: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ac148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ac14c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1ac14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1ac150: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AC150u;
    {
        const bool branch_taken_0x1ac150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC150u;
        // 0x1ac154: 0x3c130026  lui         $s3, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac150) {
            ctx->pc = 0x1AC188u;
            goto label_1ac188;
        }
    }
    ctx->pc = 0x1AC158u;
    // 0x1ac158: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1ac158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1ac15c: 0x0  nop
    ctx->pc = 0x1ac15cu;
    // NOP
label_1ac160:
    // 0x1ac160: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AC160u;
    {
        const bool branch_taken_0x1ac160 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1ac160) {
            ctx->pc = 0x1AC178u;
            goto label_1ac178;
        }
    }
    ctx->pc = 0x1AC168u;
    // 0x1ac168: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AC168u;
    SET_GPR_U32(ctx, 31, 0x1AC170u);
    ctx->pc = 0x1AC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC168u;
    // 0x1ac16c: 0x266499b0  addiu       $a0, $s3, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AC168u, 0x1AC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC170u;
label_1ac170:
    // 0x1ac170: 0xc06b212  jal         func_1AC848
    ctx->pc = 0x1AC170u;
    SET_GPR_U32(ctx, 31, 0x1AC178u);
    ctx->pc = 0x1AC174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC170u;
    // 0x1ac174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC848u, 0x1AC170u, 0x1AC178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC178u;
label_1ac178:
    // 0x1ac178: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1ac178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1ac17c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1ac17cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1ac180: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AC180u;
    {
        const bool branch_taken_0x1ac180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC180u;
        // 0x1ac184: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac180) {
            ctx->pc = 0x1AC160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac160;
        }
    }
    ctx->pc = 0x1AC188u;
label_1ac188:
    // 0x1ac188: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ac188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ac18c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1ac18cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ac190: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ac190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ac194: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ac194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ac198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac19c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC19Cu;
        // 0x1ac1a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC1A4u;
}
