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

// Function: _copyRefImage
// Address: 0x1c0898 - 0x1c08f8
void _copyRefImage_0x1c0898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_copyRefImage_0x1c0898");
#endif

    switch (ctx->pc) {
        case 0x1c08a8u: goto label_1c08a8;
        default: break;
    }

    ctx->pc = 0x1c0898u;

    // 0x1c0898: 0x240c0018  addiu       $t4, $zero, 0x18
    ctx->pc = 0x1c0898u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1c089c: 0x3c0a001c  lui         $t2, 0x1C
    ctx->pc = 0x1c089cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)28 << 16));
    // 0x1c08a0: 0x254a08e0  addiu       $t2, $t2, 0x8E0
    ctx->pc = 0x1c08a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2272));
    // 0x1c08a4: 0x794b0000  lq          $t3, 0x0($t2)
    ctx->pc = 0x1c08a4u;
    SET_GPR_VEC(ctx, 11, FAST_READ128(0x1C08E0u));
label_1c08a8:
    // 0x1c08a8: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x1c08a8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c08ac: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x1c08acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1c08b0: 0x710b41e8  pminh       $t0, $t0, $t3
    ctx->pc = 0x1c08b0u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x1c08b4: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x1c08b4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1c08b8: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x1c08b8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1c08bc: 0x712b49e8  pminh       $t1, $t1, $t3
    ctx->pc = 0x1c08bcu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x1c08c0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1c08c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1c08c4: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x1c08c4u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x1c08c8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1c08c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1c08cc: 0x712856c8  ppacb       $t2, $t1, $t0
    ctx->pc = 0x1c08ccu;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x1c08d0: 0x1580fff5  bnez        $t4, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C08D0u;
    {
        const bool branch_taken_0x1c08d0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C08D0u;
        // 0x1c08d4: 0x7c8afff0  sq          $t2, -0x10($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c08d0) {
            ctx->pc = 0x1C08A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c08a8;
        }
    }
    ctx->pc = 0x1C08D8u;
    // 0x1c08d8: 0x0  nop
    ctx->pc = 0x1c08d8u;
    // NOP
    // 0x1c08dc: 0x0  nop
    ctx->pc = 0x1c08dcu;
    // NOP
    // 0x1c08e0: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x1c08e0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x1c08e4: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x1c08e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x1c08e8: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x1c08e8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x1c08ec: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x1c08ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x1c08f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C08F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C08F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C08F8u;
}
