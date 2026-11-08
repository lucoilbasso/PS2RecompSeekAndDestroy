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

// Function: cscVu1Kick
// Address: 0x171f10 - 0x171f4c
void cscVu1Kick_0x171f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cscVu1Kick_0x171f10");
#endif

    ctx->pc = 0x171f10u;

    // 0x171f10: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x171f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x171f14: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x171f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x171f18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x171f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x171f1c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x171f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x171f20: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x171f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x171f24: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x171f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x171f28: 0x34c69030  ori         $a2, $a2, 0x9030
    ctx->pc = 0x171f28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)36912);
    // 0x171f2c: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x171f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
    // 0x171f30: 0x34a59000  ori         $a1, $a1, 0x9000
    ctx->pc = 0x171f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36864);
    // 0x171f34: 0x24020145  addiu       $v0, $zero, 0x145
    ctx->pc = 0x171f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x171f38: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x171f38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x171f3c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x171f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x171f40: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x171f40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x171f44: 0x3e00008  jr          $ra
    ctx->pc = 0x171F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171F4Cu;
}
