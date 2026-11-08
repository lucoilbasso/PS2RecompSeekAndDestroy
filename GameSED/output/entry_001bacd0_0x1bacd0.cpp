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

// Function: entry_001bacd0
// Address: 0x1bacd0 - 0x1bacfc
void entry_001bacd0_0x1bacd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bacd0_0x1bacd0");
#endif

    switch (ctx->pc) {
        case 0x1bacd8u: goto label_1bacd8;
        default: break;
    }

    ctx->pc = 0x1bacd0u;

    // 0x1bacd0: 0xc06e836  jal         func_1BA0D8
    ctx->pc = 0x1BACD0u;
    SET_GPR_U32(ctx, 31, 0x1BACD8u);
    ctx->pc = 0x1BA0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA0D8u, 0x1BACD0u, 0x1BACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BACD8u;
label_1bacd8:
    // 0x1bacd8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1bacd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bacdc: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bacdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bace0: 0xac44c0a8  sw          $a0, -0x3F58($v0)
    ctx->pc = 0x1bace0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x24C0A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0A8u, _value); } while (0);
    // 0x1bace4: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1bace4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1bace8: 0xac64c0ac  sw          $a0, -0x3F54($v1)
    ctx->pc = 0x1bace8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x24C0ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0ACu, _value); } while (0);
    // 0x1bacec: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1bacecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1bacf0: 0xac44c0a0  sw          $a0, -0x3F60($v0)
    ctx->pc = 0x1bacf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x24C0A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x24C0A0u, _value); } while (0);
    // 0x1bacf4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1BACF4u;
    {
        const bool branch_taken_0x1bacf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BACF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BACF4u;
        // 0x1bacf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bacf4) {
            ctx->pc = 0x1BAD10u;
            return;
        }
    }
    ctx->pc = 0x1BACFCu;
}
