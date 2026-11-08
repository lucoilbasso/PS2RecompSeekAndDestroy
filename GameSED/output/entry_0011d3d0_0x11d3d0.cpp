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

// Function: entry_0011d3d0
// Address: 0x11d3d0 - 0x11d414
void entry_0011d3d0_0x11d3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d3d0_0x11d3d0");
#endif

    switch (ctx->pc) {
        case 0x11d3ecu: goto label_11d3ec;
        default: break;
    }

    ctx->pc = 0x11d3d0u;

    // 0x11d3d0: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11d3d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11d3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11d3d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3dc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x11d3dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3e0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x11d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11d3e4: 0xc0477ba  jal         func_11DEE8
    ctx->pc = 0x11D3E4u;
    SET_GPR_U32(ctx, 31, 0x11D3ECu);
    ctx->pc = 0x11D3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3E4u;
    // 0x11d3e8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DEE8u, 0x11D3E4u, 0x11D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3ECu;
label_11d3ec:
    // 0x11d3ec: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x11d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x11d3f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d3f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d3f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11d3f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11d3f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11d3f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d3fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11d3fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11d400: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11d400u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d404: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11d404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11d408: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x11d408u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x2400C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x2400C0u, _value); } while (0);
    // 0x11d40c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D40Cu;
        // 0x11d410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D414u;
}
