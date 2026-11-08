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

// Function: entry_001ae8ac
// Address: 0x1ae8ac - 0x1ae90c
void entry_001ae8ac_0x1ae8ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ae8ac_0x1ae8ac");
#endif

    switch (ctx->pc) {
        case 0x1ae8dcu: goto label_1ae8dc;
        default: break;
    }

    ctx->pc = 0x1ae8acu;

    // 0x1ae8ac: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x1ae8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1ae8b0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x1ae8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x1ae8b4: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x1ae8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1ae8b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ae8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8bc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1ae8bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1ae8c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ae8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8c4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1ae8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1ae8c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ae8c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ae8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ae8d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ae8d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8d4: 0xc06ba80  jal         func_1AEA00
    ctx->pc = 0x1AE8D4u;
    SET_GPR_U32(ctx, 31, 0x1AE8DCu);
    ctx->pc = 0x1AE8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8D4u;
    // 0x1ae8d8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEA00u, 0x1AE8D4u, 0x1AE8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8DCu;
label_1ae8dc:
    // 0x1ae8dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ae8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae8e0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ae8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ae8e4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1ae8e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ae8e8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1ae8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1ae8ec: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1ae8ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ae8f0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1ae8f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ae8f4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1ae8f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ae8f8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ae8f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ae8fc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1ae8fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae900: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ae900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae904: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE904u;
        // 0x1ae908: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE90Cu;
}
