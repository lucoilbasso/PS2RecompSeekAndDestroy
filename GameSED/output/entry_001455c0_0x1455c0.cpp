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

// Function: entry_001455c0
// Address: 0x1455c0 - 0x145620
void entry_001455c0_0x1455c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001455c0_0x1455c0");
#endif

    switch (ctx->pc) {
        case 0x1455dcu: goto label_1455dc;
        case 0x1455fcu: goto label_1455fc;
        default: break;
    }

    ctx->pc = 0x1455c0u;

    // 0x1455c0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1455c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x1455c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1455c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1455c8: 0x8c45b830  lw          $a1, -0x47D0($v0)
    ctx->pc = 0x1455c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x1FB830u));
    // 0x1455cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1455ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1455d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1455d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1455d4: 0xc0514c2  jal         func_145308
    ctx->pc = 0x1455D4u;
    SET_GPR_U32(ctx, 31, 0x1455DCu);
    ctx->pc = 0x1455D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1455D4u;
    // 0x1455d8: 0x3c100024  lui         $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)36 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145308u, 0x1455D4u, 0x1455DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455DCu;
label_1455dc:
    // 0x1455dc: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x1455dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1455e0: 0x2610fcb0  addiu       $s0, $s0, -0x350
    ctx->pc = 0x1455e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966448));
    // 0x1455e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1455e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1455e8: 0x8e060414  lw          $a2, 0x414($s0)
    ctx->pc = 0x1455e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1044)));
    // 0x1455ec: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x1455ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1455f0: 0x8e070418  lw          $a3, 0x418($s0)
    ctx->pc = 0x1455f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x1455f4: 0xc0477ba  jal         func_11DEE8
    ctx->pc = 0x1455F4u;
    SET_GPR_U32(ctx, 31, 0x1455FCu);
    ctx->pc = 0x1455F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1455F4u;
    // 0x1455f8: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DEE8u, 0x1455F4u, 0x1455FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1455FCu;
label_1455fc:
    // 0x1455fc: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x1455fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
    // 0x145600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x145600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145608: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x145608u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14560c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14560cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x145610: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x145610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145614: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x145614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x145618: 0x3e00008  jr          $ra
    ctx->pc = 0x145618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145618u;
        // 0x14561c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145620u;
}
