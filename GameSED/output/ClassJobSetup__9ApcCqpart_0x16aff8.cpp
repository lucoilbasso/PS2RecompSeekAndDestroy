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

// Function: ClassJobSetup__9ApcCqpart
// Address: 0x16aff8 - 0x16b028
void ClassJobSetup__9ApcCqpart_0x16aff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClassJobSetup__9ApcCqpart_0x16aff8");
#endif

    ctx->pc = 0x16aff8u;

    // 0x16aff8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x16aff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x16affc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16affcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x16b000: 0x24631208  addiu       $v1, $v1, 0x1208
    ctx->pc = 0x16b000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4616));
    // 0x16b004: 0x244297d8  addiu       $v0, $v0, -0x6828
    ctx->pc = 0x16b004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940632));
    // 0x16b008: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x16b008u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x41121Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41121Cu, _value); } while (0);
    // 0x16b00c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16b00cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b010: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x16b010u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411208u, _value); } while (0);
    // 0x16b014: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x16b014u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x41120Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x41120Cu, _value); } while (0);
    // 0x16b018: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x16b018u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411210u, _value); } while (0);
    // 0x16b01c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x16b01cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411214u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411214u, _value); } while (0);
    // 0x16b020: 0x3e00008  jr          $ra
    ctx->pc = 0x16B020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B020u;
        // 0x16b024: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B028u;
}
