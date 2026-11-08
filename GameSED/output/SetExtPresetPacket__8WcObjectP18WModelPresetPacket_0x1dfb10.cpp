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

// Function: SetExtPresetPacket__8WcObjectP18WModelPresetPacket
// Address: 0x1dfb10 - 0x1dfb80
void SetExtPresetPacket__8WcObjectP18WModelPresetPacket_0x1dfb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetExtPresetPacket__8WcObjectP18WModelPresetPacket_0x1dfb10");
#endif

    switch (ctx->pc) {
        case 0x1dfb58u: goto label_1dfb58;
        default: break;
    }

    ctx->pc = 0x1dfb10u;

    // 0x1dfb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dfb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dfb14: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dfb14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dfb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dfb1c: 0x24700160  addiu       $s0, $v1, 0x160
    ctx->pc = 0x1dfb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 352));
    // 0x1dfb20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dfb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dfb24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1dfb24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dfb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dfb2c: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x1dfb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x1dfb30: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1dfb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb34: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1dfb34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1dfb38: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1dfb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dfb3c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1dfb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dfb40: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1dfb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1dfb44: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x1dfb44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x1dfb48: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFB48u;
    {
        const bool branch_taken_0x1dfb48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB48u;
        // 0x1dfb4c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb48) {
            ctx->pc = 0x1DFB58u;
            goto label_1dfb58;
        }
    }
    ctx->pc = 0x1DFB50u;
    // 0x1dfb50: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1DFB50u;
    SET_GPR_U32(ctx, 31, 0x1DFB58u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1DFB50u, 0x1DFB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB58u;
label_1dfb58:
    // 0x1dfb58: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1dfb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1dfb5c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1dfb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb60: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1dfb60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1dfb64: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x1dfb64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1dfb68: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1dfb68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1dfb6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dfb6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dfb70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dfb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfb74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dfb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfb78: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB78u;
        // 0x1dfb7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFB80u;
}
