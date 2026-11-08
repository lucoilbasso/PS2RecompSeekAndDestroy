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

// Function: ApUnitSetOptionPos__FP7ApcUniti
// Address: 0x14c970 - 0x14ca24
void ApUnitSetOptionPos__FP7ApcUniti_0x14c970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApUnitSetOptionPos__FP7ApcUniti_0x14c970");
#endif

    switch (ctx->pc) {
        case 0x14c9b0u: goto label_14c9b0;
        case 0x14c9d8u: goto label_14c9d8;
        case 0x14c9f8u: goto label_14c9f8;
        case 0x14ca08u: goto label_14ca08;
        default: break;
    }

    ctx->pc = 0x14c970u;

    // 0x14c970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14c978: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c97c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14c97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14c980: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14c980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c984: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14c984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14c988: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x14c988u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c98c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14c98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14c990: 0x119900  sll         $s3, $s1, 4
    ctx->pc = 0x14c990u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x14c994: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14c994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14c998: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14c998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c99c: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x14c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x14c9a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C9A0u;
    {
        const bool branch_taken_0x14c9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9A0u;
        // 0x14c9a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9a0) {
            ctx->pc = 0x14C9B0u;
            goto label_14c9b0;
        }
    }
    ctx->pc = 0x14C9A8u;
    // 0x14c9a8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x14C9A8u;
    SET_GPR_U32(ctx, 31, 0x14C9B0u);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14C9A8u, 0x14C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9B0u;
label_14c9b0:
    // 0x14c9b0: 0xa21101aa  sb          $s1, 0x1AA($s0)
    ctx->pc = 0x14c9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 426), (uint8_t)GPR_U32(ctx, 17));
    // 0x14c9b4: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x14C9B4u;
    {
        const bool branch_taken_0x14c9b4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x14C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9B4u;
        // 0x14c9b8: 0xae0001b8  sw          $zero, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9b4) {
            ctx->pc = 0x14CA08u;
            goto label_14ca08;
        }
    }
    ctx->pc = 0x14C9BCu;
    // 0x14c9bc: 0x265001b8  addiu       $s0, $s2, 0x1B8
    ctx->pc = 0x14c9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 440));
    // 0x14c9c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14c9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9c4: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x14C9C4u;
    {
        const bool branch_taken_0x14c9c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9C4u;
        // 0x14c9c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9c4) {
            ctx->pc = 0x14C9D0u;
            goto label_14c9d0;
        }
    }
    ctx->pc = 0x14C9CCu;
    // 0x14c9cc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x14c9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_14c9d0:
    // 0x14c9d0: 0xc068086  jal         func_1A0218
    ctx->pc = 0x14C9D0u;
    SET_GPR_U32(ctx, 31, 0x14C9D8u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x14C9D0u, 0x14C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9D8u;
label_14c9d8:
    // 0x14c9d8: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x14c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x14c9dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14c9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c9e0: 0x24a56b90  addiu       $a1, $a1, 0x6B90
    ctx->pc = 0x14c9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27536));
    // 0x14c9e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14c9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14c9e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C9E8u;
    {
        const bool branch_taken_0x14c9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C9E8u;
        // 0x14c9ec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c9e8) {
            ctx->pc = 0x14C9F8u;
            goto label_14c9f8;
        }
    }
    ctx->pc = 0x14C9F0u;
    // 0x14c9f0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x14C9F0u;
    SET_GPR_U32(ctx, 31, 0x14C9F8u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x14C9F0u, 0x14C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C9F8u;
label_14c9f8:
    // 0x14c9f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14c9fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14c9fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ca00: 0xc067294  jal         func_19CA50
    ctx->pc = 0x14CA00u;
    SET_GPR_U32(ctx, 31, 0x14CA08u);
    ctx->pc = 0x14CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CA00u;
    // 0x14ca04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CA50u, 0x14CA00u, 0x14CA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CA08u;
label_14ca08:
    // 0x14ca08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ca08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ca0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ca0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ca10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14ca10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ca14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14ca14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ca18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14ca18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ca1c: 0x3e00008  jr          $ra
    ctx->pc = 0x14CA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14CA1Cu;
        // 0x14ca20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14CA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14CA24u;
}
