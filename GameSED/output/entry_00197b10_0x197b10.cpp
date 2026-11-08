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

// Function: entry_00197b10
// Address: 0x197b10 - 0x197b40
void entry_00197b10_0x197b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197b10_0x197b10");
#endif

    switch (ctx->pc) {
        case 0x197b18u: goto label_197b18;
        case 0x197b38u: goto label_197b38;
        default: break;
    }

    ctx->pc = 0x197b10u;

    // 0x197b10: 0xc068086  jal         func_1A0218
    ctx->pc = 0x197B10u;
    SET_GPR_U32(ctx, 31, 0x197B18u);
    ctx->pc = 0x197B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B10u;
    // 0x197b14: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x197B10u, 0x197B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B18u;
label_197b18:
    // 0x197b18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b1c: 0x54a00008  bnel        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x197B1Cu;
    {
        const bool branch_taken_0x197b1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x197b1c) {
            ctx->pc = 0x197B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197B1Cu;
            // 0x197b20: 0xaca003f0  sw          $zero, 0x3F0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 1008), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197B40u;
            return;
        }
    }
    ctx->pc = 0x197B24u;
    // 0x197b24: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x197b24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
    // 0x197b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b2c: 0x24a583b8  addiu       $a1, $a1, -0x7C48
    ctx->pc = 0x197b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935480));
    // 0x197b30: 0xc068186  jal         func_1A0618
    ctx->pc = 0x197B30u;
    SET_GPR_U32(ctx, 31, 0x197B38u);
    ctx->pc = 0x197B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B30u;
    // 0x197b34: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x197B30u, 0x197B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B38u;
label_197b38:
    // 0x197b38: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x197B38u;
    {
        const bool branch_taken_0x197b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B38u;
        // 0x197b3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b38) {
            ctx->pc = 0x197B98u;
            return;
        }
    }
    ctx->pc = 0x197B40u;
}
