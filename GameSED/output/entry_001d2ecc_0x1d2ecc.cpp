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

// Function: entry_001d2ecc
// Address: 0x1d2ecc - 0x1d2ef0
void entry_001d2ecc_0x1d2ecc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2ecc_0x1d2ecc");
#endif

    switch (ctx->pc) {
        case 0x1d2ed4u: goto label_1d2ed4;
        default: break;
    }

    ctx->pc = 0x1d2eccu;

    // 0x1d2ecc: 0xc075704  jal         func_1D5C10
    ctx->pc = 0x1D2ECCu;
    SET_GPR_U32(ctx, 31, 0x1D2ED4u);
    ctx->pc = 0x1D2ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2ECCu;
    // 0x1d2ed0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C10u, 0x1D2ECCu, 0x1D2ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2ED4u;
label_1d2ed4:
    // 0x1d2ed4: 0x4400030  bltz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D2ED4u;
    {
        const bool branch_taken_0x1d2ed4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2ED4u;
        // 0x1d2ed8: 0x2c0582d  daddu       $t3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ed4) {
            ctx->pc = 0x1D2F98u;
            return;
        }
    }
    ctx->pc = 0x1D2EDCu;
    // 0x1d2edc: 0x26b20001  addiu       $s2, $s5, 0x1
    ctx->pc = 0x1d2edcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1d2ee0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1d2ee0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ee4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d2ee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ee8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1d2ee8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2eec: 0x0  nop
    ctx->pc = 0x1d2eecu;
    // NOP
    ctx->pc = 0x1d2ef0u;
}
