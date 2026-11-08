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

// Function: getFIFOindex
// Address: 0x174ff0 - 0x175030
void getFIFOindex_0x174ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getFIFOindex_0x174ff0");
#endif

    ctx->pc = 0x174ff0u;

    // 0x174ff0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x174ff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174ff4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x174ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x174ff8: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x174ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x174ffc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x174ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x175000: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x175000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x175004: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x175004u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x175008: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x175008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x17500c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x17500cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x175010: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x175010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x175014: 0x10a40004  beq         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175014u;
    {
        const bool branch_taken_0x175014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x175018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175014u;
        // 0x175018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175014) {
            ctx->pc = 0x175028u;
            goto label_175028;
        }
    }
    ctx->pc = 0x17501Cu;
    // 0x17501c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x17501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x175020: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x175020u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x175024: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x175024u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
label_175028:
    // 0x175028: 0x3e00008  jr          $ra
    ctx->pc = 0x175028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175030u;
}
