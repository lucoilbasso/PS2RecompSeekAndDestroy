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

// Function: entry_001d5bd4
// Address: 0x1d5bd4 - 0x1d5c10
void entry_001d5bd4_0x1d5bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5bd4_0x1d5bd4");
#endif

    switch (ctx->pc) {
        case 0x1d5be8u: goto label_1d5be8;
        default: break;
    }

    ctx->pc = 0x1d5bd4u;

    // 0x1d5bd4: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x1d5bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1d5bd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d5bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5bdc: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x1d5bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x1d5be0: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x1D5BE0u;
    SET_GPR_U32(ctx, 31, 0x1D5BE8u);
    ctx->pc = 0x1D5BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5BE0u;
    // 0x1d5be4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x1D5BE0u, 0x1D5BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5BE8u;
label_1d5be8:
    // 0x1d5be8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d5be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5bf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5bf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5bf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d5bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5bf8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d5bf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d5bfc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d5bfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5c00: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d5c00u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d5c04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d5c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5c08: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C08u;
        // 0x1d5c0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5C10u;
}
