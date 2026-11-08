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

// Function: entry_00162f4c
// Address: 0x162f4c - 0x162f80
void entry_00162f4c_0x162f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162f4c_0x162f4c");
#endif

    switch (ctx->pc) {
        case 0x162f54u: goto label_162f54;
        case 0x162f74u: goto label_162f74;
        default: break;
    }

    ctx->pc = 0x162f4cu;

    // 0x162f4c: 0xc068086  jal         func_1A0218
    ctx->pc = 0x162F4Cu;
    SET_GPR_U32(ctx, 31, 0x162F54u);
    ctx->pc = 0x162F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F4Cu;
    // 0x162f50: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x162F4Cu, 0x162F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F54u;
label_162f54:
    // 0x162f54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x162f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f58: 0x54a00009  bnel        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x162F58u;
    {
        const bool branch_taken_0x162f58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x162f58) {
            ctx->pc = 0x162F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162F58u;
            // 0x162f5c: 0xaca003f0  sw          $zero, 0x3F0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162F80u;
            return;
        }
    }
    ctx->pc = 0x162F60u;
    // 0x162f60: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x162f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x162f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x162f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162f68: 0x24a56f08  addiu       $a1, $a1, 0x6F08
    ctx->pc = 0x162f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28424));
    // 0x162f6c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x162F6Cu;
    SET_GPR_U32(ctx, 31, 0x162F74u);
    ctx->pc = 0x162F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162F6Cu;
    // 0x162f70: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x162F6Cu, 0x162F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162F74u;
label_162f74:
    // 0x162f74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x162F74u;
    {
        const bool branch_taken_0x162f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162F74u;
        // 0x162f78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162f74) {
            ctx->pc = 0x162FD8u;
            return;
        }
    }
    ctx->pc = 0x162F7Cu;
    // 0x162f7c: 0x0  nop
    ctx->pc = 0x162f7cu;
    // NOP
    ctx->pc = 0x162f80u;
}
