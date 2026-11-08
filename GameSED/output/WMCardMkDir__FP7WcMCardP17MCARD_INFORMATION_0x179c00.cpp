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

// Function: WMCardMkDir__FP7WcMCardP17MCARD_INFORMATION
// Address: 0x179c00 - 0x179c8c
void WMCardMkDir__FP7WcMCardP17MCARD_INFORMATION_0x179c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WMCardMkDir__FP7WcMCardP17MCARD_INFORMATION_0x179c00");
#endif

    switch (ctx->pc) {
        case 0x179c20u: goto label_179c20;
        case 0x179c2cu: goto label_179c2c;
        case 0x179c48u: goto label_179c48;
        default: break;
    }

    ctx->pc = 0x179c00u;

    // 0x179c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179c04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x179c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x179c08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x179c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x179c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c10: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x179c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x179c14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x179c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c18: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x179c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x179c1c: 0x0  nop
    ctx->pc = 0x179c1cu;
    // NOP
label_179c20:
    // 0x179c20: 0x26260540  addiu       $a2, $s1, 0x540
    ctx->pc = 0x179c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1344));
    // 0x179c24: 0xc0714b0  jal         func_1C52C0
    ctx->pc = 0x179C24u;
    SET_GPR_U32(ctx, 31, 0x179C2Cu);
    ctx->pc = 0x179C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C24u;
    // 0x179c28: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C52C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C52C0u, 0x179C24u, 0x179C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179C2Cu;
label_179c2c:
    // 0x179c2c: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x179C2Cu;
    {
        const bool branch_taken_0x179c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179c2c) {
            ctx->pc = 0x179C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179C2Cu;
            // 0x179c30: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179c20;
        }
    }
    ctx->pc = 0x179C34u;
    // 0x179c34: 0x26104030  addiu       $s0, $s0, 0x4030
    ctx->pc = 0x179c34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16432));
    // 0x179c38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x179c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x179c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c40: 0xc071606  jal         func_1C5818
    ctx->pc = 0x179C40u;
    SET_GPR_U32(ctx, 31, 0x179C48u);
    ctx->pc = 0x179C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C40u;
    // 0x179c44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5818u, 0x179C40u, 0x179C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179C48u;
label_179c48:
    // 0x179c48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x179c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179c4c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x179C4Cu;
    {
        const bool branch_taken_0x179c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x179C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C4Cu;
        // 0x179c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c4c) {
            ctx->pc = 0x179C78u;
            goto label_179c78;
        }
    }
    ctx->pc = 0x179C54u;
    // 0x179c54: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x179c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x179c58: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x179C58u;
    {
        const bool branch_taken_0x179c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x179C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C58u;
        // 0x179c5c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c58) {
            ctx->pc = 0x179C7Cu;
            goto label_179c7c;
        }
    }
    ctx->pc = 0x179C60u;
    // 0x179c60: 0x2882fffc  slti        $v0, $a0, -0x4
    ctx->pc = 0x179c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967292) ? 1 : 0);
    // 0x179c64: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x179C64u;
    {
        const bool branch_taken_0x179c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c64) {
            ctx->pc = 0x179C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179C64u;
            // 0x179c68: 0x2882ffff  slti        $v0, $a0, -0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967295) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179C6Cu;
            goto label_179c6c;
        }
    }
    ctx->pc = 0x179C6Cu;
label_179c6c:
    // 0x179c6c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x179c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x179c70: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x179c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x179c74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179c78:
    // 0x179c78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x179c78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_179c7c:
    // 0x179c7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x179c7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x179c80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x179c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179c84: 0x3e00008  jr          $ra
    ctx->pc = 0x179C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C84u;
        // 0x179c88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179C8Cu;
}
