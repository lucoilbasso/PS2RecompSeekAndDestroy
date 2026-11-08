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

// Function: entry_00164d04
// Address: 0x164d04 - 0x164d44
void entry_00164d04_0x164d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164d04_0x164d04");
#endif

    switch (ctx->pc) {
        case 0x164d0cu: goto label_164d0c;
        case 0x164d18u: goto label_164d18;
        case 0x164d28u: goto label_164d28;
        default: break;
    }

    ctx->pc = 0x164d04u;

    // 0x164d04: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x164D04u;
    SET_GPR_U32(ctx, 31, 0x164D0Cu);
    ctx->pc = 0x164D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D04u;
    // 0x164d08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x164D04u, 0x164D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D0Cu;
label_164d0c:
    // 0x164d0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d10: 0xc06a282  jal         func_1A8A08
    ctx->pc = 0x164D10u;
    SET_GPR_U32(ctx, 31, 0x164D18u);
    ctx->pc = 0x164D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D10u;
    // 0x164d14: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8A08u, 0x164D10u, 0x164D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D18u;
label_164d18:
    // 0x164d18: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x164d18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x164d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x164d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d20: 0xc0589ee  jal         func_1627B8
    ctx->pc = 0x164D20u;
    SET_GPR_U32(ctx, 31, 0x164D28u);
    ctx->pc = 0x164D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D20u;
    // 0x164d24: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1627B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1627B8u, 0x164D20u, 0x164D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164D28u;
label_164d28:
    // 0x164d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164d2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x164d30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x164d30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164d34: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x164d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164d38: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x164d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x164d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x164D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D3Cu;
        // 0x164d40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164D44u;
}
