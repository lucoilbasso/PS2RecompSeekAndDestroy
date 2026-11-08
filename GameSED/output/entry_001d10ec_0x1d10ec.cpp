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

// Function: entry_001d10ec
// Address: 0x1d10ec - 0x1d1120
void entry_001d10ec_0x1d10ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d10ec_0x1d10ec");
#endif

    ctx->pc = 0x1d10ecu;

    // 0x1d10ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d10ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d10f0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1d10f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d10f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1d10f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d10f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1d10f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d10fc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1d10fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d1100: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1d1100u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d1104: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1d1104u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d1108: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1d1108u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d110c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1d110cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1d1110: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1d1110u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d1114: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1d1114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1d1118: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1118u;
        // 0x1d111c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1120u;
}
