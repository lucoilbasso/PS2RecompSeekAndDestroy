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

// Function: SetVibration__5WcPadiii
// Address: 0x177f10 - 0x177ff0
void SetVibration__5WcPadiii_0x177f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVibration__5WcPadiii_0x177f10");
#endif

    switch (ctx->pc) {
        case 0x177f6cu: goto label_177f6c;
        case 0x177f80u: goto label_177f80;
        default: break;
    }

    ctx->pc = 0x177f10u;

    // 0x177f10: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x177f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f14: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177f18: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x177f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x177f1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x177f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x177f20: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x177f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x177f24: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x177f24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x177f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x177f2c: 0x2c440002  sltiu       $a0, $v0, 0x2
    ctx->pc = 0x177f2cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x177f30: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x177f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x177f34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177f38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x177f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x177f3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177f40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177f44: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x177f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x177f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x177f4c: 0x3c100022  lui         $s0, 0x22
    ctx->pc = 0x177f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)34 << 16));
    // 0x177f50: 0x2610e820  addiu       $s0, $s0, -0x17E0
    ctx->pc = 0x177f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961184));
    // 0x177f54: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x177f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x177f58: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x177F58u;
    {
        const bool branch_taken_0x177f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x177F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F58u;
        // 0x177f5c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f58) {
            ctx->pc = 0x177F80u;
            goto label_177f80;
        }
    }
    ctx->pc = 0x177F60u;
    // 0x177f60: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x177f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x177f64: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x177F64u;
    SET_GPR_U32(ctx, 31, 0x177F6Cu);
    ctx->pc = 0x177F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F64u;
    // 0x177f68: 0x24847938  addiu       $a0, $a0, 0x7938 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x177F64u, 0x177F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F6Cu;
label_177f6c:
    // 0x177f6c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x177f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x177f70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x177f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177f74: 0x24a57948  addiu       $a1, $a1, 0x7948
    ctx->pc = 0x177f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31048));
    // 0x177f78: 0xc068186  jal         func_1A0618
    ctx->pc = 0x177F78u;
    SET_GPR_U32(ctx, 31, 0x177F80u);
    ctx->pc = 0x177F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177F78u;
    // 0x177f7c: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x177F78u, 0x177F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177F80u;
label_177f80:
    // 0x177f80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x177f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x177f84: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x177F84u;
    {
        const bool branch_taken_0x177f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F84u;
        // 0x177f88: 0x12182b  sltu        $v1, $zero, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f84) {
            ctx->pc = 0x177FC8u;
            goto label_177fc8;
        }
    }
    ctx->pc = 0x177F8Cu;
    // 0x177f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x177f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177f90: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x177F90u;
    {
        const bool branch_taken_0x177f90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x177F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177F90u;
        // 0x177f94: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x177f90) {
            ctx->pc = 0x177FC0u;
            goto label_177fc0;
        }
    }
    ctx->pc = 0x177F98u;
    // 0x177f98: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x177F98u;
    {
        const bool branch_taken_0x177f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177f98) {
            ctx->pc = 0x177F9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177F98u;
            // 0x177f9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177FB0u;
            goto label_177fb0;
        }
    }
    ctx->pc = 0x177FA0u;
    // 0x177fa0: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x177FA0u;
    {
        const bool branch_taken_0x177fa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x177fa0) {
            ctx->pc = 0x177FA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177FA0u;
            // 0x177fa4: 0xa2120055  sb          $s2, 0x55($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177FD4u;
            goto label_177fd4;
        }
    }
    ctx->pc = 0x177FA8u;
    // 0x177fa8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x177FA8u;
    {
        const bool branch_taken_0x177fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FA8u;
        // 0x177fac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fa8) {
            ctx->pc = 0x177FD8u;
            goto label_177fd8;
        }
    }
    ctx->pc = 0x177FB0u;
label_177fb0:
    // 0x177fb0: 0x52220003  beql        $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x177FB0u;
    {
        const bool branch_taken_0x177fb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x177fb0) {
            ctx->pc = 0x177FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177FB0u;
            // 0x177fb4: 0xa2120055  sb          $s2, 0x55($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177FC0u;
            goto label_177fc0;
        }
    }
    ctx->pc = 0x177FB8u;
    // 0x177fb8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x177FB8u;
    {
        const bool branch_taken_0x177fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FB8u;
        // 0x177fbc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fb8) {
            ctx->pc = 0x177FD8u;
            goto label_177fd8;
        }
    }
    ctx->pc = 0x177FC0u;
label_177fc0:
    // 0x177fc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x177FC0u;
    {
        const bool branch_taken_0x177fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FC0u;
        // 0x177fc4: 0xa2030054  sb          $v1, 0x54($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177fc0) {
            ctx->pc = 0x177FD4u;
            goto label_177fd4;
        }
    }
    ctx->pc = 0x177FC8u;
label_177fc8:
    // 0x177fc8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x177fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x177fcc: 0xa2030054  sb          $v1, 0x54($s0)
    ctx->pc = 0x177fccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x177fd0: 0xa2020055  sb          $v0, 0x55($s0)
    ctx->pc = 0x177fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 85), (uint8_t)GPR_U32(ctx, 2));
label_177fd4:
    // 0x177fd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177fd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177fd8:
    // 0x177fd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177fd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177fdc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x177fdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177fe0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x177fe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177fe4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x177fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x177FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177FE8u;
        // 0x177fec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177FF0u;
}
