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

// Function: PartsDelete__15ApItemPartsListUs
// Address: 0x118b28 - 0x118b88
void PartsDelete__15ApItemPartsListUs_0x118b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PartsDelete__15ApItemPartsListUs_0x118b28");
#endif

    switch (ctx->pc) {
        case 0x118b5cu: goto label_118b5c;
        case 0x118b68u: goto label_118b68;
        default: break;
    }

    ctx->pc = 0x118b28u;

    // 0x118b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x118b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118b30: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x118b30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x118b34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x118b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x118b38: 0x321100ff  andi        $s1, $s0, 0xFF
    ctx->pc = 0x118b38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x118b3c: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x118b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
    // 0x118b40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x118b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x118b44: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x118b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b48: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x118b48u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x118b4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x118b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x118b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x118b54: 0xc04632a  jal         func_118CA8
    ctx->pc = 0x118B54u;
    SET_GPR_U32(ctx, 31, 0x118B5Cu);
    ctx->pc = 0x118B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B54u;
    // 0x118b58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CA8u, 0x118B54u, 0x118B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B5Cu;
label_118b5c:
    // 0x118b5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x118b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118b60: 0xc0462fa  jal         func_118BE8
    ctx->pc = 0x118B60u;
    SET_GPR_U32(ctx, 31, 0x118B68u);
    ctx->pc = 0x118B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118B60u;
    // 0x118b64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118BE8u, 0x118B60u, 0x118B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118B68u;
label_118b68:
    // 0x118b68: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x118b68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x118b6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118b70: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x118b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x118b74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x118b74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118b78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x118b78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x118b7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x118b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x118b80: 0x3e00008  jr          $ra
    ctx->pc = 0x118B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118B80u;
        // 0x118b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118B88u;
}
