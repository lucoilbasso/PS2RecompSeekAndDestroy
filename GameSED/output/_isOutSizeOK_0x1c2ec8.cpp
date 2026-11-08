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

// Function: _isOutSizeOK
// Address: 0x1c2ec8 - 0x1c2f68
void _isOutSizeOK_0x1c2ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_isOutSizeOK_0x1c2ec8");
#endif

    switch (ctx->pc) {
        case 0x1c2f44u: goto label_1c2f44;
        case 0x1c2f50u: goto label_1c2f50;
        default: break;
    }

    ctx->pc = 0x1c2ec8u;

    // 0x1c2ec8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1c2ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1c2ecc: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1c2eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x1c2ed0: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x1c2ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x1c2ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c2ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ed8: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x1c2ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x1c2edc: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x1c2edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c2ee0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2EE0u;
    {
        const bool branch_taken_0x1c2ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EE0u;
        // 0x1c2ee4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ee0) {
            ctx->pc = 0x1C2F0Cu;
            goto label_1c2f0c;
        }
    }
    ctx->pc = 0x1C2EE8u;
    // 0x1c2ee8: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x1c2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1c2eec: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1c2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c2ef0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1c2ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c2ef4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2EF4u;
    {
        const bool branch_taken_0x1c2ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EF4u;
        // 0x1c2ef8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ef4) {
            ctx->pc = 0x1C2F24u;
            goto label_1c2f24;
        }
    }
    ctx->pc = 0x1C2EFCu;
    // 0x1c2efc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1c2efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c2f00: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1c2f00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1c2f04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1C2F04u;
    {
        const bool branch_taken_0x1c2f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F04u;
        // 0x1c2f08: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f04) {
            ctx->pc = 0x1C2F24u;
            goto label_1c2f24;
        }
    }
    ctx->pc = 0x1C2F0Cu;
label_1c2f0c:
    // 0x1c2f0c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1c2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1c2f10: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1c2f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1c2f14: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1c2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1c2f18: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1c2f18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c2f1c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1c2f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c2f20: 0x38510001  xori        $s1, $v0, 0x1
    ctx->pc = 0x1c2f20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1c2f24:
    // 0x1c2f24: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1C2F24u;
    {
        const bool branch_taken_0x1c2f24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F24u;
        // 0x1c2f28: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2f24) {
            ctx->pc = 0x1C2F54u;
            goto label_1c2f54;
        }
    }
    ctx->pc = 0x1C2F2Cu;
    // 0x1c2f2c: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1c2f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1c2f30: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1c2f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x1c2f34: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1c2f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1c2f38: 0x24a5b6e8  addiu       $a1, $a1, -0x4918
    ctx->pc = 0x1c2f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948584));
    // 0x1c2f3c: 0xc0741de  jal         func_1D0778
    ctx->pc = 0x1C2F3Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F44u);
    ctx->pc = 0x1C2F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F3Cu;
    // 0x1c2f40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0778u, 0x1C2F3Cu, 0x1C2F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F44u;
label_1c2f44:
    // 0x1c2f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2f48: 0xc06f8a0  jal         func_1BE280
    ctx->pc = 0x1C2F48u;
    SET_GPR_U32(ctx, 31, 0x1C2F50u);
    ctx->pc = 0x1C2F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F48u;
    // 0x1c2f4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE280u, 0x1C2F48u, 0x1C2F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F50u;
label_1c2f50:
    // 0x1c2f50: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c2f50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c2f54:
    // 0x1c2f54: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x1c2f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1c2f58: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x1c2f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c2f5c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1c2f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c2f60: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F60u;
        // 0x1c2f64: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2F68u;
}
