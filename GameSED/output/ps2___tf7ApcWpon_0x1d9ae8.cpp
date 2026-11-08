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

// Function: __tf7ApcWpon
// Address: 0x1d9ae8 - 0x1d9b38
void ps2___tf7ApcWpon_0x1d9ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___tf7ApcWpon_0x1d9ae8");
#endif

    switch (ctx->pc) {
        case 0x1d9b0cu: goto label_1d9b0c;
        case 0x1d9b24u: goto label_1d9b24;
        default: break;
    }

    ctx->pc = 0x1d9ae8u;

    // 0x1d9ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9aec: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x1d9aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x1d9af0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9af4: 0x24501018  addiu       $s0, $v0, 0x1018
    ctx->pc = 0x1d9af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4120));
    // 0x1d9af8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d9af8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411018u));
    // 0x1d9afc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D9AFCu;
    {
        const bool branch_taken_0x1d9afc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9AFCu;
        // 0x1d9b00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9afc) {
            ctx->pc = 0x1D9B24u;
            goto label_1d9b24;
        }
    }
    ctx->pc = 0x1D9B04u;
    // 0x1d9b04: 0xc0763c8  jal         func_1D8F20
    ctx->pc = 0x1D9B04u;
    SET_GPR_U32(ctx, 31, 0x1D9B0Cu);
    ctx->pc = 0x1D8F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8F20u, 0x1D9B04u, 0x1D9B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B0Cu;
label_1d9b0c:
    // 0x1d9b0c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x1d9b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x1d9b10: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x1d9b10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x1d9b14: 0x24a56e48  addiu       $a1, $a1, 0x6E48
    ctx->pc = 0x1d9b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28232));
    // 0x1d9b18: 0x24c60fb8  addiu       $a2, $a2, 0xFB8
    ctx->pc = 0x1d9b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4024));
    // 0x1d9b1c: 0xc072f42  jal         func_1CBD08
    ctx->pc = 0x1D9B1Cu;
    SET_GPR_U32(ctx, 31, 0x1D9B24u);
    ctx->pc = 0x1D9B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9B1Cu;
    // 0x1d9b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBD08u, 0x1D9B1Cu, 0x1D9B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9B24u;
label_1d9b24:
    // 0x1d9b24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d9b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9b2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9b30: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B30u;
        // 0x1d9b34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9B38u;
}
