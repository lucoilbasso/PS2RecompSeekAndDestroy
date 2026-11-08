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

// Function: __unpack_f
// Address: 0x1ce4b0 - 0x1ce50c
void ps2___unpack_f_0x1ce4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___unpack_f_0x1ce4b0");
#endif

    ctx->pc = 0x1ce4b0u;

    // 0x1ce4b0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ce4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce4b4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x1ce4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x1ce4b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1ce4b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1ce4bc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ce4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce4c0: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x1ce4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x1ce4c4: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x1ce4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1ce4c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ce4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ce4cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ce4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1ce4d0: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x1ce4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x1ce4d4: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x1ce4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x1ce4d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE4D8u;
    {
        const bool branch_taken_0x1ce4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4D8u;
        // 0x1ce4dc: 0x321c0  sll         $a0, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4d8) {
            ctx->pc = 0x1CE4F0u;
            goto label_1ce4f0;
        }
    }
    ctx->pc = 0x1CE4E0u;
    // 0x1ce4e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ce4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4E4u;
        // 0x1ce4e8: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE4ECu;
    // 0x1ce4ec: 0x0  nop
    ctx->pc = 0x1ce4ecu;
    // NOP
label_1ce4f0:
    // 0x1ce4f0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ce4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ce4f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ce4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ce4f8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1ce4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ce4fc: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1ce4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1ce500: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1ce500u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1ce504: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE504u;
        // 0x1ce508: 0xacc2000c  sw          $v0, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE50Cu;
}
