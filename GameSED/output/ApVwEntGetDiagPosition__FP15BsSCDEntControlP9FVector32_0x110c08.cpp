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

// Function: ApVwEntGetDiagPosition__FP15BsSCDEntControlP9FVector32
// Address: 0x110c08 - 0x110ca0
void ApVwEntGetDiagPosition__FP15BsSCDEntControlP9FVector32_0x110c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApVwEntGetDiagPosition__FP15BsSCDEntControlP9FVector32_0x110c08");
#endif

    switch (ctx->pc) {
        case 0x110c34u: goto label_110c34;
        case 0x110c68u: goto label_110c68;
        case 0x110c78u: goto label_110c78;
        case 0x110c88u: goto label_110c88;
        default: break;
    }

    ctx->pc = 0x110c08u;

    // 0x110c08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x110c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x110c0c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x110c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x110c10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x110c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c14: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x110c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x110c18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x110c18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c1c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x110c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x110c20: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x110c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x110c24: 0x7fa00000  sq          $zero, 0x0($sp)
    ctx->pc = 0x110c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 0));
    // 0x110c28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x110c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c2c: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x110C2Cu;
    SET_GPR_U32(ctx, 31, 0x110C34u);
    ctx->pc = 0x110C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C2Cu;
    // 0x110c30: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x110C2Cu, 0x110C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C34u;
label_110c34:
    // 0x110c34: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x110c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x110c38: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x110c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x110c3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x110c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x110c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x110c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x110c48: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x110c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x110c4c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x110C4Cu;
    {
        const bool branch_taken_0x110c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x110C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C4Cu;
        // 0x110c50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c4c) {
            ctx->pc = 0x110C80u;
            goto label_110c80;
        }
    }
    ctx->pc = 0x110C54u;
    // 0x110c54: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x110c54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x110c58: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x110c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x110c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x110c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c60: 0xc06a2fe  jal         func_1A8BF8
    ctx->pc = 0x110C60u;
    SET_GPR_U32(ctx, 31, 0x110C68u);
    ctx->pc = 0x110C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C60u;
    // 0x110c64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8BF8u, 0x110C60u, 0x110C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C68u;
label_110c68:
    // 0x110c68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x110c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c6c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x110c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c70: 0xc052850  jal         func_14A140
    ctx->pc = 0x110C70u;
    SET_GPR_U32(ctx, 31, 0x110C78u);
    ctx->pc = 0x110C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C70u;
    // 0x110c74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A140u, 0x110C70u, 0x110C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C78u;
label_110c78:
    // 0x110c78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x110C78u;
    {
        const bool branch_taken_0x110c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C78u;
        // 0x110c7c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c78) {
            ctx->pc = 0x110C8Cu;
            goto label_110c8c;
        }
    }
    ctx->pc = 0x110C80u;
label_110c80:
    // 0x110c80: 0xc052850  jal         func_14A140
    ctx->pc = 0x110C80u;
    SET_GPR_U32(ctx, 31, 0x110C88u);
    ctx->pc = 0x14A140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A140u, 0x110C80u, 0x110C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C88u;
label_110c88:
    // 0x110c88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x110c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_110c8c:
    // 0x110c8c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x110c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x110c90: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x110c90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110c94: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x110c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x110c98: 0x3e00008  jr          $ra
    ctx->pc = 0x110C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C98u;
        // 0x110c9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110CA0u;
}
