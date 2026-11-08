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

// Function: SearchHitResource__8ApcRsc3Di
// Address: 0x1d8c08 - 0x1d8c88
void SearchHitResource__8ApcRsc3Di_0x1d8c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchHitResource__8ApcRsc3Di_0x1d8c08");
#endif

    switch (ctx->pc) {
        case 0x1d8c28u: goto label_1d8c28;
        case 0x1d8c30u: goto label_1d8c30;
        case 0x1d8c54u: goto label_1d8c54;
        case 0x1d8c68u: goto label_1d8c68;
        default: break;
    }

    ctx->pc = 0x1d8c08u;

    // 0x1d8c08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8c0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8c10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d8c10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8c18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8c1c: 0x8c900064  lw          $s0, 0x64($a0)
    ctx->pc = 0x1d8c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x1d8c20: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1D8C20u;
    SET_GPR_U32(ctx, 31, 0x1D8C28u);
    ctx->pc = 0x1D8C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C20u;
    // 0x1d8c24: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1D8C20u, 0x1D8C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C28u;
label_1d8c28:
    // 0x1d8c28: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1D8C28u;
    SET_GPR_U32(ctx, 31, 0x1D8C30u);
    ctx->pc = 0x1D8C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C28u;
    // 0x1d8c2c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1D8C28u, 0x1D8C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C30u;
label_1d8c30:
    // 0x1d8c30: 0x3c040025  lui         $a0, 0x25
    ctx->pc = 0x1d8c30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)37 << 16));
    // 0x1d8c34: 0x96020022  lhu         $v0, 0x22($s0)
    ctx->pc = 0x1d8c34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x1d8c38: 0x24846ae0  addiu       $a0, $a0, 0x6AE0
    ctx->pc = 0x1d8c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27360));
    // 0x1d8c3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d8c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c40: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d8c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d8c44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8C44u;
    {
        const bool branch_taken_0x1d8c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C44u;
        // 0x1d8c48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8c44) {
            ctx->pc = 0x1D8C68u;
            goto label_1d8c68;
        }
    }
    ctx->pc = 0x1D8C4Cu;
    // 0x1d8c4c: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x1D8C4Cu;
    SET_GPR_U32(ctx, 31, 0x1D8C54u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x1D8C4Cu, 0x1D8C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C54u;
label_1d8c54:
    // 0x1d8c54: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d8c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d8c58: 0x24a56af8  addiu       $a1, $a1, 0x6AF8
    ctx->pc = 0x1d8c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27384));
    // 0x1d8c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8c60: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1D8C60u;
    SET_GPR_U32(ctx, 31, 0x1D8C68u);
    ctx->pc = 0x1D8C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8C60u;
    // 0x1d8c64: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1D8C60u, 0x1D8C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8C68u;
label_1d8c68:
    // 0x1d8c68: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d8c6c: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x1d8c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1d8c70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8c74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8c78: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d8c7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8c80: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8C80u;
        // 0x1d8c84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8C88u;
}
