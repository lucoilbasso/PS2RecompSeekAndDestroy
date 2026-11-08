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

// Function: _ulp
// Address: 0x1d5e08 - 0x1d5ed8
void _ulp_0x1d5e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_ulp_0x1d5e08");
#endif

    ctx->pc = 0x1d5e08u;

    // 0x1d5e08: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x1d5e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x1d5e0c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1d5e0cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1d5e10: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1d5e10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d5e14: 0x3c03fcc0  lui         $v1, 0xFCC0
    ctx->pc = 0x1d5e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64704 << 16));
    // 0x1d5e18: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1d5e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d5e1c: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1d5e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1d5e20: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5E20u;
    {
        const bool branch_taken_0x1d5e20 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1D5E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E20u;
        // 0x1d5e24: 0x4303c  dsll32      $a2, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e20) {
            ctx->pc = 0x1D5E48u;
            goto label_1d5e48;
        }
    }
    ctx->pc = 0x1D5E28u;
    // 0x1d5e28: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d5e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5e2c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1d5e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1d5e30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d5e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5e34: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d5e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5e38: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d5e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d5e3c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1d5e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1d5e40: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1D5E40u;
    {
        const bool branch_taken_0x1d5e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E40u;
        // 0x1d5e44: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e40) {
            ctx->pc = 0x1D5ECCu;
            goto label_1d5ecc;
        }
    }
    ctx->pc = 0x1D5E48u;
label_1d5e48:
    // 0x1d5e48: 0x22503  sra         $a0, $v0, 20
    ctx->pc = 0x1d5e48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 20));
    // 0x1d5e4c: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x1d5e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1d5e50: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1D5E50u;
    {
        const bool branch_taken_0x1d5e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e50) {
            ctx->pc = 0x1D5E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5E50u;
            // 0x1d5e54: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5E88u;
            goto label_1d5e88;
        }
    }
    ctx->pc = 0x1D5E58u;
    // 0x1d5e58: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1d5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1d5e5c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5e60: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d5e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d5e64: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x1d5e64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d5e68: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d5e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d5e6c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d5e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d5e70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d5e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5e74: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d5e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5e78: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1d5e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x1d5e7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D5E7Cu;
    {
        const bool branch_taken_0x1d5e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E7Cu;
        // 0x1d5e80: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e7c) {
            ctx->pc = 0x1D5ECCu;
            goto label_1d5ecc;
        }
    }
    ctx->pc = 0x1D5E84u;
    // 0x1d5e84: 0x0  nop
    ctx->pc = 0x1d5e84u;
    // NOP
label_1d5e88:
    // 0x1d5e88: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d5e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d5e8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1d5e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1d5e90: 0x2882001f  slti        $v0, $a0, 0x1F
    ctx->pc = 0x1d5e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x1d5e94: 0x43027  nor         $a2, $zero, $a0
    ctx->pc = 0x1d5e94u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x1d5e98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5E98u;
    {
        const bool branch_taken_0x1d5e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E98u;
        // 0x1d5e9c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e98) {
            ctx->pc = 0x1D5EB0u;
            goto label_1d5eb0;
        }
    }
    ctx->pc = 0x1D5EA0u;
    // 0x1d5ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5EA4u;
    {
        const bool branch_taken_0x1d5ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EA4u;
        // 0x1d5ea8: 0xc21004  sllv        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ea4) {
            ctx->pc = 0x1D5EB4u;
            goto label_1d5eb4;
        }
    }
    ctx->pc = 0x1D5EACu;
    // 0x1d5eac: 0x0  nop
    ctx->pc = 0x1d5eacu;
    // NOP
label_1d5eb0:
    // 0x1d5eb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d5eb4:
    // 0x1d5eb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1d5eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1d5eb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5ebc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1d5ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1d5ec0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1d5ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1d5ec4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d5ec4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d5ec8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1d5ec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1d5ecc:
    // 0x1d5ecc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d5eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5ED8u;
}
