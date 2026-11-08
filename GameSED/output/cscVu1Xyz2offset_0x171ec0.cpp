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

// Function: cscVu1Xyz2offset
// Address: 0x171ec0 - 0x171f10
void cscVu1Xyz2offset_0x171ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cscVu1Xyz2offset_0x171ec0");
#endif

    ctx->pc = 0x171ec0u;

    // 0x171ec0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x171ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x171ec4: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x171ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x171ec8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x171ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x171ecc: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x171eccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x171ed0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x171ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x171ed4: 0x3c02001e  lui         $v0, 0x1E
    ctx->pc = 0x171ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30 << 16));
    // 0x171ed8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x171ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x171edc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x171edcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x171ee0: 0x24632300  addiu       $v1, $v1, 0x2300
    ctx->pc = 0x171ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8960));
    // 0x171ee4: 0x244223c0  addiu       $v0, $v0, 0x23C0
    ctx->pc = 0x171ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9152));
    // 0x171ee8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x171ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171eec: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x171eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x171ef0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x171ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x171ef4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x171ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x171ef8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x171ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x171efc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x171efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x171f00: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x171f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x171f04: 0xac480004  sw          $t0, 0x4($v0)
    ctx->pc = 0x171f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 8));
    // 0x171f08: 0x3e00008  jr          $ra
    ctx->pc = 0x171F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F08u;
        // 0x171f0c: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171F10u;
}
