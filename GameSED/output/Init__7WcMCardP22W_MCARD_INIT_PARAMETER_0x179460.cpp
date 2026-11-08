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

// Function: Init__7WcMCardP22W_MCARD_INIT_PARAMETER
// Address: 0x179460 - 0x1794e8
void Init__7WcMCardP22W_MCARD_INIT_PARAMETER_0x179460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__7WcMCardP22W_MCARD_INIT_PARAMETER_0x179460");
#endif

    switch (ctx->pc) {
        case 0x179490u: goto label_179490;
        case 0x1794b0u: goto label_1794b0;
        default: break;
    }

    ctx->pc = 0x179460u;

    // 0x179460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x179460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x179464: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x179464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x179468: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x179468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17946c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17946cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179470: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x179470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x179474: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x179474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x179478: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x179478u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17947c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17947cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x179480: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x179480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x179484: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x179484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x179488: 0xc05e53a  jal         func_1794E8
    ctx->pc = 0x179488u;
    SET_GPR_U32(ctx, 31, 0x179490u);
    ctx->pc = 0x17948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179488u;
    // 0x17948c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1794E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1794E8u, 0x179488u, 0x179490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179490u;
label_179490:
    // 0x179490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179494: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x179494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x179498: 0x2471d180  addiu       $s1, $v1, -0x2E80
    ctx->pc = 0x179498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955392));
    // 0x17949c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17949cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x26D180u));
    // 0x1794a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1794A0u;
    {
        const bool branch_taken_0x1794a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1794A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794A0u;
        // 0x1794a4: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794a0) {
            ctx->pc = 0x1794B0u;
            goto label_1794b0;
        }
    }
    ctx->pc = 0x1794A8u;
    // 0x1794a8: 0xc05e7f8  jal         func_179FE0
    ctx->pc = 0x1794A8u;
    SET_GPR_U32(ctx, 31, 0x1794B0u);
    ctx->pc = 0x179FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179FE0u, 0x1794A8u, 0x1794B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1794B0u;
label_1794b0:
    // 0x1794b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1794b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1794b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1794b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1794b8: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x1794b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1794bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1794bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1794c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1794c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1794c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1794c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1794c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1794c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1794cc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1794ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1794d0: 0xac500048  sw          $s0, 0x48($v0)
    ctx->pc = 0x1794d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 16));
    // 0x1794d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1794d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1794d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1794d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1794dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1794dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1794e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1794E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1794E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1794E0u;
        // 0x1794e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1794E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1794E8u;
}
