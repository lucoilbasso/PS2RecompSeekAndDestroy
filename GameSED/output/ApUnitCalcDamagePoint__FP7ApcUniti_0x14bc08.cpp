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

// Function: ApUnitCalcDamagePoint__FP7ApcUniti
// Address: 0x14bc08 - 0x14bcc4
void ApUnitCalcDamagePoint__FP7ApcUniti_0x14bc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitCalcDamagePoint__FP7ApcUniti_0x14bc08");
#endif

    switch (ctx->pc) {
        case 0x14bc38u: goto label_14bc38;
        case 0x14bc48u: goto label_14bc48;
        default: break;
    }

    ctx->pc = 0x14bc08u;

    // 0x14bc08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14bc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14bc0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14bc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14bc10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14bc14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14bc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14bc18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14bc18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc1c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14bc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14bc20: 0x26500188  addiu       $s0, $s2, 0x188
    ctx->pc = 0x14bc20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 392));
    // 0x14bc24: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14bc28: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x14BC28u;
    {
        const bool branch_taken_0x14bc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC28u;
        // 0x14bc2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc28) {
            ctx->pc = 0x14BCA8u;
            goto label_14bca8;
        }
    }
    ctx->pc = 0x14BC30u;
    // 0x14bc30: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x14BC30u;
    SET_GPR_U32(ctx, 31, 0x14BC38u);
    ctx->pc = 0x14BC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC30u;
    // 0x14bc34: 0x24040026  addiu       $a0, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x14BC30u, 0x14BC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC38u;
label_14bc38:
    // 0x14bc38: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14BC38u;
    {
        const bool branch_taken_0x14bc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC38u;
        // 0x14bc3c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc38) {
            ctx->pc = 0x14BCACu;
            goto label_14bcac;
        }
    }
    ctx->pc = 0x14BC40u;
    // 0x14bc40: 0xc06a202  jal         func_1A8808
    ctx->pc = 0x14BC40u;
    SET_GPR_U32(ctx, 31, 0x14BC48u);
    ctx->pc = 0x14BC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BC40u;
    // 0x14bc44: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8808u, 0x14BC40u, 0x14BC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BC48u;
label_14bc48:
    // 0x14bc48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14bc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14bc4c: 0x14800017  bnez        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14BC4Cu;
    {
        const bool branch_taken_0x14bc4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14BC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC4Cu;
        // 0x14bc50: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc4c) {
            ctx->pc = 0x14BCACu;
            goto label_14bcac;
        }
    }
    ctx->pc = 0x14BC54u;
    // 0x14bc54: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x14bc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14bc58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14BC58u;
    {
        const bool branch_taken_0x14bc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC58u;
        // 0x14bc5c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc58) {
            ctx->pc = 0x14BC74u;
            goto label_14bc74;
        }
    }
    ctx->pc = 0x14BC60u;
    // 0x14bc60: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14BC60u;
    {
        const bool branch_taken_0x14bc60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC60u;
        // 0x14bc64: 0xa21023  subu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc60) {
            ctx->pc = 0x14BC7Cu;
            goto label_14bc7c;
        }
    }
    ctx->pc = 0x14BC68u;
    // 0x14bc68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14bc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14bc6c: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x14bc6cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x14bc70: 0x22800  sll         $a1, $v0, 0
    ctx->pc = 0x14bc70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
label_14bc74:
    // 0x14bc74: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BC74u;
    {
        const bool branch_taken_0x14bc74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14bc74) {
            ctx->pc = 0x14BC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BC74u;
            // 0x14bc78: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BC88u;
            goto label_14bc88;
        }
    }
    ctx->pc = 0x14BC7Cu;
label_14bc7c:
    // 0x14bc7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x14BC7Cu;
    {
        const bool branch_taken_0x14bc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC7Cu;
        // 0x14bc80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc7c) {
            ctx->pc = 0x14BC98u;
            goto label_14bc98;
        }
    }
    ctx->pc = 0x14BC84u;
    // 0x14bc84: 0x0  nop
    ctx->pc = 0x14bc84u;
    // NOP
label_14bc88:
    // 0x14bc88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x14bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14bc8c: 0x704410c8  pmaxw       $v0, $v0, $a0
    ctx->pc = 0x14bc8cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x14bc90: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x14bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x14bc94: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_14bc98:
    // 0x14bc98: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BC98u;
    {
        const bool branch_taken_0x14bc98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BC98u;
        // 0x14bc9c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bc98) {
            ctx->pc = 0x14BCACu;
            goto label_14bcac;
        }
    }
    ctx->pc = 0x14BCA0u;
    // 0x14bca0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14BCA0u;
    {
        const bool branch_taken_0x14bca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCA0u;
        // 0x14bca4: 0x8e420188  lw          $v0, 0x188($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bca0) {
            ctx->pc = 0x14BCACu;
            goto label_14bcac;
        }
    }
    ctx->pc = 0x14BCA8u;
label_14bca8:
    // 0x14bca8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14bcac:
    // 0x14bcac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14bcacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14bcb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14bcb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14bcb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14bcb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14bcb8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14bcb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14bcbc: 0x3e00008  jr          $ra
    ctx->pc = 0x14BCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BCBCu;
        // 0x14bcc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BCC4u;
}
