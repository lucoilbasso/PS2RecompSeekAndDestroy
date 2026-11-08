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

// Function: DoProjectionViewSet__9ApcCamera
// Address: 0x13edf8 - 0x13ee48
void DoProjectionViewSet__9ApcCamera_0x13edf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DoProjectionViewSet__9ApcCamera_0x13edf8");
#endif

    switch (ctx->pc) {
        case 0x13ee3cu: goto label_13ee3c;
        default: break;
    }

    ctx->pc = 0x13edf8u;

    // 0x13edf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13edf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13edfc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x13edfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ee00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ee04: 0x246501e0  addiu       $a1, $v1, 0x1E0
    ctx->pc = 0x13ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x13ee08: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x13ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x13ee0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EE0Cu;
    {
        const bool branch_taken_0x13ee0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE0Cu;
        // 0x13ee10: 0x246400d0  addiu       $a0, $v1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee0c) {
            ctx->pc = 0x13EE1Cu;
            goto label_13ee1c;
        }
    }
    ctx->pc = 0x13EE14u;
    // 0x13ee14: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x13ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x13ee18: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x13ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
label_13ee1c:
    // 0x13ee1c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x13ee1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ee20: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x13ee20u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x13ee24: 0xc4600170  lwc1        $f0, 0x170($v1)
    ctx->pc = 0x13ee24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13ee28: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13ee28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee2c: 0xc4610174  lwc1        $f1, 0x174($v1)
    ctx->pc = 0x13ee2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13ee30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13ee30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x13ee34: 0xc061a9e  jal         func_186A78
    ctx->pc = 0x13EE34u;
    SET_GPR_U32(ctx, 31, 0x13EE3Cu);
    ctx->pc = 0x13EE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EE34u;
    // 0x13ee38: 0xe46001f0  swc1        $f0, 0x1F0($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 496), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186A78u, 0x13EE34u, 0x13EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EE3Cu;
label_13ee3c:
    // 0x13ee3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ee3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ee40: 0x3e00008  jr          $ra
    ctx->pc = 0x13EE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EE40u;
        // 0x13ee44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EE48u;
}
