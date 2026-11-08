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

// Function: entry_001bea4c
// Address: 0x1bea4c - 0x1beab8
void entry_001bea4c_0x1bea4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bea4c_0x1bea4c");
#endif

    ctx->pc = 0x1bea4cu;

    // 0x1bea4c: 0x8e240124  lw          $a0, 0x124($s1)
    ctx->pc = 0x1bea4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
    // 0x1bea50: 0x154480  sll         $t0, $s5, 18
    ctx->pc = 0x1bea50u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 21), 18));
    // 0x1bea54: 0x8e230128  lw          $v1, 0x128($s1)
    ctx->pc = 0x1bea54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x1bea58: 0x124a80  sll         $t1, $s2, 10
    ctx->pc = 0x1bea58u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), 10));
    // 0x1bea5c: 0x8e260134  lw          $a2, 0x134($s1)
    ctx->pc = 0x1bea5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x1bea60: 0x133b00  sll         $a3, $s3, 12
    ctx->pc = 0x1bea60u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 12));
    // 0x1bea64: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x1bea64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x1bea68: 0x142b00  sll         $a1, $s4, 12
    ctx->pc = 0x1bea68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 12));
    // 0x1bea6c: 0x30840fff  andi        $a0, $a0, 0xFFF
    ctx->pc = 0x1bea6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4095);
    // 0x1bea70: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1bea70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1bea74: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x1bea74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1bea78: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1bea78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1bea7c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1bea7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1bea80: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1bea80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1bea84: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x1bea84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
    // 0x1bea88: 0xae270124  sw          $a3, 0x124($s1)
    ctx->pc = 0x1bea88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 7));
    // 0x1bea8c: 0xae250128  sw          $a1, 0x128($s1)
    ctx->pc = 0x1bea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 5));
    // 0x1bea90: 0xae260134  sw          $a2, 0x134($s1)
    ctx->pc = 0x1bea90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 6));
    // 0x1bea94: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1bea94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bea98: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1bea98u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bea9c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1bea9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1beaa0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1beaa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1beaa4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1beaa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1beaa8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1beaa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beaac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1beaacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1beab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAB0u;
        // 0x1beab4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEAB8u;
}
