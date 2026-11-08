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

// Function: voBufGetTag
// Address: 0x173e50 - 0x173eb4
void voBufGetTag_0x173e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("voBufGetTag_0x173e50");
#endif

    switch (ctx->pc) {
        case 0x173e64u: goto label_173e64;
        default: break;
    }

    ctx->pc = 0x173e50u;

    // 0x173e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173e54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173e58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x173e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x173e5c: 0xc05cf90  jal         func_173E40
    ctx->pc = 0x173E5Cu;
    SET_GPR_U32(ctx, 31, 0x173E64u);
    ctx->pc = 0x173E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173E5Cu;
    // 0x173e60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173E40u, 0x173E5Cu, 0x173E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173E64u;
label_173e64:
    // 0x173e64: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x173E64u;
    {
        const bool branch_taken_0x173e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173e64) {
            ctx->pc = 0x173E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173E64u;
            // 0x173e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173EA4u;
            goto label_173ea4;
        }
    }
    ctx->pc = 0x173E6Cu;
    // 0x173e6c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x173e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x173e70: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x173e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x173e74: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x173e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x173e78: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x173e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x173e7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x173e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173e80: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x173E80u;
    {
        const bool branch_taken_0x173e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173e80) {
            ctx->pc = 0x173E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173E80u;
            // 0x173e84: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x173E88u;
            goto label_173e88;
        }
    }
    ctx->pc = 0x173E88u;
label_173e88:
    // 0x173e88: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x173e88u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x173e8c: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x173e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x173e90: 0x2010  mfhi        $a0
    ctx->pc = 0x173e90u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x173e94: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x173e94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x173e98: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x173e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x173e9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x173e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x173ea0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x173ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_173ea4:
    // 0x173ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173ea8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x173ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173eac: 0x3e00008  jr          $ra
    ctx->pc = 0x173EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EACu;
        // 0x173eb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173EB4u;
}
