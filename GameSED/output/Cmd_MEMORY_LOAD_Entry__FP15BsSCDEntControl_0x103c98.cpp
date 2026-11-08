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

// Function: Cmd_MEMORY_LOAD_Entry__FP15BsSCDEntControl
// Address: 0x103c98 - 0x103d18
void Cmd_MEMORY_LOAD_Entry__FP15BsSCDEntControl_0x103c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MEMORY_LOAD_Entry__FP15BsSCDEntControl_0x103c98");
#endif

    switch (ctx->pc) {
        case 0x103cb8u: goto label_103cb8;
        case 0x103ce0u: goto label_103ce0;
        case 0x103d04u: goto label_103d04;
        default: break;
    }

    ctx->pc = 0x103c98u;

    // 0x103c98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x103c9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103ca0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x103cac: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x103cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x103cb0: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x103CB0u;
    SET_GPR_U32(ctx, 31, 0x103CB8u);
    ctx->pc = 0x103CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CB0u;
    // 0x103cb4: 0x8c500044  lw          $s0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x103CB0u, 0x103CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CB8u;
label_103cb8:
    // 0x103cb8: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x103cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x103cbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x103cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x103cc0: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x103cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x103cc4: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x103cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x103cc8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x103cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x103ccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103cd0: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x103CD0u;
    {
        const bool branch_taken_0x103cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x103CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CD0u;
        // 0x103cd4: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103cd0) {
            ctx->pc = 0x103CE8u;
            goto label_103ce8;
        }
    }
    ctx->pc = 0x103CD8u;
    // 0x103cd8: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x103CD8u;
    SET_GPR_U32(ctx, 31, 0x103CE0u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x103CD8u, 0x103CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CE0u;
label_103ce0:
    // 0x103ce0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x103CE0u;
    {
        const bool branch_taken_0x103ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103CE0u;
        // 0x103ce4: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103ce0) {
            ctx->pc = 0x103CF4u;
            goto label_103cf4;
        }
    }
    ctx->pc = 0x103CE8u;
label_103ce8:
    // 0x103ce8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x103ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x103cec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x103cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103cf0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x103cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_103cf4:
    // 0x103cf4: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x103cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x103cf8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x103cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103cfc: 0xc067260  jal         func_19C980
    ctx->pc = 0x103CFCu;
    SET_GPR_U32(ctx, 31, 0x103D04u);
    ctx->pc = 0x103D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103CFCu;
    // 0x103d00: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x103CFCu, 0x103D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D04u;
label_103d04:
    // 0x103d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103d08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103d08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103d0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x103d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103d10: 0x3e00008  jr          $ra
    ctx->pc = 0x103D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D10u;
        // 0x103d14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103D18u;
}
