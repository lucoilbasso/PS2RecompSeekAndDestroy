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

// Function: dptofp
// Address: 0x1ca5e0 - 0x1ca634
void dptofp_0x1ca5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptofp_0x1ca5e0");
#endif

    switch (ctx->pc) {
        case 0x1ca5f8u: goto label_1ca5f8;
        case 0x1ca628u: goto label_1ca628;
        default: break;
    }

    ctx->pc = 0x1ca5e0u;

    // 0x1ca5e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ca5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ca5e4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1ca5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1ca5e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ca5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ca5ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ca5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ca5f0: 0xc073986  jal         func_1CE618
    ctx->pc = 0x1CA5F0u;
    SET_GPR_U32(ctx, 31, 0x1CA5F8u);
    ctx->pc = 0x1CA5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA5F0u;
    // 0x1ca5f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE618u, 0x1CA5F0u, 0x1CA5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA5F8u;
label_1ca5f8:
    // 0x1ca5f8: 0x3c053fff  lui         $a1, 0x3FFF
    ctx->pc = 0x1ca5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16383 << 16));
    // 0x1ca5fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1ca5fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1ca600: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1ca600u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca604: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1ca604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca608: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x1ca608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
    // 0x1ca60c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1ca60cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1ca610: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1ca610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1ca614: 0x34670001  ori         $a3, $v1, 0x1
    ctx->pc = 0x1ca614u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1ca618: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1ca618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca61c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1ca61cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1ca620: 0xc073944  jal         func_1CE510
    ctx->pc = 0x1CA620u;
    SET_GPR_U32(ctx, 31, 0x1CA628u);
    ctx->pc = 0x1CA624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA620u;
    // 0x1ca624: 0x62380a  movz        $a3, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE510u, 0x1CA620u, 0x1CA628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA628u;
label_1ca628:
    // 0x1ca628: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ca628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca62c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA62Cu;
        // 0x1ca630: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA634u;
}
