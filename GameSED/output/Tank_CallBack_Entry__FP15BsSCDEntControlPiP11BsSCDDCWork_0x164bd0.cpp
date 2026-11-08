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

// Function: Tank_CallBack_Entry__FP15BsSCDEntControlPiP11BsSCDDCWork
// Address: 0x164bd0 - 0x164c94
void Tank_CallBack_Entry__FP15BsSCDEntControlPiP11BsSCDDCWork_0x164bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Tank_CallBack_Entry__FP15BsSCDEntControlPiP11BsSCDDCWork_0x164bd0");
#endif

    switch (ctx->pc) {
        case 0x164c00u: goto label_164c00;
        case 0x164c18u: goto label_164c18;
        case 0x164c44u: goto label_164c44;
        case 0x164c64u: goto label_164c64;
        default: break;
    }

    ctx->pc = 0x164bd0u;

    // 0x164bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x164bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x164bd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x164bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x164bd8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x164bd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164bdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x164bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x164be0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x164be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164be4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x164be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x164be8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x164be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164bec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x164becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x164bf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x164bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x164bf4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x164bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164bf8: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x164BF8u;
    SET_GPR_U32(ctx, 31, 0x164C00u);
    ctx->pc = 0x164BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164BF8u;
    // 0x164bfc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x164BF8u, 0x164C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C00u;
label_164c00:
    // 0x164c00: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x164c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x164c04: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x164c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164c08: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x164c08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164c0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x164c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x164c10: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x164C10u;
    SET_GPR_U32(ctx, 31, 0x164C18u);
    ctx->pc = 0x164C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164C10u;
    // 0x164c14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x164C10u, 0x164C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C18u;
label_164c18:
    // 0x164c18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x164c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c1c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x164c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164c20: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x164c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x164c24: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x164c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x164c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c2c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x164c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c30: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x164c30u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x164c34: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x164C34u;
    {
        const bool branch_taken_0x164c34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C34u;
        // 0x164c38: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c34) {
            ctx->pc = 0x164C48u;
            goto label_164c48;
        }
    }
    ctx->pc = 0x164C3Cu;
    // 0x164c3c: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x164C3Cu;
    SET_GPR_U32(ctx, 31, 0x164C44u);
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x164C3Cu, 0x164C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C44u;
label_164c44:
    // 0x164c44: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x164c44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164c48:
    // 0x164c48: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x164c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x164c4c: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x164c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x164c50: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x164C50u;
    {
        const bool branch_taken_0x164c50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C50u;
        // 0x164c54: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c50) {
            ctx->pc = 0x164C70u;
            goto label_164c70;
        }
    }
    ctx->pc = 0x164C58u;
    // 0x164c58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c5c: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x164C5Cu;
    SET_GPR_U32(ctx, 31, 0x164C64u);
    ctx->pc = 0x164C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164C5Cu;
    // 0x164c60: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x164C5Cu, 0x164C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164C64u;
label_164c64:
    // 0x164c64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164C64u;
    {
        const bool branch_taken_0x164c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C64u;
        // 0x164c68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164c64) {
            ctx->pc = 0x164C78u;
            goto label_164c78;
        }
    }
    ctx->pc = 0x164C6Cu;
    // 0x164c6c: 0x0  nop
    ctx->pc = 0x164c6cu;
    // NOP
label_164c70:
    // 0x164c70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x164c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x164c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_164c78:
    // 0x164c78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164c7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164c80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164c80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164c84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x164c84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164c88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x164c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x164C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164C8Cu;
        // 0x164c90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164C94u;
}
