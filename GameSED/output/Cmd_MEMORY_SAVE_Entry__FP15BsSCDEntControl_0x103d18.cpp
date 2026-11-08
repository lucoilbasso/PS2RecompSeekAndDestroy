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

// Function: Cmd_MEMORY_SAVE_Entry__FP15BsSCDEntControl
// Address: 0x103d18 - 0x103d98
void Cmd_MEMORY_SAVE_Entry__FP15BsSCDEntControl_0x103d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cmd_MEMORY_SAVE_Entry__FP15BsSCDEntControl_0x103d18");
#endif

    switch (ctx->pc) {
        case 0x103d38u: goto label_103d38;
        case 0x103d60u: goto label_103d60;
        case 0x103d84u: goto label_103d84;
        default: break;
    }

    ctx->pc = 0x103d18u;

    // 0x103d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x103d1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x103d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103d20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x103d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x103d28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x103d2c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x103d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x103d30: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x103D30u;
    SET_GPR_U32(ctx, 31, 0x103D38u);
    ctx->pc = 0x103D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D30u;
    // 0x103d34: 0x8c500044  lw          $s0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x103D30u, 0x103D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D38u;
label_103d38:
    // 0x103d38: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x103d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x103d3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x103d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x103d40: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x103d40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x103d44: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x103d44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x103d48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x103d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x103d4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x103d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103d50: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x103D50u;
    {
        const bool branch_taken_0x103d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x103D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D50u;
        // 0x103d54: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d50) {
            ctx->pc = 0x103D68u;
            goto label_103d68;
        }
    }
    ctx->pc = 0x103D58u;
    // 0x103d58: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x103D58u;
    SET_GPR_U32(ctx, 31, 0x103D60u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x103D58u, 0x103D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D60u;
label_103d60:
    // 0x103d60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x103D60u;
    {
        const bool branch_taken_0x103d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D60u;
        // 0x103d64: 0x8e250020  lw          $a1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103d60) {
            ctx->pc = 0x103D74u;
            goto label_103d74;
        }
    }
    ctx->pc = 0x103D68u;
label_103d68:
    // 0x103d68: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x103d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x103d6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x103d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x103d70: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x103d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_103d74:
    // 0x103d74: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x103d74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x103d78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x103d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x103d7c: 0xc067260  jal         func_19C980
    ctx->pc = 0x103D7Cu;
    SET_GPR_U32(ctx, 31, 0x103D84u);
    ctx->pc = 0x103D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103D7Cu;
    // 0x103d80: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C980u, 0x103D7Cu, 0x103D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103D84u;
label_103d84:
    // 0x103d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x103d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103d88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103d8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x103d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103d90: 0x3e00008  jr          $ra
    ctx->pc = 0x103D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103D90u;
        // 0x103d94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103D98u;
}
