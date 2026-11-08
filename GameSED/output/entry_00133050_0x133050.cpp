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

// Function: entry_00133050
// Address: 0x133050 - 0x133070
void entry_00133050_0x133050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133050_0x133050");
#endif

    switch (ctx->pc) {
        case 0x133058u: goto label_133058;
        default: break;
    }

    ctx->pc = 0x133050u;

    // 0x133050: 0xc068086  jal         func_1A0218
    ctx->pc = 0x133050u;
    SET_GPR_U32(ctx, 31, 0x133058u);
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x133050u, 0x133058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133058u;
label_133058:
    // 0x133058: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x133058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x13305c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x13305cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x133060: 0x18600054  blez        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x133060u;
    {
        const bool branch_taken_0x133060 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x133064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133060u;
        // 0x133064: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133060) {
            ctx->pc = 0x1331B4u;
            return;
        }
    }
    ctx->pc = 0x133068u;
    // 0x133068: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x133068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13306c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13306cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x133070u;
}
