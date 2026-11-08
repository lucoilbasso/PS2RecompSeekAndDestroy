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

// Function: ClassJobSetup__9ApcShadow
// Address: 0x16be10 - 0x16be40
void ClassJobSetup__9ApcShadow_0x16be10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobSetup__9ApcShadow_0x16be10");
#endif

    ctx->pc = 0x16be10u;

    // 0x16be10: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x16be10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x16be14: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16be14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x16be18: 0x24631220  addiu       $v1, $v1, 0x1220
    ctx->pc = 0x16be18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4640));
    // 0x16be1c: 0x2442b420  addiu       $v0, $v0, -0x4BE0
    ctx->pc = 0x16be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947872));
    // 0x16be20: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x16be20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411234u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411234u, _value); } while (0);
    // 0x16be24: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16be24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16be28: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x16be28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411220u, _value); } while (0);
    // 0x16be2c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x16be2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411224u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411224u, _value); } while (0);
    // 0x16be30: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x16be30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411228u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411228u, _value); } while (0);
    // 0x16be34: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x16be34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x41122Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41122Cu, _value); } while (0);
    // 0x16be38: 0x3e00008  jr          $ra
    ctx->pc = 0x16BE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BE38u;
        // 0x16be3c: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BE38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BE40u;
}
