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

// Function: ApBgscrImageSetup__FP10WImageInfo
// Address: 0x148ef8 - 0x148f48
void ApBgscrImageSetup__FP10WImageInfo_0x148ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApBgscrImageSetup__FP10WImageInfo_0x148ef8");
#endif

    ctx->pc = 0x148ef8u;

    // 0x148ef8: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x148ef8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148efc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x148efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x148f00: 0x244226c0  addiu       $v0, $v0, 0x26C0
    ctx->pc = 0x148f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9920));
    // 0x148f04: 0xfc450070  sd          $a1, 0x70($v0)
    ctx->pc = 0x148f04u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x262730u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x262730u, _value); } while (0);
    // 0x148f08: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x148f08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x148f0c: 0xfc430078  sd          $v1, 0x78($v0)
    ctx->pc = 0x148f0cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x262738u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x262738u, _value); } while (0);
    // 0x148f10: 0xdc850010  ld          $a1, 0x10($a0)
    ctx->pc = 0x148f10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x148f14: 0xfc450080  sd          $a1, 0x80($v0)
    ctx->pc = 0x148f14u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x262740u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x262740u, _value); } while (0);
    // 0x148f18: 0xdc830018  ld          $v1, 0x18($a0)
    ctx->pc = 0x148f18u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x148f1c: 0xfc430088  sd          $v1, 0x88($v0)
    ctx->pc = 0x148f1cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x262748u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x262748u, _value); } while (0);
    // 0x148f20: 0xdc850020  ld          $a1, 0x20($a0)
    ctx->pc = 0x148f20u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x148f24: 0xfc450090  sd          $a1, 0x90($v0)
    ctx->pc = 0x148f24u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x262750u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x262750u, _value); } while (0);
    // 0x148f28: 0xdc830028  ld          $v1, 0x28($a0)
    ctx->pc = 0x148f28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x148f2c: 0xfc430098  sd          $v1, 0x98($v0)
    ctx->pc = 0x148f2cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 3)); ps2TraceGuestWrite(rdram, 0x262758u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x262758u, _value); } while (0);
    // 0x148f30: 0xdc850030  ld          $a1, 0x30($a0)
    ctx->pc = 0x148f30u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x148f34: 0xfc4500a0  sd          $a1, 0xA0($v0)
    ctx->pc = 0x148f34u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 5)); ps2TraceGuestWrite(rdram, 0x262760u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x262760u, _value); } while (0);
    // 0x148f38: 0xdc830038  ld          $v1, 0x38($a0)
    ctx->pc = 0x148f38u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x148f3c: 0xac400514  sw          $zero, 0x514($v0)
    ctx->pc = 0x148f3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x262BD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262BD4u, _value); } while (0);
    // 0x148f40: 0x3e00008  jr          $ra
    ctx->pc = 0x148F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F40u;
        // 0x148f44: 0xfc4300a8  sd          $v1, 0xA8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 168), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148F48u;
}
