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

// Function: VcObjSetupPPCSendTag__FP13VcObjPackWorkb
// Address: 0x199098 - 0x199104
void VcObjSetupPPCSendTag__FP13VcObjPackWorkb_0x199098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VcObjSetupPPCSendTag__FP13VcObjPackWorkb_0x199098");
#endif

    ctx->pc = 0x199098u;

    // 0x199098: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x199098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x19909c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19909cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1990a0: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x1990a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x1990a4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1990a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1990a8: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1990a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1990ac: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1990ACu;
    {
        const bool branch_taken_0x1990ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1990B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990ACu;
        // 0x1990b0: 0x24e60010  addiu       $a2, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990ac) {
            ctx->pc = 0x1990C0u;
            goto label_1990c0;
        }
    }
    ctx->pc = 0x1990B4u;
    // 0x1990b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1990B4u;
    {
        const bool branch_taken_0x1990b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1990B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990B4u;
        // 0x1990b8: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1990b4) {
            ctx->pc = 0x1990C4u;
            goto label_1990c4;
        }
    }
    ctx->pc = 0x1990BCu;
    // 0x1990bc: 0x0  nop
    ctx->pc = 0x1990bcu;
    // NOP
label_1990c0:
    // 0x1990c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1990c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1990c4:
    // 0x1990c4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1990c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1990c8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1990c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1990cc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1990ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x1990d0: 0x3c036c03  lui         $v1, 0x6C03
    ctx->pc = 0x1990d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27651 << 16));
    // 0x1990d4: 0x3c041400  lui         $a0, 0x1400
    ctx->pc = 0x1990d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5120 << 16));
    // 0x1990d8: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1990d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1990dc: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1990dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x1990e0: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1990e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x1990e4: 0x24e60050  addiu       $a2, $a3, 0x50
    ctx->pc = 0x1990e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x1990e8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1990e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1990ec: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x1990ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
    // 0x1990f0: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x1990f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x1990f4: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x1990f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x1990f8: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1990f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x1990fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1990FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990FCu;
        // 0x199100: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1990FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199104u;
}
