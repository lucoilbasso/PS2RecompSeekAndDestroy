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

// Function: WSpriteAnimeJobSetup__Fv
// Address: 0x18b678 - 0x18b6a8
void WSpriteAnimeJobSetup__Fv_0x18b678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSpriteAnimeJobSetup__Fv_0x18b678");
#endif

    ctx->pc = 0x18b678u;

    // 0x18b678: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x18b678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x18b67c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x18b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x18b680: 0x2463dda0  addiu       $v1, $v1, -0x2260
    ctx->pc = 0x18b680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958496));
    // 0x18b684: 0x2442b6a8  addiu       $v0, $v0, -0x4958
    ctx->pc = 0x18b684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948520));
    // 0x18b688: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x18b688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x26DDB4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DDB4u, _value); } while (0);
    // 0x18b68c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18b68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b690: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x18b690u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DDA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DDA0u, _value); } while (0);
    // 0x18b694: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x18b694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DDA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DDA4u, _value); } while (0);
    // 0x18b698: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x18b698u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DDA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DDA8u, _value); } while (0);
    // 0x18b69c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x18b69cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x26DDACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x26DDACu, _value); } while (0);
    // 0x18b6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x18B6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B6A0u;
        // 0x18b6a4: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B6A8u;
}
