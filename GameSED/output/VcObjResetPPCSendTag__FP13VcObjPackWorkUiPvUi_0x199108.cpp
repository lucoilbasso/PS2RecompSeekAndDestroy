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

// Function: VcObjResetPPCSendTag__FP13VcObjPackWorkUiPvUi
// Address: 0x199108 - 0x199148
void VcObjResetPPCSendTag__FP13VcObjPackWorkUiPvUi_0x199108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VcObjResetPPCSendTag__FP13VcObjPackWorkUiPvUi_0x199108");
#endif

    ctx->pc = 0x199108u;

    // 0x199108: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x199108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x19910c: 0x74c00  sll         $t1, $a3, 16
    ctx->pc = 0x19910cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x199110: 0x34428003  ori         $v0, $v0, 0x8003
    ctx->pc = 0x199110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
    // 0x199114: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x199114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x199118: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x199118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x19911c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x19911cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x199120: 0x3c080700  lui         $t0, 0x700
    ctx->pc = 0x199120u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1792 << 16));
    // 0x199124: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x199124u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x199128: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x199128u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x19912c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x19912cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x199130: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x199130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x199134: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x199134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199138: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x199138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x19913c: 0xac89000c  sw          $t1, 0xC($a0)
    ctx->pc = 0x19913cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 9));
    // 0x199140: 0x3e00008  jr          $ra
    ctx->pc = 0x199140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199140u;
        // 0x199144: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199148u;
}
